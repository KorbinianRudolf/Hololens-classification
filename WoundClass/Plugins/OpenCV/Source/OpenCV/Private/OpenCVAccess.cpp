// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenCVAccess.h"
#include "opencv2/core/version.hpp"
#include "opencv2/dnn/dnn.hpp"
#include "opencv2/imgcodecs/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include "Interfaces/IPluginManager.h"
using namespace std;






// Sets default values for this component's properties (constructor) 
UOpenCVAccess::UOpenCVAccess()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.


	
}


// Called when the game starts
void UOpenCVAccess::BeginPlay()
{
	Super::BeginPlay();
	PrimaryComponentTick.bCanEverTick = true;
	nnLoaded = false;

	FString pp = IPluginManager::Get().FindPlugin(TEXT("OpenCV"))->GetBaseDir();
	pluginP = string(TCHAR_TO_UTF8(*pp));
	FString pD = FPaths::ProjectContentDir();
	modelDir = string(TCHAR_TO_UTF8(*pD));
	modelPath = modelDir + "/models/vgg.pb";
	imgPath = modelDir + "/models/cat.jpg";

	// ...
	
}


// Called every frame
void UOpenCVAccess::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int UOpenCVAccess::getOpenCvVersion() {
	int mVersion =  CV_MAJOR_VERSION;
	int minorVersion = CV_MINOR_VERSION;
	int subVer = CV_SUBMINOR_VERSION;

	UE_LOG(LogTemp, Warning, TEXT("##########Version: %d . %d . %d ##########"), mVersion, minorVersion, subVer);
	return 0; 
}


/**
load the neural Network, takes a lot of time, choose a smart time
*/
int UOpenCVAccess::loadModel() {

	net = cv::dnn::readNetFromTensorflow(modelPath);
	UE_LOG(LogTemp, Warning, TEXT("Neural Network loaded"));

	net.setPreferableBackend(cv::dnn::DNN_BACKEND_OPENCV);
	net.setPreferableTarget(cv::dnn::DNN_TARGET_CPU);
	nnLoaded = true;

	//Blueprint callable functions must have a return value
	return 0;
}

int UOpenCVAccess::classify() {

	if (!nnLoaded) {
		loadModel();
	}
	//in best case not neccessary, beacause image will be given
	cv::Mat img = cv::imread(imgPath);

	//Debug
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