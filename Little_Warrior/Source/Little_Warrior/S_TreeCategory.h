// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_SubTreeContent.h"
#include "S_TreeCategory.generated.h"


/**
 * 
 */

USTRUCT(BlueprintType)
struct LITTLE_WARRIOR_API FS_TreeCategory
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _categoryName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS_SubTreeContent _treeContent;

	FS_TreeCategory();
	~FS_TreeCategory();
};
