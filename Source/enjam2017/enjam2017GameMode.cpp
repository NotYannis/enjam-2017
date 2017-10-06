// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "enjam2017GameMode.h"
#include "enjam2017HUD.h"
#include "enjam2017Character.h"
#include "UObject/ConstructorHelpers.h"

Aenjam2017GameMode::Aenjam2017GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Aenjam2017HUD::StaticClass();
}
