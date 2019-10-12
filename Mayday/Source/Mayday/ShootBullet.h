// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShootBullet.generated.h"

/**
 * 
 */
UCLASS()
class MAYDAY_API UShootBullet : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
		UFUNCTION(BlueprintCallable, meta = (worldContext = "RefObj"))
		static void ShootBullet(TSubclassOf<AActor> Bullet, FVector Location, FRotator Rotation, UObject* RefObj);
};
