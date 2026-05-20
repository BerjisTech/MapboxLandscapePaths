#include "MissionPathActor.h"

#include "MissionPathLibrary.h"
#include "RoadGraphAsset.h"
#include "PathDefinition.h"
#include "MapboxLandscapeActor.h"

#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Engine/World.h"
#include "EngineUtils.h"

#if WITH_EDITOR
#include "AssetRegistry/AssetRegistryModule.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Misc/PackageName.h"
#include "UObject/Package.h"
#include "UObject/SavePackage.h"
#include "Widgets/Notifications/SNotificationList.h"
#endif

DEFINE_LOG_CATEGORY_STATIC(LogMapboxPathActor, Log, All);

AMissionPathActor::AMissionPathActor()
{
	PrimaryActorTick.bCanEverTick = false;
	bIsEditorOnlyActor = false;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	StartHandle = CreateDefaultSubobject<USceneComponent>(TEXT("StartHandle"));
	StartHandle->SetupAttachment(SceneRoot);
	StartHandle->SetRelativeLocation(FVector(-50000.f, 0.f, 0.f));

	EndHandle = CreateDefaultSubobject<USceneComponent>(TEXT("EndHandle"));
	EndHandle->SetupAttachment(SceneRoot);
	EndHandle->SetRelativeLocation(FVector(50000.f, 0.f, 0.f));

	ResultSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ResultSpline"));
	ResultSpline->SetupAttachment(SceneRoot);
	ResultSpline->ClearSplinePoints(false);
	ResultSpline->SetClosedLoop(false);
	ResultSpline->bDrawDebug = true;
}

AMapboxLandscapeActor* AMissionPathActor::FindMapboxLandscape() const
{
	if (!GetWorld()) return nullptr;
	for (TActorIterator<AMapboxLandscapeActor> It(GetWorld()); It; ++It) return *It;
	return nullptr;
}

void AMissionPathActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	if (bAttachToMapboxLandscape && GetAttachParentActor() == nullptr)
	{
		AlignToMapboxLandscape();
	}
}

#if WITH_EDITOR
void AMissionPathActor::PostEditChangeProperty(FPropertyChangedEvent& E)
{
	Super::PostEditChangeProperty(E);
	if (E.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AMissionPathActor, bAttachToMapboxLandscape))
	{
		if (bAttachToMapboxLandscape) AlignToMapboxLandscape();
		else DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	}
}
#endif

void AMissionPathActor::AlignToMapboxLandscape()
{
	AMapboxLandscapeActor* Mapbox = FindMapboxLandscape();
	if (!Mapbox)
	{
#if WITH_EDITOR
		FNotificationInfo Info(FText::FromString(TEXT("No MapboxLandscape actor in this level. Place one and configure its coordinates first.")));
		Info.ExpireDuration = 6.f;
		Info.bUseLargeFont = false;
		TSharedPtr<SNotificationItem> Item = FSlateNotificationManager::Get().AddNotification(Info);
		if (Item.IsValid()) Item->SetCompletionState(SNotificationItem::CS_Fail);
#endif
		return;
	}

	AttachToActor(Mapbox, FAttachmentTransformRules::KeepWorldTransform);

#if WITH_EDITOR
	FNotificationInfo Info(FText::FromString(FString::Printf(TEXT("Attached to %s. The path will follow if you move the landscape."), *Mapbox->GetActorLabel())));
	Info.ExpireDuration = 4.f;
	Info.bUseLargeFont = false;
	FSlateNotificationManager::Get().AddNotification(Info);
#endif
}

void AMissionPathActor::RebuildSplineFromPoints(const TArray<FVector>& Points)
{
	if (!ResultSpline) return;
	ResultSpline->ClearSplinePoints(false);
	for (const FVector& P : Points)
	{
		ResultSpline->AddSplineWorldPoint(P);
	}
	for (int32 i = 0; i < ResultSpline->GetNumberOfSplinePoints(); ++i)
	{
		ResultSpline->SetSplinePointType(i, ESplinePointType::Linear, false);
	}
	ResultSpline->UpdateSpline();
}

void AMissionPathActor::ClearResult()
{
	if (ResultSpline) { ResultSpline->ClearSplinePoints(true); }
	LastResultPointCount = 0;
	LastResultLengthMeters = 0.f;
}

