// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/FPCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_FPCharacter_generated_h
#error "FPCharacter.generated.h already included, missing '#pragma once' in FPCharacter.h"
#endif
#define FIRSTPROJECT_FPCharacter_generated_h

#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPCharacter(); \
	friend struct Z_Construct_UClass_AFPCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AFPCharacter)


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPCharacter(AFPCharacter&&); \
	AFPCharacter(const AFPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPCharacter) \
	NO_API virtual ~AFPCharacter();


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacter_h_9_PROLOG
#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class AFPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
