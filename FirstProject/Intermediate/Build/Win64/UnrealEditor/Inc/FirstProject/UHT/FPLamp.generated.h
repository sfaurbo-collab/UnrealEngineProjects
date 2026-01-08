// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/FPLamp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_FPLamp_generated_h
#error "FPLamp.generated.h already included, missing '#pragma once' in FPLamp.h"
#endif
#define FIRSTPROJECT_FPLamp_generated_h

#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_10_DELEGATE \
FIRSTPROJECT_API void FLightSwitchedOnSignature_DelegateWrapper(const FMulticastScriptDelegate& LightSwitchedOnSignature);


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPLamp(); \
	friend struct Z_Construct_UClass_AFPLamp_Statics; \
public: \
	DECLARE_CLASS(AFPLamp, AFPMeshActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AFPLamp) \
	virtual UObject* _getUObject() const override { return const_cast<AFPLamp*>(this); }


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPLamp(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPLamp(AFPLamp&&); \
	AFPLamp(const AFPLamp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPLamp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPLamp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPLamp) \
	NO_API virtual ~AFPLamp();


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_12_PROLOG
#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class AFPLamp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPLamp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
