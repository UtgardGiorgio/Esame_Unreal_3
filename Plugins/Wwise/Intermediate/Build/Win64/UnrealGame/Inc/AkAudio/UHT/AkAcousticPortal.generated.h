// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAcousticPortal.h"

#ifdef AKAUDIO_AkAcousticPortal_generated_h
#error "AkAcousticPortal.generated.h already included, missing '#pragma once' in AkAcousticPortal.h"
#endif
#define AKAUDIO_AkAcousticPortal_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
enum class AkAcousticPortalState : uint8;

// ********** Begin Class UAkPortalComponent *******************************************************
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDynamic); \
	DECLARE_FUNCTION(execPortalPlacementValid); \
	DECLARE_FUNCTION(execGetPrimitiveParent); \
	DECLARE_FUNCTION(execSetPortalOcclusion); \
	DECLARE_FUNCTION(execGetPortalOcclusion); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execDisablePortal); \
	DECLARE_FUNCTION(execEnablePortal);


struct Z_Construct_UClass_UAkPortalComponent_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkPortalComponent(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAkPortalComponent_Statics; \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkPortalComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAkPortalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkPortalComponent) \
	DECLARE_SERIALIZER(UAkPortalComponent)


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkPortalComponent(UAkPortalComponent&&) = delete; \
	UAkPortalComponent(const UAkPortalComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkPortalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkPortalComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkPortalComponent) \
	NO_API virtual ~UAkPortalComponent();


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_36_PROLOG
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_INCLASS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkPortalComponent;

// ********** End Class UAkPortalComponent *********************************************************

// ********** Begin Class AAkAcousticPortal ********************************************************
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_235_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execDisablePortal); \
	DECLARE_FUNCTION(execEnablePortal);


#if WITH_EDITOR
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_235_RPC_WRAPPERS_NO_PURE_DECLS_EDITOR \
	DECLARE_FUNCTION(execGetCollisionChannel);
#else // WITH_EDITOR
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_235_RPC_WRAPPERS_NO_PURE_DECLS_EDITOR
#endif


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_235_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AAkAcousticPortal, NO_API)


struct Z_Construct_UClass_AAkAcousticPortal_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_235_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_AAkAcousticPortal_Statics; \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_AAkAcousticPortal(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(AAkAcousticPortal, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_AAkAcousticPortal) \
	DECLARE_SERIALIZER(AAkAcousticPortal) \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_235_ARCHIVESERIALIZER


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_235_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAkAcousticPortal(AAkAcousticPortal&&) = delete; \
	AAkAcousticPortal(const AAkAcousticPortal&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAcousticPortal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAcousticPortal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAcousticPortal) \
	NO_API virtual ~AAkAcousticPortal();


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_232_PROLOG
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_235_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_235_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_235_RPC_WRAPPERS_NO_PURE_DECLS_EDITOR \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_235_INCLASS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_235_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAkAcousticPortal;

// ********** End Class AAkAcousticPortal **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
