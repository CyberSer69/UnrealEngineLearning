// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageableActor.generated.h"

UCLASS()
class FIRSTGAME_API ADamageableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADamageableActor();

	UFUNCTION(BlueprintImplementableEvent, Category = "Attack")
	void OnTakeDamage();

	UPROPERTY(EditAnywhere, Category = "Attack")
	bool IsAttackable{true};

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void TakeDamage();

};
