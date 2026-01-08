// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/FPDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_FPDoor_generated_h
#error "FPDoor.generated.h already included, missing '#pragma once' in FPDoor.h"
#endif
#define FIRSTPROJECT_FPDoor_generated_h

#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OpenDoor_Implementation(); \
	DECLARE_FUNCTION(execOpenDoor);


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_14_CALLBACK_WRAPPERS
#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPDoor(); \
	friend struct Z_Construct_UClass_AFPDoor_Statics; \
public: \
	DECLARE_CLASS(AFPDoor, AFPMeshActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AFPDoor) \
	virtual UObject* _getUObject() const override { return const_cast<AFPDoor*>(this); }


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPDoor(AFPDoor&&); \
	AFPDoor(const AFPDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPDoor) \
	NO_API virtual ~AFPDoor();


#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_11_PROLOG
#define FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_14_CALLBACK_WRAPPERS \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class AFPDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
