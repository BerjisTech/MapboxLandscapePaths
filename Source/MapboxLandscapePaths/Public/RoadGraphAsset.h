#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RoadGraphAsset.generated.h"

UENUM(BlueprintType)
enum class ERoadClass : uint8
{
	Motorway,
	Trunk,
	Primary,
	Secondary,
	Tertiary,
	Residential,
	Service,
	Pedestrian,
	Track,
	Other,
};

USTRUCT(BlueprintType)
struct FRoadGraphNode
{
	GENERATED_BODY()

	// Canonical lat/lng — graph is anchored in geography, not Unreal world units.
	UPROPERTY(VisibleAnywhere, Category = "Node")
	double Latitude = 0.0;

	UPROPERTY(VisibleAnywhere, Category = "Node")
	double Longitude = 0.0;

	// Indices into RoadGraphAsset::Edges that touch this node.
	UPROPERTY(VisibleAnywhere, Category = "Node")
	TArray<int32> EdgeIndices;
};

USTRUCT(BlueprintType)
struct FRoadGraphEdge
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "Edge")
	int32 NodeA = INDEX_NONE;

	UPROPERTY(VisibleAnywhere, Category = "Edge")
	int32 NodeB = INDEX_NONE;

	UPROPERTY(VisibleAnywhere, Category = "Edge")
	ERoadClass Class = ERoadClass::Residential;

	UPROPERTY(VisibleAnywhere, Category = "Edge")
	bool bOneWay = false;

	// True direction = A->B; if bOneWay, only that direction is traversable.
	UPROPERTY(VisibleAnywhere, Category = "Edge")
	float LengthMeters = 0.f;

	// Optional: shape points between A and B that aren't intersections (decorative geometry).
	// Stored as lat/lng pairs interleaved (lat,lng,lat,lng,...).
	UPROPERTY(VisibleAnywhere, Category = "Edge")
	TArray<double> ShapeLatLng;
};

UCLASS(BlueprintType)
class MAPBOXLANDSCAPEPATHS_API URoadGraphAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = "Bounds")
	double BoundsNorth = 0.0;

	UPROPERTY(VisibleAnywhere, Category = "Bounds")
	double BoundsSouth = 0.0;

	UPROPERTY(VisibleAnywhere, Category = "Bounds")
	double BoundsEast = 0.0;

	UPROPERTY(VisibleAnywhere, Category = "Bounds")
	double BoundsWest = 0.0;

	UPROPERTY(VisibleAnywhere, Category = "Bake Info")
	int32 BakeZoom = 14;

	UPROPERTY(VisibleAnywhere, Category = "Bake Info")
	FString SourceTileset = TEXT("mapbox.mapbox-streets-v8");

	UPROPERTY(VisibleAnywhere, Category = "Graph")
	TArray<FRoadGraphNode> Nodes;

	UPROPERTY(VisibleAnywhere, Category = "Graph")
	TArray<FRoadGraphEdge> Edges;

	// Quick lookup buckets for nearest-node queries. Keyed by floor(lat*BucketScale)+floor(lng*BucketScale)*offset.
	// Populated by BuildSpatialIndex; not serialized — we rebuild on PostLoad.
	UPROPERTY(Transient)
	TArray<int32> SpatialBucketStart;

	UPROPERTY(Transient)
	TArray<int32> SpatialBucketNodes;

	UPROPERTY(VisibleAnywhere, Category = "Bounds")
	float SpatialBucketDegrees = 0.005f; // ~500m at the equator

	virtual void PostLoad() override;

	void BuildSpatialIndex();

	// Returns INDEX_NONE if no node within MaxDistanceMeters.
	int32 FindNearestNode(double Lat, double Lng, double MaxDistanceMeters = 100.0) const;

	static float GetClassCostMultiplier(ERoadClass C);
};
