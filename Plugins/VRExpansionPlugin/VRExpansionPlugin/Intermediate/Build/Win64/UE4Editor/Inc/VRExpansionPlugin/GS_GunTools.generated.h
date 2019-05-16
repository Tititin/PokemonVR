// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
class USceneComponent;
#ifdef VREXPANSIONPLUGIN_GS_GunTools_generated_h
#error "GS_GunTools.generated.h already included, missing '#pragma once' in GS_GunTools.h"
#endif
#define VREXPANSIONPLUGIN_GS_GunTools_generated_h

#define PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGunTools_AdvSecondarySettings_Statics; \
	static class UScriptStruct* StaticStruct();


#define PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVirtualStockSettings_Statics; \
	static class UScriptStruct* StaticStruct();


#define PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetRecoil) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetRecoil(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRecoilInstance) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RecoilAddition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRecoilInstance(Z_Param_Out_RecoilAddition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVirtualStockEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bAllowVirtualStock); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVirtualStockEnabled(Z_Param_bAllowVirtualStock); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVirtualStockComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_NewStockComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVirtualStockComponent(Z_Param_NewStockComponent); \
		P_NATIVE_END; \
	}


#define PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetRecoil) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetRecoil(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRecoilInstance) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RecoilAddition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRecoilInstance(Z_Param_Out_RecoilAddition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVirtualStockEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bAllowVirtualStock); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVirtualStockEnabled(Z_Param_bAllowVirtualStock); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVirtualStockComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_NewStockComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVirtualStockComponent(Z_Param_NewStockComponent); \
		P_NATIVE_END; \
	}


#define PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGS_GunTools(); \
	friend struct Z_Construct_UClass_UGS_GunTools_Statics; \
public: \
	DECLARE_CLASS(UGS_GunTools, UGS_Default, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGS_GunTools)


#define PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_INCLASS \
private: \
	static void StaticRegisterNativesUGS_GunTools(); \
	friend struct Z_Construct_UClass_UGS_GunTools_Statics; \
public: \
	DECLARE_CLASS(UGS_GunTools, UGS_Default, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGS_GunTools)


#define PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGS_GunTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGS_GunTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGS_GunTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGS_GunTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGS_GunTools(UGS_GunTools&&); \
	NO_API UGS_GunTools(const UGS_GunTools&); \
public:


#define PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGS_GunTools(UGS_GunTools&&); \
	NO_API UGS_GunTools(const UGS_GunTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGS_GunTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGS_GunTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGS_GunTools)


#define PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_PRIVATE_PROPERTY_OFFSET
#define PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_136_PROLOG
#define PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_PRIVATE_PROPERTY_OFFSET \
	PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_RPC_WRAPPERS \
	PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_INCLASS \
	PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_PRIVATE_PROPERTY_OFFSET \
	PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_INCLASS_NO_PURE_DECLS \
	PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h_139_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PokemonVR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_GunTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
