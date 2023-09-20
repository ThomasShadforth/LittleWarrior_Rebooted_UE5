// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/PlayerCombatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCombatComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_UPlayerCombatComponent();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_UPlayerCombatComponent_NoRegister();
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FAttackDataTable();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References

static_assert(std::is_polymorphic<FAttackDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAttackDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttackDataTable;
class UScriptStruct* FAttackDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttackDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttackDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttackDataTable, Z_Construct_UPackage__Script_Little_Warrior(), TEXT("AttackDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_AttackDataTable.OuterSingleton;
}
template<> LITTLE_WARRIOR_API UScriptStruct* StaticStruct<FAttackDataTable>()
{
	return FAttackDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttackDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__attackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp__attackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__nextLightAttack_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp__nextLightAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__nextHeavyAttack_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp__nextHeavyAttack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttackDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__attackName_MetaData[] = {
		{ "Category", "AttackDataTable" },
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__attackName = { "_attackName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttackDataTable, _attackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__attackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__attackName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__nextLightAttack_MetaData[] = {
		{ "Category", "AttackDataTable" },
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__nextLightAttack = { "_nextLightAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttackDataTable, _nextLightAttack), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__nextLightAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__nextLightAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__nextHeavyAttack_MetaData[] = {
		{ "Category", "AttackDataTable" },
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__nextHeavyAttack = { "_nextHeavyAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttackDataTable, _nextHeavyAttack), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__nextHeavyAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__nextHeavyAttack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttackDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__attackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__nextLightAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewProp__nextHeavyAttack,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttackDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AttackDataTable",
		sizeof(FAttackDataTable),
		alignof(FAttackDataTable),
		Z_Construct_UScriptStruct_FAttackDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttackDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttackDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_AttackDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttackDataTable.InnerSingleton, Z_Construct_UScriptStruct_FAttackDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttackDataTable.InnerSingleton;
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
			{ "ProcessPlayerHeavyAttack", &UPlayerCombatComponent::execProcessPlayerHeavyAttack },
			{ "ProcessPlayerLightAttack", &UPlayerCombatComponent::execProcessPlayerLightAttack },
			{ "ResetCurrentAttack", &UPlayerCombatComponent::execResetCurrentAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__attackDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__attackDataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCombatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerCombatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerCombatComponent_PlayCharacterAttackAnim, "PlayCharacterAttackAnim" }, // 3730753299
		{ &Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerHeavyAttack, "ProcessPlayerHeavyAttack" }, // 3985232273
		{ &Z_Construct_UFunction_UPlayerCombatComponent_ProcessPlayerLightAttack, "ProcessPlayerLightAttack" }, // 2658769119
		{ &Z_Construct_UFunction_UPlayerCombatComponent_ResetCurrentAttack, "ResetCurrentAttack" }, // 2416391653
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataTable = { "_attackDataTable", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerCombatComponent, _attackDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCombatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatComponent_Statics::NewProp__attackDataTable,
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
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_Statics::ScriptStructInfo[] = {
		{ FAttackDataTable::StaticStruct, Z_Construct_UScriptStruct_FAttackDataTable_Statics::NewStructOps, TEXT("AttackDataTable"), &Z_Registration_Info_UScriptStruct_AttackDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttackDataTable), 3295548565U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCombatComponent, UPlayerCombatComponent::StaticClass, TEXT("UPlayerCombatComponent"), &Z_Registration_Info_UClass_UPlayerCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCombatComponent), 203423300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_895767048(TEXT("/Script/Little_Warrior"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
