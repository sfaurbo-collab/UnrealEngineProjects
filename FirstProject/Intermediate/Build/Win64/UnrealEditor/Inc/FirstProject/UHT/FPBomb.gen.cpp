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
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPBomb();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPBomb_NoRegister();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPMeshActorBase();
UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References

// Begin Class AFPBomb
void AFPBomb::StaticRegisterNativesAFPBomb()
{
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Actors/FPBomb.h" },
		{ "ModuleRelativePath", "Public/Actors/FPBomb.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPBomb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPBomb_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFPMeshActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPBomb_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPBomb_Statics::ClassParams = {
	&AFPBomb::StaticClass,
	"Engine",
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
		{ Z_Construct_UClass_AFPBomb, AFPBomb::StaticClass, TEXT("AFPBomb"), &Z_Registration_Info_UClass_AFPBomb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPBomb), 1045129638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_1499481861(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
