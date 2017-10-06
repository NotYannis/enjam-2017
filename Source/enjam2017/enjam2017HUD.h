// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "enjam2017HUD.generated.h"

UCLASS()
class Aenjam2017HUD : public AHUD
{
	GENERATED_BODY()

public:
	Aenjam2017HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

