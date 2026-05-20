// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MissionPathActor.h"

#ifdef MAPBOXLANDSCAPEPATHS_MissionPathActor_generated_h
#error "MissionPathActor.generated.h already included, missing '#pragma once' in MissionPathActor.h"
#endif
#define MAPBOXLANDSCAPEPATHS_MissionPathActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMissionPathActor ********************************************************
#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAlignToMapboxLandscape); \
	DECLARE_FUNCTION(execClearResult); \
	DECLARE_FUNCTION(execComputePath);


struct Z_Construct_UClass_AMissionPathActor_Statics;
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_AMissionPathActor_NoRegister();

#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMissionPathActor(); \
	friend struct ::Z_Construct_UClass_AMissionPathActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MAPBOXLANDSCAPEPATHS_API UClass* ::Z_Construct_UClass_AMissionPathActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMissionPathActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MapboxLandscapePaths"), Z_Construct_UClass_AMissionPathActor_NoRegister) \
	DECLARE_SERIALIZER(AMissionPathActor)


#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMissionPathActor(AMissionPathActor&&) = delete; \
	AMissionPathActor(const AMissionPathActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissionPathActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissionPathActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMissionPathActor) \
	NO_API virtual ~AMissionPathActor();


#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h_13_PROLOG
#define FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMissionPathActor;

// ********** End Class AMissionPathActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
