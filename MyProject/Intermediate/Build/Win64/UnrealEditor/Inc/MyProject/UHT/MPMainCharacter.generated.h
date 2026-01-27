// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/MPMainCharacter.h"

#ifdef MYPROJECT_MPMainCharacter_generated_h
#error "MPMainCharacter.generated.h already included, missing '#pragma once' in MPMainCharacter.h"
#endif
#define MYPROJECT_MPMainCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMPMainCharacter *********************************************************
struct Z_Construct_UClass_AMPMainCharacter_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_AMPMainCharacter_NoRegister();

#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPMainCharacter(); \
	friend struct ::Z_Construct_UClass_AMPMainCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_AMPMainCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AMPMainCharacter, AMPBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AMPMainCharacter_NoRegister) \
	DECLARE_SERIALIZER(AMPMainCharacter)


#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMPMainCharacter(AMPMainCharacter&&) = delete; \
	AMPMainCharacter(const AMPMainCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMPMainCharacter) \
	NO_API virtual ~AMPMainCharacter();


#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainCharacter_h_9_PROLOG
#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMPMainCharacter;

// ********** End Class AMPMainCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPMainCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
