// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "TargetPoint_Ej3.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIOURSEX3_CPP_API ATargetPoint_Ej3 : public ATargetPoint
{
	GENERATED_BODY()
	
public:
	// Position
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Position")
	int32 m_iIndex;
};
