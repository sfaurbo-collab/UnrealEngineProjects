// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/Public/Actors/FPDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPDoor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPDoor();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPDoor_NoRegister();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPLamp_NoRegister();
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPMeshActorBase();
FIRSTPROJECT_API UClass* Z_Construct_UClass_UInteract_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstProject();
// End Cross Module References

// Begin Class AFPDoor Function OpenDoor
static FName NAME_AFPDoor_OpenDoor = FName(TEXT("OpenDoor"));
void AFPDoor::OpenDoor()
{
	ProcessEvent(FindFunctionChecked(NAME_AFPDoor_OpenDoor),NULL);
}
struct Z_Construct_UFunction_AFPDoor_OpenDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/FPDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPDoor, nullptr, "OpenDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPDoor_OpenDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPDoor_OpenDoor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFPDoor_OpenDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPDoor_OpenDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPDoor::execOpenDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenDoor_Implementation();
	P_NATIVE_END;
}
// End Class AFPDoor Function OpenDoor

// Begin Class AFPDoor
void AFPDoor::StaticRegisterNativesAFPDoor()
{
	UClass* Class = AFPDoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OpenDoor", &AFPDoor::execOpenDoor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPDoor);
UClass* Z_Construct_UClass_AFPDoor_NoRegister()
{
	return AFPDoor::StaticClass();
}
struct Z_Construct_UClass_AFPDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/FPDoor.h" },
		{ "ModuleRelativePath", "Public/Actors/FPDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsOpen_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Actors/FPDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LampRefCpp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Actor Reference" },
		{ "ModuleRelativePath", "Public/Actors/FPDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationTarget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Actors/FPDoor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOpen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LampRefCpp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPDoor_OpenDoor, "OpenDoor" }, // 3215171293
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AFPDoor_Statics::NewProp_IsOpen_SetBit(void* Obj)
{
	((AFPDoor*)Obj)->IsOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPDoor_Statics::NewProp_IsOpen = { "IsOpen", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPDoor), &Z_Construct_UClass_AFPDoor_Statics::NewProp_IsOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsOpen_MetaData), NewProp_IsOpen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPDoor_Statics::NewProp_LampRefCpp = { "LampRefCpp", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPDoor, LampRefCpp), Z_Construct_UClass_AFPLamp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LampRefCpp_MetaData), NewProp_LampRefCpp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPDoor_Statics::NewProp_RotationTarget = { "RotationTarget", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPDoor, RotationTarget), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationTarget_MetaData), NewProp_RotationTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPDoor_Statics::NewProp_IsOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPDoor_Statics::NewProp_LampRefCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPDoor_Statics::NewProp_RotationTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPDoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPDoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFPMeshActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPDoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFPDoor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteract_NoRegister, (int32)VTABLE_OFFSET(AFPDoor, IInteract), false },  // 1695184156
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPDoor_Statics::ClassParams = {
	&AFPDoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPDoor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPDoor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
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
template<> FIRSTPROJECT_API UClass* StaticClass<AFPDoor>()
{
	return AFPDoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPDoor);
AFPDoor::~AFPDoor() {}
// End Class AFPDoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPDoor, AFPDoor::StaticClass, TEXT("AFPDoor"), &Z_Registration_Info_UClass_AFPDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPDoor), 3780892030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_1041133332(TEXT("/Script/FirstProject"),
	Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
