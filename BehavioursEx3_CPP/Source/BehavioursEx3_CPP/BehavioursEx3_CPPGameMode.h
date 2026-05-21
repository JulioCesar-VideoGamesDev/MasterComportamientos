// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BehavioursEx3_CPPGameMode.generated.h"

/**
 *  Simple Game Mode for a top-down perspective game
 *  Sets the default gameplay framework classes
 *  Check the Blueprint derived class for the set values
 */
UCLASS(abstract)
class ABehavioursEx3_CPPGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	/** Constructor */
	ABehavioursEx3_CPPGameMode();
};



