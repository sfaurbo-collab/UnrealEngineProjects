// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/FPCharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_FPCharacterBase_generated_h
#error "FPCharacterBase.generated.h already included, missing '#pragma once' in FPCharacterBase.h"
#endif
#define FIRSTPROJECT_FPCharacterBase_generated_h

#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPCharacterBase(); \
	friend struct Z_Construct_UClass_AFPCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AFPCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AFPCharacterBase)


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPCharacterBase(AFPCharacterBase&&); \
	AFPCharacterBase(const AFPCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPCharacterBase) \
	NO_API virtual ~AFPCharacterBase();


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_12_PROLOG
#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class AFPCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
