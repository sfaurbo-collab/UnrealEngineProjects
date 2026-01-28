// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/MPMainAnimInstance.h"

#ifdef MYPROJECT_MPMainAnimInstance_generated_h
#error "MPMainAnimInstance.generated.h already included, missing '#pragma once' in MPMainAnimInstance.h"
#endif
#define MYPROJECT_MPMainAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMPMainAnimInstance ******************************************************
#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


struct Z_Construct_UClass_UMPMainAnimInstance_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_UMPMainAnimInstance_NoRegister();

#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMPMainAnimInstance(); \
	friend struct ::Z_Construct_UClass_UMPMainAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_UMPMainAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UMPMainAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UMPMainAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UMPMainAnimInstance)


#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMPMainAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMPMainAnimInstance(UMPMainAnimInstance&&) = delete; \
	UMPMainAnimInstance(const UMPMainAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMPMainAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMPMainAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMPMainAnimInstance) \
	NO_API virtual ~UMPMainAnimInstance();


#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainAnimInstance_h_12_PROLOG
#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMPMainAnimInstance;

// ********** End Class UMPMainAnimInstance ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
