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
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_UPlayerCombatComponent();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_UPlayerCombatComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	void UPlayerCombatComponent::StaticRegisterNativesUPlayerCombatComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCombatComponent);
	UClass* Z_Construct_UClass_UPlayerCombatComponent_NoRegister()
	{
		return UPlayerCombatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCombatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCombatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerCombatComponent.h" },
		{ "ModuleRelativePath", "PlayerCombatComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCombatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCombatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCombatComponent_Statics::ClassParams = {
		&UPlayerCombatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
		{ Z_Construct_UClass_UPlayerCombatComponent, UPlayerCombatComponent::StaticClass, TEXT("UPlayerCombatComponent"), &Z_Registration_Info_UClass_UPlayerCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCombatComponent), 1834945070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_118908828(TEXT("/Script/Little_Warrior"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerCombatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
