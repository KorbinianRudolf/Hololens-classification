// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCV/Public/HTTPSubsystem.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHTTPSubsystem() {}
// Cross Module References
	OPENCV_API UClass* Z_Construct_UClass_UHTTPSubsystem_NoRegister();
	OPENCV_API UClass* Z_Construct_UClass_UHTTPSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_OpenCV();
// End Cross Module References
	void UHTTPSubsystem::StaticRegisterNativesUHTTPSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UHTTPSubsystem_NoRegister()
	{
		return UHTTPSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UHTTPSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHTTPSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTTPSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HTTPSubsystem.h" },
		{ "ModuleRelativePath", "Public/HTTPSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHTTPSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHTTPSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHTTPSubsystem_Statics::ClassParams = {
		&UHTTPSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHTTPSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHTTPSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHTTPSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHTTPSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHTTPSubsystem, 537335513);
	template<> OPENCV_API UClass* StaticClass<UHTTPSubsystem>()
	{
		return UHTTPSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHTTPSubsystem(Z_Construct_UClass_UHTTPSubsystem, &UHTTPSubsystem::StaticClass, TEXT("/Script/OpenCV"), TEXT("UHTTPSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHTTPSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
