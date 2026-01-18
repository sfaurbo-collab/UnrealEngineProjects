// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/Interfaces/IUsable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIUsable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
FIRSTPROJECT_API UClass* Z_Construct_UClass_UIUsable();
FIRSTPROJECT_API UClass* Z_Construct_UClass_UIUsable_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References

// Begin Interface UIUsable Function Activate
struct IUsable_eventActivate_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	IUsable_eventActivate_Parms()
		: ReturnValue(false)
	{
	}
};
bool IIUsable::Activate()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Activate instead.");
	IUsable_eventActivate_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIUsable_Activate = FName(TEXT("Activate"));
bool IIUsable::Execute_Activate(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIUsable::StaticClass()));
	IUsable_eventActivate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIUsable_Activate);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIUsable*)(O->GetNativeInterfaceAddress(UIUsable::StaticClass())))
	{
		Parms.ReturnValue = I->Activate_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIUsable_Activate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Public/Interfaces/IUsable.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIUsable_Activate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IUsable_eventActivate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIUsable_Activate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IUsable_eventActivate_Parms), &Z_Construct_UFunction_UIUsable_Activate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIUsable_Activate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIUsable_Activate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIUsable_Activate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIUsable_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIUsable, nullptr, "Activate", nullptr, nullptr, Z_Construct_UFunction_UIUsable_Activate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIUsable_Activate_Statics::PropPointers), sizeof(IUsable_eventActivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIUsable_Activate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIUsable_Activate_Statics::Function_MetaDataParams) };
static_assert(sizeof(IUsable_eventActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIUsable_Activate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIUsable_Activate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIUsable::execActivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Activate_Implementation();
	P_NATIVE_END;
}
// End Interface UIUsable Function Activate

// Begin Interface UIUsable Function Use
void IIUsable::Use()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Use instead.");
}
static FName NAME_UIUsable_Use = FName(TEXT("Use"));
void IIUsable::Execute_Use(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIUsable::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UIUsable_Use);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IIUsable*)(O->GetNativeInterfaceAddress(UIUsable::StaticClass())))
	{
		I->Use_Implementation();
	}
}
struct Z_Construct_UFunction_UIUsable_Use_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Public/Interfaces/IUsable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIUsable_Use_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIUsable, nullptr, "Use", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIUsable_Use_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIUsable_Use_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIUsable_Use()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIUsable_Use_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIUsable::execUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Use_Implementation();
	P_NATIVE_END;
}
// End Interface UIUsable Function Use

// Begin Interface UIUsable
void UIUsable::StaticRegisterNativesUIUsable()
{
	UClass* Class = UIUsable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Activate", &IIUsable::execActivate },
		{ "Use", &IIUsable::execUse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIUsable);
UClass* Z_Construct_UClass_UIUsable_NoRegister()
{
	return UIUsable::StaticClass();
}
struct Z_Construct_UClass_UIUsable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/IUsable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIUsable_Activate, "Activate" }, // 147226692
		{ &Z_Construct_UFunction_UIUsable_Use, "Use" }, // 1394659984
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIUsable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIUsable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIUsable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIUsable_Statics::ClassParams = {
	&UIUsable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIUsable_Statics::Class_MetaDataParams), Z_Construct_UClass_UIUsable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIUsable()
{
	if (!Z_Registration_Info_UClass_UIUsable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIUsable.OuterSingleton, Z_Construct_UClass_UIUsable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIUsable.OuterSingleton;
}
template<> FIRSTPROJECT_API UClass* StaticClass<UIUsable>()
{
	return UIUsable::StaticClass();
}
UIUsable::UIUsable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIUsable);
UIUsable::~UIUsable() {}
// End Interface UIUsable

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIUsable, UIUsable::StaticClass, TEXT("UIUsable"), &Z_Registration_Info_UClass_UIUsable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIUsable), 831588553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_1481745369(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
