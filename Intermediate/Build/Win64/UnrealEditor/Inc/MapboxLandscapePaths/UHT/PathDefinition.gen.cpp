// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathDefinition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePathDefinition() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_UPathDefinition();
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_UPathDefinition_NoRegister();
MAPBOXLANDSCAPEPATHS_API UEnum* Z_Construct_UEnum_MapboxLandscapePaths_EPathSource();
MAPBOXLANDSCAPEPATHS_API UEnum* Z_Construct_UEnum_MapboxLandscapePaths_EPathStyle();
MAPBOXLANDSCAPEPATHS_API UScriptStruct* Z_Construct_UScriptStruct_FPathPoint();
UPackage* Z_Construct_UPackage__Script_MapboxLandscapePaths();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPathSource ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathSource;
static UEnum* EPathSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPathSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPathSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MapboxLandscapePaths_EPathSource, (UObject*)Z_Construct_UPackage__Script_MapboxLandscapePaths(), TEXT("EPathSource"));
	}
	return Z_Registration_Info_UEnum_EPathSource.OuterSingleton;
}
template<> MAPBOXLANDSCAPEPATHS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPathSource>()
{
	return EPathSource_StaticEnum();
}
struct Z_Construct_UEnum_MapboxLandscapePaths_EPathSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Manual.DisplayName", "Manual (designer-placed waypoints)" },
		{ "Manual.Name", "EPathSource::Manual" },
		{ "MapboxDirections.DisplayName", "Mapbox Directions API" },
		{ "MapboxDirections.Name", "EPathSource::MapboxDirections" },
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
		{ "RoadGraph.DisplayName", "Baked road graph (A*)" },
		{ "RoadGraph.Name", "EPathSource::RoadGraph" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPathSource::Manual", (int64)EPathSource::Manual },
		{ "EPathSource::RoadGraph", (int64)EPathSource::RoadGraph },
		{ "EPathSource::MapboxDirections", (int64)EPathSource::MapboxDirections },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_MapboxLandscapePaths_EPathSource_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MapboxLandscapePaths_EPathSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MapboxLandscapePaths,
	nullptr,
	"EPathSource",
	"EPathSource",
	Z_Construct_UEnum_MapboxLandscapePaths_EPathSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MapboxLandscapePaths_EPathSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MapboxLandscapePaths_EPathSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MapboxLandscapePaths_EPathSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MapboxLandscapePaths_EPathSource()
{
	if (!Z_Registration_Info_UEnum_EPathSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathSource.InnerSingleton, Z_Construct_UEnum_MapboxLandscapePaths_EPathSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPathSource.InnerSingleton;
}
// ********** End Enum EPathSource *****************************************************************

// ********** Begin Enum EPathStyle ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathStyle;
static UEnum* EPathStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPathStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPathStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MapboxLandscapePaths_EPathStyle, (UObject*)Z_Construct_UPackage__Script_MapboxLandscapePaths(), TEXT("EPathStyle"));
	}
	return Z_Registration_Info_UEnum_EPathStyle.OuterSingleton;
}
template<> MAPBOXLANDSCAPEPATHS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPathStyle>()
{
	return EPathStyle_StaticEnum();
}
struct Z_Construct_UEnum_MapboxLandscapePaths_EPathStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Arrows.Name", "EPathStyle::Arrows" },
		{ "BlueprintType", "true" },
		{ "Dashed.Name", "EPathStyle::Dashed" },
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
		{ "Pulse.Name", "EPathStyle::Pulse" },
		{ "Solid.Name", "EPathStyle::Solid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPathStyle::Solid", (int64)EPathStyle::Solid },
		{ "EPathStyle::Dashed", (int64)EPathStyle::Dashed },
		{ "EPathStyle::Arrows", (int64)EPathStyle::Arrows },
		{ "EPathStyle::Pulse", (int64)EPathStyle::Pulse },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_MapboxLandscapePaths_EPathStyle_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MapboxLandscapePaths_EPathStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MapboxLandscapePaths,
	nullptr,
	"EPathStyle",
	"EPathStyle",
	Z_Construct_UEnum_MapboxLandscapePaths_EPathStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MapboxLandscapePaths_EPathStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MapboxLandscapePaths_EPathStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MapboxLandscapePaths_EPathStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MapboxLandscapePaths_EPathStyle()
{
	if (!Z_Registration_Info_UEnum_EPathStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathStyle.InnerSingleton, Z_Construct_UEnum_MapboxLandscapePaths_EPathStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPathStyle.InnerSingleton;
}
// ********** End Enum EPathStyle ******************************************************************

// ********** Begin ScriptStruct FPathPoint ********************************************************
struct Z_Construct_UScriptStruct_FPathPoint_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPathPoint); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPathPoint); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[] = {
		{ "Category", "Path Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Canonical lat/lng. World position is derived per-frame from the active MapboxLandscape actor,\n// so the path stays glued to the map if you reposition the landscape.\n" },
#endif
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Canonical lat/lng. World position is derived per-frame from the active MapboxLandscape actor,\nso the path stays glued to the map if you reposition the landscape." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[] = {
		{ "Category", "Path Point" },
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffsetCm_MetaData[] = {
		{ "Category", "Path Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Z is independent: 0 = sample landscape height at runtime; non-zero = explicit offset above landscape.\n" },
#endif
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Z is independent: 0 = sample landscape height at runtime; non-zero = explicit offset above landscape." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPathPoint constinit property declarations ************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Latitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Longitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffsetCm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPathPoint constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPathPoint_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPathPoint;
class UScriptStruct* FPathPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPathPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPathPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathPoint, (UObject*)Z_Construct_UPackage__Script_MapboxLandscapePaths(), TEXT("PathPoint"));
	}
	return Z_Registration_Info_UScriptStruct_FPathPoint.OuterSingleton;
	}

