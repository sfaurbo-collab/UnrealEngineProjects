// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/IUsable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_IUsable_generated_h
#error "IUsable.generated.h already included, missing '#pragma once' in IUsable.h"
#endif
#define FIRSTPROJECT_IUsable_generated_h

#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Activate_Implementation() { return false; }; \
	virtual void Use_Implementation() {}; \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execUse);


#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_13_CALLBACK_WRAPPERS
#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIRSTPROJECT_API UIUsable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIUsable(UIUsable&&); \
	UIUsable(const UIUsable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIRSTPROJECT_API, UIUsable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIUsable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIUsable) \
	FIRSTPROJECT_API virtual ~UIUsable();


#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIUsable(); \
	friend struct Z_Construct_UClass_UIUsable_Statics; \
public: \
	DECLARE_CLASS(UIUsable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FirstProject"), FIRSTPROJECT_API) \
	DECLARE_SERIALIZER(UIUsable)


#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIUsable() {} \
public: \
	typedef UIUsable UClassType; \
	typedef IIUsable ThisClass; \
	static bool Execute_Activate(UObject* O); \
	static void Execute_Use(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_10_PROLOG
#define FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_13_CALLBACK_WRAPPERS \
	FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class UIUsable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProjects_FirstProject_CRPTD_Source_FirstProject_Public_Interfaces_IUsable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
