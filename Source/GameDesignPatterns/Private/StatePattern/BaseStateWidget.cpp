// Fill out your copyright notice in the Description page of Project Settings.


#include "StatePattern/BaseStateWidget.h"

void UBaseStateWidget::EnterState()
{
	AddToViewport();
}

void UBaseStateWidget::ExitState()
{
	RemoveFromParent();
}