// ********** Begin ScriptStruct FPathPoint Property Definitions ***********************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathPoint, Latitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Latitude_MetaData), NewProp_Latitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathPoint, Longitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Longitude_MetaData), NewProp_Longitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_ZOffsetCm = { "ZOffsetCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathPoint, ZOffsetCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffsetCm_MetaData), NewProp_ZOffsetCm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPathPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Latitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_Longitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathPoint_Statics::NewProp_ZOffsetCm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathPoint_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPathPoint Property Definitions *************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MapboxLandscapePaths,
	nullptr,
	&NewStructOps,
	"PathPoint",
	Z_Construct_UScriptStruct_FPathPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathPoint_Statics::PropPointers),
	sizeof(FPathPoint),
	alignof(FPathPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPathPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPathPoint()
{
	if (!Z_Registration_Info_UScriptStruct_FPathPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPathPoint.InnerSingleton, Z_Construct_UScriptStruct_FPathPoint_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPathPoint.InnerSingleton);
}
// ********** End ScriptStruct FPathPoint **********************************************************

// ********** Begin Class UPathDefinition **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPathDefinition;
UClass* UPathDefinition::GetPrivateStaticClass()
{
	using TClass = UPathDefinition;
	if (!Z_Registration_Info_UClass_UPathDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PathDefinition"),
			Z_Registration_Info_UClass_UPathDefinition.InnerSingleton,
			StaticRegisterNativesUPathDefinition,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPathDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_UPathDefinition_NoRegister()
{
	return UPathDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPathDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PathDefinition.h" },
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissionTag_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidthMeters_MetaData[] = {
		{ "Category", "Style" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnMinimap_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInWorld_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/PathDefinition.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPathDefinition constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MissionTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Style_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Style;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WidthMeters;
	static void NewProp_bShowOnMinimap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnMinimap;
	static void NewProp_bShowInWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPathDefinition constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPathDefinition_Statics

// ********** Begin Class UPathDefinition Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathDefinition_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPathDefinition_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathDefinition, Source), Z_Construct_UEnum_MapboxLandscapePaths_EPathSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 987610752
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPathDefinition_Statics::NewProp_MissionTag = { "MissionTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathDefinition, MissionTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissionTag_MetaData), NewProp_MissionTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPathDefinition_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPathPoint, METADATA_PARAMS(0, nullptr) }; // 263570759
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPathDefinition_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathDefinition, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) }; // 263570759
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathDefinition_Statics::NewProp_Style_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPathDefinition_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathDefinition, Style), Z_Construct_UEnum_MapboxLandscapePaths_EPathStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Style_MetaData), NewProp_Style_MetaData) }; // 2834795654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPathDefinition_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathDefinition, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathDefinition_Statics::NewProp_WidthMeters = { "WidthMeters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathDefinition, WidthMeters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidthMeters_MetaData), NewProp_WidthMeters_MetaData) };
void Z_Construct_UClass_UPathDefinition_Statics::NewProp_bShowOnMinimap_SetBit(void* Obj)
{
	((UPathDefinition*)Obj)->bShowOnMinimap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathDefinition_Statics::NewProp_bShowOnMinimap = { "bShowOnMinimap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathDefinition), &Z_Construct_UClass_UPathDefinition_Statics::NewProp_bShowOnMinimap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOnMinimap_MetaData), NewProp_bShowOnMinimap_MetaData) };
void Z_Construct_UClass_UPathDefinition_Statics::NewProp_bShowInWorld_SetBit(void* Obj)
{
	((UPathDefinition*)Obj)->bShowInWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathDefinition_Statics::NewProp_bShowInWorld = { "bShowInWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathDefinition), &Z_Construct_UClass_UPathDefinition_Statics::NewProp_bShowInWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInWorld_MetaData), NewProp_bShowInWorld_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathDefinition_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathDefinition_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathDefinition_Statics::NewProp_MissionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathDefinition_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathDefinition_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathDefinition_Statics::NewProp_Style_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathDefinition_Statics::NewProp_Style,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathDefinition_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathDefinition_Statics::NewProp_WidthMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathDefinition_Statics::NewProp_bShowOnMinimap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathDefinition_Statics::NewProp_bShowInWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathDefinition_Statics::PropPointers) < 2048);
// ********** End Class UPathDefinition Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UPathDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MapboxLandscapePaths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathDefinition_Statics::ClassParams = {
	&UPathDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPathDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPathDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathDefinition_Statics::Class_MetaDataParams)
};
void UPathDefinition::StaticRegisterNativesUPathDefinition()
{
}
UClass* Z_Construct_UClass_UPathDefinition()
{
	if (!Z_Registration_Info_UClass_UPathDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathDefinition.OuterSingleton, Z_Construct_UClass_UPathDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPathDefinition.OuterSingleton;
}
UPathDefinition::UPathDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPathDefinition);
UPathDefinition::~UPathDefinition() {}
// ********** End Class UPathDefinition ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h__Script_MapboxLandscapePaths_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPathSource_StaticEnum, TEXT("EPathSource"), &Z_Registration_Info_UEnum_EPathSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 987610752U) },
		{ EPathStyle_StaticEnum, TEXT("EPathStyle"), &Z_Registration_Info_UEnum_EPathStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2834795654U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPathPoint::StaticStruct, Z_Construct_UScriptStruct_FPathPoint_Statics::NewStructOps, TEXT("PathPoint"),&Z_Registration_Info_UScriptStruct_FPathPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPathPoint), 263570759U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPathDefinition, UPathDefinition::StaticClass, TEXT("UPathDefinition"), &Z_Registration_Info_UClass_UPathDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathDefinition), 4039555548U) },
	};
}; // Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h__Script_MapboxLandscapePaths_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h__Script_MapboxLandscapePaths_2008208024{
	TEXT("/Script/MapboxLandscapePaths"),
	Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h__Script_MapboxLandscapePaths_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h__Script_MapboxLandscapePaths_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h__Script_MapboxLandscapePaths_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h__Script_MapboxLandscapePaths_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h__Script_MapboxLandscapePaths_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h__Script_MapboxLandscapePaths_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
