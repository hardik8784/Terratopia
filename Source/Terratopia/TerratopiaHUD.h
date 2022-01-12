// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TerratopiaHUD.generated.h"

UCLASS()
class ATerratopiaHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATerratopiaHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

