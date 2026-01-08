// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/Actors/FPBomb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPBomb() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPBomb();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPBomb_NoRegister();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPLamp_NoRegister();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPMeshActorBase();
FIRSTPROJECT_API UClass* Z_Construct_UClass_UInteract_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References

// Begin Class AFPBomb Function Explode
struct Z_Construct_UFunction_AFPBomb_Explode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/FPBomb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPBomb_Explode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPBomb, nullptr, "Explode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPBomb_Explode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPBomb_Explode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFPBomb_Explode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPBomb_Explode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPBomb::execExplode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Explode();
	P_NATIVE_END;
}
// End Class AFPBomb Function Explode

// Begin Class AFPBomb Function StartIgnite
static FName NAME_AFPBomb_StartIgnite = FName(TEXT("StartIgnite"));
void AFPBomb::StartIgnite()
{
	ProcessEvent(FindFunctionChecked(NAME_AFPBomb_StartIgnite),NULL);
}
struct Z_Construct_UFunction_AFPBomb_StartIgnite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/FPBomb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPBomb_StartIgnite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPBomb, nullptr, "StartIgnite", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPBomb_StartIgnite_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPBomb_StartIgnite_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFPBomb_StartIgnite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPBomb_StartIgnite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPBomb::execStartIgnite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartIgnite_Implementation();
	P_NATIVE_END;
}
// End Class AFPBomb Function StartIgnite

// Begin Class AFPBomb
void AFPBomb::StaticRegisterNativesAFPBomb()
{
	UClass* Class = AFPBomb::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Explode", &AFPBomb::execExplode },
		{ "StartIgnite", &AFPBomb::execStartIgnite },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPBomb);
UClass* Z_Construct_UClass_AFPBomb_NoRegister()
{
	return AFPBomb::StaticClass();
}
struct Z_Construct_UClass_AFPBomb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/FPBomb.h" },
		{ "ModuleRelativePath", "Public/Actors/FPBomb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LampRefCpp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Actor Reference" },
		{ "ModuleRelativePath", "Public/Actors/FPBomb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CodeMaterialInstance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ignition" },
		{ "ModuleRelativePath", "Public/Actors/FPBomb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgniteDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ignition" },
		{ "ModuleRelativePath", "Public/Actors/FPBomb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LampRefCpp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CodeMaterialInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IgniteDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPBomb_Explode, "Explode" }, // 3666882503
		{ &Z_Construct_UFunction_AFPBomb_StartIgnite, "StartIgnite" }, // 1972810797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPBomb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPBomb_Statics::NewProp_LampRefCpp = { "LampRefCpp", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPBomb, LampRefCpp), Z_Construct_UClass_AFPLamp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LampRefCpp_MetaData), NewProp_LampRefCpp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPBomb_Statics::NewProp_CodeMaterialInstance = { "CodeMaterialInstance", nullptr, (EPropertyFlags)0x0144000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPBomb, CodeMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CodeMaterialInstance_MetaData), NewProp_CodeMaterialInstance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPBomb_Statics::NewProp_IgniteDuration = { "IgniteDuration", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPBomb, IgniteDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgniteDuration_MetaData), NewProp_IgniteDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPBomb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPBomb_Statics::NewProp_LampRefCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPBomb_Statics::NewProp_CodeMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPBomb_Statics::NewProp_IgniteDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPBomb_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPBomb_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFPMeshActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPBomb_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFPBomb_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteract_NoRegister, (int32)VTABLE_OFFSET(AFPBomb, IInteract), false },  // 1695184156
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPBomb_Statics::ClassParams = {
	&AFPBomb::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPBomb_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPBomb_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPBomb_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPBomb_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPBomb()
{
	if (!Z_Registration_Info_UClass_AFPBomb.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPBomb.OuterSingleton, Z_Construct_UClass_AFPBomb_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPBomb.OuterSingleton;
}
template<> FIRSTPROJECT_API UClass* StaticClass<AFPBomb>()
{
	return AFPBomb::StaticClass();
}
AFPBomb::AFPBomb() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPBomb);
AFPBomb::~AFPBomb() {}
// End Class AFPBomb

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPBomb, AFPBomb::StaticClass, TEXT("AFPBomb"), &Z_Registration_Info_UClass_AFPBomb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPBomb), 1370222754U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_894157369(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
