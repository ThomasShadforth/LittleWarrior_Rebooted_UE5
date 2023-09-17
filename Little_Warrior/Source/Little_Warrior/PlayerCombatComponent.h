// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "PlayerCombatComponent.generated.h"

USTRUCT(BlueprintType)
struct FAttackDataTable : public FTableRowBase {
	GENERATED_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _attackName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _nextLightAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _nextHeavyAttack;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class LITTLE_WARRIOR_API UPlayerCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerCombatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void ProcessPlayerLightAttack();

	UFUNCTION(BlueprintCallable)
	void ProcessPlayerHeavyAttack();

	UFUNCTION(BlueprintCallable)
	void ResetCurrentAttack();

	void GetNextAttack(FName AttackName);

private:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = DataTable, meta = (AllowPrivateAccess = "true"))
	UDataTable* _attackDataTable;

	FAttackDataTable* _currentAttackData;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintImplementableEvent)
	void PlayCharacterAttackAnim(FName AttackName);
		
};
