#include "MissionPathLibrary.h"

#include "RoadGraphAsset.h"
#include "PathDefinition.h"
#include "MapboxLandscapeActor.h"
#include "MapboxLandscapeSettings.h"

#include "Engine/Engine.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Math/UnrealMathUtility.h"

#if WITH_EDITOR
#include "AssetRegistry/AssetRegistryModule.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Misc/MessageDialog.h"
#include "Misc/PackageName.h"
#include "UObject/Package.h"
#include "UObject/SavePackage.h"
#include "Widgets/Notifications/SNotificationList.h"
#endif

DEFINE_LOG_CATEGORY_STATIC(LogMapboxPaths, Log, All);

// ----------------------------------------------------------------------------
// Slippy-map / Mercator helpers (kept consistent with MapboxLandscape)
// ----------------------------------------------------------------------------
namespace
{
	static double LonToPixelX(double Lng, int32 Z)
	{
		return (Lng + 180.0) / 360.0 * FMath::Pow(2.0, (double)Z) * 256.0;
	}

	static double LatToPixelY(double Lat, int32 Z)
	{
		const double R = FMath::DegreesToRadians(Lat);
		return (1.0 - FMath::Loge(FMath::Tan(R) + 1.0 / FMath::Cos(R)) / PI) / 2.0
			* FMath::Pow(2.0, (double)Z) * 256.0;
	}

	static double PixelXToLon(double PixelX, int32 Z)
	{
		return PixelX / (FMath::Pow(2.0, (double)Z) * 256.0) * 360.0 - 180.0;
	}

	static double PixelYToLat(double PixelY, int32 Z)
	{
		const double N = PI - 2.0 * PI * PixelY / (FMath::Pow(2.0, (double)Z) * 256.0);
		return FMath::RadiansToDegrees(FMath::Atan(FMath::Sinh(N)));
	}

	static int32 LonToTileX(double Lng, int32 Z)
	{
		return (int32)FMath::Floor(LonToPixelX(Lng, Z) / 256.0);
	}

	static int32 LatToTileY(double Lat, int32 Z)
	{
		return (int32)FMath::Floor(LatToPixelY(Lat, Z) / 256.0);
	}

