// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RSPong/RSPongPaddle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRSPongPaddle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RSPONG_API UClass* Z_Construct_UClass_ARSPongPaddle();
	RSPONG_API UClass* Z_Construct_UClass_ARSPongPaddle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RSPong();
// End Cross Module References
	void ARSPongPaddle::StaticRegisterNativesARSPongPaddle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARSPongPaddle);
	UClass* Z_Construct_UClass_ARSPongPaddle_NoRegister()
	{
		return ARSPongPaddle::StaticClass();
	}
	struct Z_Construct_UClass_ARSPongPaddle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaddleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PaddleMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARSPongPaddle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RSPong,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongPaddle_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARSPongPaddle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RSPongPaddle.h" },
		{ "ModuleRelativePath", "RSPongPaddle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARSPongPaddle_Statics::NewProp_PaddleMesh_MetaData[] = {
		{ "Category", "RSPongPaddle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RSPongPaddle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARSPongPaddle_Statics::NewProp_PaddleMesh = { "PaddleMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSPongPaddle, PaddleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongPaddle_Statics::NewProp_PaddleMesh_MetaData), Z_Construct_UClass_ARSPongPaddle_Statics::NewProp_PaddleMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARSPongPaddle_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "RSPongPaddle" },
		{ "ModuleRelativePath", "RSPongPaddle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARSPongPaddle_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSPongPaddle, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongPaddle_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_ARSPongPaddle_Statics::NewProp_MovementSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARSPongPaddle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARSPongPaddle_Statics::NewProp_PaddleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARSPongPaddle_Statics::NewProp_MovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARSPongPaddle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARSPongPaddle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARSPongPaddle_Statics::ClassParams = {
		&ARSPongPaddle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARSPongPaddle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongPaddle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongPaddle_Statics::Class_MetaDataParams), Z_Construct_UClass_ARSPongPaddle_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongPaddle_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARSPongPaddle()
	{
		if (!Z_Registration_Info_UClass_ARSPongPaddle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARSPongPaddle.OuterSingleton, Z_Construct_UClass_ARSPongPaddle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARSPongPaddle.OuterSingleton;
	}
	template<> RSPONG_API UClass* StaticClass<ARSPongPaddle>()
	{
		return ARSPongPaddle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARSPongPaddle);
	ARSPongPaddle::~ARSPongPaddle() {}
	struct Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongPaddle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongPaddle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARSPongPaddle, ARSPongPaddle::StaticClass, TEXT("ARSPongPaddle"), &Z_Registration_Info_UClass_ARSPongPaddle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARSPongPaddle), 2104337420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongPaddle_h_1134527861(TEXT("/Script/RSPong"),
		Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongPaddle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongPaddle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
