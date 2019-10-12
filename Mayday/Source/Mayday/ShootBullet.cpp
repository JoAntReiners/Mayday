// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootBullet.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

void UShootBullet::ShootBullet(TSubclassOf<AActor> Bullet, FVector Location, FRotator Rotation, UObject * RefObj)
{
	UWorld* WorldRef = GEngine->GetWorldFromContextObjectChecked(RefObj);
	AActor* BulletInstance = WorldRef->SpawnActor<AActor>(Bullet, Location, Rotation);
}

