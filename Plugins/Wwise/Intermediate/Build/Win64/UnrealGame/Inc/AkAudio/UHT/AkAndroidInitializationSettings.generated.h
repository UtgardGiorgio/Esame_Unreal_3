// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h"

#ifdef AKAUDIO_AkAndroidInitializationSettings_generated_h
#error "AkAndroidInitializationSettings.generated.h already included, missing '#pragma once' in AkAndroidInitializationSettings.h"
#endif
#define AKAUDIO_AkAndroidInitializationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAkAndroidAdvancedInitializationSettings **************************
struct Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics;
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings(ETypeConstructPhase::Inner); } \
	typedef FAkAdvancedInitializationSettingsWithMultiCoreRendering Super;


struct FAkAndroidAdvancedInitializationSettings;
// ********** End ScriptStruct FAkAndroidAdvancedInitializationSettings ****************************

// ********** Begin Class UAkAndroidInitializationSettings *****************************************
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


struct Z_Construct_UClass_UAkAndroidInitializationSettings_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidInitializationSettings(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_58_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAkAndroidInitializationSettings_Statics; \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkAndroidInitializationSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAkAndroidInitializationSettings, UAkPlatformInitializationSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkAndroidInitializationSettings) \
	DECLARE_SERIALIZER(UAkAndroidInitializationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkAndroidInitializationSettings(UAkAndroidInitializationSettings&&) = delete; \
	UAkAndroidInitializationSettings(const UAkAndroidInitializationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAndroidInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAndroidInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAndroidInitializationSettings) \
	NO_API virtual ~UAkAndroidInitializationSettings();


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_55_PROLOG
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_58_INCLASS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkAndroidInitializationSettings;

// ********** End Class UAkAndroidInitializationSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h

// ********** Begin Enum EAkAndroidAudioAPI ********************************************************
#define FOREACH_ENUM_EAKANDROIDAUDIOAPI(op) \
	op(EAkAndroidAudioAPI::AAudio) \
	op(EAkAndroidAudioAPI::OpenSL_ES) 

enum class EAkAndroidAudioAPI : uint32;
template<> struct TIsUEnumClass<EAkAndroidAudioAPI> { enum { Value = true }; };
template<> UE_NODEBUG AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkAndroidAudioAPI>();
// ********** End Enum EAkAndroidAudioAPI **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
