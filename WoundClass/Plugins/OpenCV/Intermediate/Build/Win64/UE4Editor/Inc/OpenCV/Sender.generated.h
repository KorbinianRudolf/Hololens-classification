// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTexture;
#ifdef OPENCV_Sender_generated_h
#error "Sender.generated.h already included, missing '#pragma once' in Sender.h"
#endif
#define OPENCV_Sender_generated_h

#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_SPARSE_DATA
#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execloadSubsys); \
	DECLARE_FUNCTION(execdecodeClass); \
	DECLARE_FUNCTION(execgetClass); \
	DECLARE_FUNCTION(execresIsSet); \
	DECLARE_FUNCTION(execclassify);


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execloadSubsys); \
	DECLARE_FUNCTION(execdecodeClass); \
	DECLARE_FUNCTION(execgetClass); \
	DECLARE_FUNCTION(execresIsSet); \
	DECLARE_FUNCTION(execclassify);


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSender(); \
	friend struct Z_Construct_UClass_USender_Statics; \
public: \
	DECLARE_CLASS(USender, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenCV"), NO_API) \
	DECLARE_SERIALIZER(USender)


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSender(); \
	friend struct Z_Construct_UClass_USender_Statics; \
public: \
	DECLARE_CLASS(USender, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenCV"), NO_API) \
	DECLARE_SERIALIZER(USender)


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USender(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USender) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USender); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USender); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USender(USender&&); \
	NO_API USender(const USender&); \
public:


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USender(USender&&); \
	NO_API USender(const USender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USender); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USender); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USender)


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_PRIVATE_PROPERTY_OFFSET
#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_17_PROLOG
#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_PRIVATE_PROPERTY_OFFSET \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_SPARSE_DATA \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_RPC_WRAPPERS \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_INCLASS \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_PRIVATE_PROPERTY_OFFSET \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_SPARSE_DATA \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_INCLASS_NO_PURE_DECLS \
	WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENCV_API UClass* StaticClass<class USender>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WoundClass_Plugins_OpenCV_Source_OpenCV_Public_Sender_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
