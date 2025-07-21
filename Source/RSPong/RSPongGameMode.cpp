// RSPongGameMode.cpp
#include "RSPongGameMode.h"
#include "RSPongBall.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "GameFramework/PlayerController.h"
#include "EngineUtils.h" // Added to support TActorIterator
#include "RSPongGameState.h"

ARSPongGameMode::ARSPongGameMode()
{
    PlayerScore = 0;
    AIScore = 0;
}

void ARSPongGameMode::BeginPlay()
{
    Super::BeginPlay();
    AssignLevelCamera();
}

void ARSPongGameMode::ScorePoint(bool bPlayerScored)
{
    ARSPongGameState* PongGameState = Cast<ARSPongGameState>(UGameplayStatics::GetGameState(GetWorld()));

    if (PongGameState)
    {
        if (bPlayerScored)
        {
            PongGameState->UpdateScore(true);
            UE_LOG(LogTemp, Warning, TEXT("Player Score: %d"), PongGameState->GetPlayerScore());
        }
        else
        {
            PongGameState->UpdateScore(false);
            UE_LOG(LogTemp, Warning, TEXT("AI Score: %d"), PongGameState->GetAIScore());
        }
    }
}

void ARSPongGameMode::AssignLevelCamera()
{
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    if (PlayerController)
    {
        for (TActorIterator<ACameraActor> CameraItr(GetWorld()); CameraItr; ++CameraItr)
        {
            PlayerController->SetViewTarget(*CameraItr);
            UE_LOG(LogTemp, Warning, TEXT("Camera assigned: %s"), *CameraItr->GetName());
            break; // Assign the first found CameraActor
        }
    }
}