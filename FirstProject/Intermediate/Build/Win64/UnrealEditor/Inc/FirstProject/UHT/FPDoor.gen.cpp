// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/Actors/FPDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPDoor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPDoor();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPDoor_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References

// Begin Class AFPDoor
void AFPDoor::StaticRegisterNativesAFPDoor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPDoor);
UClass* Z_Construct_UClass_AFPDoor_NoRegister()
{
	return AFPDoor::StaticClass();
}
struct Z_Construct_UClass_AFPDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/FPDoor.h" },
		{ "ModuleRelativePath", "Public/Actors/FPDoor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPDoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPDoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPDoor_Statics::ClassParams = {
	&AFPDoor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPDoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPDoor()
{
	if (!Z_Registration_Info_UClass_AFPDoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPDoor.OuterSingleton, Z_Construct_UClass_AFPDoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPDoor.OuterSingleton;
}
template<> FIRSTPROJECT_API UClass* StaticClass<AFPDoor>()
{
	return AFPDoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPDoor);
AFPDoor::~AFPDoor() {}
// End Class AFPDoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPDoor, AFPDoor::StaticClass, TEXT("AFPDoor"), &Z_Registration_Info_UClass_AFPDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPDoor), 2267538110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_2104786043(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
