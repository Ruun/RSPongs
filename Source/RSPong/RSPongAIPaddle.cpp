// RSPongAIPaddle.cpp
#include "RSPongAIPaddle.h"
#include "RSPongBall.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

ARSPongAIPaddle::ARSPongAIPaddle()
{
    PrimaryActorTick.bCanEverTick = true;

    PaddleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PaddleMesh"));
    RootComponent = PaddleMesh;

    MovementSpeed = 500.0f;
    Ball = nullptr;
}

void ARSPongAIPaddle::BeginPlay()
{
    Super::BeginPlay();
    Ball = Cast<ARSPongBall>(UGameplayStatics::GetActorOfClass(GetWorld(), ARSPongBall::StaticClass()));
}

void ARSPongAIPaddle::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    TrackBall(DeltaTime);
}

void ARSPongAIPaddle::TrackBall(float DeltaTime)
{
    if (Ball)
    {
        FVector BallLocation = Ball->GetActorLocation();
        FVector PaddleLocation = GetActorLocation();

        float Direction = (BallLocation.X > PaddleLocation.X) ? 1.0f : -1.0f; // Move along X-axis (Up/Down in top-down view)
        if (FMath::Abs(BallLocation.X - PaddleLocation.X) > 10.0f) // Avoid jittery movement
        {
            FVector NewLocation = PaddleLocation + FVector(Direction * MovementSpeed * DeltaTime, 0.0f, 0.0f);
            SetActorLocation(NewLocation);
        }
    }
}