// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/MovingActor.h"

#ifdef TASK4_MovingActor_generated_h
#error "MovingActor.generated.h already included, missing '#pragma once' in MovingActor.h"
#endif
#define TASK4_MovingActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMovingActor *************************************************************
TASK4_API UClass* Z_Construct_UClass_AMovingActor_NoRegister();

#define FID_UnrealEngineProjects_Week1_Task4_Source_Task4_Public_Actors_MovingActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingActor(); \
	friend struct Z_Construct_UClass_AMovingActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TASK4_API UClass* Z_Construct_UClass_AMovingActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMovingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Task4"), Z_Construct_UClass_AMovingActor_NoRegister) \
	DECLARE_SERIALIZER(AMovingActor)


#define FID_UnrealEngineProjects_Week1_Task4_Source_Task4_Public_Actors_MovingActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMovingActor(AMovingActor&&) = delete; \
	AMovingActor(const AMovingActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingActor) \
	NO_API virtual ~AMovingActor();


#define FID_UnrealEngineProjects_Week1_Task4_Source_Task4_Public_Actors_MovingActor_h_9_PROLOG
#define FID_UnrealEngineProjects_Week1_Task4_Source_Task4_Public_Actors_MovingActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_Week1_Task4_Source_Task4_Public_Actors_MovingActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_Week1_Task4_Source_Task4_Public_Actors_MovingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMovingActor;

// ********** End Class AMovingActor ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_Week1_Task4_Source_Task4_Public_Actors_MovingActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
