// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_KnockbackData.generated.h"

/**
 *
 */

USTRUCT(BlueprintType)
struct LITTLE_WARRIOR_API FS_KnockbackData
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShouldKnockback;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShouldScrew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _upwardKnockForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _forwardKnockForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _juggleBuffer;

	FS_KnockbackData();
	~FS_KnockbackData();
};
