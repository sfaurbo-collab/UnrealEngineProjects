// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/Core/FPCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPCharacter();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References

// Begin Class AFPCharacter
void AFPCharacter::StaticRegisterNativesAFPCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPCharacter);
UClass* Z_Construct_UClass_AFPCharacter_NoRegister()
{
	return AFPCharacter::StaticClass();
}
struct Z_Construct_UClass_AFPCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/FPCharacter.h" },
		{ "ModuleRelativePath", "Public/Core/FPCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPCharacter_Statics::ClassParams = {
	&AFPCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPCharacter()
{
	if (!Z_Registration_Info_UClass_AFPCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPCharacter.OuterSingleton, Z_Construct_UClass_AFPCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPCharacter.OuterSingleton;
}
template<> FIRSTPROJECT_API UClass* StaticClass<AFPCharacter>()
{
	return AFPCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPCharacter);
AFPCharacter::~AFPCharacter() {}
// End Class AFPCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPCharacter, AFPCharacter::StaticClass, TEXT("AFPCharacter"), &Z_Registration_Info_UClass_AFPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPCharacter), 1525399686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacter_h_1703017082(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
