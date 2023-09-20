// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_SubTreeSkill.h"
#include "S_SubTreeConnection.h"
#include "S_SubTreeContent.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct LITTLE_WARRIOR_API FS_SubTreeContent
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FS_SubTreeSkill> _skills;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FS_SubTreeConnection> _connections;

	FS_SubTreeContent();
	~FS_SubTreeContent();
};
