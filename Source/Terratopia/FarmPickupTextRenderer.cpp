// Fill out your copyright notice in the Description page of Project Settings.


#include "FarmPickupTextRenderer.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "TerratopiaCharacter.h"

// Sets default values
AFarmPickupTextRenderer::AFarmPickupTextRenderer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyString = CreateDefaultSubobject<UTextRenderComponent>(TEXT("-"));
	
}


// Called when the game starts or when spawned
void AFarmPickupTextRenderer::BeginPlay()
{
	Super::BeginPlay();
	APawn* Pawn = UGameplayStatics::GetPlayerPawn(this, 0);
	ATerratopiaCharacter* character = Cast<ATerratopiaCharacter>(Pawn);
	if (character)
	{
		character->FMultiCastStringDelegate.AddUObject(this, &AFarmPickupTextRenderer::ChangeText);

	}
}

// Called every frame
void AFarmPickupTextRenderer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AFarmPickupTextRenderer::ChangeText(FString Fstring) {
	/*MyString->SetText(FString(Fstring));*/
	MyString -> SetText(FText::FromString(Fstring));
}

