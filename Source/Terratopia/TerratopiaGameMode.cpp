// Copyright Epic Games, Inc. All Rights Reserved.

#include "TerratopiaGameMode.h"
#include "TerratopiaHUD.h"
#include "TerratopiaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATerratopiaGameMode::ATerratopiaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATerratopiaHUD::StaticClass();
}
