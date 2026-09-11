// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkGameObject.h"

#ifdef AKAUDIO_AkGameObject_generated_h
#error "AkGameObject.generated.h already included, missing '#pragma once' in AkGameObject.h"
#endif
#define AKAUDIO_AkGameObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;
class UAkTrigger;
class UObject;
enum class ERTPCValueType : uint8;
struct FLatentActionInfo;

// ********** Begin Class UAkGameObject ************************************************************
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPostAkEventAsync); \
	DECLARE_FUNCTION(execPostAkEvent); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEvent); \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor); \
	DECLARE_FUNCTION(execGetAttenuationScalingFactor);


struct Z_Construct_UClass_UAkGameObject_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAkGameObject_Statics; \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkGameObject(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAkGameObject, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkGameObject) \
	DECLARE_SERIALIZER(UAkGameObject)


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkGameObject(UAkGameObject&&) = delete; \
	UAkGameObject(const UAkGameObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameObject) \
	NO_API virtual ~UAkGameObject();


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_30_PROLOG
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_INCLASS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkGameObject;

// ********** End Class UAkGameObject **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
