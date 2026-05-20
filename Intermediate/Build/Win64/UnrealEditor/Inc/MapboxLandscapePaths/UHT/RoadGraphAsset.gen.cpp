// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadGraphAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadGraphAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_URoadGraphAsset();
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_URoadGraphAsset_NoRegister();
MAPBOXLANDSCAPEPATHS_API UEnum* Z_Construct_UEnum_MapboxLandscapePaths_ERoadClass();
MAPBOXLANDSCAPEPATHS_API UScriptStruct* Z_Construct_UScriptStruct_FRoadGraphEdge();
MAPBOXLANDSCAPEPATHS_API UScriptStruct* Z_Construct_UScriptStruct_FRoadGraphNode();
UPackage* Z_Construct_UPackage__Script_MapboxLandscapePaths();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERoadClass ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERoadClass;
static UEnum* ERoadClass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERoadClass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERoadClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MapboxLandscapePaths_ERoadClass, (UObject*)Z_Construct_UPackage__Script_MapboxLandscapePaths(), TEXT("ERoadClass"));
	}
	return Z_Registration_Info_UEnum_ERoadClass.OuterSingleton;
}
template<> MAPBOXLANDSCAPEPATHS_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadClass>()
{
	return ERoadClass_StaticEnum();
}
struct Z_Construct_UEnum_MapboxLandscapePaths_ERoadClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
		{ "Motorway.Name", "ERoadClass::Motorway" },
		{ "Other.Name", "ERoadClass::Other" },
		{ "Pedestrian.Name", "ERoadClass::Pedestrian" },
		{ "Primary.Name", "ERoadClass::Primary" },
		{ "Residential.Name", "ERoadClass::Residential" },
		{ "Secondary.Name", "ERoadClass::Secondary" },
		{ "Service.Name", "ERoadClass::Service" },
		{ "Tertiary.Name", "ERoadClass::Tertiary" },
		{ "Track.Name", "ERoadClass::Track" },
		{ "Trunk.Name", "ERoadClass::Trunk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadClass::Motorway", (int64)ERoadClass::Motorway },
		{ "ERoadClass::Trunk", (int64)ERoadClass::Trunk },
		{ "ERoadClass::Primary", (int64)ERoadClass::Primary },
		{ "ERoadClass::Secondary", (int64)ERoadClass::Secondary },
		{ "ERoadClass::Tertiary", (int64)ERoadClass::Tertiary },
		{ "ERoadClass::Residential", (int64)ERoadClass::Residential },
		{ "ERoadClass::Service", (int64)ERoadClass::Service },
		{ "ERoadClass::Pedestrian", (int64)ERoadClass::Pedestrian },
		{ "ERoadClass::Track", (int64)ERoadClass::Track },
		{ "ERoadClass::Other", (int64)ERoadClass::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_MapboxLandscapePaths_ERoadClass_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MapboxLandscapePaths_ERoadClass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MapboxLandscapePaths,
	nullptr,
	"ERoadClass",
	"ERoadClass",
	Z_Construct_UEnum_MapboxLandscapePaths_ERoadClass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MapboxLandscapePaths_ERoadClass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MapboxLandscapePaths_ERoadClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MapboxLandscapePaths_ERoadClass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MapboxLandscapePaths_ERoadClass()
{
	if (!Z_Registration_Info_UEnum_ERoadClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERoadClass.InnerSingleton, Z_Construct_UEnum_MapboxLandscapePaths_ERoadClass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERoadClass.InnerSingleton;
}
// ********** End Enum ERoadClass ******************************************************************

// ********** Begin ScriptStruct FRoadGraphNode ****************************************************
struct Z_Construct_UScriptStruct_FRoadGraphNode_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRoadGraphNode); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadGraphNode); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[] = {
		{ "Category", "Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Canonical lat/lng \xe2\x80\x94 graph is anchored in geography, not Unreal world units.\n" },
#endif
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Canonical lat/lng \xe2\x80\x94 graph is anchored in geography, not Unreal world units." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeIndices_MetaData[] = {
		{ "Category", "Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indices into RoadGraphAsset::Edges that touch this node.\n" },
#endif
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indices into RoadGraphAsset::Edges that touch this node." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadGraphNode constinit property declarations ********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Latitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Longitude;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EdgeIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgeIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadGraphNode constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadGraphNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRoadGraphNode_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadGraphNode;
class UScriptStruct* FRoadGraphNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRoadGraphNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRoadGraphNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadGraphNode, (UObject*)Z_Construct_UPackage__Script_MapboxLandscapePaths(), TEXT("RoadGraphNode"));
	}
	return Z_Registration_Info_UScriptStruct_FRoadGraphNode.OuterSingleton;
	}

