// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiPlayProjectGameMode.h"
#include "MultiPlayProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiPlayProjectGameMode::AMultiPlayProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
