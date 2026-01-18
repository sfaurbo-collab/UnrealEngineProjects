// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Interact.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_Interact_generated_h
#error "Interact.generated.h already included, missing '#pragma once' in Interact.h"
#endif
#define FIRSTPROJECT_Interact_generated_h

#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanInteract_Implementation() { return false; }; \
	virtual void Interact_Implementation() {}; \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execInteract);


#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h_13_CALLBACK_WRAPPERS
#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIRSTPROJECT_API UInteract(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteract(UInteract&&); \
	UInteract(const UInteract&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIRSTPROJECT_API, UInteract); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteract); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteract) \
	FIRSTPROJECT_API virtual ~UInteract();


#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteract(); \
	friend struct Z_Construct_UClass_UInteract_Statics; \
public: \
	DECLARE_CLASS(UInteract, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FirstProject"), FIRSTPROJECT_API) \
	DECLARE_SERIALIZER(UInteract)


#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteract() {} \
public: \
	typedef UInteract UClassType; \
	typedef IInteract ThisClass; \
	static bool Execute_CanInteract(UObject* O); \
	static void Execute_Interact(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h_10_PROLOG
#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h_13_CALLBACK_WRAPPERS \
	FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class UInteract>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_Interact_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
