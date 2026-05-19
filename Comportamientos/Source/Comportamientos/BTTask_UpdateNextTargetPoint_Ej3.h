// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_UpdateNextTargetPoint_Ej3.generated.h"

/**
 * 
 */
UCLASS()
class COMPORTAMIENTOS_API UBTTask_UpdateNextTargetPoint_Ej3 : public UBTTaskNode
{
	GENERATED_BODY()
	
	// Gets called when the task starts, has to return Succeeded, Failed or InProgress
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);

	// Allows to define a description for this task. This text is visible when added to BT
	virtual FString GetStaticDescription() const override;
};