	static double MetersPerTileSide(double Lat, int32 Z)
	{
		const double EarthCirc = 40075016.686;
		return EarthCirc * FMath::Cos(FMath::DegreesToRadians(Lat)) / FMath::Pow(2.0, (double)Z);
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

	// Mirror of AMapboxLandscapeActor::ResolveBoundingBox + PickAutoZoom + tile enumeration.
	static bool ResolveBBoxAndTiles(const AMapboxLandscapeActor* Actor,
	                                 double& N, double& S, double& E, double& W,
	                                 int32& Z, int32& MinTX, int32& MinTY, int32& MaxTX, int32& MaxTY)
	{
		if (!Actor) return false;

		N = Actor->North; S = Actor->South; E = Actor->East; W = Actor->West;

		if (Actor->CoordinateMode == ECoordinateMode::CenterRadius)
		{
			const double DLat = Actor->RadiusKm / 111.32;
			const double DLng = Actor->RadiusKm / (111.32 * FMath::Cos(FMath::DegreesToRadians(Actor->CenterLatitude)));
			N = Actor->CenterLatitude + DLat;
			S = Actor->CenterLatitude - DLat;
			E = Actor->CenterLongitude + DLng;
			W = Actor->CenterLongitude - DLng;
		}
		else if (Actor->CoordinateMode == ECoordinateMode::ToolString)
		{
			TArray<FString> Parts;
			FString Clean = Actor->CoordinateString.Replace(TEXT(" "), TEXT(","));
			Clean.ParseIntoArray(Parts, TEXT(","), true);
			TArray<double> Vals;
			for (const FString& P : Parts) { Vals.Add(FCString::Atod(*P.TrimStartAndEnd())); }
			if (Vals.Num() < 4) return false;
			bool bEvenAreLat = true;
			for (int32 i = 0; i < Vals.Num(); i += 2)
				if (FMath::Abs(Vals[i]) > 90.0) { bEvenAreLat = false; break; }
			TArray<double> Lats, Lngs;
			for (int32 i = 0; i < Vals.Num(); ++i)
			{
				if ((i % 2 == 0) == bEvenAreLat) Lats.Add(Vals[i]);
				else Lngs.Add(Vals[i]);
			}
			if (Lats.IsEmpty() || Lngs.IsEmpty()) return false;
			S = N = Lats[0]; W = E = Lngs[0];
			for (double V : Lats) { S = FMath::Min(S, V); N = FMath::Max(N, V); }
			for (double V : Lngs) { W = FMath::Min(W, V); E = FMath::Max(E, V); }
		}

		if (N <= S || E <= W) return false;

		// Auto-zoom mirror (matches AMapboxLandscapeActor::PickAutoZoom).
		const double DegSide = FMath::Max(N - S, (E - W) * FMath::Cos(FMath::DegreesToRadians((N + S) * 0.5)));
		if (Actor->bAutoZoom)
		{
			const double TargetTiles = FMath::Sqrt((double)Actor->MaxLandscapesTotal) * (double)Actor->TilesPerLandscapeSide;
			const double Desired = TargetTiles * 360.0 / FMath::Max(DegSide, 1e-6);
			Z = FMath::Clamp((int32)FMath::FloorToInt(FMath::Loge(Desired) / FMath::Loge(2.0)), 8, 16);
		}
		else
		{
			Z = FMath::Clamp(Actor->ZoomLevel, 8, 18);
		}

		MinTX = LonToTileX(W, Z);
		MaxTX = LonToTileX(E, Z);
		MinTY = LatToTileY(N, Z);
		MaxTY = LatToTileY(S, Z);
		if (MinTX > MaxTX) Swap(MinTX, MaxTX);
		if (MinTY > MaxTY) Swap(MinTY, MaxTY);
		return true;
	}
}

// ----------------------------------------------------------------------------
// Mapbox context
// ----------------------------------------------------------------------------
FMapboxLandscapeContext UMissionPathLibrary::GetActiveMapboxContext(const UObject* WorldContextObject)
{
	FMapboxLandscapeContext Ctx;
	if (!WorldContextObject) return Ctx;
	UWorld* World = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	if (!World) return Ctx;

	AMapboxLandscapeActor* Actor = nullptr;
	for (TActorIterator<AMapboxLandscapeActor> It(World); It; ++It)
	{
		Actor = *It;
		break;
	}
	if (!Actor)
	{
		UE_LOG(LogMapboxPaths, Warning, TEXT("No AMapboxLandscapeActor found in level. Place one and configure its coordinates before baking paths."));
		return Ctx;
	}

	double N, S, E, W; int32 Z, MinTX, MinTY, MaxTX, MaxTY;
	if (!ResolveBBoxAndTiles(Actor, N, S, E, W, Z, MinTX, MinTY, MaxTX, MaxTY))
	{
		UE_LOG(LogMapboxPaths, Warning, TEXT("MapboxLandscape actor has invalid coordinate configuration."));
		return Ctx;
	}

	const double CenterLat = (PixelYToLat(MinTY * 256.0, Z) + PixelYToLat((MaxTY + 1) * 256.0, Z)) * 0.5;
	const double TileSideMeters = MetersPerTileSide(CenterLat, Z);
	const double WorldCmPerSourcePixel = TileSideMeters / 256.0 * 100.0;
	const double TileWorldCm = 256.0 * WorldCmPerSourcePixel;
	const int32 TilesX = MaxTX - MinTX + 1;
	const int32 TilesY = MaxTY - MinTY + 1;

	Ctx.bValid = true;
	Ctx.MapboxActor = Actor;
	Ctx.North = N; Ctx.South = S; Ctx.East = E; Ctx.West = W;
	Ctx.ResolvedZoom = Z;
	Ctx.MinTileX = MinTX; Ctx.MaxTileX = MaxTX;
	Ctx.MinTileY = MinTY; Ctx.MaxTileY = MaxTY;
	Ctx.TotalWorldXCm = TilesX * TileWorldCm;
	Ctx.TotalWorldYCm = TilesY * TileWorldCm;
	Ctx.AnchorWorld = Actor->GetActorLocation();
	return Ctx;
}

// ----------------------------------------------------------------------------
// Lat/Lng <-> World conversion (matches MapboxLandscape's tile-centered placement)
// ----------------------------------------------------------------------------
FVector UMissionPathLibrary::LatLngToWorld(const FMapboxLandscapeContext& Ctx, double Lat, double Lng, float ZOffsetCm)
{
	if (!Ctx.bValid) return FVector(0, 0, ZOffsetCm);

	const double CenterPixelX = (Ctx.MinTileX + Ctx.MaxTileX + 1) * 128.0;
	const double CenterPixelY = (Ctx.MinTileY + Ctx.MaxTileY + 1) * 128.0;
	const double WorldCmPerSourcePixel = Ctx.TotalWorldXCm / ((Ctx.MaxTileX - Ctx.MinTileX + 1) * 256.0);

	const double PxX = LonToPixelX(Lng, Ctx.ResolvedZoom);
	const double PxY = LatToPixelY(Lat, Ctx.ResolvedZoom);
	const double OffsetXcm = (PxX - CenterPixelX) * WorldCmPerSourcePixel;
	const double OffsetYcm = (PxY - CenterPixelY) * WorldCmPerSourcePixel;

	return Ctx.AnchorWorld + FVector(OffsetXcm, OffsetYcm, ZOffsetCm);
}

void UMissionPathLibrary::WorldToLatLng(const FMapboxLandscapeContext& Ctx, FVector WorldPosition, double& OutLatitude, double& OutLongitude)
{
	OutLatitude = 0.0; OutLongitude = 0.0;
	if (!Ctx.bValid) return;

	const double CenterPixelX = (Ctx.MinTileX + Ctx.MaxTileX + 1) * 128.0;
	const double CenterPixelY = (Ctx.MinTileY + Ctx.MaxTileY + 1) * 128.0;
	const double WorldCmPerSourcePixel = Ctx.TotalWorldXCm / ((Ctx.MaxTileX - Ctx.MinTileX + 1) * 256.0);

	const FVector Offset = WorldPosition - Ctx.AnchorWorld;
	const double PxX = CenterPixelX + Offset.X / WorldCmPerSourcePixel;
	const double PxY = CenterPixelY + Offset.Y / WorldCmPerSourcePixel;

	OutLongitude = PixelXToLon(PxX, Ctx.ResolvedZoom);
	OutLatitude = PixelYToLat(PxY, Ctx.ResolvedZoom);
}

// ----------------------------------------------------------------------------
// Snap world point to ground via line trace
// ----------------------------------------------------------------------------
FVector UMissionPathLibrary::SnapToLandscapeHeight(const UObject* WorldContextObject, FVector WorldPosition, float HeightAboveGround)
{
	UWorld* World = WorldContextObject ? WorldContextObject->GetWorld() : nullptr;
	if (!World) return WorldPosition;

	FHitResult Hit;
	const FVector Start(WorldPosition.X, WorldPosition.Y, WorldPosition.Z + 100000.f);
	const FVector End(WorldPosition.X, WorldPosition.Y, WorldPosition.Z - 100000.f);
	FCollisionQueryParams P;
	P.bTraceComplex = true;
	if (World->LineTraceSingleByChannel(Hit, Start, End, ECC_WorldStatic, P))
	{
		return FVector(Hit.ImpactPoint.X, Hit.ImpactPoint.Y, Hit.ImpactPoint.Z + HeightAboveGround);
	}
	return WorldPosition;
}

TArray<FVector> UMissionPathLibrary::ResolvePathPoints(const UObject* WorldContextObject, UPathDefinition* PathDef, bool bSnapToGround)
{
	TArray<FVector> Out;
	if (!PathDef) return Out;
	const FMapboxLandscapeContext Ctx = GetActiveMapboxContext(WorldContextObject);
	if (!Ctx.bValid) return Out;

	Out.Reserve(PathDef->Points.Num());
	for (const FPathPoint& P : PathDef->Points)
	{
		FVector W = LatLngToWorld(Ctx, P.Latitude, P.Longitude, P.ZOffsetCm);
		if (bSnapToGround)
		{
			W = SnapToLandscapeHeight(WorldContextObject, W, P.ZOffsetCm);
		}
		Out.Add(W);
	}
	return Out;
}

// ----------------------------------------------------------------------------
// Minimal MVT protobuf reader. We parse only what we need:
//   Tile.layers -> {name, extent, features, keys, values}
//   Feature -> {tags, type, geometry}
//   Geometry stream -> sequence of LineStrings.
// ----------------------------------------------------------------------------
namespace
{
	struct FPbReader
	{
		const uint8* Data = nullptr;
		const uint8* End = nullptr;

