// Fill out your copyright notice in the Description page of Project Settings.


#include "MVP/MVP_View.h"

#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "MVP/MVP_Controller.h"

void UMVP_View::NativeConstruct()
{
	Super::NativeConstruct();
	TestButton->OnClicked.AddDynamic(this, &UMVP_View::OnTestButtonClicked);
}

void UMVP_View::SetController(UMVP_Controller* InController)
{
	Controller = InController;
	if(Controller)
	{
		//绑定委托，当Model的Health和Mana发生变化时，更新UI
		Controller->OnModelHealthChanged.AddLambda([&](int32 NewHealth)
		{
			HealthText->SetText(FText::FromString(FString::FromInt(NewHealth)));
		});

		Controller->OnModelManaChanged.AddLambda([&](int32 NewMana)
		{
			ManaText->SetText(FText::FromString(FString::FromInt(NewMana)));
		});
	}
}

void UMVP_View::OnTestButtonClicked()
{
	if(Controller)
	{
		Controller->UpdateHealth(FMath::RandRange(0, 100));
		Controller->UpdateMana(FMath::RandRange(0, 100));
	}
}
