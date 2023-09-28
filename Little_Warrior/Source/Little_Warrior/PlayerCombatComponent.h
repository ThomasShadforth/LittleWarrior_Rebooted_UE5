// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "S_AttackData.h"
#include "PlayerCombatComponent.generated.h"

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

	UFUNCTION(BlueprintCallable)
	void UnlockPlayerAttack(FName AttackName);

private:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = AttackData, meta = (AllowPrivateAccess = "true"))
	TMap<FName, FS_AttackData> _attackDataMap;

	FS_AttackData* _currentAttack;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintImplementableEvent)
	void PlayCharacterAttackAnim(FName AttackName);

	UFUNCTION(BlueprintCallable)
	FS_AttackData GetCurrentAttack() const { return *_currentAttack; }
		
};