		bool AtEnd() const { return Data >= End; }
		uint64 ReadVarint()
		{
			uint64 Result = 0;
			int32 Shift = 0;
			while (Data < End)
			{
				const uint8 B = *Data++;
				Result |= ((uint64)(B & 0x7F)) << Shift;
				if (!(B & 0x80)) break;
				Shift += 7;
				if (Shift >= 64) break;
			}
			return Result;
		}
		int64 ReadSint() { const uint64 V = ReadVarint(); return (int64)((V >> 1) ^ -(int64)(V & 1)); }
		FString ReadString()
		{
			const uint64 Len = ReadVarint();
			if (Data + Len > End) { Data = End; return FString(); }
			FString S((int32)Len, (const ANSICHAR*)Data);
			Data += Len;
			return S;
		}
		void SkipField(uint32 Tag)
		{
			const uint32 WireType = Tag & 0x7;
			switch (WireType)
			{
			case 0: ReadVarint(); break;
			case 1: Data = FMath::Min(Data + 8, End); break;
			case 2: { const uint64 L = ReadVarint(); Data = FMath::Min(Data + L, End); break; }
			case 5: Data = FMath::Min(Data + 4, End); break;
			default: Data = End; break;
			}
		}
		FPbReader SubReader()
		{
			const uint64 Len = ReadVarint();
			FPbReader Sub;
			Sub.Data = Data;
			Sub.End = FMath::Min(Data + Len, End);
			Data = Sub.End;
			return Sub;
		}
	};

	struct FMvtLineString
	{
		// Tile-local coordinates in [0, extent].
		TArray<FVector2D> Points;
	};

	struct FMvtFeature
	{
		uint32 Type = 0; // 0=unknown, 1=point, 2=linestring, 3=polygon
		TArray<uint32> Tags;
		TArray<FMvtLineString> Lines;
	};

	struct FMvtLayer
	{
		FString Name;
		uint32 Extent = 4096;
		TArray<FString> Keys;
		TArray<FString> ValuesString;
		TArray<int64> ValuesInt;
		TArray<double> ValuesFloat;
		TArray<bool> ValuesBool;
		TArray<uint8> ValueKinds; // 0=string, 1=int, 2=float, 3=bool, 255=other
		TArray<int32> ValueIndices; // index into the corresponding array
		TArray<FMvtFeature> Features;
	};

