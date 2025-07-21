// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RSPong/RSPongBoard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRSPongBoard() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	RSPONG_API UClass* Z_Construct_UClass_ARSPongBoard();
	RSPONG_API UClass* Z_Construct_UClass_ARSPongBoard_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RSPong();
// End Cross Module References
	void ARSPongBoard::StaticRegisterNativesARSPongBoard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARSPongBoard);
	UClass* Z_Construct_UClass_ARSPongBoard_NoRegister()
	{
		return ARSPongBoard::StaticClass();
	}
	struct Z_Construct_UClass_ARSPongBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARSPongBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RSPong,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongBoard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARSPongBoard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RSPongBoard.h" },
		{ "ModuleRelativePath", "RSPongBoard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARSPongBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARSPongBoard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARSPongBoard_Statics::ClassParams = {
		&ARSPongBoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongBoard_Statics::Class_MetaDataParams), Z_Construct_UClass_ARSPongBoard_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARSPongBoard()
	{
		if (!Z_Registration_Info_UClass_ARSPongBoard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARSPongBoard.OuterSingleton, Z_Construct_UClass_ARSPongBoard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARSPongBoard.OuterSingleton;
	}
	template<> RSPONG_API UClass* StaticClass<ARSPongBoard>()
	{
		return ARSPongBoard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARSPongBoard);
	ARSPongBoard::~ARSPongBoard() {}
	struct Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongBoard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongBoard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARSPongBoard, ARSPongBoard::StaticClass, TEXT("ARSPongBoard"), &Z_Registration_Info_UClass_ARSPongBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARSPongBoard), 2837040587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongBoard_h_1648055431(TEXT("/Script/RSPong"),
		Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongBoard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
