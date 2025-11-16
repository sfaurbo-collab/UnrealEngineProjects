// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/FPDoor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPDoor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPDoor();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPDoor_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPDoor ******************************************************************
void AFPDoor::StaticRegisterNativesAFPDoor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPDoor;
UClass* AFPDoor::GetPrivateStaticClass()
{
	using TClass = AFPDoor;
	if (!Z_Registration_Info_UClass_AFPDoor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPDoor"),
			Z_Registration_Info_UClass_AFPDoor.InnerSingleton,
			StaticRegisterNativesAFPDoor,
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
	return Z_Registration_Info_UClass_AFPDoor.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPDoor_NoRegister()
{
	return AFPDoor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/FPDoor.h" },
		{ "ModuleRelativePath", "Public/Actors/FPDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/FPDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationTarget_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Actors/FPDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPDoor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPDoor, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPDoor_Statics::NewProp_RotationTarget = { "RotationTarget", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPDoor, RotationTarget), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationTarget_MetaData), NewProp_RotationTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPDoor_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPDoor_Statics::NewProp_RotationTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPDoor_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AFPDoor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPDoor_Statics::PropPointers),
	0,
	0x009001A4u,
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
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPDoor);
AFPDoor::~AFPDoor() {}
// ********** End Class AFPDoor ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h__Script_FirstProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPDoor, AFPDoor::StaticClass, TEXT("AFPDoor"), &Z_Registration_Info_UClass_AFPDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPDoor), 1709708491U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h__Script_FirstProject_3003285600(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h__Script_FirstProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h__Script_FirstProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
