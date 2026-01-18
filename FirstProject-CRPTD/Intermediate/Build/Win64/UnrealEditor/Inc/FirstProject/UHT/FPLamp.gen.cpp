// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/Actors/FPLamp.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPLamp() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPLamp();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPLamp_NoRegister();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPMeshActorBase();
FIRSTPROJECT_API UClass* Z_Construct_UClass_UInteract_NoRegister();
FIRSTPROJECT_API UFunction* Z_Construct_UDelegateFunction_FirstProject_LightSwitchedOnSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References

// Begin Delegate FLightSwitchedOnSignature
struct Z_Construct_UDelegateFunction_FirstProject_LightSwitchedOnSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/FPLamp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstProject_LightSwitchedOnSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstProject, nullptr, "LightSwitchedOnSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstProject_LightSwitchedOnSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FirstProject_LightSwitchedOnSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_FirstProject_LightSwitchedOnSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FirstProject_LightSwitchedOnSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLightSwitchedOnSignature_DelegateWrapper(const FMulticastScriptDelegate& LightSwitchedOnSignature)
{
	LightSwitchedOnSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FLightSwitchedOnSignature

// Begin Class AFPLamp Function OverlapBegin
struct Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics
{
	struct FPLamp_eventOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/FPLamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPLamp_eventOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPLamp_eventOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPLamp_eventOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPLamp_eventOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((FPLamp_eventOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPLamp_eventOverlapBegin_Parms), &Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPLamp_eventOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPLamp, nullptr, "OverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::FPLamp_eventOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::FPLamp_eventOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPLamp_OverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPLamp_OverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPLamp::execOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AFPLamp Function OverlapBegin

// Begin Class AFPLamp
void AFPLamp::StaticRegisterNativesAFPLamp()
{
	UClass* Class = AFPLamp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OverlapBegin", &AFPLamp::execOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPLamp);
UClass* Z_Construct_UClass_AFPLamp_NoRegister()
{
	return AFPLamp::StaticClass();
}
struct Z_Construct_UClass_AFPLamp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/FPLamp.h" },
		{ "ModuleRelativePath", "Public/Actors/FPLamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLightSwitchedOnDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/FPLamp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLightSwitchedOnDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPLamp_OverlapBegin, "OverlapBegin" }, // 2712941369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPLamp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPLamp_Statics::NewProp_OnLightSwitchedOnDelegate = { "OnLightSwitchedOnDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPLamp, OnLightSwitchedOnDelegate), Z_Construct_UDelegateFunction_FirstProject_LightSwitchedOnSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLightSwitchedOnDelegate_MetaData), NewProp_OnLightSwitchedOnDelegate_MetaData) }; // 4204907971
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPLamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPLamp_Statics::NewProp_OnLightSwitchedOnDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPLamp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPLamp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFPMeshActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPLamp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFPLamp_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteract_NoRegister, (int32)VTABLE_OFFSET(AFPLamp, IInteract), false },  // 1695184156
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPLamp_Statics::ClassParams = {
	&AFPLamp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPLamp_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPLamp_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPLamp_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPLamp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPLamp()
{
	if (!Z_Registration_Info_UClass_AFPLamp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPLamp.OuterSingleton, Z_Construct_UClass_AFPLamp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPLamp.OuterSingleton;
}
template<> FIRSTPROJECT_API UClass* StaticClass<AFPLamp>()
{
	return AFPLamp::StaticClass();
}
AFPLamp::AFPLamp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPLamp);
AFPLamp::~AFPLamp() {}
// End Class AFPLamp

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Actors_FPLamp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPLamp, AFPLamp::StaticClass, TEXT("AFPLamp"), &Z_Registration_Info_UClass_AFPLamp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPLamp), 2133759230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Actors_FPLamp_h_1781246289(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Actors_FPLamp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Actors_FPLamp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
