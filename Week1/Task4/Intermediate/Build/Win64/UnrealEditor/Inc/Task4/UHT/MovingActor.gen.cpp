// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/MovingActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovingActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
TASK4_API UClass* Z_Construct_UClass_AMovingActor();
TASK4_API UClass* Z_Construct_UClass_AMovingActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Task4();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMovingActor *************************************************************
void AMovingActor::StaticRegisterNativesAMovingActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMovingActor;
UClass* AMovingActor::GetPrivateStaticClass()
{
	using TClass = AMovingActor;
	if (!Z_Registration_Info_UClass_AMovingActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MovingActor"),
			Z_Registration_Info_UClass_AMovingActor.InnerSingleton,
			StaticRegisterNativesAMovingActor,
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
	return Z_Registration_Info_UClass_AMovingActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMovingActor_NoRegister()
{
	return AMovingActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMovingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/MovingActor.h" },
		{ "ModuleRelativePath", "Public/Actors/MovingActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMovingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Task4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingActor_Statics::ClassParams = {
	&AMovingActor::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingActor()
{
	if (!Z_Registration_Info_UClass_AMovingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingActor.OuterSingleton, Z_Construct_UClass_AMovingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingActor);
AMovingActor::~AMovingActor() {}
// ********** End Class AMovingActor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_Week1_Task4_Source_Task4_Public_Actors_MovingActor_h__Script_Task4_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingActor, AMovingActor::StaticClass, TEXT("AMovingActor"), &Z_Registration_Info_UClass_AMovingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingActor), 2691788940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_Week1_Task4_Source_Task4_Public_Actors_MovingActor_h__Script_Task4_3912745742(TEXT("/Script/Task4"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_Week1_Task4_Source_Task4_Public_Actors_MovingActor_h__Script_Task4_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_Week1_Task4_Source_Task4_Public_Actors_MovingActor_h__Script_Task4_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
