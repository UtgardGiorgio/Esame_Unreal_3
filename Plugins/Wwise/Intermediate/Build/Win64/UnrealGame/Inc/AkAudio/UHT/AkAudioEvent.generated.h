// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAudioEvent.h"

#ifdef AKAUDIO_AkAudioEvent_generated_h
#error "AkAudioEvent.generated.h already included, missing '#pragma once' in AkAudioEvent.h"
#endif
#define AKAUDIO_AkAudioEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAkComponent;
class UAkGameObject;
class UObject;
enum class AkActionOnEventType : uint8;
enum class EAkCurveInterpolation : uint8;
struct FLatentActionInfo;

// ********** Begin Class UAkAudioEvent ************************************************************
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteAction); \
	DECLARE_FUNCTION(execPostAtLocation); \
	DECLARE_FUNCTION(execPostOnGameObjectAndWait); \
	DECLARE_FUNCTION(execPostOnComponentAndWait); \
	DECLARE_FUNCTION(execPostOnActorAndWait); \
	DECLARE_FUNCTION(execPostOnGameObject); \
	DECLARE_FUNCTION(execPostOnComponent); \
	DECLARE_FUNCTION(execPostOnActor);


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAudioEvent, NO_API)


struct Z_Construct_UClass_UAkAudioEvent_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAkAudioEvent_Statics; \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkAudioEvent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAkAudioEvent, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkAudioEvent) \
	DECLARE_SERIALIZER(UAkAudioEvent) \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ARCHIVESERIALIZER


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAudioEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkAudioEvent(UAkAudioEvent&&) = delete; \
	UAkAudioEvent(const UAkAudioEvent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAudioEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAudioEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAudioEvent) \
	NO_API virtual ~UAkAudioEvent();


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_38_PROLOG
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_INCLASS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkAudioEvent;

// ********** End Class UAkAudioEvent **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
