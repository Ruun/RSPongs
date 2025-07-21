// RSPongAIPaddle.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSPongAIPaddle.generated.h"

UCLASS()
class RSPONG_API ARSPongAIPaddle : public AActor
{
    GENERATED_BODY()

public:
    ARSPongAIPaddle();
    virtual void Tick(float DeltaTime) override;

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* PaddleMesh;

    UPROPERTY(EditAnywhere)
    float MovementSpeed;

    class ARSPongBall* Ball;

    void TrackBall(float DeltaTime);
};