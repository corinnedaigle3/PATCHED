// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class PATCHED_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:

	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies", meta = (AllowPrivateAccess="true"))
 FName EnemyName;

 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies", meta = (AllowPrivateAccess="true"))
 int Damage;

};
