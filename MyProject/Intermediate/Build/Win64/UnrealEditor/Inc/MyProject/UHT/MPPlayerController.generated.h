// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/MPPlayerController.h"

#ifdef MYPROJECT_MPPlayerController_generated_h
#error "MPPlayerController.generated.h already included, missing '#pragma once' in MPPlayerController.h"
#endif
#define MYPROJECT_MPPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMPPlayerController ******************************************************
struct Z_Construct_UClass_AMPPlayerController_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_AMPPlayerController_NoRegister();

#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMPPlayerController(); \
	friend struct ::Z_Construct_UClass_AMPPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_AMPPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AMPPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AMPPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AMPPlayerController)


#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMPPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMPPlayerController(AMPPlayerController&&) = delete; \
	AMPPlayerController(const AMPPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMPPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMPPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMPPlayerController) \
	NO_API virtual ~AMPPlayerController();


#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPPlayerController_h_13_PROLOG
#define FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMPPlayerController;

// ********** End Class AMPPlayerController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_MyProject_Source_MyProject_Public_Core_MPPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
