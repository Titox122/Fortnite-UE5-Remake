#include "FortWeapon.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AFortWeapon::AFortWeapon()
{
    // Set this actor to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Create and initialize the Skeletal Mesh component
    WeaponMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMeshComponent"));
    RootComponent = WeaponMeshComponent; // Set the component as the root of the actor
}

// Called when the game starts or when spawned
void AFortWeapon::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AFortWeapon::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
