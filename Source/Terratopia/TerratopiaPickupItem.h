///----------------------------------------------------------------------------------
/// Terratopia
/// TerratopiaPickupItem.h
/// Author			:	Zhikang Chen
/// Last Modified	:	2022/02/16
/// Description		:	Pickup Item
/// Revision History:	2nd - Zhikang
///								- Remove BeginPlay, OnBeginOverLap and OnEndOverLap
///								- Remove CollisionBox
///								- Added Interaction function

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

public:	
	// Sets default values for this actor's properties
	ATerratopiaPickupItem();

	UFUNCTION()
	/* Interact */
	virtual void Interaction();
};
