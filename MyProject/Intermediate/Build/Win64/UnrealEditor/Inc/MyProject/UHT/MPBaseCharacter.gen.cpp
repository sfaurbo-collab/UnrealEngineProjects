// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/MPBaseCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMPBaseCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
MYPROJECT_API UClass* Z_Construct_UClass_AMPBaseCharacter();
MYPROJECT_API UClass* Z_Construct_UClass_AMPBaseCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMPBaseCharacter *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMPBaseCharacter;
UClass* AMPBaseCharacter::GetPrivateStaticClass()
{
	using TClass = AMPBaseCharacter;
	if (!Z_Registration_Info_UClass_AMPBaseCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MPBaseCharacter"),
			Z_Registration_Info_UClass_AMPBaseCharacter.InnerSingleton,
			StaticRegisterNativesAMPBaseCharacter,
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
	return Z_Registration_Info_UClass_AMPBaseCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AMPBaseCharacter_NoRegister()
{
	return AMPBaseCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMPBaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/MPBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/MPBaseCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMPBaseCharacter constinit property declarations *************************
// ********** End Class AMPBaseCharacter constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPBaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMPBaseCharacter_Statics
UObject* (*const Z_Construct_UClass_AMPBaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPBaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPBaseCharacter_Statics::ClassParams = {
	&AMPBaseCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMPBaseCharacter_Statics::Class_MetaDataParams)
};
void AMPBaseCharacter::StaticRegisterNativesAMPBaseCharacter()
{
}
UClass* Z_Construct_UClass_AMPBaseCharacter()
{
	if (!Z_Registration_Info_UClass_AMPBaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPBaseCharacter.OuterSingleton, Z_Construct_UClass_AMPBaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMPBaseCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMPBaseCharacter);
AMPBaseCharacter::~AMPBaseCharacter() {}
// ********** End Class AMPBaseCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMPBaseCharacter, AMPBaseCharacter::StaticClass, TEXT("AMPBaseCharacter"), &Z_Registration_Info_UClass_AMPBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPBaseCharacter), 2437295740U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h__Script_MyProject_1901634088{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
