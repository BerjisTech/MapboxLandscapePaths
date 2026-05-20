// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MissionPathLibrary.h"

#ifdef MAPBOXLANDSCAPEPATHS_MissionPathLibrary_generated_h
#error "MissionPathLibrary.generated.h already included, missing '#pragma once' in MissionPathLibrary.h"
#endif
#define MAPBOXLANDSCAPEPATHS_MissionPathLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPathDefinition;
class URoadGraphAsset;
struct FMapboxLandscapeContext;

// ********** Begin ScriptStruct FMapboxLandscapeContext *******************************************
struct Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics;
#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMapboxLandscapeContext_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMapboxLandscapeContext;
// ********** End ScriptStruct FMapboxLandscapeContext *********************************************

// ********** Begin Class UMissionPathLibrary ******************************************************
#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBakeRoadGraphFromActiveContext); \
	DECLARE_FUNCTION(execFindPath); \
	DECLARE_FUNCTION(execResolvePathPoints); \
	DECLARE_FUNCTION(execSnapToLandscapeHeight); \
	DECLARE_FUNCTION(execWorldToLatLng); \
	DECLARE_FUNCTION(execLatLngToWorld); \
	DECLARE_FUNCTION(execGetActiveMapboxContext);


struct Z_Construct_UClass_UMissionPathLibrary_Statics;
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_UMissionPathLibrary_NoRegister();

#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMissionPathLibrary(); \
	friend struct ::Z_Construct_UClass_UMissionPathLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MAPBOXLANDSCAPEPATHS_API UClass* ::Z_Construct_UClass_UMissionPathLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMissionPathLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MapboxLandscapePaths"), Z_Construct_UClass_UMissionPathLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMissionPathLibrary)


#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMissionPathLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMissionPathLibrary(UMissionPathLibrary&&) = delete; \
	UMissionPathLibrary(const UMissionPathLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMissionPathLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMissionPathLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMissionPathLibrary) \
	NO_API virtual ~UMissionPathLibrary();


#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h_59_PROLOG
#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h_62_INCLASS_NO_PURE_DECLS \
	FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMissionPathLibrary;

// ********** End Class UMissionPathLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
