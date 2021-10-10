// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ARTextures.h"
#include "opencv2/imgcodecs/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/core/mat.hpp"
#include "TestComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UTestComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTestComponent();
	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
	int testCameraImage(UARTexture* img, UMaterialInstanceDynamic* DynamicMaterial);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
