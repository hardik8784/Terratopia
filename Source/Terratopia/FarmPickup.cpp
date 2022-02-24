// Fill out your copyright notice in the Description page of Project Settings.


#include "FarmPickup.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
// Sets default values
AFarmPickup::AFarmPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Cast<USceneComponent>(Mesh);

	
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));

	FString ItemName = "-";
}

// Called when the game starts or when spawned
void AFarmPickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFarmPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