	// Parse a Value sub-message and append into the layer's value arrays.
	static void ParseValue(FPbReader R, FMvtLayer& L)
	{
		uint8 Kind = 255;
		int32 Idx = -1;
		while (!R.AtEnd())
		{
			const uint32 Tag = (uint32)R.ReadVarint();
			const uint32 Field = Tag >> 3;
			switch (Field)
			{
			case 1: { Idx = L.ValuesString.Add(R.ReadString()); Kind = 0; break; }
			case 2: { const float V = *(const float*)R.Data; R.Data += 4; Idx = L.ValuesFloat.Add((double)V); Kind = 2; break; }
			case 3: { const double V = *(const double*)R.Data; R.Data += 8; Idx = L.ValuesFloat.Add(V); Kind = 2; break; }
			case 4: { Idx = L.ValuesInt.Add((int64)R.ReadVarint()); Kind = 1; break; }
			case 5: { Idx = L.ValuesInt.Add((int64)R.ReadVarint()); Kind = 1; break; }
			case 6: { Idx = L.ValuesInt.Add(R.ReadSint()); Kind = 1; break; }
			case 7: { Idx = L.ValuesBool.Add(R.ReadVarint() != 0); Kind = 3; break; }
			default: R.SkipField(Tag); break;
			}
		}
		L.ValueKinds.Add(Kind);
		L.ValueIndices.Add(Idx);
	}

	static void DecodeGeometry(const TArray<uint32>& G, uint32 GeomType, TArray<FMvtLineString>& OutLines)
	{
		// Cursor in tile-local coords.
		int32 Cx = 0, Cy = 0;
		int32 i = 0;
		FMvtLineString Current;
		while (i < G.Num())
		{
			const uint32 CmdInt = G[i++];
			const uint32 Cmd = CmdInt & 0x7;
			const uint32 Count = CmdInt >> 3;

			if (Cmd == 1) // MoveTo
			{
				if (Current.Points.Num() > 1)
				{
					OutLines.Add(MoveTemp(Current));
					Current = FMvtLineString();
				}
				for (uint32 k = 0; k < Count && (i + 1) < G.Num(); ++k)
				{
					const int32 Dx = (int32)((G[i] >> 1) ^ -(int32)(G[i] & 1)); ++i;
					const int32 Dy = (int32)((G[i] >> 1) ^ -(int32)(G[i] & 1)); ++i;
					Cx += Dx; Cy += Dy;
					Current.Points.Reset();
					Current.Points.Add(FVector2D(Cx, Cy));
				}
			}
			else if (Cmd == 2) // LineTo
			{
				for (uint32 k = 0; k < Count && (i + 1) < G.Num(); ++k)
				{
					const int32 Dx = (int32)((G[i] >> 1) ^ -(int32)(G[i] & 1)); ++i;
					const int32 Dy = (int32)((G[i] >> 1) ^ -(int32)(G[i] & 1)); ++i;
					Cx += Dx; Cy += Dy;
					Current.Points.Add(FVector2D(Cx, Cy));
				}
			}
			else if (Cmd == 7) // ClosePath - polygons only
			{
				if (Current.Points.Num() > 0)
					Current.Points.Add(Current.Points[0]);
			}
		}
		if (Current.Points.Num() > 1) OutLines.Add(MoveTemp(Current));
	}

	static void ParseFeature(FPbReader R, FMvtLayer& L)
	{
		FMvtFeature F;
		TArray<uint32> Geom;
		while (!R.AtEnd())
		{
			const uint32 Tag = (uint32)R.ReadVarint();
			const uint32 Field = Tag >> 3;
			switch (Field)
			{
			case 1: R.ReadVarint(); break; // id - ignored
			case 2:
			{
				FPbReader Sub = R.SubReader();
				while (!Sub.AtEnd()) F.Tags.Add((uint32)Sub.ReadVarint());
				break;
			}
			case 3: F.Type = (uint32)R.ReadVarint(); break;
			case 4:
			{
				FPbReader Sub = R.SubReader();
				while (!Sub.AtEnd()) Geom.Add((uint32)Sub.ReadVarint());
				break;
			}
			default: R.SkipField(Tag); break;
			}
		}

		if (F.Type == 2 /*linestring*/ || F.Type == 3 /*polygon - skip but we don't care */)
		{
			if (F.Type == 2)
			{
				DecodeGeometry(Geom, F.Type, F.Lines);
			}
		}
		L.Features.Add(MoveTemp(F));
	}

	static bool ParseLayer(FPbReader R, FMvtLayer& OutLayer)
	{
		while (!R.AtEnd())
		{
			const uint32 Tag = (uint32)R.ReadVarint();
			const uint32 Field = Tag >> 3;
			switch (Field)
			{
			case 1: OutLayer.Name = R.ReadString(); break;
			case 2: ParseFeature(R.SubReader(), OutLayer); break;
			case 3: OutLayer.Keys.Add(R.ReadString()); break;
			case 4: ParseValue(R.SubReader(), OutLayer); break;
			case 5: OutLayer.Extent = (uint32)R.ReadVarint(); break;
			case 15: R.ReadVarint(); break; // version
			default: R.SkipField(Tag); break;
			}
		}
		return true;
	}

	static bool ParseMVT(const TArray<uint8>& Bytes, TArray<FMvtLayer>& OutLayers)
	{
		FPbReader R; R.Data = Bytes.GetData(); R.End = R.Data + Bytes.Num();
		while (!R.AtEnd())
		{
			const uint32 Tag = (uint32)R.ReadVarint();
			const uint32 Field = Tag >> 3;
			if (Field == 3)
			{
				FMvtLayer L;
				ParseLayer(R.SubReader(), L);
				OutLayers.Add(MoveTemp(L));
			}
			else R.SkipField(Tag);
		}
		return OutLayers.Num() > 0;
	}

