// RSPongGameMode.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RSPongGameMode.generated.h"

UCLASS()
class RSPONG_API ARSPongGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ARSPongGameMode();
    virtual void BeginPlay() override;

    void ScorePoint(bool bPlayerScored);
    void AssignLevelCamera();

protected:
    int32 PlayerScore;
    int32 AIScore;
};