// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PathDefinition.h"

#ifdef MAPBOXLANDSCAPEPATHS_PathDefinition_generated_h
#error "PathDefinition.generated.h already included, missing '#pragma once' in PathDefinition.h"
#endif
#define MAPBOXLANDSCAPEPATHS_PathDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPathPoint ********************************************************
struct Z_Construct_UScriptStruct_FPathPoint_Statics;
#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPathPoint_Statics; \
	MAPBOXLANDSCAPEPATHS_API static class UScriptStruct* StaticStruct();


struct FPathPoint;
// ********** End ScriptStruct FPathPoint **********************************************************

// ********** Begin Class UPathDefinition **********************************************************
struct Z_Construct_UClass_UPathDefinition_Statics;
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_UPathDefinition_NoRegister();

#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathDefinition(); \
	friend struct ::Z_Construct_UClass_UPathDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MAPBOXLANDSCAPEPATHS_API UClass* ::Z_Construct_UClass_UPathDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(UPathDefinition, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MapboxLandscapePaths"), Z_Construct_UClass_UPathDefinition_NoRegister) \
	DECLARE_SERIALIZER(UPathDefinition)


#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPathDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPathDefinition(UPathDefinition&&) = delete; \
	UPathDefinition(const UPathDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathDefinition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathDefinition) \
	NO_API virtual ~UPathDefinition();


#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h_42_PROLOG
#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h_45_INCLASS_NO_PURE_DECLS \
	FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPathDefinition;

// ********** End Class UPathDefinition ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_PathDefinition_h

// ********** Begin Enum EPathSource ***************************************************************
#define FOREACH_ENUM_EPATHSOURCE(op) \
	op(EPathSource::Manual) \
	op(EPathSource::RoadGraph) \
	op(EPathSource::MapboxDirections) 

enum class EPathSource : uint8;
template<> struct TIsUEnumClass<EPathSource> { enum { Value = true }; };
template<> MAPBOXLANDSCAPEPATHS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPathSource>();
// ********** End Enum EPathSource *****************************************************************

// ********** Begin Enum EPathStyle ****************************************************************
#define FOREACH_ENUM_EPATHSTYLE(op) \
	op(EPathStyle::Solid) \
	op(EPathStyle::Dashed) \
	op(EPathStyle::Arrows) \
	op(EPathStyle::Pulse) 

enum class EPathStyle : uint8;
template<> struct TIsUEnumClass<EPathStyle> { enum { Value = true }; };
template<> MAPBOXLANDSCAPEPATHS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPathStyle>();
// ********** End Enum EPathStyle ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
