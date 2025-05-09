// Copyright Epic Games, Inc. All Rights Reserved.

#include "SandboxTPSGameMode.h"
#include "SandboxTPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASandboxTPSGameMode::ASandboxTPSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
