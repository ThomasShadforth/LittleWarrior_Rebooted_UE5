// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef LITTLE_WARRIOR_HitInterface_generated_h
#error "HitInterface.generated.h already included, missing '#pragma once' in HitInterface.h"
#endif
#define LITTLE_WARRIOR_HitInterface_generated_h

#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_SPARSE_DATA
#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_RPC_WRAPPERS
#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_ACCESSORS
#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LITTLE_WARRIOR_API UHitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LITTLE_WARRIOR_API, UHitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LITTLE_WARRIOR_API UHitInterface(UHitInterface&&); \
	LITTLE_WARRIOR_API UHitInterface(const UHitInterface&); \
public: \
	LITTLE_WARRIOR_API virtual ~UHitInterface();


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LITTLE_WARRIOR_API UHitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LITTLE_WARRIOR_API UHitInterface(UHitInterface&&); \
	LITTLE_WARRIOR_API UHitInterface(const UHitInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LITTLE_WARRIOR_API, UHitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitInterface) \
	LITTLE_WARRIOR_API virtual ~UHitInterface();


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHitInterface(); \
	friend struct Z_Construct_UClass_UHitInterface_Statics; \
public: \
	DECLARE_CLASS(UHitInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Little_Warrior"), LITTLE_WARRIOR_API) \
	DECLARE_SERIALIZER(UHitInterface)


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHitInterface() {} \
public: \
	typedef UHitInterface UClassType; \
	typedef IHitInterface ThisClass; \
	static void Execute_OnHit(UObject* O, AActor* HitActor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IHitInterface() {} \
public: \
	typedef UHitInterface UClassType; \
	typedef IHitInterface ThisClass; \
	static void Execute_OnHit(UObject* O, AActor* HitActor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_10_PROLOG
#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_SPARSE_DATA \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_RPC_WRAPPERS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_ACCESSORS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_SPARSE_DATA \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_ACCESSORS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LITTLE_WARRIOR_API UClass* StaticClass<class UHitInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
