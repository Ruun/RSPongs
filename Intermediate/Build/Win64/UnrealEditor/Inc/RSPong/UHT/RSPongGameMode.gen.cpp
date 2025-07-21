// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RSPong/RSPongGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRSPongGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RSPONG_API UClass* Z_Construct_UClass_ARSPongGameMode();
	RSPONG_API UClass* Z_Construct_UClass_ARSPongGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RSPong();
// End Cross Module References
	void ARSPongGameMode::StaticRegisterNativesARSPongGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARSPongGameMode);
	UClass* Z_Construct_UClass_ARSPongGameMode_NoRegister()
	{
		return ARSPongGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARSPongGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARSPongGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RSPong,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARSPongGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RSPongGameMode.h" },
		{ "ModuleRelativePath", "RSPongGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARSPongGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARSPongGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARSPongGameMode_Statics::ClassParams = {
		&ARSPongGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARSPongGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARSPongGameMode()
	{
		if (!Z_Registration_Info_UClass_ARSPongGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARSPongGameMode.OuterSingleton, Z_Construct_UClass_ARSPongGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARSPongGameMode.OuterSingleton;
	}
	template<> RSPONG_API UClass* StaticClass<ARSPongGameMode>()
	{
		return ARSPongGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARSPongGameMode);
	ARSPongGameMode::~ARSPongGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARSPongGameMode, ARSPongGameMode::StaticClass, TEXT("ARSPongGameMode"), &Z_Registration_Info_UClass_ARSPongGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARSPongGameMode), 889253060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameMode_h_2002143735(TEXT("/Script/RSPong"),
		Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
