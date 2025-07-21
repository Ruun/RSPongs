// RSPongGameState.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "RSPongGameState.generated.h"

UCLASS()
class RSPONG_API ARSPongGameState : public AGameStateBase
{
    GENERATED_BODY()

public:
    ARSPongGameState();

    UFUNCTION(BlueprintCallable, Category = "Score")
    int32 GetPlayerScore() const;

    UFUNCTION(BlueprintCallable, Category = "Score")
    int32 GetAIScore() const;

    UFUNCTION()
    void UpdateScore(bool bPlayerScored);

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Score")
    int32 PlayerScore;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Score")
    int32 AIScore;
};