// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkSettingsPerUser.h"

#ifdef AKAUDIO_AkSettingsPerUser_generated_h
#error "AkSettingsPerUser.generated.h already included, missing '#pragma once' in AkSettingsPerUser.h"
#endif
#define AKAUDIO_AkSettingsPerUser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAkSettingsPerUser *******************************************************
struct Z_Construct_UClass_UAkSettingsPerUser_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkSettingsPerUser(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_43_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAkSettingsPerUser_Statics; \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkSettingsPerUser(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAkSettingsPerUser, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkSettingsPerUser) \
	DECLARE_SERIALIZER(UAkSettingsPerUser) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkSettingsPerUser(UAkSettingsPerUser&&) = delete; \
	UAkSettingsPerUser(const UAkSettingsPerUser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSettingsPerUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSettingsPerUser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSettingsPerUser) \
	NO_API virtual ~UAkSettingsPerUser();


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_40_PROLOG
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_43_INCLASS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkSettingsPerUser;

// ********** End Class UAkSettingsPerUser *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h

// ********** Begin Enum EWwiseProjectDatabaseLoadMode *********************************************
#define FOREACH_ENUM_EWWISEPROJECTDATABASELOADMODE(op) \
	op(EWwiseProjectDatabaseLoadMode::Synchronous) \
	op(EWwiseProjectDatabaseLoadMode::Asynchronous) 

enum class EWwiseProjectDatabaseLoadMode : uint8;
template<> struct TIsUEnumClass<EWwiseProjectDatabaseLoadMode> { enum { Value = true }; };
template<> UE_NODEBUG AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseProjectDatabaseLoadMode>();
// ********** End Enum EWwiseProjectDatabaseLoadMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
