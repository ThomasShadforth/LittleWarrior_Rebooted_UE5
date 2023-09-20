// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/HitInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_UHitInterface();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_UHitInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	struct HitInterface_eventOnHit_Parms
	{
		AActor* HitActor;
	};
	void IHitInterface::OnHit(AActor* HitActor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnHit instead.");
	}
	void UHitInterface::StaticRegisterNativesUHitInterface()
	{
	}
	struct Z_Construct_UFunction_UHitInterface_OnHit_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitInterface_OnHit_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HitInterface_eventOnHit_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitInterface_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitInterface_OnHit_Statics::NewProp_HitActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitInterface_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HitInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitInterface_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitInterface, nullptr, "OnHit", nullptr, nullptr, sizeof(HitInterface_eventOnHit_Parms), Z_Construct_UFunction_UHitInterface_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitInterface_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitInterface_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitInterface_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitInterface_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitInterface_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitInterface);
	UClass* Z_Construct_UClass_UHitInterface_NoRegister()
	{
		return UHitInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHitInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHitInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitInterface_OnHit, "OnHit" }, // 2679606264
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "HitInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHitInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitInterface_Statics::ClassParams = {
		&UHitInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHitInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitInterface()
	{
		if (!Z_Registration_Info_UClass_UHitInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitInterface.OuterSingleton, Z_Construct_UClass_UHitInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHitInterface.OuterSingleton;
	}
	template<> LITTLE_WARRIOR_API UClass* StaticClass<UHitInterface>()
	{
		return UHitInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitInterface);
	UHitInterface::~UHitInterface() {}
	static FName NAME_UHitInterface_OnHit = FName(TEXT("OnHit"));
	void IHitInterface::Execute_OnHit(UObject* O, AActor* HitActor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHitInterface::StaticClass()));
		HitInterface_eventOnHit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHitInterface_OnHit);
		if (Func)
		{
			Parms.HitActor=HitActor;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHitInterface, UHitInterface::StaticClass, TEXT("UHitInterface"), &Z_Registration_Info_UClass_UHitInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitInterface), 1662720521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_3443277403(TEXT("/Script/Little_Warrior"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_HitInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
