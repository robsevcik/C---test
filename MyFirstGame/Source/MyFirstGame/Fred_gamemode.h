// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Fred_gamemode.generated.h"

/**
 * 
 */
UCLASS()
class MYFIRSTGAME_API AFred_gamemode : public AGameModeBase
{
	GENERATED_BODY()

		AFred_gamemode();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> PlayerRecharge;
	float Spawn_Z = 500.0f;





	UPROPERTY(EditAnywhere)
		float Spawn_x_min;

	UPROPERTY(EditAnywhere)
		float Spawn_x_max;

	UPROPERTY(EditAnywhere)
		float Spawn_Y_min;

	UPROPERTY(EditAnywhere)
		float Spawn_Y_max;

	void SpawnPlayerRecharge();
	
};
