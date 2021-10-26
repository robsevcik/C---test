// Fill out your copyright notice in the Description page of Project Settings.


#include "Fred_gamemode.h"
#include "GameFramework/Actor.h"
#include <Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemTypes.h>


AFred_gamemode::AFred_gamemode() {

	PrimaryActorTick.bCanEverTick = true;
}

void AFred_gamemode::BeginPlay() {

	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &AFred_gamemode::SpawnPlayerRecharge, FMath::RandRange(2, 5), true);

}

void AFred_gamemode::Tick(float DeltaTime) {

	Super::Tick(DeltaTime);

}

inline void AFred_gamemode::SpawnPlayerRecharge()
{


	float RandX = FMath::RandRange(Spawn_x_min, Spawn_x_max);
	float RandY = FMath::RandRange(Spawn_Y_min, Spawn_Y_max);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);
}


