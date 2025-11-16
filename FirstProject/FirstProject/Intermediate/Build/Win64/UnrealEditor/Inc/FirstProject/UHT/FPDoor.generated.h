// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/FPDoor.h"

#ifdef FIRSTPROJECT_FPDoor_generated_h
#error "FPDoor.generated.h already included, missing '#pragma once' in FPDoor.h"
#endif
#define FIRSTPROJECT_FPDoor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPDoor ******************************************************************
FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPDoor_NoRegister();

#define FID_UnrealEngineProjects_FirstProject_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPDoor(); \
	friend struct Z_Construct_UClass_AFPDoor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FIRSTPROJECT_API UClass* Z_Construct_UClass_AFPDoor_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), Z_Construct_UClass_AFPDoor_NoRegister) \
	DECLARE_SERIALIZER(AFPDoor)


#define FID_UnrealEngineProjects_FirstProject_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPDoor(AFPDoor&&) = delete; \
	AFPDoor(const AFPDoor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPDoor) \
	NO_API virtual ~AFPDoor();


#define FID_UnrealEngineProjects_FirstProject_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_9_PROLOG
#define FID_UnrealEngineProjects_FirstProject_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_FirstProject_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_FirstProject_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPDoor;

// ********** End Class AFPDoor ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_FirstProject_FirstProject_Source_FirstProject_Public_Actors_FPDoor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
