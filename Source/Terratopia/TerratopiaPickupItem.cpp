///----------------------------------------------------------------------------------
/// Terratopia
/// TerratopiaPickupItem.cpp
/// Author			:	Zhikang Chen
/// Last Modified	:	2022/12/16
/// Description		:	Pickup Item
/// Revision History:	2nd - Zhikang
///								- Remove BeginPlay, OnBeginOverLap and OnEndOverLap
///								- Remove CollisionBox
///								- Added Interaction function						

#include "TerratopiaPickupItem.h"
#include "TerratopiaCharacter.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ATerratopiaPickupItem::ATerratopiaPickupItem()
{
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SetRootComponent(SceneComponent);
	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(RootComponent);	
	SetActorEnableCollision(true);
}

void ATerratopiaPickupItem::Interaction()
{
	Destroy();
}
