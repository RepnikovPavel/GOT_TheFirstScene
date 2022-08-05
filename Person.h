// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Person.generated.h"

UCLASS()
class MAKEANIMPR_API APerson : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APerson();
public:
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* SkeletalMeshPtr;
	
	
	
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
