// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenCVAcess.h"
#include "opencv2/core/version.hpp"
#include "opencv2/imgcodecs/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/dnn/dnn.hpp"
#include "ImageHelper.h"


// Sets default values for this component's properties
UOpenCVAcess::UOpenCVAcess()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenCVAcess::BeginPlay()
{
	Super::BeginPlay();
	nnLoaded = false; 
	//FString pp = IPluginManager::Get().FindPlugin(TEXT("OpenCV"))->GetBaseDir();
	//pluginP = string(TCHAR_TO_UTF8(*pp));
	//FString pD = FPaths::ProjectContentDir();
	//modelDir = string(TCHAR_TO_UTF8(*pD));
	//modelPath = modelDir + "/models/vgg.pb";
	
}


// Called every frame
void UOpenCVAcess::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int UOpenCVAcess::getOpenCvVersion() {
	int mVersion = CV_MAJOR_VERSION;
	return mVersion;
}


int UOpenCVAcess::loadModel() {

	UE_LOG(LogTemp, Warning, TEXT("Net loading"));
	FString str = FPaths::ProjectContentDir() + FString(TEXT("models/deepwound.pb"));
	string model = string(TCHAR_TO_UTF8(*str));
	UE_LOG(LogTemp, Warning, TEXT("%s"), *str);
	net = cv::dnn::readNetFromTensorflow(model);
	//Blueprint callable functions must have a return value
	if (net.empty()) {
		return 0;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Net loaded"));
		nnLoaded = true;
		return 1;

	}
}


int UOpenCVAcess::classify(UTexture *texture) {

	if (!nnLoaded) {
		return -1;
	}
	//in best case not neccessary, beacause image will be given
	//FString str = FPaths::ProjectContentDir() + FString(TEXT("models/cat.jpg"));
	//string imgPath = string(TCHAR_TO_UTF8(*str));
	//cv::Mat img = cv::imread(imgPath);

	//Debug
	cv::Mat img = ImageHelper::convertToCV(texture);
	UE_LOG(LogTemp, Warning, TEXT("IMAGE_WIDTH: %d"), img.size().width);


	cv::Size size = cv::Size(224, 224); //224,224 is input size of VGG, NOT 244,244!
	cv::Scalar mean = cv::Scalar(0, 0, 0);	//for pixelcolor changes
	cv::Mat resized;
	cv::resize(img, resized, size);	//resize to 244,244
	cv::Mat blob = cv::dnn::blobFromImage(resized, 1.0, size, mean, true, false, CV_32F);
	net.setInput(blob);
	cv::Mat result = net.forward();


	cv::Point classIdPoint;
	double confidence;
	cv::minMaxLoc(result.reshape(1, 1), 0, &confidence, 0, &classIdPoint);
	int classId = classIdPoint.x;
	UE_LOG(LogTemp, Warning, TEXT("##########CLASS: %d ##########"), classId);
	UE_LOG(LogTemp, Warning, TEXT("##########Confidence: %f ##########"), confidence);

	return classId;
}

FString UOpenCVAcess::decodeClass(int classNum) {
	return ImageHelper::decodeClass(classNum);
}
