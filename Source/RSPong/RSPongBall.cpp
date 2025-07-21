// RSPongBall.cpp
#include "RSPongBall.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "RSPongGameMode.h"

ARSPongBall::ARSPongBall()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create Collision Sphere
    CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    RootComponent = CollisionSphere;
    CollisionSphere->InitSphereRadius(15.0f);
    CollisionSphere->SetCollisionProfileName(TEXT("BlockAllDynamic"));
    CollisionSphere->SetNotifyRigidBodyCollision(true);
    CollisionSphere->OnComponentHit.AddDynamic(this, &ARSPongBall::OnHit);

    // Create Ball Mesh
    BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
    BallMesh->SetupAttachment(CollisionSphere);
    BallMesh->SetSimulatePhysics(false); // Ensure physics is off
    BallMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    Speed = 1800.0f;
    Velocity = FVector(FMath::RandRange(-1.0f, 1.0f) * Speed, FMath::RandRange(-1.0f, 1.0f) * Speed, 0.0f).GetSafeNormal() * Speed;
}

void ARSPongBall::BeginPlay()
{
    Super::BeginPlay();
    ResetBall();
}

void ARSPongBall::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    MoveBall(DeltaTime);
    CheckBoundaries(); // Ensure this function is being called
}


void ARSPongBall::MoveBall(float DeltaTime)
{
    FVector NewLocation = GetActorLocation() + (Velocity * DeltaTime);
    SetActorLocation(NewLocation, true);
}

void ARSPongBall::CheckCollision()
{
    if (GetActorLocation().X <= -500.0f)
    {
        UE_LOG(LogTemp, Warning, TEXT("Player Lost"));
        ResetBall();
    }
    else if (GetActorLocation().X >= 500.0f)
    {
        UE_LOG(LogTemp, Warning, TEXT("AI Lost"));
        ResetBall();
    }
}

void ARSPongBall::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    FVector ReflectionVector = Velocity.MirrorByVector(Hit.ImpactNormal);
    Velocity = ReflectionVector.GetSafeNormal() * Speed;
}

void ARSPongBall::ResetBall()
{
    SetActorLocation(FVector(0.0f, 0.0f, 50.0f));
    Velocity = FVector(FMath::RandRange(-1.0f, 1.0f) * Speed, FMath::RandRange(-1.0f, 1.0f) * Speed, 0.0f).GetSafeNormal() * Speed;
}

void ARSPongBall::CheckBoundaries()
{
    FVector BallLocation = GetActorLocation();
    float BoundaryY = 2200.0f; // Left and Right boundary

    // Get the game mode instance
    ARSPongGameMode* GameMode = Cast<ARSPongGameMode>(UGameplayStatics::GetGameMode(GetWorld()));

    if (BallLocation.Y <= -BoundaryY || BallLocation.Y >= BoundaryY)
    {
        UE_LOG(LogTemp, Warning, TEXT("Ball Reset"));

        if (GameMode)
        {

            // Determine who scored: If Y > 0, player scored; else, AI scored
            bool bPlayerScored = (BallLocation.Y > 0);
            GameMode->ScorePoint(bPlayerScored);
            UE_LOG(LogTemp, Warning, TEXT("Ball Reset Helppp"));
        }

        ResetBall();
    }
}