// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MissionPathActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMissionPathActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_AMissionPathActor();
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_AMissionPathActor_NoRegister();
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_UPathDefinition_NoRegister();
MAPBOXLANDSCAPEPATHS_API UClass* Z_Construct_UClass_URoadGraphAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_MapboxLandscapePaths();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMissionPathActor Function AlignToMapboxLandscape ************************
struct Z_Construct_UFunction_AMissionPathActor_AlignToMapboxLandscape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Path|Actions" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attaches this actor to the active MapboxLandscape actor. Useful if you moved the landscape and want the path to follow." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AlignToMapboxLandscape constinit property declarations ****************
// ********** End Function AlignToMapboxLandscape constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMissionPathActor_AlignToMapboxLandscape_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMissionPathActor, nullptr, "AlignToMapboxLandscape", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMissionPathActor_AlignToMapboxLandscape_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMissionPathActor_AlignToMapboxLandscape_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMissionPathActor_AlignToMapboxLandscape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMissionPathActor_AlignToMapboxLandscape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMissionPathActor::execAlignToMapboxLandscape)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AlignToMapboxLandscape();
	P_NATIVE_END;
}
// ********** End Class AMissionPathActor Function AlignToMapboxLandscape **************************

// ********** Begin Class AMissionPathActor Function ClearResult ***********************************
struct Z_Construct_UFunction_AMissionPathActor_ClearResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Path|Actions" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearResult constinit property declarations ***************************
// ********** End Function ClearResult constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMissionPathActor_ClearResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMissionPathActor, nullptr, "ClearResult", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMissionPathActor_ClearResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMissionPathActor_ClearResult_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMissionPathActor_ClearResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMissionPathActor_ClearResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMissionPathActor::execClearResult)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearResult();
	P_NATIVE_END;
}
// ********** End Class AMissionPathActor Function ClearResult *************************************

// ********** Begin Class AMissionPathActor Function ComputePath ***********************************
struct Z_Construct_UFunction_AMissionPathActor_ComputePath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Path|Actions" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run A* on the baked road graph between Start handle and End handle (through IntermediateWaypoints if any). Result is shown as a spline and optionally saved to OutputAsset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ComputePath constinit property declarations ***************************
// ********** End Function ComputePath constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMissionPathActor_ComputePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMissionPathActor, nullptr, "ComputePath", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMissionPathActor_ComputePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMissionPathActor_ComputePath_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMissionPathActor_ComputePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMissionPathActor_ComputePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMissionPathActor::execComputePath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComputePath();
	P_NATIVE_END;
}
// ********** End Class AMissionPathActor Function ComputePath *************************************

