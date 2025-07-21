#include "RSPongHUD.h"
#include "Engine/Canvas.h"
#include "Kismet/GameplayStatics.h"
#include "RSPongGameState.h"

void ARSPongHUD::DrawHUD()
{
    Super::DrawHUD();

    // Fetch the game state every frame
    ARSPongGameState* GameState = Cast<ARSPongGameState>(UGameplayStatics::GetGameState(GetWorld()));
    if (GameState)
    {
        FString ScoreText = FString::Printf(TEXT("Player: %d  |  AI: %d"), GameState->GetAIScore(), GameState->GetPlayerScore());
        FVector2D ScreenPosition(50.0f, 50.0f);

        FCanvasTextItem TextItem(ScreenPosition, FText::FromString(ScoreText), GEngine->GetMediumFont(), FLinearColor::White);
        TextItem.Scale = FVector2D(3.0f, 3.0f); // Increase text size by 3x
        TextItem.EnableShadow(FLinearColor::Black); // Add shadow for better readability

        Canvas->DrawItem(TextItem);
    }
}
