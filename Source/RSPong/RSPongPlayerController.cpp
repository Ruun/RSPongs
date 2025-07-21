// RSPongPlayerController.cpp
#include "RSPongPlayerController.h"
#include "RSPongPaddle.h"
#include "Camera/CameraActor.h"
#include "GameFramework/PlayerController.h"
#include "EngineUtils.h" // Added to support TActorIterator

ARSPongPlayerController::ARSPongPlayerController()
{
}

void ARSPongPlayerController::BeginPlay()
{
    Super::BeginPlay();

    for (TActorIterator<ACameraActor> CameraItr(GetWorld()); CameraItr; ++CameraItr)
    {
        SetViewTarget(*CameraItr);
        UE_LOG(LogTemp, Warning, TEXT("Camera assigned: %s"), *CameraItr->GetName());
        break; // Assign the first found CameraActor
    }
}

void ARSPongPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    InputComponent->BindAction("MoveUp", IE_Pressed, this, &ARSPongPlayerController::MoveUp);
    InputComponent->BindAction("MoveDown", IE_Pressed, this, &ARSPongPlayerController::MoveDown);
    InputComponent->BindAction("MoveUp", IE_Released, this, &ARSPongPlayerController::StopMoving);
    InputComponent->BindAction("MoveDown", IE_Released, this, &ARSPongPlayerController::StopMoving);
}

void ARSPongPlayerController::MoveUp()
{
    ARSPongPaddle* PlayerPaddle = Cast<ARSPongPaddle>(GetPawn());
    if (PlayerPaddle)
    {
        PlayerPaddle->Move(1.0f);
    }
}

void ARSPongPlayerController::MoveDown()
{
    ARSPongPaddle* PlayerPaddle = Cast<ARSPongPaddle>(GetPawn());
    if (PlayerPaddle)
    {
        PlayerPaddle->Move(-1.0f);
    }
}

void ARSPongPlayerController::StopMoving()
{
    ARSPongPaddle* PlayerPaddle = Cast<ARSPongPaddle>(GetPawn());
    if (PlayerPaddle)
    {
        PlayerPaddle->Move(0.0f);
    }
}
