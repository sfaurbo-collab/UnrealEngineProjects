// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/FPPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_FPPlayerController_generated_h
#error "FPPlayerController.generated.h already included, missing '#pragma once' in FPPlayerController.h"
#endif
#define FIRSTPROJECT_FPPlayerController_generated_h

#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPPlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPPlayerController(); \
	friend struct Z_Construct_UClass_AFPPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFPPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AFPPlayerController)


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPPlayerController_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPPlayerController(AFPPlayerController&&); \
	AFPPlayerController(const AFPPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPPlayerController) \
	NO_API virtual ~AFPPlayerController();


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPPlayerController_h_11_PROLOG
#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPPlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPPlayerController_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class AFPPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Core_FPPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
