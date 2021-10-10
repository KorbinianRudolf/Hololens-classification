// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "GenericPlatform/GenericPlatformHttp.h"
#include "opencv2/imgcodecs/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/core/mat.hpp"
#include "Engine/LocalPlayer.h"
#include "HTTPSubsystem.h"
#include "Sender.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class USender : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USender();



	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
	int classify(UTexture* texture);

	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
	bool resIsSet(); 

	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
	int getClass(); 

	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork")
	FString decodeClass(int classNum);

	UFUNCTION(BlueprintCallable, Category = "NeuralNetwork", meta = (WorldContext = WorldContextObject))
	int loadSubsys(UObject* WorldContextObject);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private: 
	ULocalPlayer* LocalPlayer;
	UHTTPSubsystem* subsys;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	

		
};
