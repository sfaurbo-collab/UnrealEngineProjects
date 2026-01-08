// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/Actors/FPLamp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPLamp() {}

// Begin Cross Module References
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

// Begin Class AFPLamp
void AFPLamp::StaticRegisterNativesAFPLamp()
{
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
	nullptr,
	Z_Construct_UClass_AFPLamp_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPLamp, AFPLamp::StaticClass, TEXT("AFPLamp"), &Z_Registration_Info_UClass_AFPLamp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPLamp), 2564577382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_2767622375(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
