///----------------------------------------------------------------------------------
/// Terratopia
/// TerratopiaPickupItem.cpp
/// Author			: Zhikang Chen
/// Last Modified	: 2022/12/05
/// Description		: Pickup Item
/// Revision History: 1st -Zhikang
#include "TerratopiaPickupItem.h"
#include "TerratopiaCharacter.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ATerratopiaPickupItem::ATerratopiaPickupItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SetRootComponent(SceneComponent);
	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(RootComponent);
	
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetupAttachment(StaticMesh);
	CollisionBox->SetGenerateOverlapEvents(true);
	
	SetActorEnableCollision(true);
}

// Called when the game starts or when spawned
void ATerratopiaPickupItem::BeginPlay()
{
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ATerratopiaPickupItem::OnBeginOverLap);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &ATerratopiaPickupItem::OnEndOverLap);
	
}

void ATerratopiaPickupItem::OnBeginOverLap(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	ATerratopiaCharacter* player = Cast<ATerratopiaCharacter>(OtherActor);
	if (player)
		player->ItemsWithinRange.Add(this);
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Begin Over Lap w player");
}

void ATerratopiaPickupItem::OnEndOverLap(UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	ATerratopiaCharacter* player = Cast<ATerratopiaCharacter>(OtherActor);
	if (player)
		player->ItemsWithinRange.Remove(this);
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "End Over lap");
}
