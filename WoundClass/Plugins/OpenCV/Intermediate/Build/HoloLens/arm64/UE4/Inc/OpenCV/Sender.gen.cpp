// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCV/Public/Sender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSender() {}
// Cross Module References
	OPENCV_API UClass* Z_Construct_UClass_USender_NoRegister();
	OPENCV_API UClass* Z_Construct_UClass_USender();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OpenCV();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USender::execloadSubsys)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->loadSubsys(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USender::execdecodeClass)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_classNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->decodeClass(Z_Param_classNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USender::execgetClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USender::execresIsSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->resIsSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USender::execclassify)
	{
		P_GET_OBJECT(UTexture,Z_Param_texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->classify(Z_Param_texture);
		P_NATIVE_END;
	}
	void USender::StaticRegisterNativesUSender()
	{
		UClass* Class = USender::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "classify", &USender::execclassify },
			{ "decodeClass", &USender::execdecodeClass },
			{ "getClass", &USender::execgetClass },
			{ "loadSubsys", &USender::execloadSubsys },
			{ "resIsSet", &USender::execresIsSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USender_classify_Statics
	{
		struct Sender_eventclassify_Parms
		{
			UTexture* texture;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USender_classify_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Sender_eventclassify_Parms, texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USender_classify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Sender_eventclassify_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USender_classify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USender_classify_Statics::NewProp_texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USender_classify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USender_classify_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/Sender.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USender_classify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USender, nullptr, "classify", nullptr, nullptr, sizeof(Sender_eventclassify_Parms), Z_Construct_UFunction_USender_classify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USender_classify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USender_classify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USender_classify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USender_classify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USender_classify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USender_decodeClass_Statics
	{
		struct Sender_eventdecodeClass_Parms
		{
			int32 classNum;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_classNum;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USender_decodeClass_Statics::NewProp_classNum = { "classNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Sender_eventdecodeClass_Parms, classNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USender_decodeClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Sender_eventdecodeClass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USender_decodeClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USender_decodeClass_Statics::NewProp_classNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USender_decodeClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USender_decodeClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/Sender.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USender_decodeClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USender, nullptr, "decodeClass", nullptr, nullptr, sizeof(Sender_eventdecodeClass_Parms), Z_Construct_UFunction_USender_decodeClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USender_decodeClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USender_decodeClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USender_decodeClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USender_decodeClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USender_decodeClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USender_getClass_Statics
	{
		struct Sender_eventgetClass_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USender_getClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Sender_eventgetClass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USender_getClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USender_getClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USender_getClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/Sender.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USender_getClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USender, nullptr, "getClass", nullptr, nullptr, sizeof(Sender_eventgetClass_Parms), Z_Construct_UFunction_USender_getClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USender_getClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USender_getClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USender_getClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USender_getClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USender_getClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USender_loadSubsys_Statics
	{
		struct Sender_eventloadSubsys_Parms
		{
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USender_loadSubsys_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Sender_eventloadSubsys_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USender_loadSubsys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Sender_eventloadSubsys_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USender_loadSubsys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USender_loadSubsys_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USender_loadSubsys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USender_loadSubsys_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/Sender.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USender_loadSubsys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USender, nullptr, "loadSubsys", nullptr, nullptr, sizeof(Sender_eventloadSubsys_Parms), Z_Construct_UFunction_USender_loadSubsys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USender_loadSubsys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USender_loadSubsys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USender_loadSubsys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USender_loadSubsys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USender_loadSubsys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USender_resIsSet_Statics
	{
		struct Sender_eventresIsSet_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USender_resIsSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Sender_eventresIsSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USender_resIsSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Sender_eventresIsSet_Parms), &Z_Construct_UFunction_USender_resIsSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USender_resIsSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USender_resIsSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USender_resIsSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetwork" },
		{ "ModuleRelativePath", "Public/Sender.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USender_resIsSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USender, nullptr, "resIsSet", nullptr, nullptr, sizeof(Sender_eventresIsSet_Parms), Z_Construct_UFunction_USender_resIsSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USender_resIsSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USender_resIsSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USender_resIsSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USender_resIsSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USender_resIsSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USender_NoRegister()
	{
		return USender::StaticClass();
	}
	struct Z_Construct_UClass_USender_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USender_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USender_classify, "classify" }, // 3736207959
		{ &Z_Construct_UFunction_USender_decodeClass, "decodeClass" }, // 2581685299
		{ &Z_Construct_UFunction_USender_getClass, "getClass" }, // 2363558715
		{ &Z_Construct_UFunction_USender_loadSubsys, "loadSubsys" }, // 373325350
		{ &Z_Construct_UFunction_USender_resIsSet, "resIsSet" }, // 711856178
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USender_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Sender.h" },
		{ "ModuleRelativePath", "Public/Sender.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USender>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USender_Statics::ClassParams = {
		&USender::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USender()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USender_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USender, 4114826814);
	template<> OPENCV_API UClass* StaticClass<USender>()
	{
		return USender::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USender(Z_Construct_UClass_USender, &USender::StaticClass, TEXT("/Script/OpenCV"), TEXT("USender"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USender);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
