// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableCharacter.h"

// Sets default values
AInteractableCharacter::AInteractableCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractableCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AInteractableCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AInteractableCharacter::Interaction_Implementation()
{

}