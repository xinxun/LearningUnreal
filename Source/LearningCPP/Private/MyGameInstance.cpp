// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "MyGameInstanceSubsystem.h"

void UMyGameInstance::Init()
{
	Super::Init();
	UE_LOG(LogTemp, Warning, TEXT("UMyGameInstance::Init()"));

	// 获取 MySubsystem 实例，并调用其中的函数
	/*auto Subsystem = GetSubsystem<UMyGameInstanceSubsystem>();
	Subsystem->Test();*/
}

/** virtual function to allow custom GameInstances an opportunity to do cleanup when shutting down */
void UMyGameInstance::Shutdown()
{
	Super::Shutdown();
	UE_LOG(LogTemp, Warning, TEXT("UMyGameInstance::Shutdown()"));



}