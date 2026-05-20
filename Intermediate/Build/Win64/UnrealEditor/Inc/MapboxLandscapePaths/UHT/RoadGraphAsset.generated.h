// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadGraphAsset.h"

#ifdef MAPBOXLANDSCAPEPATHS_RoadGraphAsset_generated_h
#error "RoadGraphAsset.generated.h already included, missing '#pragma once' in RoadGraphAsset.h"
#endif
#define MAPBOXLANDSCAPEPATHS_RoadGraphAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRoadGraphNode ****************************************************
struct Z_Construct_UScriptStruct_FRoadGraphNode_Statics;
#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadGraphNode_Statics; \
	MAPBOXLANDSCAPEPATHS_API static class UScriptStruct* StaticStruct();


struct FRoadGraphNode;
// ********** End ScriptStruct FRoadGraphNode ******************************************************

// ********** Begin ScriptStruct FRoadGraphEdge ****************************************************
struct Z_Construct_UScriptStruct_FRoadGraphEdge_Statics;
#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadGraphEdge_Statics; \
	MAPBOXLANDSCAPEPATHS_API static class UScriptStruct* StaticStruct();


struct FRoadGraphEdge;
// ********** End ScriptStruct FRoadGraphEdge ******************************************************

// ********** Begin Class URoadGraphAsset **********************************************************
struct Z_Construct_UClass_URoadGraphAsset_Statics;
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_URoadGraphAsset_NoRegister();

#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoadGraphAsset(); \
	friend struct ::Z_Construct_UClass_URoadGraphAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MAPBOXLANDSCAPEPATHS_API UClass* ::Z_Construct_UClass_URoadGraphAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(URoadGraphAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MapboxLandscapePaths"), Z_Construct_UClass_URoadGraphAsset_NoRegister) \
	DECLARE_SERIALIZER(URoadGraphAsset)


#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadGraphAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadGraphAsset(URoadGraphAsset&&) = delete; \
	URoadGraphAsset(const URoadGraphAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadGraphAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadGraphAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadGraphAsset) \
	NO_API virtual ~URoadGraphAsset();


#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h_66_PROLOG
#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h_69_INCLASS_NO_PURE_DECLS \
	FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadGraphAsset;

// ********** End Class URoadGraphAsset ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_RoadGraphAsset_h

// ********** Begin Enum ERoadClass ****************************************************************
#define FOREACH_ENUM_EROADCLASS(op) \
	op(ERoadClass::Motorway) \
	op(ERoadClass::Trunk) \
	op(ERoadClass::Primary) \
	op(ERoadClass::Secondary) \
	op(ERoadClass::Tertiary) \
	op(ERoadClass::Residential) \
	op(ERoadClass::Service) \
	op(ERoadClass::Pedestrian) \
	op(ERoadClass::Track) \
	op(ERoadClass::Other) 

enum class ERoadClass : uint8;
template<> struct TIsUEnumClass<ERoadClass> { enum { Value = true }; };
template<> MAPBOXLANDSCAPEPATHS_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadClass>();
// ********** End Enum ERoadClass ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
