///----------------------------------------------------------------------------------
/// Terratopia
/// TerratopiaPickupItem.h
/// Author			: Zhikang Chen
/// Last Modified	: 2022/12/05
/// Description		: Pickup Item
/// Revision History: 1st -Zhikang

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TerratopiaPickupItem.generated.h"

//DECLARE_MULTICAST_DELEGATE_OneParam(FWithinRange, class AActor*);

UCLASS()
class TERRATOPIA_API ATerratopiaPickupItem : public AActor
{
	GENERATED_BODY()

	/* Root for teh static mesh */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class USceneComponent* SceneComponent;
	
	/* The main body for the item */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* StaticMesh;

	/* Box use to check if the player is near it */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* CollisionBox;

public:	
	// Sets default values for this actor's properties
	ATerratopiaPickupItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void OnBeginOverLap(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult);

	UFUNCTION()
		void OnEndOverLap(UPrimitiveComponent* OverlappedComp,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex);
};
