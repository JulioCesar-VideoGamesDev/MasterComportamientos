// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_MoveToEnemy_Ej3.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIOURSEX3_CPP_API UBTTask_MoveToEnemy_Ej3 : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_MoveToEnemy_Ej3();
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	virtual void TickTask(class UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	virtual FString GetStaticDescription() const override;
};
