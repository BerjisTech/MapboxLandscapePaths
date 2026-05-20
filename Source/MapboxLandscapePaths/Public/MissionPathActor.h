#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MissionPathActor.generated.h"

class USceneComponent;
class USplineComponent;
class URoadGraphAsset;
class UPathDefinition;

UCLASS()
class MAPBOXLANDSCAPEPATHS_API AMissionPathActor : public AActor
{
	GENERATED_BODY()

public:
	AMissionPathActor();

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<USceneComponent> SceneRoot;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<USceneComponent> StartHandle;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<USceneComponent> EndHandle;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<USplineComponent> ResultSpline;

	UPROPERTY(EditAnywhere, Category = "Path|Source", meta = (ToolTip = "Baked road graph. Required when Source = RoadGraph."))
	TSoftObjectPtr<URoadGraphAsset> Graph;

	UPROPERTY(EditAnywhere, Category = "Path|Source", meta = (ToolTip = "Optional intermediate waypoints (world positions). A* will route through these in order."))
	TArray<FVector> IntermediateWaypoints;

	UPROPERTY(EditAnywhere, Category = "Path|Source")
	float SnapDistanceMeters = 200.f;

	UPROPERTY(EditAnywhere, Category = "Path|Source")
	bool bSnapResultToGround = true;

	UPROPERTY(EditAnywhere, Category = "Path|Output", meta = (ToolTip = "If set, Compute writes the resulting polyline into this asset. Create with right-click > Miscellaneous > Data Asset > PathDefinition."))
	TSoftObjectPtr<UPathDefinition> OutputAsset;

	UPROPERTY(VisibleAnywhere, Category = "Path|Result")
	int32 LastResultPointCount = 0;

	UPROPERTY(VisibleAnywhere, Category = "Path|Result")
	float LastResultLengthMeters = 0.f;

	UFUNCTION(CallInEditor, Category = "Path|Actions", meta = (ToolTip = "Run A* on the baked road graph between Start handle and End handle (through IntermediateWaypoints if any). Result is shown as a spline and optionally saved to OutputAsset."))
	void ComputePath();

	UFUNCTION(CallInEditor, Category = "Path|Actions")
	void ClearResult();

private:
	void RebuildSplineFromPoints(const TArray<FVector>& Points);
};
