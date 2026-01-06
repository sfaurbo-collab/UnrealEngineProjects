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
UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Actors/FPLamp.h" },
		{ "ModuleRelativePath", "Public/Actors/FPLamp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPLamp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPLamp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFPMeshActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPLamp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPLamp_Statics::ClassParams = {
	&AFPLamp::StaticClass,
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
		{ Z_Construct_UClass_AFPLamp, AFPLamp::StaticClass, TEXT("AFPLamp"), &Z_Registration_Info_UClass_AFPLamp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPLamp), 3626710070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_3748684121(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
