// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/Core/FPCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPCharacterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPCharacterBase();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPCharacterBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References

// Begin Class AFPCharacterBase
void AFPCharacterBase::StaticRegisterNativesAFPCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPCharacterBase);
UClass* Z_Construct_UClass_AFPCharacterBase_NoRegister()
{
	return AFPCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AFPCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/FPCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Core/FPCharacterBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPCharacterBase_Statics::ClassParams = {
	&AFPCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPCharacterBase()
{
	if (!Z_Registration_Info_UClass_AFPCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPCharacterBase.OuterSingleton, Z_Construct_UClass_AFPCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPCharacterBase.OuterSingleton;
}
template<> FIRSTPROJECT_API UClass* StaticClass<AFPCharacterBase>()
{
	return AFPCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPCharacterBase);
AFPCharacterBase::~AFPCharacterBase() {}
// End Class AFPCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPCharacterBase, AFPCharacterBase::StaticClass, TEXT("AFPCharacterBase"), &Z_Registration_Info_UClass_AFPCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPCharacterBase), 3743853146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_3437100373(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
