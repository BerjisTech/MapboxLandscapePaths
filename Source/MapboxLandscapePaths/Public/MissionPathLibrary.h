#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MissionPathLibrary.generated.h"

class AMapboxLandscapeActor;
class URoadGraphAsset;
class UPathDefinition;

USTRUCT(BlueprintType)
struct MAPBOXLANDSCAPEPATHS_API FMapboxLandscapeContext
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	bool bValid = false;

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	TWeakObjectPtr<AMapboxLandscapeActor> MapboxActor;

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	double North = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	double South = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	double East = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	double West = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	int32 ResolvedZoom = 14;

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	int32 MinTileX = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	int32 MinTileY = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	int32 MaxTileX = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	int32 MaxTileY = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	double TotalWorldXCm = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	double TotalWorldYCm = 0.0;

	UPROPERTY(BlueprintReadOnly, Category = "Context")
	FVector AnchorWorld = FVector::ZeroVector;
};

UCLASS()
class MAPBOXLANDSCAPEPATHS_API UMissionPathLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Finds the first AMapboxLandscapeActor in the world and snapshots its current coordinate setup.
	// Use this every time you need to map lat/lng <-> world, so paths track the actor if you move it.
	UFUNCTION(BlueprintCallable, Category = "Mapbox|Paths", meta = (WorldContext = "WorldContextObject"))
	static FMapboxLandscapeContext GetActiveMapboxContext(const UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category = "Mapbox|Paths")
	static FVector LatLngToWorld(const FMapboxLandscapeContext& Ctx, double Latitude, double Longitude, float ZOffsetCm = 0.f);

	UFUNCTION(BlueprintPure, Category = "Mapbox|Paths")
	static void WorldToLatLng(const FMapboxLandscapeContext& Ctx, FVector WorldPosition, double& OutLatitude, double& OutLongitude);

	// Line-traces the active world to find ground at (WorldX, WorldY); returns input Z if no hit.
	UFUNCTION(BlueprintCallable, Category = "Mapbox|Paths", meta = (WorldContext = "WorldContextObject"))
	static FVector SnapToLandscapeHeight(const UObject* WorldContextObject, FVector WorldPosition, float HeightAboveGround = 50.f);

	// Resolves a UPathDefinition's lat/lng points to current world positions through the active context.
	UFUNCTION(BlueprintCallable, Category = "Mapbox|Paths", meta = (WorldContext = "WorldContextObject"))
	static TArray<FVector> ResolvePathPoints(const UObject* WorldContextObject, UPathDefinition* PathDef, bool bSnapToGround = true);

	// Edge cost-weighted A*. Returns world positions including intermediate shape points.
	// Empty array on failure (no nodes within snap distance, or no route).
	UFUNCTION(BlueprintCallable, Category = "Mapbox|Paths", meta = (WorldContext = "WorldContextObject"))
	static TArray<FVector> FindPath(const UObject* WorldContextObject,
	                                 URoadGraphAsset* Graph,
	                                 FVector StartWorld,
	                                 FVector EndWorld,
	                                 float SnapDistanceMeters = 200.f,
	                                 bool bSnapToGround = true);

	// Editor-only: fetches Mapbox vector tiles spanning the active MapboxLandscape bbox,
	// parses out road LineStrings, builds nodes+edges, saves a URoadGraphAsset.
	// Async: returns immediately; you'll get a toast notification on completion.
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Mapbox|Paths", meta = (WorldContext = "WorldContextObject"))
	static void BakeRoadGraphFromActiveContext(const UObject* WorldContextObject,
	                                            FString AssetPackagePath = TEXT("/Game/MapboxLandscapePaths"),
	                                            FString AssetName = TEXT("RG_Roads"),
	                                            int32 ZoomOverride = -1);
};