void AMissionPathActor::ComputePath()
{
	URoadGraphAsset* GraphAsset = Graph.LoadSynchronous();
	if (!GraphAsset || GraphAsset->Nodes.IsEmpty())
	{
#if WITH_EDITOR
		FNotificationInfo Info(FText::FromString(TEXT("Mapbox Paths: no Road Graph assigned, or it's empty. Bake one via the MissionPathLibrary first.")));
		Info.ExpireDuration = 8.f;
		TSharedPtr<SNotificationItem> Item = FSlateNotificationManager::Get().AddNotification(Info);
		if (Item.IsValid()) Item->SetCompletionState(SNotificationItem::CS_Fail);
#endif
		return;
	}
	if (!StartHandle || !EndHandle) return;

	TArray<FVector> Stops;
	Stops.Add(StartHandle->GetComponentLocation());
	for (const FVector& P : IntermediateWaypoints) Stops.Add(P);
	Stops.Add(EndHandle->GetComponentLocation());

	TArray<FVector> Polyline;
	for (int32 i = 0; i + 1 < Stops.Num(); ++i)
	{
		TArray<FVector> Segment = UMissionPathLibrary::FindPath(this, GraphAsset, Stops[i], Stops[i + 1],
			SnapDistanceMeters, bSnapResultToGround);
		if (Segment.IsEmpty())
		{
			UE_LOG(LogMapboxPathActor, Warning, TEXT("Segment %d->%d failed to route. Path will be incomplete."), i, i + 1);
			continue;
		}
		if (!Polyline.IsEmpty() && !Segment.IsEmpty() && FVector::DistSquared(Polyline.Last(), Segment[0]) < 1.f)
		{
			Polyline.Append(Segment.GetData() + 1, Segment.Num() - 1);
		}
		else
		{
			Polyline.Append(Segment);
		}
	}

	if (Polyline.IsEmpty())
	{
#if WITH_EDITOR
		FNotificationInfo Info(FText::FromString(TEXT("Mapbox Paths: routing failed. Check that Start/End are within Snap Distance of a road, and the graph covers this area.")));
		Info.ExpireDuration = 8.f;
		TSharedPtr<SNotificationItem> Item = FSlateNotificationManager::Get().AddNotification(Info);
		if (Item.IsValid()) Item->SetCompletionState(SNotificationItem::CS_Fail);
#endif
		return;
	}

	RebuildSplineFromPoints(Polyline);

	float Len = 0.f;
	for (int32 i = 1; i < Polyline.Num(); ++i) Len += FVector::Dist(Polyline[i - 1], Polyline[i]);
	LastResultPointCount = Polyline.Num();
	LastResultLengthMeters = Len * 0.01f;

#if WITH_EDITOR
	// Bake to PathDefinition asset if assigned.
	UPathDefinition* OutDef = OutputAsset.LoadSynchronous();
	if (OutDef)
	{
		const FMapboxLandscapeContext Ctx = UMissionPathLibrary::GetActiveMapboxContext(this);
		if (Ctx.bValid)
		{
			OutDef->Points.Reset();
			for (const FVector& P : Polyline)
			{
				FPathPoint PP;
				UMissionPathLibrary::WorldToLatLng(Ctx, P, PP.Latitude, PP.Longitude);
				PP.ZOffsetCm = 50.f;
				OutDef->Points.Add(PP);
			}
			OutDef->Source = EPathSource::RoadGraph;
			OutDef->MarkPackageDirty();

			if (UPackage* Pkg = OutDef->GetOutermost())
			{
				const FString Filename = FPackageName::LongPackageNameToFilename(Pkg->GetName(), FPackageName::GetAssetPackageExtension());
				FSavePackageArgs SaveArgs;
				SaveArgs.TopLevelFlags = RF_Public | RF_Standalone;
				UPackage::SavePackage(Pkg, OutDef, *Filename, SaveArgs);
			}
		}
	}

	FNotificationInfo Info(FText::FromString(FString::Printf(TEXT("Mapbox Paths: computed %d points, %.1f km"),
		Polyline.Num(), LastResultLengthMeters * 0.001f)));
	Info.ExpireDuration = 4.f;
	TSharedPtr<SNotificationItem> Item = FSlateNotificationManager::Get().AddNotification(Info);
	if (Item.IsValid()) Item->SetCompletionState(SNotificationItem::CS_Success);
#endif
}
