// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RSPongGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RSPONG_RSPongGameState_generated_h
#error "RSPongGameState.generated.h already included, missing '#pragma once' in RSPongGameState.h"
#endif
#define RSPONG_RSPongGameState_generated_h

#define FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_SPARSE_DATA
#define FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateScore); \
	DECLARE_FUNCTION(execGetAIScore); \
	DECLARE_FUNCTION(execGetPlayerScore);


#define FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_ACCESSORS
#define FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARSPongGameState(); \
	friend struct Z_Construct_UClass_ARSPongGameState_Statics; \
public: \
	DECLARE_CLASS(ARSPongGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RSPong"), NO_API) \
	DECLARE_SERIALIZER(ARSPongGameState)


#define FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARSPongGameState(ARSPongGameState&&); \
	NO_API ARSPongGameState(const ARSPongGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARSPongGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARSPongGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARSPongGameState) \
	NO_API virtual ~ARSPongGameState();


#define FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_8_PROLOG
#define FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_SPARSE_DATA \
	FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_ACCESSORS \
	FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RSPONG_API UClass* StaticClass<class ARSPongGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_simo0173_Downloads_RSPong_RSPong_Source_RSPong_RSPongGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
