// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/Core/FPGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPGameModeBase();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References

// Begin Class AFPGameModeBase
void AFPGameModeBase::StaticRegisterNativesAFPGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPGameModeBase);
UClass* Z_Construct_UClass_AFPGameModeBase_NoRegister()
{
	return AFPGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AFPGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/FPGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Core/FPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPGameModeBase_Statics::ClassParams = {
	&AFPGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPGameModeBase()
{
	if (!Z_Registration_Info_UClass_AFPGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPGameModeBase.OuterSingleton, Z_Construct_UClass_AFPGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPGameModeBase.OuterSingleton;
}
template<> FIRSTPROJECT_API UClass* StaticClass<AFPGameModeBase>()
{
	return AFPGameModeBase::StaticClass();
}
AFPGameModeBase::AFPGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPGameModeBase);
AFPGameModeBase::~AFPGameModeBase() {}
// End Class AFPGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPGameModeBase, AFPGameModeBase::StaticClass, TEXT("AFPGameModeBase"), &Z_Registration_Info_UClass_AFPGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPGameModeBase), 474634310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPGameModeBase_h_3866361403(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
