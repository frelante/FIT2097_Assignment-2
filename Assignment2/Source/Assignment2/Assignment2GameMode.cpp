// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Assignment2GameMode.h"
#include "Assignment2HUD.h"
#include "Assignment2Character.h"
#include "UObject/ConstructorHelpers.h"

AAssignment2GameMode::AAssignment2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAssignment2HUD::StaticClass();
}
