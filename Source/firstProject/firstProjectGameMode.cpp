// Copyright Epic Games, Inc. All Rights Reserved.

#include "firstProjectGameMode.h"
#include "firstProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AfirstProjectGameMode::AfirstProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
