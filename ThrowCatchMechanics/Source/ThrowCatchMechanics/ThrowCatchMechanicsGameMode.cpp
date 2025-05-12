// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThrowCatchMechanicsGameMode.h"
#include "ThrowCatchMechanicsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThrowCatchMechanicsGameMode::AThrowCatchMechanicsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