	static ERoadClass ClassifyRoadString(const FString& S)
	{
		if (S.Equals(TEXT("motorway"), ESearchCase::IgnoreCase) ||
			S.Equals(TEXT("motorway_link"), ESearchCase::IgnoreCase)) return ERoadClass::Motorway;
		if (S.Equals(TEXT("trunk"), ESearchCase::IgnoreCase) ||
			S.Equals(TEXT("trunk_link"), ESearchCase::IgnoreCase)) return ERoadClass::Trunk;
		if (S.Equals(TEXT("primary"), ESearchCase::IgnoreCase) ||
			S.Equals(TEXT("primary_link"), ESearchCase::IgnoreCase)) return ERoadClass::Primary;
		if (S.Equals(TEXT("secondary"), ESearchCase::IgnoreCase) ||
			S.Equals(TEXT("secondary_link"), ESearchCase::IgnoreCase)) return ERoadClass::Secondary;
		if (S.Equals(TEXT("tertiary"), ESearchCase::IgnoreCase) ||
			S.Equals(TEXT("tertiary_link"), ESearchCase::IgnoreCase)) return ERoadClass::Tertiary;
		if (S.Contains(TEXT("residential"), ESearchCase::IgnoreCase) ||
			S.Equals(TEXT("street"), ESearchCase::IgnoreCase) ||
			S.Equals(TEXT("street_limited"), ESearchCase::IgnoreCase)) return ERoadClass::Residential;
		if (S.Equals(TEXT("service"), ESearchCase::IgnoreCase)) return ERoadClass::Service;
		if (S.Equals(TEXT("pedestrian"), ESearchCase::IgnoreCase) ||
			S.Equals(TEXT("path"), ESearchCase::IgnoreCase) ||
			S.Equals(TEXT("footway"), ESearchCase::IgnoreCase) ||
			S.Equals(TEXT("steps"), ESearchCase::IgnoreCase)) return ERoadClass::Pedestrian;
		if (S.Equals(TEXT("track"), ESearchCase::IgnoreCase)) return ERoadClass::Track;
		return ERoadClass::Other;
	}

	// Resolve a feature's "class" and "oneway" properties via the layer's keys/values tables.
	static void ResolveRoadProps(const FMvtFeature& F, const FMvtLayer& L, ERoadClass& OutClass, bool& bOneWay)
	{
		OutClass = ERoadClass::Other;
		bOneWay = false;
		for (int32 i = 0; i + 1 < F.Tags.Num(); i += 2)
		{
			const uint32 KeyIdx = F.Tags[i];
			const uint32 ValIdx = F.Tags[i + 1];
			if (KeyIdx >= (uint32)L.Keys.Num() || ValIdx >= (uint32)L.ValueKinds.Num()) continue;
			const FString& K = L.Keys[KeyIdx];
			const uint8 Kind = L.ValueKinds[ValIdx];
			const int32 VIdx = L.ValueIndices[ValIdx];

			if (K.Equals(TEXT("class"), ESearchCase::IgnoreCase) && Kind == 0 && VIdx >= 0 && VIdx < L.ValuesString.Num())
			{
				OutClass = ClassifyRoadString(L.ValuesString[VIdx]);
			}
			else if (K.Equals(TEXT("oneway"), ESearchCase::IgnoreCase))
			{
				if (Kind == 3 && VIdx >= 0 && VIdx < L.ValuesBool.Num()) bOneWay = L.ValuesBool[VIdx];
				else if (Kind == 1 && VIdx >= 0 && VIdx < L.ValuesInt.Num()) bOneWay = L.ValuesInt[VIdx] != 0;
				else if (Kind == 0 && VIdx >= 0 && VIdx < L.ValuesString.Num())
					bOneWay = L.ValuesString[VIdx].Equals(TEXT("true"), ESearchCase::IgnoreCase)
						|| L.ValuesString[VIdx] == TEXT("1");
			}
		}
	}
}

// ----------------------------------------------------------------------------
// Road graph baking (editor-only HTTP)
// ----------------------------------------------------------------------------
#if WITH_EDITOR
namespace
{
	struct FBakeState
	{
		TWeakObjectPtr<UWorld> World;
		FString AssetPackagePath;
		FString AssetName;
		int32 Zoom = 14;
		int32 MinTX = 0, MaxTX = 0, MinTY = 0, MaxTY = 0;
		double BoundsN = 0, BoundsS = 0, BoundsE = 0, BoundsW = 0;
		int32 Pending = 0;
		int32 Failed = 0;
		// Per-tile parsed lines: (lat,lng) per vertex + class + oneway, in geographic coords.
		struct FParsedLine { TArray<FVector2D> LatLng; ERoadClass Class; bool bOneWay; };
		TArray<FParsedLine> AllLines;
		FCriticalSection Mutex;
	};

	static TSharedPtr<FBakeState> GBakeState;

