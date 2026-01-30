// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/MPDealDamageAnimNotifyState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMPDealDamageAnimNotifyState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
MYPROJECT_API UClass* Z_Construct_UClass_UMPDealDamageAnimNotifyState();
MYPROJECT_API UClass* Z_Construct_UClass_UMPDealDamageAnimNotifyState_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMPDealDamageAnimNotifyState *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMPDealDamageAnimNotifyState;
UClass* UMPDealDamageAnimNotifyState::GetPrivateStaticClass()
{
	using TClass = UMPDealDamageAnimNotifyState;
	if (!Z_Registration_Info_UClass_UMPDealDamageAnimNotifyState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MPDealDamageAnimNotifyState"),
			Z_Registration_Info_UClass_UMPDealDamageAnimNotifyState.InnerSingleton,
			StaticRegisterNativesUMPDealDamageAnimNotifyState,
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
	return Z_Registration_Info_UClass_UMPDealDamageAnimNotifyState.InnerSingleton;
}
UClass* Z_Construct_UClass_UMPDealDamageAnimNotifyState_NoRegister()
{
	return UMPDealDamageAnimNotifyState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMPDealDamageAnimNotifyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Characters/MPDealDamageAnimNotifyState.h" },
		{ "ModuleRelativePath", "Public/Characters/MPDealDamageAnimNotifyState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMPDealDamageAnimNotifyState constinit property declarations *************
// ********** End Class UMPDealDamageAnimNotifyState constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMPDealDamageAnimNotifyState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMPDealDamageAnimNotifyState_Statics
UObject* (*const Z_Construct_UClass_UMPDealDamageAnimNotifyState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMPDealDamageAnimNotifyState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMPDealDamageAnimNotifyState_Statics::ClassParams = {
	&UMPDealDamageAnimNotifyState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMPDealDamageAnimNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UMPDealDamageAnimNotifyState_Statics::Class_MetaDataParams)
};
void UMPDealDamageAnimNotifyState::StaticRegisterNativesUMPDealDamageAnimNotifyState()
{
}
UClass* Z_Construct_UClass_UMPDealDamageAnimNotifyState()
{
	if (!Z_Registration_Info_UClass_UMPDealDamageAnimNotifyState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMPDealDamageAnimNotifyState.OuterSingleton, Z_Construct_UClass_UMPDealDamageAnimNotifyState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMPDealDamageAnimNotifyState.OuterSingleton;
}
UMPDealDamageAnimNotifyState::UMPDealDamageAnimNotifyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMPDealDamageAnimNotifyState);
UMPDealDamageAnimNotifyState::~UMPDealDamageAnimNotifyState() {}
// ********** End Class UMPDealDamageAnimNotifyState ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPDealDamageAnimNotifyState_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMPDealDamageAnimNotifyState, UMPDealDamageAnimNotifyState::StaticClass, TEXT("UMPDealDamageAnimNotifyState"), &Z_Registration_Info_UClass_UMPDealDamageAnimNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMPDealDamageAnimNotifyState), 3095505591U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPDealDamageAnimNotifyState_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPDealDamageAnimNotifyState_h__Script_MyProject_1306148945{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPDealDamageAnimNotifyState_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPDealDamageAnimNotifyState_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
