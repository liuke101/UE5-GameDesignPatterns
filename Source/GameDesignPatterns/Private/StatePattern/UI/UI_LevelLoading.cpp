// Fill out your copyright notice in the Description page of Project Settings.


#include "StatePattern/UI/UI_LevelLoading.h"

#include "Kismet/GameplayStatics.h"
#include "StatePattern/StateContextHUD.h"

void UUI_LevelLoading::EnterState()
{
	Super::EnterState();

	//延迟1秒后切换到主菜单
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
	{
		if (AStateContextHUD* StateContext = Cast<AStateContextHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD()))
		{
			StateContext->ChangeState(StateContext->StartMenu);
		}
	}, 1.0f, false);
}
