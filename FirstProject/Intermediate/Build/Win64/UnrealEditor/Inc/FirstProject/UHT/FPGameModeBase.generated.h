// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/FPGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_FPGameModeBase_generated_h
#error "FPGameModeBase.generated.h already included, missing '#pragma once' in FPGameModeBase.h"
#endif
#define FIRSTPROJECT_FPGameModeBase_generated_h

#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPGameModeBase(); \
	friend struct Z_Construct_UClass_AFPGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFPGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AFPGameModeBase)


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPGameModeBase(AFPGameModeBase&&); \
	AFPGameModeBase(const AFPGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPGameModeBase) \
	NO_API virtual ~AFPGameModeBase();


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPGameModeBase_h_12_PROLOG
#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class AFPGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
