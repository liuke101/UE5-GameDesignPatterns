// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyPattern/StrategyContext.h"

#include "StrategyPattern/Strategy.h"

int UStrategyContext::Calc(int a, int b)
{
	int res = 0;
	if(Strategy)
	{
		res = Strategy->CalcValue(a,b);
		
		//打印结果
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("StrategyContext Calc a:%d b:%d res:%d"), a, b, res));
	}
	return res;
}
