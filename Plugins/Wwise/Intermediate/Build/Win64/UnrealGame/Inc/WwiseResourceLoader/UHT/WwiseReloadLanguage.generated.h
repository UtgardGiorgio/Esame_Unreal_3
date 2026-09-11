// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/WwiseReloadLanguage.h"

#ifdef WWISERESOURCELOADER_WwiseReloadLanguage_generated_h
#error "WwiseReloadLanguage.generated.h already included, missing '#pragma once' in WwiseReloadLanguage.h"
#endif
#define WWISERESOURCELOADER_WwiseReloadLanguage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseReloadLanguage_h

// ********** Begin Enum EWwiseReloadLanguage ******************************************************
#define FOREACH_ENUM_EWWISERELOADLANGUAGE(op) \
	op(EWwiseReloadLanguage::Manual) \
	op(EWwiseReloadLanguage::Immediate) \
	op(EWwiseReloadLanguage::Safe) 

enum class EWwiseReloadLanguage;
template<> struct TIsUEnumClass<EWwiseReloadLanguage> { enum { Value = true }; };
template<> UE_NODEBUG WWISERESOURCELOADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseReloadLanguage>();
// ********** End Enum EWwiseReloadLanguage ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
