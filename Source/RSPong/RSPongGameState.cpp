// RSPongGameState.cpp
#include "RSPongGameState.h"

ARSPongGameState::ARSPongGameState()
{
    PlayerScore = 0;
    AIScore = 0;
}

int32 ARSPongGameState::GetPlayerScore() const
{
    return PlayerScore;
}

int32 ARSPongGameState::GetAIScore() const
{
    return AIScore;
}

void ARSPongGameState::UpdateScore(bool bPlayerScored)
{
    if (bPlayerScored)
    {
        PlayerScore++;
        UE_LOG(LogTemp, Warning, TEXT("Player Score: %d"), PlayerScore);
    }
    else
    {
        AIScore++;
        UE_LOG(LogTemp, Warning, TEXT("AI Score: %d"), AIScore);
    }
}