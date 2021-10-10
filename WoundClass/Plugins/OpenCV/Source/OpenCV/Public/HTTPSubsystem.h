// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "Misc/Base64.h"
#include "ImageHelper.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "GenericPlatform/GenericPlatformHttp.h"
#include "opencv2/imgcodecs/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/core/mat.hpp"
#include "HTTPSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class OPENCV_API UHTTPSubsystem : public ULocalPlayerSubsystem
{
	GENERATED_BODY()
	
public:
	UHTTPSubsystem();
	FHttpModule* Http;
	FPlatformHttp* plattformHttp;	//platform http, to easier change for win or hololens
	void MyHttpCall(cv::Mat img);
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	int getResult();
	bool getResStatus(); 

private: 
	int result;
	bool resStatus; 
};