// ********** Begin Class AMissionPathActor ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMissionPathActor;
UClass* AMissionPathActor::GetPrivateStaticClass()
{
	using TClass = AMissionPathActor;
	if (!Z_Registration_Info_UClass_AMissionPathActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MissionPathActor"),
			Z_Registration_Info_UClass_AMissionPathActor.InnerSingleton,
			StaticRegisterNativesAMissionPathActor,
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
	return Z_Registration_Info_UClass_AMissionPathActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMissionPathActor_NoRegister()
{
	return AMissionPathActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMissionPathActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MissionPathActor.h" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartHandle_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndHandle_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultSpline_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "Category", "Path|Source" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Baked road graph. Required when Source = RoadGraph." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateWaypoints_MetaData[] = {
		{ "Category", "Path|Source" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional intermediate waypoints (world positions). A* will route through these in order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapDistanceMeters_MetaData[] = {
		{ "Category", "Path|Source" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapResultToGround_MetaData[] = {
		{ "Category", "Path|Source" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputAsset_MetaData[] = {
		{ "Category", "Path|Output" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set, Compute writes the resulting polyline into this asset. Create with right-click > Miscellaneous > Data Asset > PathDefinition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttachToMapboxLandscape_MetaData[] = {
		{ "Category", "Path|Alignment" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attach this actor to the first MapboxLandscapeActor in the level so moving the landscape moves the path." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastResultPointCount_MetaData[] = {
		{ "Category", "Path|Result" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastResultLengthMeters_MetaData[] = {
		{ "Category", "Path|Result" },
		{ "ModuleRelativePath", "Public/MissionPathActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMissionPathActor constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultSpline;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntermediateWaypoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntermediateWaypoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapDistanceMeters;
	static void NewProp_bSnapResultToGround_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapResultToGround;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OutputAsset;
	static void NewProp_bAttachToMapboxLandscape_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachToMapboxLandscape;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastResultPointCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastResultLengthMeters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMissionPathActor constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AlignToMapboxLandscape"), .Pointer = &AMissionPathActor::execAlignToMapboxLandscape },
		{ .NameUTF8 = UTF8TEXT("ClearResult"), .Pointer = &AMissionPathActor::execClearResult },
		{ .NameUTF8 = UTF8TEXT("ComputePath"), .Pointer = &AMissionPathActor::execComputePath },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMissionPathActor_AlignToMapboxLandscape, "AlignToMapboxLandscape" }, // 3435211364
		{ &Z_Construct_UFunction_AMissionPathActor_ClearResult, "ClearResult" }, // 3102897999
		{ &Z_Construct_UFunction_AMissionPathActor_ComputePath, "ComputePath" }, // 1799400107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMissionPathActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMissionPathActor_Statics

// ********** Begin Class AMissionPathActor Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMissionPathActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMissionPathActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMissionPathActor_Statics::NewProp_StartHandle = { "StartHandle", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMissionPathActor, StartHandle), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartHandle_MetaData), NewProp_StartHandle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMissionPathActor_Statics::NewProp_EndHandle = { "EndHandle", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMissionPathActor, EndHandle), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndHandle_MetaData), NewProp_EndHandle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMissionPathActor_Statics::NewProp_ResultSpline = { "ResultSpline", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMissionPathActor, ResultSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultSpline_MetaData), NewProp_ResultSpline_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMissionPathActor_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMissionPathActor, Graph), Z_Construct_UClass_URoadGraphAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMissionPathActor_Statics::NewProp_IntermediateWaypoints_Inner = { "IntermediateWaypoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMissionPathActor_Statics::NewProp_IntermediateWaypoints = { "IntermediateWaypoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMissionPathActor, IntermediateWaypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntermediateWaypoints_MetaData), NewProp_IntermediateWaypoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMissionPathActor_Statics::NewProp_SnapDistanceMeters = { "SnapDistanceMeters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMissionPathActor, SnapDistanceMeters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapDistanceMeters_MetaData), NewProp_SnapDistanceMeters_MetaData) };
void Z_Construct_UClass_AMissionPathActor_Statics::NewProp_bSnapResultToGround_SetBit(void* Obj)
{
	((AMissionPathActor*)Obj)->bSnapResultToGround = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMissionPathActor_Statics::NewProp_bSnapResultToGround = { "bSnapResultToGround", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMissionPathActor), &Z_Construct_UClass_AMissionPathActor_Statics::NewProp_bSnapResultToGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapResultToGround_MetaData), NewProp_bSnapResultToGround_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMissionPathActor_Statics::NewProp_OutputAsset = { "OutputAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMissionPathActor, OutputAsset), Z_Construct_UClass_UPathDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputAsset_MetaData), NewProp_OutputAsset_MetaData) };
void Z_Construct_UClass_AMissionPathActor_Statics::NewProp_bAttachToMapboxLandscape_SetBit(void* Obj)
{
	((AMissionPathActor*)Obj)->bAttachToMapboxLandscape = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMissionPathActor_Statics::NewProp_bAttachToMapboxLandscape = { "bAttachToMapboxLandscape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMissionPathActor), &Z_Construct_UClass_AMissionPathActor_Statics::NewProp_bAttachToMapboxLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttachToMapboxLandscape_MetaData), NewProp_bAttachToMapboxLandscape_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMissionPathActor_Statics::NewProp_LastResultPointCount = { "LastResultPointCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMissionPathActor, LastResultPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastResultPointCount_MetaData), NewProp_LastResultPointCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMissionPathActor_Statics::NewProp_LastResultLengthMeters = { "LastResultLengthMeters", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMissionPathActor, LastResultLengthMeters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastResultLengthMeters_MetaData), NewProp_LastResultLengthMeters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMissionPathActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPathActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPathActor_Statics::NewProp_StartHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPathActor_Statics::NewProp_EndHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPathActor_Statics::NewProp_ResultSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPathActor_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPathActor_Statics::NewProp_IntermediateWaypoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPathActor_Statics::NewProp_IntermediateWaypoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPathActor_Statics::NewProp_SnapDistanceMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPathActor_Statics::NewProp_bSnapResultToGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPathActor_Statics::NewProp_OutputAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPathActor_Statics::NewProp_bAttachToMapboxLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPathActor_Statics::NewProp_LastResultPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPathActor_Statics::NewProp_LastResultLengthMeters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMissionPathActor_Statics::PropPointers) < 2048);
// ********** End Class AMissionPathActor Property Definitions *************************************
UObject* (*const Z_Construct_UClass_AMissionPathActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MapboxLandscapePaths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMissionPathActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMissionPathActor_Statics::ClassParams = {
	&AMissionPathActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMissionPathActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMissionPathActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMissionPathActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMissionPathActor_Statics::Class_MetaDataParams)
};
void AMissionPathActor::StaticRegisterNativesAMissionPathActor()
{
	UClass* Class = AMissionPathActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AMissionPathActor_Statics::Funcs));
}
UClass* Z_Construct_UClass_AMissionPathActor()
{
	if (!Z_Registration_Info_UClass_AMissionPathActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMissionPathActor.OuterSingleton, Z_Construct_UClass_AMissionPathActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMissionPathActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMissionPathActor);
AMissionPathActor::~AMissionPathActor() {}
// ********** End Class AMissionPathActor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h__Script_MapboxLandscapePaths_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMissionPathActor, AMissionPathActor::StaticClass, TEXT("AMissionPathActor"), &Z_Registration_Info_UClass_AMissionPathActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMissionPathActor), 1556332776U) },
	};
}; // Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h__Script_MapboxLandscapePaths_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h__Script_MapboxLandscapePaths_2656864341{
	TEXT("/Script/MapboxLandscapePaths"),
	Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h__Script_MapboxLandscapePaths_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Airmuseum_Plugins_MapboxLandscapePaths_Source_MapboxLandscapePaths_Public_MissionPathActor_h__Script_MapboxLandscapePaths_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
