// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/MPBaseCharacter.h"

#ifdef MYPROJECT_MPBaseCharacter_generated_h
#error "MPBaseCharacter.generated.h already included, missing '#pragma once' in MPBaseCharacter.h"
#endif
#define MYPROJECT_MPBaseCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMPBaseCharacter *********************************************************
struct Z_Construct_UClass_AMPBaseCharacter_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_AMPBaseCharacter_NoRegister();

#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPBaseCharacter(); \
	friend struct ::Z_Construct_UClass_AMPBaseCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_AMPBaseCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AMPBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AMPBaseCharacter_NoRegister) \
	DECLARE_SERIALIZER(AMPBaseCharacter)


#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMPBaseCharacter(AMPBaseCharacter&&) = delete; \
	AMPBaseCharacter(const AMPBaseCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPBaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMPBaseCharacter) \
	NO_API virtual ~AMPBaseCharacter();


#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h_9_PROLOG
#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMPBaseCharacter;

// ********** End Class AMPBaseCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Characters_MPBaseCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
