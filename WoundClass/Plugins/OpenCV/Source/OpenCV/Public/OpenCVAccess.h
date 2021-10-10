// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "opencv2/dnn/dnn.hpp"
#include "OpenCVAccess.generated.h"
using namespace std; 

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OPENCV_API UOpenCVAccess : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenCVAccess();

	UFUNCTION(BlueprintPure, Category = "My Functions")
	int getOpenCvVersion();


	UFUNCTION(BlueprintPure, Category = "My Functions")
	int classify();

	UFUNCTION(BlueprintPure, Category = "My Functions")
	int loadModel();


private:
	cv::dnn::Net net;
	bool nnLoaded; // track if Neural Network is Loaded, because if not, it has to be loaded before classifying
	string pluginP;
	string modelPath;
	string imgPath; 
	string modelDir;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
