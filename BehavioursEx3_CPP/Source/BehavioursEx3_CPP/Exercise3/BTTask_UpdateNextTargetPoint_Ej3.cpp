// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_UpdateNextTargetPoint_Ej3.h"
#include "CharAIC_EJ3.h"

class ACharAIC_Ej3;

EBTNodeResult::Type UBTTask_UpdateNextTargetPoint_Ej3::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ACharAIC_Ej3* AIC_Enemy = Cast<ACharAIC_Ej3>(OwnerComp.GetOwner());

	AIC_Enemy->UpdateNextTargetPoint();

	return EBTNodeResult::Type();
}

FString UBTTask_UpdateNextTargetPoint_Ej3::GetStaticDescription() const
{
	return TEXT("Actualiza el siguiente punto en el recorrido");
}
