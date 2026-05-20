#include "RoadGraphAsset.h"

void URoadGraphAsset::PostLoad()
{
	Super::PostLoad();
	BuildSpatialIndex();
}

void URoadGraphAsset::BuildSpatialIndex()
{
	SpatialBucketStart.Reset();
	SpatialBucketNodes.Reset();
	if (Nodes.IsEmpty()) return;

	const double Width = FMath::Max(1e-6, BoundsEast - BoundsWest);
	const double Height = FMath::Max(1e-6, BoundsNorth - BoundsSouth);
	const int32 GridX = FMath::Max(1, FMath::CeilToInt(Width / SpatialBucketDegrees));
	const int32 GridY = FMath::Max(1, FMath::CeilToInt(Height / SpatialBucketDegrees));
	const int32 CellCount = GridX * GridY;

	TArray<TArray<int32>> Buckets;
	Buckets.SetNum(CellCount);

	auto BucketIndex = [&](double Lat, double Lng) -> int32
	{
		const int32 Cx = FMath::Clamp((int32)FMath::FloorToDouble((Lng - BoundsWest) / SpatialBucketDegrees), 0, GridX - 1);
		const int32 Cy = FMath::Clamp((int32)FMath::FloorToDouble((Lat - BoundsSouth) / SpatialBucketDegrees), 0, GridY - 1);
		return Cy * GridX + Cx;
	};

	for (int32 i = 0; i < Nodes.Num(); ++i)
	{
		Buckets[BucketIndex(Nodes[i].Latitude, Nodes[i].Longitude)].Add(i);
	}

	SpatialBucketStart.SetNumUninitialized(CellCount + 1);
	int32 Running = 0;
	for (int32 i = 0; i < CellCount; ++i)
	{
		SpatialBucketStart[i] = Running;
		Running += Buckets[i].Num();
	}
	SpatialBucketStart[CellCount] = Running;

	SpatialBucketNodes.Reset(Running);
	for (int32 i = 0; i < CellCount; ++i)
	{
		SpatialBucketNodes.Append(Buckets[i]);
	}
}

static double HaversineMeters(double Lat1, double Lng1, double Lat2, double Lng2)
{
	const double R = 6371000.0;
	const double RLat1 = FMath::DegreesToRadians(Lat1);
	const double RLat2 = FMath::DegreesToRadians(Lat2);
	const double DLat = FMath::DegreesToRadians(Lat2 - Lat1);
	const double DLng = FMath::DegreesToRadians(Lng2 - Lng1);
	const double A = FMath::Sin(DLat * 0.5) * FMath::Sin(DLat * 0.5) +
		FMath::Cos(RLat1) * FMath::Cos(RLat2) * FMath::Sin(DLng * 0.5) * FMath::Sin(DLng * 0.5);
	const double C = 2.0 * FMath::Atan2(FMath::Sqrt(A), FMath::Sqrt(1.0 - A));
	return R * C;
}

int32 URoadGraphAsset::FindNearestNode(double Lat, double Lng, double MaxDistanceMeters) const
{
	if (Nodes.IsEmpty()) return INDEX_NONE;

	if (SpatialBucketStart.Num() == 0)
	{
		// Index not built — fall back to linear scan.
		int32 BestIdx = INDEX_NONE;
		double BestDist = MaxDistanceMeters;
		for (int32 i = 0; i < Nodes.Num(); ++i)
		{
			const double D = HaversineMeters(Lat, Lng, Nodes[i].Latitude, Nodes[i].Longitude);
			if (D < BestDist) { BestDist = D; BestIdx = i; }
		}
		return BestIdx;
	}

	const double Width = FMath::Max(1e-6, BoundsEast - BoundsWest);
	const double Height = FMath::Max(1e-6, BoundsNorth - BoundsSouth);
	const int32 GridX = FMath::Max(1, FMath::CeilToInt(Width / SpatialBucketDegrees));
	const int32 GridY = FMath::Max(1, FMath::CeilToInt(Height / SpatialBucketDegrees));

	const int32 Cx = FMath::Clamp((int32)FMath::FloorToDouble((Lng - BoundsWest) / SpatialBucketDegrees), 0, GridX - 1);
	const int32 Cy = FMath::Clamp((int32)FMath::FloorToDouble((Lat - BoundsSouth) / SpatialBucketDegrees), 0, GridY - 1);

	int32 BestIdx = INDEX_NONE;
	double BestDist = MaxDistanceMeters;

	// Spiral outward through buckets until we've covered enough ring radius to exceed MaxDistanceMeters.
	const double MetersPerDegLat = 111320.0;
	const double MaxRings = FMath::CeilToDouble(MaxDistanceMeters / (MetersPerDegLat * SpatialBucketDegrees)) + 1.0;

	for (int32 Ring = 0; Ring <= (int32)MaxRings; ++Ring)
	{
		bool bAnyInRange = false;
		for (int32 dy = -Ring; dy <= Ring; ++dy)
		for (int32 dx = -Ring; dx <= Ring; ++dx)
		{
			// Only outer ring on rings > 0.
			if (Ring > 0 && FMath::Abs(dx) != Ring && FMath::Abs(dy) != Ring) continue;
			const int32 X = Cx + dx;
			const int32 Y = Cy + dy;
			if (X < 0 || X >= GridX || Y < 0 || Y >= GridY) continue;
			const int32 Cell = Y * GridX + X;
			const int32 Start = SpatialBucketStart[Cell];
			const int32 End = SpatialBucketStart[Cell + 1];
			for (int32 i = Start; i < End; ++i)
			{
				const int32 N = SpatialBucketNodes[i];
				const double D = HaversineMeters(Lat, Lng, Nodes[N].Latitude, Nodes[N].Longitude);
				if (D < BestDist) { BestDist = D; BestIdx = N; bAnyInRange = true; }
			}
		}
		if (BestIdx != INDEX_NONE && !bAnyInRange) break; // No new candidates in this ring — done.
	}
	return BestIdx;
}

float URoadGraphAsset::GetClassCostMultiplier(ERoadClass C)
{
	// Lower = preferred. Reward fast roads, penalize service/track/pedestrian.
	switch (C)
	{
	case ERoadClass::Motorway:    return 0.7f;
	case ERoadClass::Trunk:       return 0.8f;
	case ERoadClass::Primary:     return 0.9f;
	case ERoadClass::Secondary:   return 1.0f;
	case ERoadClass::Tertiary:    return 1.1f;
	case ERoadClass::Residential: return 1.3f;
	case ERoadClass::Service:     return 1.8f;
	case ERoadClass::Pedestrian:  return 3.0f;
	case ERoadClass::Track:       return 2.5f;
	default:                      return 1.5f;
	}
}
