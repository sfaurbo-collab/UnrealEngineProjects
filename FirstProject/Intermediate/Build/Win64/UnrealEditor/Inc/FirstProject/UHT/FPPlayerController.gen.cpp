// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/Core/FPPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPPlayerController();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References

// Begin Class AFPPlayerController
void AFPPlayerController::StaticRegisterNativesAFPPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPPlayerController);
UClass* Z_Construct_UClass_AFPPlayerController_NoRegister()
{
	return AFPPlayerController::StaticClass();
}
struct Z_Construct_UClass_AFPPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Core/FPPlayerController.h" },
		{ "ModuleRelativePath", "Public/Core/FPPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPPlayerController_Statics::ClassParams = {
	&AFPPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPPlayerController()
{
	if (!Z_Registration_Info_UClass_AFPPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPPlayerController.OuterSingleton, Z_Construct_UClass_AFPPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPPlayerController.OuterSingleton;
}
template<> FIRSTPROJECT_API UClass* StaticClass<AFPPlayerController>()
{
	return AFPPlayerController::StaticClass();
}
AFPPlayerController::AFPPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPPlayerController);
AFPPlayerController::~AFPPlayerController() {}
// End Class AFPPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPPlayerController, AFPPlayerController::StaticClass, TEXT("AFPPlayerController"), &Z_Registration_Info_UClass_AFPPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPPlayerController), 1192339554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPPlayerController_h_2231734233(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
