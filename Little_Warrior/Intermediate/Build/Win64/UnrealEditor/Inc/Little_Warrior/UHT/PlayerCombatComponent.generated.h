// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FS_AttackData;
#ifdef LITTLE_WARRIOR_PlayerCombatComponent_generated_h
#error "PlayerCombatComponent.generated.h already included, missing '#pragma once' in PlayerCombatComponent.h"
#endif
#define LITTLE_WARRIOR_PlayerCombatComponent_generated_h

#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_SPARSE_DATA
#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentAttack); \
	DECLARE_FUNCTION(execUnlockPlayerAttack); \
	DECLARE_FUNCTION(execResetCurrentAttack); \
	DECLARE_FUNCTION(execProcessPlayerHeavyAttack); \
	DECLARE_FUNCTION(execProcessPlayerLightAttack);


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentAttack); \
	DECLARE_FUNCTION(execUnlockPlayerAttack); \
	DECLARE_FUNCTION(execResetCurrentAttack); \
	DECLARE_FUNCTION(execProcessPlayerHeavyAttack); \
	DECLARE_FUNCTION(execProcessPlayerLightAttack);


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_ACCESSORS
#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerCombatComponent(); \
	friend struct Z_Construct_UClass_UPlayerCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Little_Warrior"), NO_API) \
	DECLARE_SERIALIZER(UPlayerCombatComponent)


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerCombatComponent(); \
	friend struct Z_Construct_UClass_UPlayerCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Little_Warrior"), NO_API) \
	DECLARE_SERIALIZER(UPlayerCombatComponent)


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerCombatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerCombatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerCombatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerCombatComponent(UPlayerCombatComponent&&); \
	NO_API UPlayerCombatComponent(const UPlayerCombatComponent&); \
public: \
	NO_API virtual ~UPlayerCombatComponent();


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerCombatComponent(UPlayerCombatComponent&&); \
	NO_API UPlayerCombatComponent(const UPlayerCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerCombatComponent) \
	NO_API virtual ~UPlayerCombatComponent();


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_11_PROLOG
#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_SPARSE_DATA \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_RPC_WRAPPERS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_ACCESSORS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_INCLASS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_SPARSE_DATA \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_ACCESSORS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LITTLE_WARRIOR_API UClass* StaticClass<class UPlayerCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
