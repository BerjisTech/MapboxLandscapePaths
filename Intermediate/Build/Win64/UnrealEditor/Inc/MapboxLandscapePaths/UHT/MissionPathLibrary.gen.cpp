// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MissionPathLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMissionPathLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MAPBOXLANDSCAPE_API UClass* Z_Construct_UClass_AMapboxLandscapeActor_NoRegister();
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_UMissionPathLibrary();
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_UMissionPathLibrary_NoRegister();
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_UPathDefinition_NoRegister();
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_URoadGraphAsset_NoRegister();
MAPBOXLANDSCAPEPATHS_API UScriptStruct* Z_Construct_UScriptStruct_FMapboxLandscapeContext();
UPackage* Z_Construct_UPackage__Script_MapboxLandscapePaths();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMapboxLandscapeContext *******************************************
struct Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMapboxLandscapeContext); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMapboxLandscapeContext); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapboxActor_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_North_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_South_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_East_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_West_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedZoom_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTileX_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTileY_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTileX_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTileY_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalWorldXCm_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalWorldYCm_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorWorld_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMapboxLandscapeContext constinit property declarations ***********
	static void NewProp_bValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MapboxActor;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_North;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_South;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_East;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_West;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolvedZoom;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinTileX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinTileY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTileX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTileY;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TotalWorldXCm;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TotalWorldYCm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMapboxLandscapeContext constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapboxLandscapeContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMapboxLandscapeContext;
class UScriptStruct* FMapboxLandscapeContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMapboxLandscapeContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMapboxLandscapeContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapboxLandscapeContext, (UObject*)Z_Construct_UPackage__Script_MapboxLandscapePaths(), TEXT("MapboxLandscapeContext"));
	}
	return Z_Registration_Info_UScriptStruct_FMapboxLandscapeContext.OuterSingleton;
	}

