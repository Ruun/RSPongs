// RSPongPlayerController.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RSPongPlayerController.generated.h"

UCLASS()
class RSPONG_API ARSPongPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    ARSPongPlayerController();
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override; // Added for input handling

private:
    void MoveUp();
    void MoveDown();
    void StopMoving();
};
