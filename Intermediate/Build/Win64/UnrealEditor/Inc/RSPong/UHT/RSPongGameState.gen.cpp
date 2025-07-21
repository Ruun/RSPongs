// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RSPong/RSPongGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRSPongGameState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	RSPONG_API UClass* Z_Construct_UClass_ARSPongGameState();
	RSPONG_API UClass* Z_Construct_UClass_ARSPongGameState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RSPong();
// End Cross Module References
	DEFINE_FUNCTION(ARSPongGameState::execUpdateScore)
	{
		P_GET_UBOOL(Z_Param_bPlayerScored);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateScore(Z_Param_bPlayerScored);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARSPongGameState::execGetAIScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAIScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARSPongGameState::execGetPlayerScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerScore();
		P_NATIVE_END;
	}
	void ARSPongGameState::StaticRegisterNativesARSPongGameState()
	{
		UClass* Class = ARSPongGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAIScore", &ARSPongGameState::execGetAIScore },
			{ "GetPlayerScore", &ARSPongGameState::execGetPlayerScore },
			{ "UpdateScore", &ARSPongGameState::execUpdateScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics
	{
		struct RSPongGameState_eventGetAIScore_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RSPongGameState_eventGetAIScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "RSPongGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARSPongGameState, nullptr, "GetAIScore", nullptr, nullptr, Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics::RSPongGameState_eventGetAIScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics::RSPongGameState_eventGetAIScore_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARSPongGameState_GetAIScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARSPongGameState_GetAIScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics
	{
		struct RSPongGameState_eventGetPlayerScore_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RSPongGameState_eventGetPlayerScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "RSPongGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARSPongGameState, nullptr, "GetPlayerScore", nullptr, nullptr, Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics::RSPongGameState_eventGetPlayerScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics::RSPongGameState_eventGetPlayerScore_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARSPongGameState_GetPlayerScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARSPongGameState_GetPlayerScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics
	{
		struct RSPongGameState_eventUpdateScore_Parms
		{
			bool bPlayerScored;
		};
		static void NewProp_bPlayerScored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerScored;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::NewProp_bPlayerScored_SetBit(void* Obj)
	{
		((RSPongGameState_eventUpdateScore_Parms*)Obj)->bPlayerScored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::NewProp_bPlayerScored = { "bPlayerScored", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RSPongGameState_eventUpdateScore_Parms), &Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::NewProp_bPlayerScored_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::NewProp_bPlayerScored,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RSPongGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARSPongGameState, nullptr, "UpdateScore", nullptr, nullptr, Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::RSPongGameState_eventUpdateScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::RSPongGameState_eventUpdateScore_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARSPongGameState_UpdateScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARSPongGameState_UpdateScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARSPongGameState);
	UClass* Z_Construct_UClass_ARSPongGameState_NoRegister()
	{
		return ARSPongGameState::StaticClass();
	}
	struct Z_Construct_UClass_ARSPongGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIScore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AIScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARSPongGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RSPong,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongGameState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARSPongGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARSPongGameState_GetAIScore, "GetAIScore" }, // 2638246767
		{ &Z_Construct_UFunction_ARSPongGameState_GetPlayerScore, "GetPlayerScore" }, // 486379881
		{ &Z_Construct_UFunction_ARSPongGameState_UpdateScore, "UpdateScore" }, // 2648341595
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongGameState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARSPongGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RSPongGameState.h" },
		{ "ModuleRelativePath", "RSPongGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARSPongGameState_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "RSPongGameState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARSPongGameState_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSPongGameState, PlayerScore), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongGameState_Statics::NewProp_PlayerScore_MetaData), Z_Construct_UClass_ARSPongGameState_Statics::NewProp_PlayerScore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARSPongGameState_Statics::NewProp_AIScore_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "RSPongGameState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARSPongGameState_Statics::NewProp_AIScore = { "AIScore", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARSPongGameState, AIScore), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongGameState_Statics::NewProp_AIScore_MetaData), Z_Construct_UClass_ARSPongGameState_Statics::NewProp_AIScore_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARSPongGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARSPongGameState_Statics::NewProp_PlayerScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARSPongGameState_Statics::NewProp_AIScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARSPongGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARSPongGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARSPongGameState_Statics::ClassParams = {
		&ARSPongGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARSPongGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ARSPongGameState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARSPongGameState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARSPongGameState()
	{
		if (!Z_Registration_Info_UClass_ARSPongGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARSPongGameState.OuterSingleton, Z_Construct_UClass_ARSPongGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARSPongGameState.OuterSingleton;
	}
	template<> RSPONG_API UClass* StaticClass<ARSPongGameState>()
	{
		return ARSPongGameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARSPongGameState);
	ARSPongGameState::~ARSPongGameState() {}
	struct Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARSPongGameState, ARSPongGameState::StaticClass, TEXT("ARSPongGameState"), &Z_Registration_Info_UClass_ARSPongGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARSPongGameState), 2534333303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_2281003211(TEXT("/Script/RSPong"),
		Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
