// Copyright Epic Games, Inc. All Rights Reserved.

#include "StreamGameGameMode.h"
#include "StreamGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStreamGameGameMode::AStreamGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
