// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEImporterTutorialGameMode.h"
#include "UEImporterTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEImporterTutorialGameMode::AUEImporterTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
