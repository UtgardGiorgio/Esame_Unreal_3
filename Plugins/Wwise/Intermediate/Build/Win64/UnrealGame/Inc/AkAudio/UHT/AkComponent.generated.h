// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkComponent.h"

#ifdef AKAUDIO_AkComponent_generated_h
#error "AkComponent.generated.h already included, missing '#pragma once' in AkComponent.h"
#endif
#define AKAUDIO_AkComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
class UAkComponent;
struct FLatentActionInfo;

// ********** Begin Class UAkComponent *************************************************************
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAttenuationRadius); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetEarlyReflectionsVolume); \
	DECLARE_FUNCTION(execSetEarlyReflectionsAuxBus); \
	DECLARE_FUNCTION(execSetListeners); \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execSetEnableSpotReflectors); \
	DECLARE_FUNCTION(execSetGameObjectRadius); \
	DECLARE_FUNCTION(execGetOcclusionCollisionChannel);


struct Z_Construct_UClass_UAkComponent_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAkComponent_Statics; \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAkComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkComponent) \
	DECLARE_SERIALIZER(UAkComponent)


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkComponent(UAkComponent&&) = delete; \
	UAkComponent(const UAkComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkComponent) \
	NO_API virtual ~UAkComponent();


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_PROLOG
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_INCLASS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkComponent;

// ********** End Class UAkComponent ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h

// ********** Begin Enum EReflectionFilterBits *****************************************************
#define FOREACH_ENUM_EREFLECTIONFILTERBITS(op) \
	op(EReflectionFilterBits::Wall) \
	op(EReflectionFilterBits::Ceiling) \
	op(EReflectionFilterBits::Floor) 

enum class EReflectionFilterBits;
template<> struct TIsUEnumClass<EReflectionFilterBits> { enum { Value = true }; };
template<> UE_NODEBUG AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EReflectionFilterBits>();
// ********** End Enum EReflectionFilterBits *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
