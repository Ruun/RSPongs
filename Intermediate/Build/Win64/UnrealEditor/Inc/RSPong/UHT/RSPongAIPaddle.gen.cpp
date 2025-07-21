// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RSPong/RSPongAIPaddle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRSPongAIPaddle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RSPONG_API UClass* Z_Construct_UClass_ARSPongAIPaddle();
	RSPONG_API UClass* Z_Construct_UClass_ARSPongAIPaddle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RSPong();
// End Cross Module References
	void ARSPongAIPaddle::StaticRegisterNativesARSPongAIPaddle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARSPongAIPaddle);
	UClass* Z_Construct_UClass_ARSPongAIPaddle_NoRegister()
	{
		return ARSPongAIPaddle::StaticClass();
	}
	struct Z_Construct_UClass_ARSPongAIPaddle_Statics
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
	UObject* (*const Z_Construct_UClass_ARSPongAIPaddle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RSPong,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongAIPaddle_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARSPongAIPaddle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RSPongAIPaddle.h" },
		{ "ModuleRelativePath", "RSPongAIPaddle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARSPongAIPaddle_Statics::NewProp_PaddleMesh_MetaData[] = {
		{ "Category", "RSPongAIPaddle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RSPongAIPaddle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARSPongAIPaddle_Statics::NewProp_PaddleMesh = { "PaddleMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSPongAIPaddle, PaddleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongAIPaddle_Statics::NewProp_PaddleMesh_MetaData), Z_Construct_UClass_ARSPongAIPaddle_Statics::NewProp_PaddleMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARSPongAIPaddle_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "RSPongAIPaddle" },
		{ "ModuleRelativePath", "RSPongAIPaddle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARSPongAIPaddle_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSPongAIPaddle, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongAIPaddle_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_ARSPongAIPaddle_Statics::NewProp_MovementSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARSPongAIPaddle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARSPongAIPaddle_Statics::NewProp_PaddleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARSPongAIPaddle_Statics::NewProp_MovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARSPongAIPaddle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARSPongAIPaddle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARSPongAIPaddle_Statics::ClassParams = {
		&ARSPongAIPaddle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARSPongAIPaddle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongAIPaddle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongAIPaddle_Statics::Class_MetaDataParams), Z_Construct_UClass_ARSPongAIPaddle_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongAIPaddle_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARSPongAIPaddle()
	{
		if (!Z_Registration_Info_UClass_ARSPongAIPaddle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARSPongAIPaddle.OuterSingleton, Z_Construct_UClass_ARSPongAIPaddle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARSPongAIPaddle.OuterSingleton;
	}
	template<> RSPONG_API UClass* StaticClass<ARSPongAIPaddle>()
	{
		return ARSPongAIPaddle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARSPongAIPaddle);
	ARSPongAIPaddle::~ARSPongAIPaddle() {}
	struct Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongAIPaddle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongAIPaddle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARSPongAIPaddle, ARSPongAIPaddle::StaticClass, TEXT("ARSPongAIPaddle"), &Z_Registration_Info_UClass_ARSPongAIPaddle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARSPongAIPaddle), 6973161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongAIPaddle_h_2517911323(TEXT("/Script/RSPong"),
		Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongAIPaddle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongAIPaddle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
