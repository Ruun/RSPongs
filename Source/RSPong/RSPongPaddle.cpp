#include "RSPongPaddle.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Actor.h"
#include "Components/InputComponent.h"

ARSPongPaddle::ARSPongPaddle()
{
    PrimaryActorTick.bCanEverTick = true;

    // Ensure that the player possesses this pawn
    AutoPossessPlayer = EAutoReceiveInput::Player0;

    PaddleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PaddleMesh"));
    RootComponent = PaddleMesh;

    MovementSpeed = 1500.0f;
    MovementDirection = FVector::ZeroVector;
}


void ARSPongPaddle::BeginPlay()
{
    Super::BeginPlay();
}

void ARSPongPaddle::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (!MovementDirection.IsZero())
    {
        FVector NewLocation = GetActorLocation() + (MovementDirection * MovementSpeed * DeltaTime);
        SetActorLocation(NewLocation);
    }
}

void ARSPongPaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAxis("MoveUp", this, &ARSPongPaddle::Move);
}

void ARSPongPaddle::Move(float Value)
{
    MovementDirection = FVector(Value, 0.0f, 0.0f); // Move along X-axis (Up/Down in top-down view)
}
