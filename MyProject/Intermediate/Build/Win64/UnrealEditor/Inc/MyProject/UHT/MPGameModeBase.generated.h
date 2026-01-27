// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/MPGameModeBase.h"

#ifdef MYPROJECT_MPGameModeBase_generated_h
#error "MPGameModeBase.generated.h already included, missing '#pragma once' in MPGameModeBase.h"
#endif
#define MYPROJECT_MPGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMPGameModeBase **********************************************************
struct Z_Construct_UClass_AMPGameModeBase_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_AMPGameModeBase_NoRegister();

#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPGameModeBase(); \
	friend struct ::Z_Construct_UClass_AMPGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_AMPGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMPGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AMPGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AMPGameModeBase)


#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMPGameModeBase(AMPGameModeBase&&) = delete; \
	AMPGameModeBase(const AMPGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPGameModeBase) \
	NO_API virtual ~AMPGameModeBase();


#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPGameModeBase_h_12_PROLOG
#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMPGameModeBase;

// ********** End Class AMPGameModeBase ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