// ********** Begin ScriptStruct FMapboxLandscapeContext Property Definitions **********************
void Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_bValid_SetBit(void* Obj)
{
	((FMapboxLandscapeContext*)Obj)->bValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMapboxLandscapeContext), &Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValid_MetaData), NewProp_bValid_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_MapboxActor = { "MapboxActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapboxLandscapeContext, MapboxActor), Z_Construct_UClass_AMapboxLandscapeActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapboxActor_MetaData), NewProp_MapboxActor_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_North = { "North", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapboxLandscapeContext, North), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_North_MetaData), NewProp_North_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_South = { "South", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapboxLandscapeContext, South), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_South_MetaData), NewProp_South_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_East = { "East", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapboxLandscapeContext, East), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_East_MetaData), NewProp_East_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_West = { "West", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapboxLandscapeContext, West), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_West_MetaData), NewProp_West_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_ResolvedZoom = { "ResolvedZoom", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapboxLandscapeContext, ResolvedZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolvedZoom_MetaData), NewProp_ResolvedZoom_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_MinTileX = { "MinTileX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapboxLandscapeContext, MinTileX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTileX_MetaData), NewProp_MinTileX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_MinTileY = { "MinTileY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapboxLandscapeContext, MinTileY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTileY_MetaData), NewProp_MinTileY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_MaxTileX = { "MaxTileX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapboxLandscapeContext, MaxTileX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTileX_MetaData), NewProp_MaxTileX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_MaxTileY = { "MaxTileY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapboxLandscapeContext, MaxTileY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTileY_MetaData), NewProp_MaxTileY_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_TotalWorldXCm = { "TotalWorldXCm", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapboxLandscapeContext, TotalWorldXCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalWorldXCm_MetaData), NewProp_TotalWorldXCm_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_TotalWorldYCm = { "TotalWorldYCm", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapboxLandscapeContext, TotalWorldYCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalWorldYCm_MetaData), NewProp_TotalWorldYCm_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_AnchorWorld = { "AnchorWorld", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapboxLandscapeContext, AnchorWorld), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorWorld_MetaData), NewProp_AnchorWorld_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_bValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_MapboxActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_North,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_South,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_East,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_West,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_ResolvedZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_MinTileX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_MinTileY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_MaxTileX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_MaxTileY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_TotalWorldXCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_TotalWorldYCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewProp_AnchorWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMapboxLandscapeContext Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MapboxLandscapePaths,
	nullptr,
	&NewStructOps,
	"MapboxLandscapeContext",
	Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::PropPointers),
	sizeof(FMapboxLandscapeContext),
	alignof(FMapboxLandscapeContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMapboxLandscapeContext()
{
	if (!Z_Registration_Info_UScriptStruct_FMapboxLandscapeContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMapboxLandscapeContext.InnerSingleton, Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMapboxLandscapeContext.InnerSingleton);
}
// ********** End ScriptStruct FMapboxLandscapeContext *********************************************

// ********** Begin Class UMissionPathLibrary Function BakeRoadGraphFromActiveContext **************
struct Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics
{
	struct MissionPathLibrary_eventBakeRoadGraphFromActiveContext_Parms
	{
		const UObject* WorldContextObject;
		FString AssetPackagePath;
		FString AssetName;
		int32 ZoomOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mapbox|Paths" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editor-only: fetches Mapbox vector tiles spanning the active MapboxLandscape bbox,\n// parses out road LineStrings, builds nodes+edges, saves a URoadGraphAsset.\n// Async: returns immediately; you'll get a toast notification on completion.\n" },
#endif
		{ "CPP_Default_AssetName", "RG_Roads" },
		{ "CPP_Default_AssetPackagePath", "/Game/MapboxLandscapePaths" },
		{ "CPP_Default_ZoomOverride", "-1" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor-only: fetches Mapbox vector tiles spanning the active MapboxLandscape bbox,\nparses out road LineStrings, builds nodes+edges, saves a URoadGraphAsset.\nAsync: returns immediately; you'll get a toast notification on completion." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BakeRoadGraphFromActiveContext constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPackagePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZoomOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BakeRoadGraphFromActiveContext constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BakeRoadGraphFromActiveContext Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventBakeRoadGraphFromActiveContext_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::NewProp_AssetPackagePath = { "AssetPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventBakeRoadGraphFromActiveContext_Parms, AssetPackagePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventBakeRoadGraphFromActiveContext_Parms, AssetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::NewProp_ZoomOverride = { "ZoomOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventBakeRoadGraphFromActiveContext_Parms, ZoomOverride), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::NewProp_AssetPackagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::NewProp_ZoomOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::PropPointers) < 2048);
// ********** End Function BakeRoadGraphFromActiveContext Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMissionPathLibrary, nullptr, "BakeRoadGraphFromActiveContext", 	Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::MissionPathLibrary_eventBakeRoadGraphFromActiveContext_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::MissionPathLibrary_eventBakeRoadGraphFromActiveContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMissionPathLibrary::execBakeRoadGraphFromActiveContext)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetPackagePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
	P_GET_PROPERTY(FIntProperty,Z_Param_ZoomOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMissionPathLibrary::BakeRoadGraphFromActiveContext(Z_Param_WorldContextObject,Z_Param_AssetPackagePath,Z_Param_AssetName,Z_Param_ZoomOverride);
	P_NATIVE_END;
}
// ********** End Class UMissionPathLibrary Function BakeRoadGraphFromActiveContext ****************

// ********** Begin Class UMissionPathLibrary Function FindPath ************************************
struct Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics
{
	struct MissionPathLibrary_eventFindPath_Parms
	{
		const UObject* WorldContextObject;
		URoadGraphAsset* Graph;
		FVector StartWorld;
		FVector EndWorld;
		float SnapDistanceMeters;
		bool bSnapToGround;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mapbox|Paths" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Edge cost-weighted A*. Returns world positions including intermediate shape points.\n// Empty array on failure (no nodes within snap distance, or no route).\n" },
#endif
		{ "CPP_Default_bSnapToGround", "true" },
		{ "CPP_Default_SnapDistanceMeters", "200.000000" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Edge cost-weighted A*. Returns world positions including intermediate shape points.\nEmpty array on failure (no nodes within snap distance, or no route)." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindPath constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndWorld;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapDistanceMeters;
	static void NewProp_bSnapToGround_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToGround;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindPath constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindPath Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventFindPath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventFindPath_Parms, Graph), Z_Construct_UClass_URoadGraphAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_StartWorld = { "StartWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventFindPath_Parms, StartWorld), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_EndWorld = { "EndWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventFindPath_Parms, EndWorld), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_SnapDistanceMeters = { "SnapDistanceMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventFindPath_Parms, SnapDistanceMeters), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_bSnapToGround_SetBit(void* Obj)
{
	((MissionPathLibrary_eventFindPath_Parms*)Obj)->bSnapToGround = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_bSnapToGround = { "bSnapToGround", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MissionPathLibrary_eventFindPath_Parms), &Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_bSnapToGround_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventFindPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_StartWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_EndWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_SnapDistanceMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_bSnapToGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::PropPointers) < 2048);
// ********** End Function FindPath Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMissionPathLibrary, nullptr, "FindPath", 	Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::MissionPathLibrary_eventFindPath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::MissionPathLibrary_eventFindPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMissionPathLibrary_FindPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMissionPathLibrary_FindPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMissionPathLibrary::execFindPath)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(URoadGraphAsset,Z_Param_Graph);
	P_GET_STRUCT(FVector,Z_Param_StartWorld);
	P_GET_STRUCT(FVector,Z_Param_EndWorld);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SnapDistanceMeters);
	P_GET_UBOOL(Z_Param_bSnapToGround);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=UMissionPathLibrary::FindPath(Z_Param_WorldContextObject,Z_Param_Graph,Z_Param_StartWorld,Z_Param_EndWorld,Z_Param_SnapDistanceMeters,Z_Param_bSnapToGround);
	P_NATIVE_END;
}
// ********** End Class UMissionPathLibrary Function FindPath **************************************

// ********** Begin Class UMissionPathLibrary Function GetActiveMapboxContext **********************
struct Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics
{
	struct MissionPathLibrary_eventGetActiveMapboxContext_Parms
	{
		const UObject* WorldContextObject;
		FMapboxLandscapeContext ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mapbox|Paths" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Finds the first AMapboxLandscapeActor in the world and snapshots its current coordinate setup.\n// Use this every time you need to map lat/lng <-> world, so paths track the actor if you move it.\n" },
#endif
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the first AMapboxLandscapeActor in the world and snapshots its current coordinate setup.\nUse this every time you need to map lat/lng <-> world, so paths track the actor if you move it." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveMapboxContext constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveMapboxContext constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveMapboxContext Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventGetActiveMapboxContext_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventGetActiveMapboxContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FMapboxLandscapeContext, METADATA_PARAMS(0, nullptr) }; // 2544290249
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::PropPointers) < 2048);
// ********** End Function GetActiveMapboxContext Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMissionPathLibrary, nullptr, "GetActiveMapboxContext", 	Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::MissionPathLibrary_eventGetActiveMapboxContext_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::MissionPathLibrary_eventGetActiveMapboxContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMissionPathLibrary::execGetActiveMapboxContext)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMapboxLandscapeContext*)Z_Param__Result=UMissionPathLibrary::GetActiveMapboxContext(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UMissionPathLibrary Function GetActiveMapboxContext ************************

// ********** Begin Class UMissionPathLibrary Function LatLngToWorld *******************************
struct Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics
{
	struct MissionPathLibrary_eventLatLngToWorld_Parms
	{
		FMapboxLandscapeContext Ctx;
		double Latitude;
		double Longitude;
		float ZOffsetCm;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mapbox|Paths" },
		{ "CPP_Default_ZOffsetCm", "0.000000" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ctx_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LatLngToWorld constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ctx;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Latitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Longitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffsetCm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LatLngToWorld constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LatLngToWorld Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::NewProp_Ctx = { "Ctx", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventLatLngToWorld_Parms, Ctx), Z_Construct_UScriptStruct_FMapboxLandscapeContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ctx_MetaData), NewProp_Ctx_MetaData) }; // 2544290249
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventLatLngToWorld_Parms, Latitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventLatLngToWorld_Parms, Longitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::NewProp_ZOffsetCm = { "ZOffsetCm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventLatLngToWorld_Parms, ZOffsetCm), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventLatLngToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::NewProp_Ctx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::NewProp_Latitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::NewProp_Longitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::NewProp_ZOffsetCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::PropPointers) < 2048);
// ********** End Function LatLngToWorld Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMissionPathLibrary, nullptr, "LatLngToWorld", 	Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::MissionPathLibrary_eventLatLngToWorld_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::MissionPathLibrary_eventLatLngToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMissionPathLibrary::execLatLngToWorld)
{
	P_GET_STRUCT_REF(FMapboxLandscapeContext,Z_Param_Out_Ctx);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Latitude);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Longitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffsetCm);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMissionPathLibrary::LatLngToWorld(Z_Param_Out_Ctx,Z_Param_Latitude,Z_Param_Longitude,Z_Param_ZOffsetCm);
	P_NATIVE_END;
}
// ********** End Class UMissionPathLibrary Function LatLngToWorld *********************************

