// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FarmPickupTextRenderer.generated.h"

UCLASS()
class TERRATOPIA_API AFarmPickupTextRenderer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFarmPickupTextRenderer();
	/*UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "String Actor")
		class UTextRenderComponent* TextRenderer;*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "String Actor")
		class UTextRenderComponent* MyString;
	UFUNCTION()
		void ChangeText(FString Fstring);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
