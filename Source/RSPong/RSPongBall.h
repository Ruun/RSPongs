// RSPongBall.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "RSPongBall.generated.h"

UCLASS()
class RSPONG_API ARSPongBall : public AActor
{
    GENERATED_BODY()

public:
    ARSPongBall();
    virtual void Tick(float DeltaTime) override;

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY(VisibleAnywhere)
    USphereComponent* CollisionSphere;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* BallMesh;

    UPROPERTY(EditAnywhere)
    float Speed;

    FVector Velocity;

    void MoveBall(float DeltaTime);
    void CheckCollision();
    void ResetBall();
    void CheckBoundaries();

    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};