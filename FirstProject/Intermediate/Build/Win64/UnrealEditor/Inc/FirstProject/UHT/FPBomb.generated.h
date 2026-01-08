// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/FPBomb.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_FPBomb_generated_h
#error "FPBomb.generated.h already included, missing '#pragma once' in FPBomb.h"
#endif
#define FIRSTPROJECT_FPBomb_generated_h

#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StartIgnite_Implementation(); \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execStartIgnite);


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_17_CALLBACK_WRAPPERS
#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPBomb(); \
	friend struct Z_Construct_UClass_AFPBomb_Statics; \
public: \
	DECLARE_CLASS(AFPBomb, AFPMeshActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AFPBomb) \
	virtual UObject* _getUObject() const override { return const_cast<AFPBomb*>(this); }


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPBomb(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPBomb(AFPBomb&&); \
	AFPBomb(const AFPBomb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPBomb); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPBomb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPBomb) \
	NO_API virtual ~AFPBomb();


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_14_PROLOG
#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_17_CALLBACK_WRAPPERS \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_17_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class AFPBomb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPBomb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
