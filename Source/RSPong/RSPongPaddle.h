#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RSPongPaddle.generated.h"

UCLASS()
class RSPONG_API ARSPongPaddle : public APawn
{
    GENERATED_BODY()

public:
    ARSPongPaddle();
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* PaddleMesh;

    UPROPERTY(EditAnywhere)
    float MovementSpeed;

    FVector MovementDirection;

public:
    void Move(float Value); // Fixed function to match PlayerController
};
