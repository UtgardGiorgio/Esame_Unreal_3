// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkRoomComponent.h"

#ifdef AKAUDIO_AkRoomComponent_generated_h
#error "AkRoomComponent.generated.h already included, missing '#pragma once' in AkRoomComponent.h"
#endif
#define AKAUDIO_AkRoomComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAkAcousticTextureSetComponent;
class UAkRoomComponent;
class UPrimitiveComponent;

// ********** Begin Class UAkRoomComponent *********************************************************
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGeometryComponent); \
	DECLARE_FUNCTION(execRemoveReverbZone); \
	DECLARE_FUNCTION(execSetReverbZone); \
	DECLARE_FUNCTION(execGetPrimitiveParent); \
	DECLARE_FUNCTION(execUpdateTransitionRegionWidth); \
	DECLARE_FUNCTION(execUpdateParentRoomActor); \
	DECLARE_FUNCTION(execSetEnableReverbZone); \
	DECLARE_FUNCTION(execSetAuxSendLevel); \
	DECLARE_FUNCTION(execSetTransmissionLoss); \
	DECLARE_FUNCTION(execSetDynamic); \
	DECLARE_FUNCTION(execSetEnable);


struct Z_Construct_UClass_UAkRoomComponent_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAkRoomComponent_Statics; \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkRoomComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAkRoomComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkRoomComponent) \
	DECLARE_SERIALIZER(UAkRoomComponent)


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkRoomComponent(UAkRoomComponent&&) = delete; \
	UAkRoomComponent(const UAkRoomComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkRoomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkRoomComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkRoomComponent) \
	NO_API virtual ~UAkRoomComponent();


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_26_PROLOG
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkRoomComponent;

// ********** End Class UAkRoomComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