	static void ShowToast(const FString& Msg, bool bSuccess)
	{
		FNotificationInfo Info(FText::FromString(Msg));
		Info.bUseLargeFont = false;
		Info.ExpireDuration = 8.f;
		Info.FadeOutDuration = 1.f;
		TSharedPtr<SNotificationItem> Item = FSlateNotificationManager::Get().AddNotification(Info);
		if (Item.IsValid())
			Item->SetCompletionState(bSuccess ? SNotificationItem::CS_Success : SNotificationItem::CS_Fail);
	}

	static void FinalizeBake()
	{
		if (!GBakeState.IsValid()) return;
		TSharedPtr<FBakeState> S = GBakeState;
		GBakeState.Reset();

		UE_LOG(LogMapboxPaths, Log, TEXT("Bake: parsed %d road lines from %d tiles. Building graph..."),
			S->AllLines.Num(), (S->MaxTX - S->MinTX + 1) * (S->MaxTY - S->MinTY + 1));

		// Dedupe nodes by quantizing lat/lng to ~1m precision.
		// Quantization: ~1e-5 degrees ≈ 1.11m at equator. Use 1e-6 for sub-meter precision.
		const double Q = 1e-6;
		TMap<int64, int32> NodeKeyToIndex;
		TArray<FRoadGraphNode> Nodes;
		TArray<FRoadGraphEdge> Edges;

		auto KeyFor = [Q](double Lat, double Lng) -> int64
		{
			const int64 KLat = (int64)FMath::RoundToDouble(Lat / Q);
			const int64 KLng = (int64)FMath::RoundToDouble(Lng / Q);
			return (KLat * 0x100000000LL) ^ KLng;
		};

		auto AddNode = [&](double Lat, double Lng) -> int32
		{
			const int64 K = KeyFor(Lat, Lng);
			int32* Existing = NodeKeyToIndex.Find(K);
			if (Existing) return *Existing;
			FRoadGraphNode N;
			N.Latitude = Lat;
			N.Longitude = Lng;
			const int32 Idx = Nodes.Add(N);
			NodeKeyToIndex.Add(K, Idx);
			return Idx;
		};

		for (const FBakeState::FParsedLine& Line : S->AllLines)
		{
			if (Line.LatLng.Num() < 2) continue;
			int32 PrevNode = AddNode(Line.LatLng[0].X, Line.LatLng[0].Y);
			for (int32 i = 1; i < Line.LatLng.Num(); ++i)
			{
				const int32 CurNode = AddNode(Line.LatLng[i].X, Line.LatLng[i].Y);
				if (CurNode == PrevNode) continue;
				FRoadGraphEdge E;
				E.NodeA = PrevNode;
				E.NodeB = CurNode;
				E.Class = Line.Class;
				E.bOneWay = Line.bOneWay;
				E.LengthMeters = (float)HaversineMeters(
					Nodes[PrevNode].Latitude, Nodes[PrevNode].Longitude,
					Nodes[CurNode].Latitude, Nodes[CurNode].Longitude);
				const int32 EdgeIdx = Edges.Add(E);
				Nodes[PrevNode].EdgeIndices.Add(EdgeIdx);
				Nodes[CurNode].EdgeIndices.Add(EdgeIdx);
				PrevNode = CurNode;
			}
		}

		// Save asset
		const FString PackagePath = S->AssetPackagePath / S->AssetName;
		UPackage* Package = CreatePackage(*PackagePath);
		if (!Package)
		{
			ShowToast(FString::Printf(TEXT("Mapbox Paths: failed to create package %s"), *PackagePath), false);
			return;
		}
		Package->FullyLoad();

		URoadGraphAsset* Asset = NewObject<URoadGraphAsset>(Package, *S->AssetName, RF_Public | RF_Standalone);
		Asset->Nodes = MoveTemp(Nodes);
		Asset->Edges = MoveTemp(Edges);
		Asset->BoundsNorth = S->BoundsN;
		Asset->BoundsSouth = S->BoundsS;
		Asset->BoundsEast = S->BoundsE;
		Asset->BoundsWest = S->BoundsW;
		Asset->BakeZoom = S->Zoom;
		Asset->BuildSpatialIndex();

		FAssetRegistryModule::AssetCreated(Asset);
		Asset->MarkPackageDirty();

		const FString Filename = FPackageName::LongPackageNameToFilename(Package->GetName(), FPackageName::GetAssetPackageExtension());
		FSavePackageArgs SaveArgs;
		SaveArgs.TopLevelFlags = RF_Public | RF_Standalone;
		UPackage::SavePackage(Package, Asset, *Filename, SaveArgs);

		UE_LOG(LogMapboxPaths, Log, TEXT("Mapbox Paths: baked %d nodes / %d edges into %s"),
			Asset->Nodes.Num(), Asset->Edges.Num(), *PackagePath);
		ShowToast(FString::Printf(TEXT("Road graph baked: %d nodes, %d edges (%d failed tiles)"),
			Asset->Nodes.Num(), Asset->Edges.Num(), S->Failed), true);
	}

