// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_KnockbackData.h"
#include "S_AttackData.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct LITTLE_WARRIOR_API FS_AttackData
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _attackName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _nextLightAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _nextHeavyAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUnlocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS_KnockbackData _knockbackData;

	FS_AttackData();
	~FS_AttackData();
};
