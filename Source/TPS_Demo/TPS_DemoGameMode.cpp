// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TPS_DemoGameMode.h"
#include "TPS_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPS_DemoGameMode::ATPS_DemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
