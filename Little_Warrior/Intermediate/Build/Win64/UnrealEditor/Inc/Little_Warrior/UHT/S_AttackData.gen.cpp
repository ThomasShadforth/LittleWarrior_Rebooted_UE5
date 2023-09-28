// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/S_AttackData.h"
#include "Little_Warrior/S_KnockbackData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_AttackData() {}
// Cross Module References
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_AttackData();
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_KnockbackData();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_AttackData;
class UScriptStruct* FS_AttackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_AttackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_AttackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_AttackData, Z_Construct_UPackage__Script_Little_Warrior(), TEXT("S_AttackData"));
	}
	return Z_Registration_Info_UScriptStruct_S_AttackData.OuterSingleton;
}
template<> LITTLE_WARRIOR_API UScriptStruct* StaticStruct<FS_AttackData>()
{
	return FS_AttackData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_AttackData_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnlocked_MetaData[];
#endif
		static void NewProp_bUnlocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnlocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__knockbackData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__knockbackData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_AttackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_AttackData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__attackName_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__attackName = { "_attackName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_AttackData, _attackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__attackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__attackName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__nextLightAttack_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__nextLightAttack = { "_nextLightAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_AttackData, _nextLightAttack), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__nextLightAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__nextLightAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__nextHeavyAttack_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__nextHeavyAttack = { "_nextHeavyAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_AttackData, _nextHeavyAttack), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__nextHeavyAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__nextHeavyAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bUnlocked_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bUnlocked_SetBit(void* Obj)
	{
		((FS_AttackData*)Obj)->bUnlocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bUnlocked = { "bUnlocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FS_AttackData), &Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bUnlocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__knockbackData_MetaData[] = {
		{ "Category", "S_AttackData" },
		{ "ModuleRelativePath", "S_AttackData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__knockbackData = { "_knockbackData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_AttackData, _knockbackData), Z_Construct_UScriptStruct_FS_KnockbackData, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__knockbackData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__knockbackData_MetaData)) }; // 437569791
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_AttackData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__attackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__nextLightAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__nextHeavyAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp_bUnlocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_AttackData_Statics::NewProp__knockbackData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_AttackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
		nullptr,
		&NewStructOps,
		"S_AttackData",
		sizeof(FS_AttackData),
		alignof(FS_AttackData),
		Z_Construct_UScriptStruct_FS_AttackData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_AttackData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_AttackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_AttackData()
	{
		if (!Z_Registration_Info_UScriptStruct_S_AttackData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_AttackData.InnerSingleton, Z_Construct_UScriptStruct_FS_AttackData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_AttackData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_AttackData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_AttackData_h_Statics::ScriptStructInfo[] = {
		{ FS_AttackData::StaticStruct, Z_Construct_UScriptStruct_FS_AttackData_Statics::NewStructOps, TEXT("S_AttackData"), &Z_Registration_Info_UScriptStruct_S_AttackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_AttackData), 431738397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_AttackData_h_3510117693(TEXT("/Script/Little_Warrior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_AttackData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_AttackData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
