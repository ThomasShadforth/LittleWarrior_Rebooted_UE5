// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCombatComponent.h"

// Sets default values for this component's properties
UPlayerCombatComponent::UPlayerCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UPlayerCombatComponent::ProcessPlayerLightAttack()
{
	if (_attackDataTable) {
		//If the player is currently attacking, check for the next light attack in the sequence (If it exists)
		if (_currentAttackData) {
			GetNextAttack(_currentAttackData->_nextLightAttack);
		}
		//Otherwise, start off with the firt jab
		else {
			GetNextAttack("Jab1");
		}
	}
}

void UPlayerCombatComponent::ProcessPlayerHeavyAttack()
{
	if (_attackDataTable) {

	}
}

void UPlayerCombatComponent::ResetCurrentAttack()
{
	_currentAttackData = nullptr;
}

void UPlayerCombatComponent::GetNextAttack(FName AttackName)
{
	FAttackDataTable* attackDataRow;
	attackDataRow = _attackDataTable->FindRow<FAttackDataTable>(AttackName, TEXT(""));

	if (attackDataRow) {
		PlayCharacterAttackAnim(attackDataRow->_attackName);
		_currentAttackData = attackDataRow;
	}
}




// Called every frame
void UPlayerCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

