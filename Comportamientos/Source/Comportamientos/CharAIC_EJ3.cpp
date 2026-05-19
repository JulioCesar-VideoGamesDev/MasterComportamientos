// Fill out your copyright notice in the Description page of Project Settings.


#include "CharAIC_Ej3.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "EngineUtils.h"

void ACharAIC_Ej3::UpdateNextTargetPoint()
{
	UBrainComponent* Brain = GetBrainComponent();
	UBlackboardComponent* pBlackBoard = Brain->GetBlackboardComponent();
	int32 iTargetPointIndex = pBlackBoard->GetValueAsInt("TargetPointIndex");

	if (iTargetPointIndex >= 4)
	{
		iTargetPointIndex = 0;
		pBlackBoard->SetValueAsInt("TargetPointIndex", iTargetPointIndex);
	}

	for (TActorIterator<ATargetPoint_Ej3> It(GetWorld()); It; ++It)
	{
		ATargetPoint_Ej3* pTargetPoint = *It;

		if (iTargetPointIndex == pTargetPoint->m_iIndex)
		{
			pBlackBoard->SetValueAsVector("TargetPointPosition", pTargetPoint->GetActorLocation());
			break;
		}
	}

	pBlackBoard->SetValueAsInt("TargetPositionIndex", (iTargetPointIndex + 1));
}