	static void OnTileFetched(FHttpRequestPtr Req, FHttpResponsePtr Resp, bool bOk, int32 TX, int32 TY, int32 Z)
	{
		if (!GBakeState.IsValid()) return;
		const bool bHttpOk = bOk && Resp.IsValid() && Resp->GetResponseCode() < 400;

		if (bHttpOk)
		{
			TArray<uint8> Bytes = Resp->GetContent();
			TArray<FMvtLayer> Layers;
			if (ParseMVT(Bytes, Layers))
			{
				FScopeLock Lock(&GBakeState->Mutex);
				const int32 TileCount = 1 << Z;
				for (const FMvtLayer& L : Layers)
				{
					if (!L.Name.Equals(TEXT("road"), ESearchCase::IgnoreCase)) continue;
					for (const FMvtFeature& F : L.Features)
					{
						if (F.Type != 2 /*linestring*/) continue;
						ERoadClass Cls; bool OneWay;
						ResolveRoadProps(F, L, Cls, OneWay);
						if (Cls == ERoadClass::Pedestrian) continue;
						for (const FMvtLineString& Line : F.Lines)
						{
							if (Line.Points.Num() < 2) continue;
							FBakeState::FParsedLine PL;
							PL.Class = Cls;
							PL.bOneWay = OneWay;
							PL.LatLng.Reserve(Line.Points.Num());
							for (const FVector2D& P : Line.Points)
							{
								const double PixelX = TX * 256.0 + (P.X / (double)L.Extent) * 256.0;
								const double PixelY = TY * 256.0 + (P.Y / (double)L.Extent) * 256.0;
								PL.LatLng.Emplace(PixelYToLat(PixelY, Z), PixelXToLon(PixelX, Z));
							}
							GBakeState->AllLines.Add(MoveTemp(PL));
						}
					}
				}
			}
		}
		else
		{
			FScopeLock Lock(&GBakeState->Mutex);
			GBakeState->Failed++;
			UE_LOG(LogMapboxPaths, Warning, TEXT("Tile fetch failed %d/%d code=%d"), TX, TY,
				Resp.IsValid() ? Resp->GetResponseCode() : 0);
		}

		int32 Remaining = 0;
		{
			FScopeLock Lock(&GBakeState->Mutex);
			GBakeState->Pending--;
			Remaining = GBakeState->Pending;
		}
		if (Remaining == 0) FinalizeBake();
	}
}
#endif // WITH_EDITOR

void UMissionPathLibrary::BakeRoadGraphFromActiveContext(const UObject* WorldContextObject,
	FString AssetPackagePath, FString AssetName, int32 ZoomOverride)
{
#if WITH_EDITOR
	if (GBakeState.IsValid())
	{
		ShowToast(TEXT("Mapbox Paths: a bake is already in progress."), false);
		return;
	}

	const FMapboxLandscapeContext Ctx = GetActiveMapboxContext(WorldContextObject);
	if (!Ctx.bValid)
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(
			TEXT("Couldn't find a configured MapboxLandscapeActor in the level. ")
			TEXT("Place one, set its coordinates (Center Lat/Lng + Radius works fine), then bake.")));
		return;
	}

	const UMapboxLandscapeSettings* Settings = GetDefault<UMapboxLandscapeSettings>();
	if (!Settings || Settings->ApiKey.IsEmpty())
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(
			TEXT("Mapbox API key is empty. Set it in Project Settings > Plugins > Mapbox Landscape.")));
		return;
	}

	GBakeState = MakeShared<FBakeState>();
	GBakeState->World = WorldContextObject->GetWorld();
	GBakeState->AssetPackagePath = AssetPackagePath;
	GBakeState->AssetName = AssetName;
	GBakeState->BoundsN = Ctx.North; GBakeState->BoundsS = Ctx.South;
	GBakeState->BoundsE = Ctx.East; GBakeState->BoundsW = Ctx.West;

	// For roads we usually want more detail than the terrain bake — clamp to 14..16.
	const int32 RoadZoom = ZoomOverride > 0 ? FMath::Clamp(ZoomOverride, 10, 16)
		: FMath::Clamp(Ctx.ResolvedZoom + 1, 12, 16);

	const int32 MinTX = LonToTileX(Ctx.West, RoadZoom);
	const int32 MaxTX = LonToTileX(Ctx.East, RoadZoom);
	const int32 MinTY = LatToTileY(Ctx.North, RoadZoom);
	const int32 MaxTY = LatToTileY(Ctx.South, RoadZoom);
	GBakeState->Zoom = RoadZoom;
	GBakeState->MinTX = FMath::Min(MinTX, MaxTX);
	GBakeState->MaxTX = FMath::Max(MinTX, MaxTX);
	GBakeState->MinTY = FMath::Min(MinTY, MaxTY);
	GBakeState->MaxTY = FMath::Max(MinTY, MaxTY);

	const int32 TileCount = (GBakeState->MaxTX - GBakeState->MinTX + 1)
		* (GBakeState->MaxTY - GBakeState->MinTY + 1);
	GBakeState->Pending = TileCount;

	UE_LOG(LogMapboxPaths, Log, TEXT("Mapbox Paths: starting bake of %d tiles at zoom %d"), TileCount, RoadZoom);
	ShowToast(FString::Printf(TEXT("Mapbox Paths: fetching %d MVT tiles at zoom %d..."), TileCount, RoadZoom), true);

	const FString Key = Settings->ApiKey;
	for (int32 TX = GBakeState->MinTX; TX <= GBakeState->MaxTX; ++TX)
	for (int32 TY = GBakeState->MinTY; TY <= GBakeState->MaxTY; ++TY)
	{
		const FString URL = FString::Printf(
			TEXT("https://api.mapbox.com/v4/mapbox.mapbox-streets-v8/%d/%d/%d.mvt?access_token=%s"),
			RoadZoom, TX, TY, *Key);
		TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Req = FHttpModule::Get().CreateRequest();
		Req->SetVerb(TEXT("GET"));
		Req->SetURL(URL);
		Req->OnProcessRequestComplete().BindLambda([TX, TY, RoadZoom](FHttpRequestPtr R, FHttpResponsePtr Resp, bool bOk)
		{
			OnTileFetched(R, Resp, bOk, TX, TY, RoadZoom);
		});
		Req->ProcessRequest();
	}
