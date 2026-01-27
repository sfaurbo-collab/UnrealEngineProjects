// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/MPGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMPGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYPROJECT_API UClass* Z_Construct_UClass_AMPGameModeBase();
MYPROJECT_API UClass* Z_Construct_UClass_AMPGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMPGameModeBase **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMPGameModeBase;
UClass* AMPGameModeBase::GetPrivateStaticClass()
{
	using TClass = AMPGameModeBase;
	if (!Z_Registration_Info_UClass_AMPGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MPGameModeBase"),
			Z_Registration_Info_UClass_AMPGameModeBase.InnerSingleton,
			StaticRegisterNativesAMPGameModeBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMPGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AMPGameModeBase_NoRegister()
{
	return AMPGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMPGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/MPGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Core/MPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMPGameModeBase constinit property declarations **************************
// ********** End Class AMPGameModeBase constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMPGameModeBase_Statics
UObject* (*const Z_Construct_UClass_AMPGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPGameModeBase_Statics::ClassParams = {
	&AMPGameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMPGameModeBase_Statics::Class_MetaDataParams)
};
void AMPGameModeBase::StaticRegisterNativesAMPGameModeBase()
{
}
UClass* Z_Construct_UClass_AMPGameModeBase()
{
	if (!Z_Registration_Info_UClass_AMPGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPGameModeBase.OuterSingleton, Z_Construct_UClass_AMPGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMPGameModeBase.OuterSingleton;
}
AMPGameModeBase::AMPGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMPGameModeBase);
AMPGameModeBase::~AMPGameModeBase() {}
// ********** End Class AMPGameModeBase ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPGameModeBase_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMPGameModeBase, AMPGameModeBase::StaticClass, TEXT("AMPGameModeBase"), &Z_Registration_Info_UClass_AMPGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPGameModeBase), 348773299U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPGameModeBase_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPGameModeBase_h__Script_MyProject_3314365831{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPGameModeBase_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPGameModeBase_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