// ********** Begin Class UMissionPathLibrary Function ResolvePathPoints ***************************
struct Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics
{
	struct MissionPathLibrary_eventResolvePathPoints_Parms
	{
		const UObject* WorldContextObject;
		UPathDefinition* PathDef;
		bool bSnapToGround;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mapbox|Paths" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resolves a UPathDefinition's lat/lng points to current world positions through the active context.\n" },
#endif
		{ "CPP_Default_bSnapToGround", "true" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolves a UPathDefinition's lat/lng points to current world positions through the active context." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResolvePathPoints constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathDef;
	static void NewProp_bSnapToGround_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToGround;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResolvePathPoints constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResolvePathPoints Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventResolvePathPoints_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::NewProp_PathDef = { "PathDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventResolvePathPoints_Parms, PathDef), Z_Construct_UClass_UPathDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::NewProp_bSnapToGround_SetBit(void* Obj)
{
	((MissionPathLibrary_eventResolvePathPoints_Parms*)Obj)->bSnapToGround = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::NewProp_bSnapToGround = { "bSnapToGround", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MissionPathLibrary_eventResolvePathPoints_Parms), &Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::NewProp_bSnapToGround_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventResolvePathPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::NewProp_PathDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::NewProp_bSnapToGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::PropPointers) < 2048);
// ********** End Function ResolvePathPoints Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMissionPathLibrary, nullptr, "ResolvePathPoints", 	Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::MissionPathLibrary_eventResolvePathPoints_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::MissionPathLibrary_eventResolvePathPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMissionPathLibrary::execResolvePathPoints)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UPathDefinition,Z_Param_PathDef);
	P_GET_UBOOL(Z_Param_bSnapToGround);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=UMissionPathLibrary::ResolvePathPoints(Z_Param_WorldContextObject,Z_Param_PathDef,Z_Param_bSnapToGround);
	P_NATIVE_END;
}
// ********** End Class UMissionPathLibrary Function ResolvePathPoints *****************************

// ********** Begin Class UMissionPathLibrary Function SnapToLandscapeHeight ***********************
struct Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics
{
	struct MissionPathLibrary_eventSnapToLandscapeHeight_Parms
	{
		const UObject* WorldContextObject;
		FVector WorldPosition;
		float HeightAboveGround;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mapbox|Paths" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Line-traces the active world to find ground at (WorldX, WorldY); returns input Z if no hit.\n" },
#endif
		{ "CPP_Default_HeightAboveGround", "50.000000" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Line-traces the active world to find ground at (WorldX, WorldY); returns input Z if no hit." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SnapToLandscapeHeight constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightAboveGround;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SnapToLandscapeHeight constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SnapToLandscapeHeight Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventSnapToLandscapeHeight_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventSnapToLandscapeHeight_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::NewProp_HeightAboveGround = { "HeightAboveGround", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventSnapToLandscapeHeight_Parms, HeightAboveGround), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventSnapToLandscapeHeight_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::NewProp_HeightAboveGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::PropPointers) < 2048);
// ********** End Function SnapToLandscapeHeight Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMissionPathLibrary, nullptr, "SnapToLandscapeHeight", 	Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::MissionPathLibrary_eventSnapToLandscapeHeight_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::MissionPathLibrary_eventSnapToLandscapeHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMissionPathLibrary::execSnapToLandscapeHeight)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_WorldPosition);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HeightAboveGround);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMissionPathLibrary::SnapToLandscapeHeight(Z_Param_WorldContextObject,Z_Param_WorldPosition,Z_Param_HeightAboveGround);
	P_NATIVE_END;
}
// ********** End Class UMissionPathLibrary Function SnapToLandscapeHeight *************************

// ********** Begin Class UMissionPathLibrary Function WorldToLatLng *******************************
struct Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics
{
	struct MissionPathLibrary_eventWorldToLatLng_Parms
	{
		FMapboxLandscapeContext Ctx;
		FVector WorldPosition;
		double OutLatitude;
		double OutLongitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mapbox|Paths" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ctx_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WorldToLatLng constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ctx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OutLatitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OutLongitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WorldToLatLng constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WorldToLatLng Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::NewProp_Ctx = { "Ctx", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventWorldToLatLng_Parms, Ctx), Z_Construct_UScriptStruct_FMapboxLandscapeContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ctx_MetaData), NewProp_Ctx_MetaData) }; // 2544290249
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventWorldToLatLng_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::NewProp_OutLatitude = { "OutLatitude", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventWorldToLatLng_Parms, OutLatitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::NewProp_OutLongitude = { "OutLongitude", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MissionPathLibrary_eventWorldToLatLng_Parms, OutLongitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::NewProp_Ctx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::NewProp_OutLatitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::NewProp_OutLongitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::PropPointers) < 2048);
// ********** End Function WorldToLatLng Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMissionPathLibrary, nullptr, "WorldToLatLng", 	Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::MissionPathLibrary_eventWorldToLatLng_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::MissionPathLibrary_eventWorldToLatLng_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMissionPathLibrary::execWorldToLatLng)
{
	P_GET_STRUCT_REF(FMapboxLandscapeContext,Z_Param_Out_Ctx);
	P_GET_STRUCT(FVector,Z_Param_WorldPosition);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutLatitude);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutLongitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMissionPathLibrary::WorldToLatLng(Z_Param_Out_Ctx,Z_Param_WorldPosition,Z_Param_Out_OutLatitude,Z_Param_Out_OutLongitude);
	P_NATIVE_END;
}
// ********** End Class UMissionPathLibrary Function WorldToLatLng *********************************

// ********** Begin Class UMissionPathLibrary ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMissionPathLibrary;
UClass* UMissionPathLibrary::GetPrivateStaticClass()
{
	using TClass = UMissionPathLibrary;
	if (!Z_Registration_Info_UClass_UMissionPathLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MissionPathLibrary"),
			Z_Registration_Info_UClass_UMissionPathLibrary.InnerSingleton,
			StaticRegisterNativesUMissionPathLibrary,
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
	return Z_Registration_Info_UClass_UMissionPathLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UMissionPathLibrary_NoRegister()
{
	return UMissionPathLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMissionPathLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MissionPathLibrary.h" },
		{ "ModuleRelativePath", "Public/MissionPathLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMissionPathLibrary constinit property declarations **********************
// ********** End Class UMissionPathLibrary constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BakeRoadGraphFromActiveContext"), .Pointer = &UMissionPathLibrary::execBakeRoadGraphFromActiveContext },
		{ .NameUTF8 = UTF8TEXT("FindPath"), .Pointer = &UMissionPathLibrary::execFindPath },
		{ .NameUTF8 = UTF8TEXT("GetActiveMapboxContext"), .Pointer = &UMissionPathLibrary::execGetActiveMapboxContext },
		{ .NameUTF8 = UTF8TEXT("LatLngToWorld"), .Pointer = &UMissionPathLibrary::execLatLngToWorld },
		{ .NameUTF8 = UTF8TEXT("ResolvePathPoints"), .Pointer = &UMissionPathLibrary::execResolvePathPoints },
		{ .NameUTF8 = UTF8TEXT("SnapToLandscapeHeight"), .Pointer = &UMissionPathLibrary::execSnapToLandscapeHeight },
		{ .NameUTF8 = UTF8TEXT("WorldToLatLng"), .Pointer = &UMissionPathLibrary::execWorldToLatLng },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMissionPathLibrary_BakeRoadGraphFromActiveContext, "BakeRoadGraphFromActiveContext" }, // 1336815993
		{ &Z_Construct_UFunction_UMissionPathLibrary_FindPath, "FindPath" }, // 3593297697
		{ &Z_Construct_UFunction_UMissionPathLibrary_GetActiveMapboxContext, "GetActiveMapboxContext" }, // 4027641308
		{ &Z_Construct_UFunction_UMissionPathLibrary_LatLngToWorld, "LatLngToWorld" }, // 615220790
		{ &Z_Construct_UFunction_UMissionPathLibrary_ResolvePathPoints, "ResolvePathPoints" }, // 1297071780
		{ &Z_Construct_UFunction_UMissionPathLibrary_SnapToLandscapeHeight, "SnapToLandscapeHeight" }, // 3172387412
		{ &Z_Construct_UFunction_UMissionPathLibrary_WorldToLatLng, "WorldToLatLng" }, // 1454022434
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMissionPathLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMissionPathLibrary_Statics
UObject* (*const Z_Construct_UClass_UMissionPathLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MapboxLandscapePaths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMissionPathLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMissionPathLibrary_Statics::ClassParams = {
	&UMissionPathLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMissionPathLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMissionPathLibrary_Statics::Class_MetaDataParams)
};
void UMissionPathLibrary::StaticRegisterNativesUMissionPathLibrary()
{
	UClass* Class = UMissionPathLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMissionPathLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMissionPathLibrary()
{
	if (!Z_Registration_Info_UClass_UMissionPathLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMissionPathLibrary.OuterSingleton, Z_Construct_UClass_UMissionPathLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMissionPathLibrary.OuterSingleton;
}
UMissionPathLibrary::UMissionPathLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMissionPathLibrary);
UMissionPathLibrary::~UMissionPathLibrary() {}
// ********** End Class UMissionPathLibrary ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h__Script_MapboxLandscapePaths_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMapboxLandscapeContext::StaticStruct, Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics::NewStructOps, TEXT("MapboxLandscapeContext"),&Z_Registration_Info_UScriptStruct_FMapboxLandscapeContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapboxLandscapeContext), 2544290249U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMissionPathLibrary, UMissionPathLibrary::StaticClass, TEXT("UMissionPathLibrary"), &Z_Registration_Info_UClass_UMissionPathLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMissionPathLibrary), 4120183436U) },
	};
}; // Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h__Script_MapboxLandscapePaths_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h__Script_MapboxLandscapePaths_4175208019{
	TEXT("/Script/MapboxLandscapePaths"),
	Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h__Script_MapboxLandscapePaths_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h__Script_MapboxLandscapePaths_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h__Script_MapboxLandscapePaths_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h__Script_MapboxLandscapePaths_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
