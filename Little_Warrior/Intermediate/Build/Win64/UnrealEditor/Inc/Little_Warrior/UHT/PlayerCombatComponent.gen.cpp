// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/PlayerCombatComponent.h"
#include "Little_Warrior/S_AttackData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCombatComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_UPlayerCombatComponent();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_UPlayerCombatComponent_NoRegister();
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_AttackData();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerCombatComponent::execGetCurrentAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FS_AttackData*)Z_Param__Result=P_THIS->GetCurrentAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCombatComponent::execUnlockPlayerAttack)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockPlayerAttack(Z_Param_AttackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCombatComponent::execResetCurrentAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCurrentAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCombatComponent::execProcessPlayerHeavyAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessPlayerHeavyAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCombatComponent::execProcessPlayerLightAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessPlayerLightAttack();
		P_NATIVE_END;
	}
	struct PlayerCombatComponent_eventPlayCharacterAttackAnim_Parms
	{
		FName AttackName;
	};
	static FName NAME_UPlayerCombatComponent_PlayCharacterAttackAnim = FName(TEXT("PlayCharacterAttackAnim"));
	void UPlayerCombatComponent::PlayCharacterAttackAnim(FName AttackName)
	{
		PlayerCombatComponent_eventPlayCharacterAttackAnim_Parms Parms;
		Parms.AttackName=AttackName;
		ProcessEvent(FindFunctionChecked(NAME_UPlayerCombatComponent_PlayCharacterAttackAnim),&Parms);
	}
	void UPlayerCombatComponent::StaticRegisterNativesUPlayerCombatComponent()
	{
		UClass* Class = UPlayerCombatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentAttack", &UPlayerCombatComponent::execGetCurrentAttack },
			{ "ProcessPlayerHeavyAttack", &UPlayerCombatComponent::execProcessPlayerHeavyAttack },
			{ "ProcessPlayerLightAttack", &UPlayerCombatComponent::execProcessPlayerLightAttack },
			{ "ResetCurrentAttack", &UPlayerCombatComponent::execResetCurrentAttack },
			{ "UnlockPlayerAttack", &UPlayerCombatComponent::execUnlockPlayerAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack_Statics
	{
		struct PlayerCombatComponent_eventGetCurrentAttack_Parms
		{
			FS_AttackData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCombatComponent_eventGetCurrentAttack_Parms, ReturnValue), Z_Construct_UScriptStruct_FS_AttackData, METADATA_PARAMS(nullptr, 0) }; // 431738397
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCombatComponent, nullptr, "GetCurrentAttack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack_Statics::PlayerCombatComponent_eventGetCurrentAttack_Parms), Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttackName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim_Statics::NewProp_AttackName = { "AttackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCombatComponent_eventPlayCharacterAttackAnim_Parms, AttackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim_Statics::NewProp_AttackName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCombatComponent, nullptr, "PlayCharacterAttackAnim", nullptr, nullptr, sizeof(PlayerCombatComponent_eventPlayCharacterAttackAnim_Parms), Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerHeavyAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerHeavyAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerHeavyAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCombatComponent, nullptr, "ProcessPlayerHeavyAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerHeavyAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerHeavyAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerHeavyAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerHeavyAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerLightAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerLightAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerLightAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCombatComponent, nullptr, "ProcessPlayerLightAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerLightAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerLightAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerLightAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerLightAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCombatComponent_ResetCurrentAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCombatComponent_ResetCurrentAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCombatComponent_ResetCurrentAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCombatComponent, nullptr, "ResetCurrentAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCombatComponent_ResetCurrentAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_ResetCurrentAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCombatComponent_ResetCurrentAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCombatComponent_ResetCurrentAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack_Statics
	{
		struct PlayerCombatComponent_eventUnlockPlayerAttack_Parms
		{
			FName AttackName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttackName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack_Statics::NewProp_AttackName = { "AttackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCombatComponent_eventUnlockPlayerAttack_Parms, AttackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack_Statics::NewProp_AttackName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCombatComponent, nullptr, "UnlockPlayerAttack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack_Statics::PlayerCombatComponent_eventUnlockPlayerAttack_Parms), Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCombatComponent);
	UClass* Z_Construct_UClass_UPlayerCombatComponent_NoRegister()
	{
		return UPlayerCombatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCombatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__attackDataMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp__attackDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__attackDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp__attackDataMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCombatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerCombatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerCombatComponent_GetCurrentAttack, "GetCurrentAttack" }, // 3202223074
		{ &Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim, "PlayCharacterAttackAnim" }, // 3730753299
		{ &Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerHeavyAttack, "ProcessPlayerHeavyAttack" }, // 3985232273
		{ &Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerLightAttack, "ProcessPlayerLightAttack" }, // 2658769119
		{ &Z_Construct_UFunction_UPlayerCombatComponent_ResetCurrentAttack, "ResetCurrentAttack" }, // 2416391653
		{ &Z_Construct_UFunction_UPlayerCombatComponent_UnlockPlayerAttack, "UnlockPlayerAttack" }, // 1648069421
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerCombatComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataMap_ValueProp = { "_attackDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FS_AttackData, METADATA_PARAMS(nullptr, 0) }; // 431738397
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataMap_Key_KeyProp = { "_attackDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataMap = { "_attackDataMap", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerCombatComponent, _attackDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataMap_MetaData)) }; // 431738397
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCombatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCombatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCombatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCombatComponent_Statics::ClassParams = {
		&UPlayerCombatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerCombatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerCombatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerCombatComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerCombatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerCombatComponent.OuterSingleton, Z_Construct_UClass_UPlayerCombatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerCombatComponent.OuterSingleton;
	}
	template<> LITTLE_WARRIOR_API UClass* StaticClass<UPlayerCombatComponent>()
	{
		return UPlayerCombatComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCombatComponent);
	UPlayerCombatComponent::~UPlayerCombatComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCombatComponent, UPlayerCombatComponent::StaticClass, TEXT("UPlayerCombatComponent"), &Z_Registration_Info_UClass_UPlayerCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCombatComponent), 4216236197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_3209880722(TEXT("/Script/Little_Warrior"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