#else
	UE_LOG(LogMapboxPaths, Warning, TEXT("BakeRoadGraph is editor-only."));
#endif
}

// ----------------------------------------------------------------------------
// A*
// ----------------------------------------------------------------------------
TArray<FVector> UMissionPathLibrary::FindPath(const UObject* WorldContextObject,
	URoadGraphAsset* Graph, FVector StartWorld, FVector EndWorld,
	float SnapDistanceMeters, bool bSnapToGround)
{
	TArray<FVector> Out;
	if (!Graph || Graph->Nodes.IsEmpty()) return Out;

	const FMapboxLandscapeContext Ctx = GetActiveMapboxContext(WorldContextObject);
	if (!Ctx.bValid) return Out;

	double StartLat, StartLng, EndLat, EndLng;
	WorldToLatLng(Ctx, StartWorld, StartLat, StartLng);
	WorldToLatLng(Ctx, EndWorld, EndLat, EndLng);

	const int32 StartNode = Graph->FindNearestNode(StartLat, StartLng, SnapDistanceMeters);
	const int32 EndNode = Graph->FindNearestNode(EndLat, EndLng, SnapDistanceMeters);
	if (StartNode == INDEX_NONE || EndNode == INDEX_NONE)
	{
		UE_LOG(LogMapboxPaths, Warning, TEXT("FindPath: no nodes within %.0fm of start/end (start=%d end=%d)"),
			SnapDistanceMeters, StartNode, EndNode);
		return Out;
	}

	// Standard A* with priority queue (binary heap on TArray of pairs).
	const int32 N = Graph->Nodes.Num();
	TArray<double> GScore;  GScore.Init(TNumericLimits<double>::Max(), N);
	TArray<int32> CameFrom; CameFrom.Init(INDEX_NONE, N);
	GScore[StartNode] = 0.0;

	struct FOpen { double F; int32 Node; };
	struct FCompare { bool operator()(const FOpen& A, const FOpen& B) const { return A.F < B.F; } };
	TArray<FOpen> Open;
	auto HeuristicMeters = [&](int32 A, int32 B)
	{
		return HaversineMeters(Graph->Nodes[A].Latitude, Graph->Nodes[A].Longitude,
			Graph->Nodes[B].Latitude, Graph->Nodes[B].Longitude);
	};
	Open.HeapPush({ HeuristicMeters(StartNode, EndNode), StartNode }, FCompare());

	bool bFound = false;
	while (!Open.IsEmpty())
	{
		FOpen Top;
		Open.HeapPop(Top, FCompare(), EAllowShrinking::No);
		const int32 Cur = Top.Node;
		if (Cur == EndNode) { bFound = true; break; }

		const FRoadGraphNode& CurNode = Graph->Nodes[Cur];
		for (int32 EdgeIdx : CurNode.EdgeIndices)
		{
			const FRoadGraphEdge& E = Graph->Edges[EdgeIdx];
			const int32 Other = (E.NodeA == Cur) ? E.NodeB : E.NodeA;
			// Respect one-way (only A->B direction).
			if (E.bOneWay && E.NodeA != Cur) continue;

			const double Step = (double)E.LengthMeters * URoadGraphAsset::GetClassCostMultiplier(E.Class);
			const double Tentative = GScore[Cur] + Step;
			if (Tentative < GScore[Other])
			{
				GScore[Other] = Tentative;
				CameFrom[Other] = Cur;
				Open.HeapPush({ Tentative + HeuristicMeters(Other, EndNode), Other }, FCompare());
			}
		}
	}

	if (!bFound)
	{
		UE_LOG(LogMapboxPaths, Warning, TEXT("FindPath: no route found between nodes %d and %d"), StartNode, EndNode);
		return Out;
	}

	// Reconstruct: end -> start, then reverse.
	TArray<int32> NodeChain;
	for (int32 N2 = EndNode; N2 != INDEX_NONE; N2 = CameFrom[N2]) NodeChain.Add(N2);
	Algo::Reverse(NodeChain);

	Out.Reserve(NodeChain.Num() + 2);
	Out.Add(StartWorld);
	for (int32 NIdx : NodeChain)
	{
		const FRoadGraphNode& N2 = Graph->Nodes[NIdx];
		FVector W = LatLngToWorld(Ctx, N2.Latitude, N2.Longitude, 50.f);
		if (bSnapToGround) W = SnapToLandscapeHeight(WorldContextObject, W, 50.f);
		Out.Add(W);
	}
	Out.Add(EndWorld);
	return Out;
}
