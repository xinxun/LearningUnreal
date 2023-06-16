// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"
#include "Subsystems/GameInstanceSubsystem.h"


// Begin USubsystem
void UMyGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("----------UMyGameInstanceSubsystem::Initialize()----------"));
}
void UMyGameInstanceSubsystem::Deinitialize()
{
	Super::Deinitialize();
	UE_LOG(LogTemp, Warning, TEXT("---------UMyGameInstanceSubsystem::Deinitialize()--------------"));
}
// End USubsystem
/*
void UMyGameInstanceSubsystem::Test()
{
	UE_LOG(LogTemp, Warning, TEXT("-----UMyGameInstanceSubsystem::Test()----"));
}*/

void UMyGameInstanceSubsystem::BluePrintTest()
{
	UE_LOG(LogTemp, Warning, TEXT("BBBB----UMyGameInstanceSubsystem::BluePrintTest()----BBBB"));
}