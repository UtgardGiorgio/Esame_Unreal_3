// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/CookedData/WwiseLanguageCookedData.h"

#ifdef WWISEFILEHANDLER_WwiseLanguageCookedData_generated_h
#error "WwiseLanguageCookedData.generated.h already included, missing '#pragma once' in WwiseLanguageCookedData.h"
#endif
#define WWISEFILEHANDLER_WwiseLanguageCookedData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWwiseLanguageCookedData ******************************************
struct Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics;
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FWwiseLanguageCookedData(ETypeConstructPhase::Inner); }


struct FWwiseLanguageCookedData;
// ********** End ScriptStruct FWwiseLanguageCookedData ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h

// ********** Begin Enum EWwiseLanguageRequirement *************************************************
#define FOREACH_ENUM_EWWISELANGUAGEREQUIREMENT(op) \
	op(EWwiseLanguageRequirement::IsDefault) \
	op(EWwiseLanguageRequirement::IsOptional) \
	op(EWwiseLanguageRequirement::SFX) 

enum class EWwiseLanguageRequirement : uint8;
template<> struct TIsUEnumClass<EWwiseLanguageRequirement> { enum { Value = true }; };
template<> UE_NODEBUG WWISEFILEHANDLER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseLanguageRequirement>();
// ********** End Enum EWwiseLanguageRequirement ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
