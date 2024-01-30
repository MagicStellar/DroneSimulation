// Copyright Epic Games, Inc. All Rights Reserved.

#include "DroneSimulationGameMode.h"
#include "DroneSimulationCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADroneSimulationGameMode::ADroneSimulationGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
