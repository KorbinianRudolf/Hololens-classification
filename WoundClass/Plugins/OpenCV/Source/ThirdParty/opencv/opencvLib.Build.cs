// Copyright Epic Games, Inc. All Rights Reserved.

using System;
using System.IO;
using UnrealBuildTool;
using Tools.DotNETCommon;

public class opencvLib : ModuleRules
{
	private string ModulePath
	{
		get { return ModuleDirectory; }
	}


	public opencvLib(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		string targetLib = "NoFittingLib";
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			targetLib = "x64";
        } else if (Target.Platform == UnrealTargetPlatform.HoloLens)
        {
			//change back to arm64 when not building for emulator anymore
			targetLib = "arm64";
			//targetLib = "x64";
		}

		//ACHTUNG
		//gapi, highgui und videoio sind zwar als header vorhanden, wurden aber beim bauen der libs ausgeschlossen, daher sollten sie nicht verwendet werden 
		//wenn ich mir sicherer bin, dass nichts kaputt geht, werde ich sie löschen
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));
		PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", targetLib,  "opencv_world452.lib"));


		PublicDelayLoadDLLs.Add("opencv_world452.dll");
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{

			RuntimeDependencies.Add("$(TargetOutputDir)/opencv_world452.dll", "$(PluginDir)/Binaries/ThirdParty/opencvLib/Win64/opencv_world452.dll");
		}
		else if (Target.Platform == UnrealTargetPlatform.HoloLens)
		{	//x64 for Emulator
			//RuntimeDependencies.Add("$(TargetOutputDir)/opencv_world452.dll", "$(PluginDir)/Binaries/ThirdParty/opencvLib/Win64/opencv_world452.dll");
			RuntimeDependencies.Add("$(TargetOutputDir)/opencv_world452.dll", "$(PluginDir)/Binaries/ThirdParty/opencvLib/HoloLens/opencv_world452.dll");
		}
		


	}
}
