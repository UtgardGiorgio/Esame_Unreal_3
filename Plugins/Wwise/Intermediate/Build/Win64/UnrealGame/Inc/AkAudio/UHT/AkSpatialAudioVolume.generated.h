// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkSpatialAudioVolume.h"

#ifdef AKAUDIO_AkSpatialAudioVolume_generated_h
#error "AkSpatialAudioVolume.generated.h already included, missing '#pragma once' in AkSpatialAudioVolume.h"
#endif
#define AKAUDIO_AkSpatialAudioVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAkSpatialAudioVolume ****************************************************
#if WITH_EDITOR
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_RPC_WRAPPERS_NO_PURE_DECLS_EDITOR \
	DECLARE_FUNCTION(execGetCollisionChannel);
#else // WITH_EDITOR
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_RPC_WRAPPERS_NO_PURE_DECLS_EDITOR
#endif


struct Z_Construct_UClass_AAkSpatialAudioVolume_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_AAkSpatialAudioVolume_Statics; \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_AAkSpatialAudioVolume(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(AAkSpatialAudioVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_AAkSpatialAudioVolume) \
	DECLARE_SERIALIZER(AAkSpatialAudioVolume)


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAkSpatialAudioVolume(AAkSpatialAudioVolume&&) = delete; \
	AAkSpatialAudioVolume(const AAkSpatialAudioVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkSpatialAudioVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkSpatialAudioVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkSpatialAudioVolume) \
	NO_API virtual ~AAkSpatialAudioVolume();


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_56_PROLOG
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_RPC_WRAPPERS_NO_PURE_DECLS_EDITOR \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_INCLASS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAkSpatialAudioVolume;

// ********** End Class AAkSpatialAudioVolume ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h

// ********** Begin Enum EAkFitToGeometryMode ******************************************************
#define FOREACH_ENUM_EAKFITTOGEOMETRYMODE(op) \
	op(EAkFitToGeometryMode::OrientedBox) \
	op(EAkFitToGeometryMode::AlignedBox) \
	op(EAkFitToGeometryMode::ConvexPolyhedron) 

enum class EAkFitToGeometryMode : uint32;
template<> struct TIsUEnumClass<EAkFitToGeometryMode> { enum { Value = true }; };
template<> UE_NODEBUG AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkFitToGeometryMode>();
// ********** End Enum EAkFitToGeometryMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
