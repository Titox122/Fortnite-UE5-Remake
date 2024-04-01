#include "AthenaGameMode.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "FortPlayerPawn.h"

//Anti Cheat
void AAthenaGameMode::AddHealth(float PlayerHealth)
{
    // Accede al jugador controlado por el primer controlador de jugador en el mundo
    AFortPlayerPawn* PlayerPawn = Cast<AFortPlayerPawn>(GetWorld()->GetFirstPlayerController()->GetPawn());

    // Verifica que el puntero a PlayerPawn sea válido antes de realizar operaciones
    if (PlayerPawn)
    {
        // DEVELOPMENT ONLY
        PlayerPawn->PlayerHealth += PlayerHealth;

        //DO NOT USE IN NORMAL CLIENT ONLY IN PIE

        //Anti Cheat
        if (PlayerPawn->PlayerHealth > 100.0f)
        {
            HackDetected = true;

        }
    

    }
}

void AAthenaGameMode::AddShield(float PlayerShield)
{
    AFortPlayerPawn* PlayerPawn = Cast<AFortPlayerPawn>(GetWorld()->GetFirstPlayerController()->GetPawn());
    PlayerPawn->PlayerShield += PlayerShield;

    if (PlayerPawn->PlayerShield > 100.0f)
    {
        HackDetected = true;
    }

}

void AAthenaGameMode::DetectPlayerSpeed()
{
    AFortPlayerPawn* PlayerPawn = Cast<AFortPlayerPawn>(GetWorld()->GetFirstPlayerController()->GetPawn());

    if (PlayerPawn)
    {
        if (UCharacterMovementComponent* MovementComponent = PlayerPawn->GetCharacterMovement())
        {
            float MaxWalkSpeedThreshold = 600.0f; // Umbral de velocidad máxima de caminata
            if (MovementComponent->MaxWalkSpeed > MaxWalkSpeedThreshold)
            {
                // El jugador está moviéndose a una velocidad superior al umbral
                // Aquí puedes realizar cualquier acción relacionada con la detección de la velocidad
                HackDetected = true; // Por ejemplo, establecer HackDetected en verdadero
            }
        }
    }
}
