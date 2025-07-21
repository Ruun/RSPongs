// RSPongHUD.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "RSPongHUD.generated.h"

UCLASS()
class RSPONG_API ARSPongHUD : public AHUD
{
    GENERATED_BODY()

public:
    virtual void DrawHUD() override;
};