// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/MPMainCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMPMainCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_AMPBaseCharacter();
MYPROJECT_API UClass* Z_Construct_UClass_AMPMainCharacter();
MYPROJECT_API UClass* Z_Construct_UClass_AMPMainCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMPMainCharacter *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMPMainCharacter;
UClass* AMPMainCharacter::GetPrivateStaticClass()
{
	using TClass = AMPMainCharacter;
	if (!Z_Registration_Info_UClass_AMPMainCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MPMainCharacter"),
			Z_Registration_Info_UClass_AMPMainCharacter.InnerSingleton,
			StaticRegisterNativesAMPMainCharacter,
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
	return Z_Registration_Info_UClass_AMPMainCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AMPMainCharacter_NoRegister()
{
	return AMPMainCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMPMainCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/MPMainCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/MPMainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera boom positioning the camera behind the character\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MPMainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Follow camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MPMainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For Weapon Static Meshes\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MPMainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For Weapon Static Meshes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MPMainCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMPMainCharacter constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMPMainCharacter constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPMainCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMPMainCharacter_Statics

// ********** Begin Class AMPMainCharacter Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPMainCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPMainCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPMainCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPMainCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPMainCharacter_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPMainCharacter, EquippedWeapon), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPMainCharacter_Statics::NewProp_BackWeapon = { "BackWeapon", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPMainCharacter, BackWeapon), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackWeapon_MetaData), NewProp_BackWeapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMPMainCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPMainCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPMainCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPMainCharacter_Statics::NewProp_EquippedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPMainCharacter_Statics::NewProp_BackWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPMainCharacter_Statics::PropPointers) < 2048);
// ********** End Class AMPMainCharacter Property Definitions **************************************
UObject* (*const Z_Construct_UClass_AMPMainCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMPBaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPMainCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMPMainCharacter_Statics::ClassParams = {
	&AMPMainCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMPMainCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMPMainCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPMainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMPMainCharacter_Statics::Class_MetaDataParams)
};
void AMPMainCharacter::StaticRegisterNativesAMPMainCharacter()
{
}
UClass* Z_Construct_UClass_AMPMainCharacter()
{
	if (!Z_Registration_Info_UClass_AMPMainCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMPMainCharacter.OuterSingleton, Z_Construct_UClass_AMPMainCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMPMainCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMPMainCharacter);
AMPMainCharacter::~AMPMainCharacter() {}
// ********** End Class AMPMainCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainCharacter_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMPMainCharacter, AMPMainCharacter::StaticClass, TEXT("AMPMainCharacter"), &Z_Registration_Info_UClass_AMPMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPMainCharacter), 1129383602U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainCharacter_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainCharacter_h__Script_MyProject_1383739762{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainCharacter_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainCharacter_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
