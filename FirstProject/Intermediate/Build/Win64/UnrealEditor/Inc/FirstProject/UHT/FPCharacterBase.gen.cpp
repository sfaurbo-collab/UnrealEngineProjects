// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/Core/FPCharacterBase.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPCharacterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPCharacterBase();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPCharacterBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References

// Begin Class AFPCharacterBase Function StartJump
struct Z_Construct_UFunction_AFPCharacterBase_StartJump_Statics
{
	struct FPCharacterBase_eventStartJump_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/FPCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPCharacterBase_StartJump_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCharacterBase_eventStartJump_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPCharacterBase_StartJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPCharacterBase_StartJump_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPCharacterBase_StartJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPCharacterBase_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPCharacterBase, nullptr, "StartJump", nullptr, nullptr, Z_Construct_UFunction_AFPCharacterBase_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPCharacterBase_StartJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPCharacterBase_StartJump_Statics::FPCharacterBase_eventStartJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPCharacterBase_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPCharacterBase_StartJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFPCharacterBase_StartJump_Statics::FPCharacterBase_eventStartJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPCharacterBase_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPCharacterBase_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPCharacterBase::execStartJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AFPCharacterBase Function StartJump

// Begin Class AFPCharacterBase Function StopJump
struct Z_Construct_UFunction_AFPCharacterBase_StopJump_Statics
{
	struct FPCharacterBase_eventStopJump_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/FPCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPCharacterBase_StopJump_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCharacterBase_eventStopJump_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPCharacterBase_StopJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPCharacterBase_StopJump_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPCharacterBase_StopJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPCharacterBase_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPCharacterBase, nullptr, "StopJump", nullptr, nullptr, Z_Construct_UFunction_AFPCharacterBase_StopJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPCharacterBase_StopJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPCharacterBase_StopJump_Statics::FPCharacterBase_eventStopJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPCharacterBase_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPCharacterBase_StopJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFPCharacterBase_StopJump_Statics::FPCharacterBase_eventStopJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPCharacterBase_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPCharacterBase_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPCharacterBase::execStopJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AFPCharacterBase Function StopJump

// Begin Class AFPCharacterBase
void AFPCharacterBase::StaticRegisterNativesAFPCharacterBase()
{
	UClass* Class = AFPCharacterBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartJump", &AFPCharacterBase::execStartJump },
		{ "StopJump", &AFPCharacterBase::execStopJump },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPCharacterBase);
UClass* Z_Construct_UClass_AFPCharacterBase_NoRegister()
{
	return AFPCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AFPCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/FPCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Core/FPCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActions_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Actions\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/FPCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Core/FPCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Core/FPCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Core/FPCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/FPCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/FPCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPCharacterBase_StartJump, "StartJump" }, // 3514581647
		{ &Z_Construct_UFunction_AFPCharacterBase_StopJump, "StopJump" }, // 3871974382
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPCharacterBase_Statics::NewProp_MoveActions = { "MoveActions", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPCharacterBase, MoveActions), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActions_MetaData), NewProp_MoveActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPCharacterBase_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPCharacterBase, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPCharacterBase_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPCharacterBase, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPCharacterBase_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPCharacterBase, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPCharacterBase_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPCharacterBase, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPCharacterBase_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPCharacterBase, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPCharacterBase_Statics::NewProp_MoveActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPCharacterBase_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPCharacterBase_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPCharacterBase_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPCharacterBase_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPCharacterBase_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPCharacterBase_Statics::ClassParams = {
	&AFPCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacterBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPCharacterBase()
{
	if (!Z_Registration_Info_UClass_AFPCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPCharacterBase.OuterSingleton, Z_Construct_UClass_AFPCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPCharacterBase.OuterSingleton;
}
template<> FIRSTPROJECT_API UClass* StaticClass<AFPCharacterBase>()
{
	return AFPCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPCharacterBase);
AFPCharacterBase::~AFPCharacterBase() {}
// End Class AFPCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPCharacterBase, AFPCharacterBase::StaticClass, TEXT("AFPCharacterBase"), &Z_Registration_Info_UClass_AFPCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPCharacterBase), 1329361681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_3488384748(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
