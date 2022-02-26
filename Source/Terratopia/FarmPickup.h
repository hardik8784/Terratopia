// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FarmPickup.generated.h"

UCLASS()
class TERRATOPIA_API AFarmPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFarmPickup();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "String Actor")
		class UStaticMeshComponent* Mesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "String Actor")
		class UBoxComponent* BoxCollider;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		FString Fstring;
	/*UFUNCTION(BlueprintCallable)
		void ChangeText(FString Fstring);*/
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
