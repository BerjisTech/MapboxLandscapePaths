#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PathDefinition.generated.h"

UENUM(BlueprintType)
enum class EPathSource : uint8
{
	Manual UMETA(DisplayName = "Manual (designer-placed waypoints)"),
	RoadGraph UMETA(DisplayName = "Baked road graph (A*)"),
	MapboxDirections UMETA(DisplayName = "Mapbox Directions API"),
};

UENUM(BlueprintType)
enum class EPathStyle : uint8
{
	Solid,
	Dashed,
	Arrows,
	Pulse,
};

USTRUCT(BlueprintType)
struct FPathPoint
{
	GENERATED_BODY()

	// Canonical lat/lng. World position is derived per-frame from the active MapboxLandscape actor,
	// so the path stays glued to the map if you reposition the landscape.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path Point")
	double Latitude = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path Point")
	double Longitude = 0.0;

	// Z is independent: 0 = sample landscape height at runtime; non-zero = explicit offset above landscape.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path Point")
	float ZOffsetCm = 50.f;
};

UCLASS(BlueprintType)
class MAPBOXLANDSCAPEPATHS_API UPathDefinition : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Source")
	EPathSource Source = EPathSource::RoadGraph;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Source")
	FName MissionTag = NAME_None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometry")
	TArray<FPathPoint> Points;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Style")
	EPathStyle Style = EPathStyle::Arrows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Style")
	FLinearColor Color = FLinearColor(0.1f, 0.7f, 1.f, 1.f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Style", meta = (ClampMin = "0.5"))
	float WidthMeters = 3.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering")
	bool bShowOnMinimap = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering")
	bool bShowInWorld = true;
};
