// Copyright Epic Games, Inc. All Rights Reserved.

#include "OpenCV.h"
#include "Core.h"
#include "opencv2/core/version.hpp"
#include "opencv2/imgcodecs/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"



#define LOCTEXT_NAMESPACE "FOpenCVModule"
using namespace std;
void FOpenCVModule::StartupModule()
{
	//delete base dir, as soon as i am really sure that nothing breaks
	FString BaseDir = IPluginManager::Get().FindPlugin("OpenCV")->GetBaseDir();
	FString LibraryPath;

	//TODO delete ``if'', as soon as i am really sure, that nothing breaks.
//#if PLATFORM_HOLOLENS
//	UE_LOG(LogTemp, Warning, TEXT("Plattform Hololens"));
	//FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/opencvLib/HoloLens/opencv_world452.dll"));
//	LibraryPath = TEXT("opencv_world452.dll");
//#elif PLATFORM_WINDOWS
	//UE_LOG(LogTemp, Warning, TEXT("Plattform Windows"));
	LibraryPath = TEXT("opencv_world452.dll");
//#endif


	if (FPaths::FileExists(*LibraryPath)) {
		UE_LOG(LogTemp, Warning, TEXT("FILE EXISTS: true"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("FILE EXISTS: false"));
	}
	
	OpenCVLibHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;

	if (OpenCVLibHandle)
	{
		UE_LOG(LogTemp, Warning, TEXT("Loaded DLL"));
		int mVersion = CV_MAJOR_VERSION;
		int minorVersion = CV_MINOR_VERSION;
		int subVer = CV_SUBMINOR_VERSION;
		FString pD = FPaths::ProjectContentDir();
		string modelDir = string(TCHAR_TO_UTF8(*pD));
		string imgPath = modelDir + "/models/cat.jpg";

		cv::Mat img = cv::imread(imgPath);

		//Debug
		UE_LOG(LogTemp, Warning, TEXT("IMAGE_WIDTH: %d"), img.size().width);


		UE_LOG(LogTemp, Warning, TEXT("##########Version: %d . %d . %d ##########"), mVersion, minorVersion, subVer);
		
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("OpenCV not Loaded, something went wrong"));
	}


}

void FOpenCVModule::ShutdownModule()
{
	FPlatformProcess::FreeDllHandle(OpenCVLibHandle);
	OpenCVLibHandle = nullptr;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FOpenCVModule, OpenCV)
