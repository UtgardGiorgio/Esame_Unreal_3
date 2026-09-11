// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatform_Mac/AkMacInitializationSettings.h"

#ifdef AKAUDIO_AkMacInitializationSettings_generated_h
#error "AkMacInitializationSettings.generated.h already included, missing '#pragma once' in AkMacInitializationSettings.h"
#endif
#define AKAUDIO_AkMacInitializationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAkMacAdvancedInitializationSettings ******************************
struct Z_Construct_UScriptStruct_FAkMacAdvancedInitializationSettings_Statics;
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMacAdvancedInitializationSettings(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacInitializationSettings_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkMacAdvancedInitializationSettings_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAkMacAdvancedInitializationSettings(ETypeConstructPhase::Inner); } \
	typedef FAkAdvancedInitializationSettingsWithMultiCoreRendering Super;


struct FAkMacAdvancedInitializationSettings;
// ********** End ScriptStruct FAkMacAdvancedInitializationSettings ********************************

// ********** Begin Class UAkMacInitializationSettings *********************************************
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacInitializationSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


struct Z_Construct_UClass_UAkMacInitializationSettings_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkMacInitializationSettings(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacInitializationSettings_h_43_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAkMacInitializationSettings_Statics; \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkMacInitializationSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAkMacInitializationSettings, UAkPlatformInitializationSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkMacInitializationSettings) \
	DECLARE_SERIALIZER(UAkMacInitializationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacInitializationSettings_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkMacInitializationSettings(UAkMacInitializationSettings&&) = delete; \
	UAkMacInitializationSettings(const UAkMacInitializationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMacInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMacInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMacInitializationSettings) \
	NO_API virtual ~UAkMacInitializationSettings();


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacInitializationSettings_h_40_PROLOG
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacInitializationSettings_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacInitializationSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacInitializationSettings_h_43_INCLASS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacInitializationSettings_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkMacInitializationSettings;

// ********** End Class UAkMacInitializationSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacInitializationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
