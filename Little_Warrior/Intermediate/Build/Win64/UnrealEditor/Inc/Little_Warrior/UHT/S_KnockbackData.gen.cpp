// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/S_KnockbackData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_KnockbackData() {}
// Cross Module References
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_KnockbackData();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_KnockbackData;
class UScriptStruct* FS_KnockbackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_KnockbackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_KnockbackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_KnockbackData, Z_Construct_UPackage__Script_Little_Warrior(), TEXT("S_KnockbackData"));
	}
	return Z_Registration_Info_UScriptStruct_S_KnockbackData.OuterSingleton;
}
template<> LITTLE_WARRIOR_API UScriptStruct* StaticStruct<FS_KnockbackData>()
{
	return FS_KnockbackData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_KnockbackData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldKnockback_MetaData[];
#endif
		static void NewProp_bShouldKnockback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldKnockback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldScrew_MetaData[];
#endif
		static void NewProp_bShouldScrew_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldScrew;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__upwardKnockForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__upwardKnockForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__forwardKnockForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__forwardKnockForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__juggleBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__juggleBuffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_KnockbackData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "S_KnockbackData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_KnockbackData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldKnockback_MetaData[] = {
		{ "Category", "S_KnockbackData" },
		{ "ModuleRelativePath", "S_KnockbackData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldKnockback_SetBit(void* Obj)
	{
		((FS_KnockbackData*)Obj)->bShouldKnockback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldKnockback = { "bShouldKnockback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FS_KnockbackData), &Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldKnockback_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldKnockback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldKnockback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldScrew_MetaData[] = {
		{ "Category", "S_KnockbackData" },
		{ "ModuleRelativePath", "S_KnockbackData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldScrew_SetBit(void* Obj)
	{
		((FS_KnockbackData*)Obj)->bShouldScrew = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldScrew = { "bShouldScrew", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FS_KnockbackData), &Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldScrew_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldScrew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldScrew_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__upwardKnockForce_MetaData[] = {
		{ "Category", "S_KnockbackData" },
		{ "ModuleRelativePath", "S_KnockbackData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__upwardKnockForce = { "_upwardKnockForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_KnockbackData, _upwardKnockForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__upwardKnockForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__upwardKnockForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__forwardKnockForce_MetaData[] = {
		{ "Category", "S_KnockbackData" },
		{ "ModuleRelativePath", "S_KnockbackData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__forwardKnockForce = { "_forwardKnockForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_KnockbackData, _forwardKnockForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__forwardKnockForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__forwardKnockForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__juggleBuffer_MetaData[] = {
		{ "Category", "S_KnockbackData" },
		{ "ModuleRelativePath", "S_KnockbackData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__juggleBuffer = { "_juggleBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_KnockbackData, _juggleBuffer), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__juggleBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__juggleBuffer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_KnockbackData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldKnockback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp_bShouldScrew,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__upwardKnockForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__forwardKnockForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewProp__juggleBuffer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_KnockbackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
		nullptr,
		&NewStructOps,
		"S_KnockbackData",
		sizeof(FS_KnockbackData),
		alignof(FS_KnockbackData),
		Z_Construct_UScriptStruct_FS_KnockbackData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_KnockbackData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_KnockbackData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_KnockbackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_KnockbackData()
	{
		if (!Z_Registration_Info_UScriptStruct_S_KnockbackData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_KnockbackData.InnerSingleton, Z_Construct_UScriptStruct_FS_KnockbackData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_KnockbackData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_KnockbackData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_KnockbackData_h_Statics::ScriptStructInfo[] = {
		{ FS_KnockbackData::StaticStruct, Z_Construct_UScriptStruct_FS_KnockbackData_Statics::NewStructOps, TEXT("S_KnockbackData"), &Z_Registration_Info_UScriptStruct_S_KnockbackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_KnockbackData), 437569791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_KnockbackData_h_3911948730(TEXT("/Script/Little_Warrior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_KnockbackData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_KnockbackData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