// ********** Begin ScriptStruct FRoadGraphNode Property Definitions *******************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRoadGraphNode_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadGraphNode, Latitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Latitude_MetaData), NewProp_Latitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRoadGraphNode_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadGraphNode, Longitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Longitude_MetaData), NewProp_Longitude_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoadGraphNode_Statics::NewProp_EdgeIndices_Inner = { "EdgeIndices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRoadGraphNode_Statics::NewProp_EdgeIndices = { "EdgeIndices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadGraphNode, EdgeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeIndices_MetaData), NewProp_EdgeIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoadGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadGraphNode_Statics::NewProp_Latitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadGraphNode_Statics::NewProp_Longitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadGraphNode_Statics::NewProp_EdgeIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadGraphNode_Statics::NewProp_EdgeIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadGraphNode_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRoadGraphNode Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoadGraphNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MapboxLandscapePaths,
	nullptr,
	&NewStructOps,
	"RoadGraphNode",
	Z_Construct_UScriptStruct_FRoadGraphNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadGraphNode_Statics::PropPointers),
	sizeof(FRoadGraphNode),
	alignof(FRoadGraphNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadGraphNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRoadGraphNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRoadGraphNode()
{
	if (!Z_Registration_Info_UScriptStruct_FRoadGraphNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadGraphNode.InnerSingleton, Z_Construct_UScriptStruct_FRoadGraphNode_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadGraphNode.InnerSingleton);
}
// ********** End ScriptStruct FRoadGraphNode ******************************************************

// ********** Begin ScriptStruct FRoadGraphEdge ****************************************************
struct Z_Construct_UScriptStruct_FRoadGraphEdge_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRoadGraphEdge); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadGraphEdge); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeA_MetaData[] = {
		{ "Category", "Edge" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeB_MetaData[] = {
		{ "Category", "Edge" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Category", "Edge" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOneWay_MetaData[] = {
		{ "Category", "Edge" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthMeters_MetaData[] = {
		{ "Category", "Edge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True direction = A->B; if bOneWay, only that direction is traversable.\n" },
#endif
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True direction = A->B; if bOneWay, only that direction is traversable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeLatLng_MetaData[] = {
		{ "Category", "Edge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional: shape points between A and B that aren't intersections (decorative geometry).\n// Stored as lat/lng pairs interleaved (lat,lng,lat,lng,...).\n" },
#endif
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional: shape points between A and B that aren't intersections (decorative geometry).\nStored as lat/lng pairs interleaved (lat,lng,lat,lng,...)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadGraphEdge constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeB;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Class_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Class;
	static void NewProp_bOneWay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneWay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthMeters;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ShapeLatLng_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeLatLng;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadGraphEdge constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadGraphEdge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRoadGraphEdge_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadGraphEdge;
class UScriptStruct* FRoadGraphEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRoadGraphEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRoadGraphEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadGraphEdge, (UObject*)Z_Construct_UPackage__Script_MapboxLandscapePaths(), TEXT("RoadGraphEdge"));
	}
	return Z_Registration_Info_UScriptStruct_FRoadGraphEdge.OuterSingleton;
	}

// ********** Begin ScriptStruct FRoadGraphEdge Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_NodeA = { "NodeA", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadGraphEdge, NodeA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeA_MetaData), NewProp_NodeA_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_NodeB = { "NodeB", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadGraphEdge, NodeB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeB_MetaData), NewProp_NodeB_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_Class_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadGraphEdge, Class), Z_Construct_UEnum_MapboxLandscapePaths_ERoadClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) }; // 2597123898
void Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_bOneWay_SetBit(void* Obj)
{
	((FRoadGraphEdge*)Obj)->bOneWay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_bOneWay = { "bOneWay", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadGraphEdge), &Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_bOneWay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOneWay_MetaData), NewProp_bOneWay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_LengthMeters = { "LengthMeters", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadGraphEdge, LengthMeters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthMeters_MetaData), NewProp_LengthMeters_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_ShapeLatLng_Inner = { "ShapeLatLng", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_ShapeLatLng = { "ShapeLatLng", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadGraphEdge, ShapeLatLng), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeLatLng_MetaData), NewProp_ShapeLatLng_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_NodeA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_NodeB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_Class_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_bOneWay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_LengthMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_ShapeLatLng_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewProp_ShapeLatLng,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRoadGraphEdge Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MapboxLandscapePaths,
	nullptr,
	&NewStructOps,
	"RoadGraphEdge",
	Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::PropPointers),
	sizeof(FRoadGraphEdge),
	alignof(FRoadGraphEdge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRoadGraphEdge()
{
	if (!Z_Registration_Info_UScriptStruct_FRoadGraphEdge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadGraphEdge.InnerSingleton, Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadGraphEdge.InnerSingleton);
}
// ********** End ScriptStruct FRoadGraphEdge ******************************************************

// ********** Begin Class URoadGraphAsset **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URoadGraphAsset;
UClass* URoadGraphAsset::GetPrivateStaticClass()
{
	using TClass = URoadGraphAsset;
	if (!Z_Registration_Info_UClass_URoadGraphAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RoadGraphAsset"),
			Z_Registration_Info_UClass_URoadGraphAsset.InnerSingleton,
			StaticRegisterNativesURoadGraphAsset,
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
	return Z_Registration_Info_UClass_URoadGraphAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_URoadGraphAsset_NoRegister()
{
	return URoadGraphAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URoadGraphAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RoadGraphAsset.h" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsNorth_MetaData[] = {
		{ "Category", "Bounds" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsSouth_MetaData[] = {
		{ "Category", "Bounds" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsEast_MetaData[] = {
		{ "Category", "Bounds" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsWest_MetaData[] = {
		{ "Category", "Bounds" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeZoom_MetaData[] = {
		{ "Category", "Bake Info" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTileset_MetaData[] = {
		{ "Category", "Bake Info" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatialBucketStart_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Quick lookup buckets for nearest-node queries. Keyed by floor(lat*BucketScale)+floor(lng*BucketScale)*offset.\n// Populated by BuildSpatialIndex; not serialized \xe2\x80\x94 we rebuild on PostLoad.\n" },
#endif
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quick lookup buckets for nearest-node queries. Keyed by floor(lat*BucketScale)+floor(lng*BucketScale)*offset.\nPopulated by BuildSpatialIndex; not serialized \xe2\x80\x94 we rebuild on PostLoad." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatialBucketNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatialBucketDegrees_MetaData[] = {
		{ "Category", "Bounds" },
		{ "ModuleRelativePath", "Public/RoadGraphAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadGraphAsset constinit property declarations **************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BoundsNorth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BoundsSouth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BoundsEast;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BoundsWest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BakeZoom;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceTileset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Edges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Edges;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpatialBucketStart_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpatialBucketStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpatialBucketNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpatialBucketNodes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpatialBucketDegrees;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadGraphAsset constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadGraphAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URoadGraphAsset_Statics

// ********** Begin Class URoadGraphAsset Property Definitions *************************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_BoundsNorth = { "BoundsNorth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoadGraphAsset, BoundsNorth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsNorth_MetaData), NewProp_BoundsNorth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_BoundsSouth = { "BoundsSouth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoadGraphAsset, BoundsSouth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsSouth_MetaData), NewProp_BoundsSouth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_BoundsEast = { "BoundsEast", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoadGraphAsset, BoundsEast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsEast_MetaData), NewProp_BoundsEast_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_BoundsWest = { "BoundsWest", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoadGraphAsset, BoundsWest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsWest_MetaData), NewProp_BoundsWest_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_BakeZoom = { "BakeZoom", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoadGraphAsset, BakeZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeZoom_MetaData), NewProp_BakeZoom_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_SourceTileset = { "SourceTileset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoadGraphAsset, SourceTileset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTileset_MetaData), NewProp_SourceTileset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoadGraphNode, METADATA_PARAMS(0, nullptr) }; // 843581025
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoadGraphAsset, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) }; // 843581025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoadGraphEdge, METADATA_PARAMS(0, nullptr) }; // 1400335958
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoadGraphAsset, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Edges_MetaData), NewProp_Edges_MetaData) }; // 1400335958
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_SpatialBucketStart_Inner = { "SpatialBucketStart", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_SpatialBucketStart = { "SpatialBucketStart", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoadGraphAsset, SpatialBucketStart), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatialBucketStart_MetaData), NewProp_SpatialBucketStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_SpatialBucketNodes_Inner = { "SpatialBucketNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_SpatialBucketNodes = { "SpatialBucketNodes", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoadGraphAsset, SpatialBucketNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatialBucketNodes_MetaData), NewProp_SpatialBucketNodes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_SpatialBucketDegrees = { "SpatialBucketDegrees", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoadGraphAsset, SpatialBucketDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatialBucketDegrees_MetaData), NewProp_SpatialBucketDegrees_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoadGraphAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_BoundsNorth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_BoundsSouth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_BoundsEast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_BoundsWest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_BakeZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_SourceTileset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_Edges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_Edges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_SpatialBucketStart_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_SpatialBucketStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_SpatialBucketNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_SpatialBucketNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadGraphAsset_Statics::NewProp_SpatialBucketDegrees,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoadGraphAsset_Statics::PropPointers) < 2048);
// ********** End Class URoadGraphAsset Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_URoadGraphAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MapboxLandscapePaths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoadGraphAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoadGraphAsset_Statics::ClassParams = {
	&URoadGraphAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URoadGraphAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URoadGraphAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoadGraphAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_URoadGraphAsset_Statics::Class_MetaDataParams)
};
void URoadGraphAsset::StaticRegisterNativesURoadGraphAsset()
{
}
UClass* Z_Construct_UClass_URoadGraphAsset()
{
	if (!Z_Registration_Info_UClass_URoadGraphAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadGraphAsset.OuterSingleton, Z_Construct_UClass_URoadGraphAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadGraphAsset.OuterSingleton;
}
URoadGraphAsset::URoadGraphAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadGraphAsset);
URoadGraphAsset::~URoadGraphAsset() {}
// ********** End Class URoadGraphAsset ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h__Script_MapboxLandscapePaths_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERoadClass_StaticEnum, TEXT("ERoadClass"), &Z_Registration_Info_UEnum_ERoadClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2597123898U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRoadGraphNode::StaticStruct, Z_Construct_UScriptStruct_FRoadGraphNode_Statics::NewStructOps, TEXT("RoadGraphNode"),&Z_Registration_Info_UScriptStruct_FRoadGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadGraphNode), 843581025U) },
		{ FRoadGraphEdge::StaticStruct, Z_Construct_UScriptStruct_FRoadGraphEdge_Statics::NewStructOps, TEXT("RoadGraphEdge"),&Z_Registration_Info_UScriptStruct_FRoadGraphEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadGraphEdge), 1400335958U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadGraphAsset, URoadGraphAsset::StaticClass, TEXT("URoadGraphAsset"), &Z_Registration_Info_UClass_URoadGraphAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadGraphAsset), 3416989018U) },
	};
}; // Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h__Script_MapboxLandscapePaths_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h__Script_MapboxLandscapePaths_2627473548{
	TEXT("/Script/MapboxLandscapePaths"),
	Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h__Script_MapboxLandscapePaths_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h__Script_MapboxLandscapePaths_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h__Script_MapboxLandscapePaths_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h__Script_MapboxLandscapePaths_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h__Script_MapboxLandscapePaths_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h__Script_MapboxLandscapePaths_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
