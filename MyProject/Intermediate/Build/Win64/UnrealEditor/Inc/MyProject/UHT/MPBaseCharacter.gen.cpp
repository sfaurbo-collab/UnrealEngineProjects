// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/MPBaseCharacter.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMPBaseCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MYPROJECT_API UClass* Z_Construct_UClass_AMPBaseCharacter();
MYPROJECT_API UClass* Z_Construct_UClass_AMPBaseCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMPBaseCharacter Function OnOverlapBegin_AttackCapsule *******************
struct Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics
{
	struct MPBaseCharacter_eventOnOverlapBegin_AttackCapsule_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MPBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnOverlapBegin_AttackCapsule constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnOverlapBegin_AttackCapsule constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnOverlapBegin_AttackCapsule Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPBaseCharacter_eventOnOverlapBegin_AttackCapsule_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPBaseCharacter_eventOnOverlapBegin_AttackCapsule_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPBaseCharacter_eventOnOverlapBegin_AttackCapsule_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPBaseCharacter_eventOnOverlapBegin_AttackCapsule_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((MPBaseCharacter_eventOnOverlapBegin_AttackCapsule_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MPBaseCharacter_eventOnOverlapBegin_AttackCapsule_Parms), &Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MPBaseCharacter_eventOnOverlapBegin_AttackCapsule_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::PropPointers) < 2048);
// ********** End Function OnOverlapBegin_AttackCapsule Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMPBaseCharacter, nullptr, "OnOverlapBegin_AttackCapsule", 	Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::MPBaseCharacter_eventOnOverlapBegin_AttackCapsule_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::MPBaseCharacter_eventOnOverlapBegin_AttackCapsule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMPBaseCharacter::execOnOverlapBegin_AttackCapsule)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin_AttackCapsule(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AMPBaseCharacter Function OnOverlapBegin_AttackCapsule *********************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCapsule_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Collision component for the attack animation\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MPBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision component for the attack animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/Characters/MPBaseCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMPBaseCharacter constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackCapsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMPBaseCharacter constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnOverlapBegin_AttackCapsule"), .Pointer = &AMPBaseCharacter::execOnOverlapBegin_AttackCapsule },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMPBaseCharacter_OnOverlapBegin_AttackCapsule, "OnOverlapBegin_AttackCapsule" }, // 2814583756
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMPBaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMPBaseCharacter_Statics

// ********** Begin Class AMPBaseCharacter Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPBaseCharacter_Statics::NewProp_AttackCapsule = { "AttackCapsule", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPBaseCharacter, AttackCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCapsule_MetaData), NewProp_AttackCapsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMPBaseCharacter_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMPBaseCharacter, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMPBaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPBaseCharacter_Statics::NewProp_AttackCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMPBaseCharacter_Statics::NewProp_AttackMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMPBaseCharacter_Statics::PropPointers) < 2048);
// ********** End Class AMPBaseCharacter Property Definitions **************************************
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
	FuncInfo,
	Z_Construct_UClass_AMPBaseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMPBaseCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMPBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMPBaseCharacter_Statics::Class_MetaDataParams)
};
void AMPBaseCharacter::StaticRegisterNativesAMPBaseCharacter()
{
	UClass* Class = AMPBaseCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AMPBaseCharacter_Statics::Funcs));
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
		{ Z_Construct_UClass_AMPBaseCharacter, AMPBaseCharacter::StaticClass, TEXT("AMPBaseCharacter"), &Z_Registration_Info_UClass_AMPBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMPBaseCharacter), 1416204930U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h__Script_MyProject_2517019866{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
