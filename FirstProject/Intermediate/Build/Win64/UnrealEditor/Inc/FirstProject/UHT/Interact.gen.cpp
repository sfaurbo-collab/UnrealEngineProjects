// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/Interfaces/Interact.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteract() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
FIRSTPROJECT_API UClass* Z_Construct_UClass_UInteract();
FIRSTPROJECT_API UClass* Z_Construct_UClass_UInteract_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References

// Begin Interface UInteract Function CanInteract
struct Interact_eventCanInteract_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Interact_eventCanInteract_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInteract::CanInteract()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanInteract instead.");
	Interact_eventCanInteract_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInteract_CanInteract = FName(TEXT("CanInteract"));
bool IInteract::Execute_CanInteract(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteract::StaticClass()));
	Interact_eventCanInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteract_CanInteract);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteract*)(O->GetNativeInterfaceAddress(UInteract::StaticClass())))
	{
		Parms.ReturnValue = I->CanInteract_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInteract_CanInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Public/Interfaces/Interact.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteract_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Interact_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteract_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Interact_eventCanInteract_Parms), &Z_Construct_UFunction_UInteract_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteract_CanInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteract_CanInteract_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteract_CanInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteract_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteract, nullptr, "CanInteract", nullptr, nullptr, Z_Construct_UFunction_UInteract_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteract_CanInteract_Statics::PropPointers), sizeof(Interact_eventCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteract_CanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteract_CanInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(Interact_eventCanInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteract_CanInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteract_CanInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteract::execCanInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanInteract_Implementation();
	P_NATIVE_END;
}
// End Interface UInteract Function CanInteract

// Begin Interface UInteract Function Interact
void IInteract::Interact()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UInteract_Interact = FName(TEXT("Interact"));
void IInteract::Execute_Interact(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteract::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteract_Interact);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteract*)(O->GetNativeInterfaceAddress(UInteract::StaticClass())))
	{
		I->Interact_Implementation();
	}
}
struct Z_Construct_UFunction_UInteract_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Public/Interfaces/Interact.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteract_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteract, nullptr, "Interact", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteract_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteract_Interact_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteract_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteract_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteract::execInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation();
	P_NATIVE_END;
}
// End Interface UInteract Function Interact

// Begin Interface UInteract
void UInteract::StaticRegisterNativesUInteract()
{
	UClass* Class = UInteract::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanInteract", &IInteract::execCanInteract },
		{ "Interact", &IInteract::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteract);
UClass* Z_Construct_UClass_UInteract_NoRegister()
{
	return UInteract::StaticClass();
}
struct Z_Construct_UClass_UInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Interact.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteract_CanInteract, "CanInteract" }, // 630772927
		{ &Z_Construct_UFunction_UInteract_Interact, "Interact" }, // 1787516773
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteract>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteract_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteract_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteract_Statics::ClassParams = {
	&UInteract::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteract_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteract_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteract()
{
	if (!Z_Registration_Info_UClass_UInteract.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteract.OuterSingleton, Z_Construct_UClass_UInteract_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteract.OuterSingleton;
}
template<> FIRSTPROJECT_API UClass* StaticClass<UInteract>()
{
	return UInteract::StaticClass();
}
UInteract::UInteract(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteract);
UInteract::~UInteract() {}
// End Interface UInteract

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Interfaces_Interact_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteract, UInteract::StaticClass, TEXT("UInteract"), &Z_Registration_Info_UClass_UInteract, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteract), 1695184156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Interfaces_Interact_h_3854228859(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Interfaces_Interact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Interfaces_Interact_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
