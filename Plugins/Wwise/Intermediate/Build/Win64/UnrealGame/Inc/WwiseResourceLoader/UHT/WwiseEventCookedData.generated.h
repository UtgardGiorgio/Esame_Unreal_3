// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/CookedData/WwiseEventCookedData.h"

#ifdef WWISERESOURCELOADER_WwiseEventCookedData_generated_h
#error "WwiseEventCookedData.generated.h already included, missing '#pragma once' in WwiseEventCookedData.h"
#endif
#define WWISERESOURCELOADER_WwiseEventCookedData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWwiseEventCookedData *********************************************
struct Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics;
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventCookedData(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseEventCookedData_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FWwiseEventCookedData(ETypeConstructPhase::Inner); }


struct FWwiseEventCookedData;
// ********** End ScriptStruct FWwiseEventCookedData ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseEventCookedData_h

// ********** Begin Enum EWwiseEventDestroyOptions *************************************************
#define FOREACH_ENUM_EWWISEEVENTDESTROYOPTIONS(op) \
	op(EWwiseEventDestroyOptions::StopEventOnDestroy) \
	op(EWwiseEventDestroyOptions::WaitForEventEnd) 

enum class EWwiseEventDestroyOptions : uint8;
template<> struct TIsUEnumClass<EWwiseEventDestroyOptions> { enum { Value = true }; };
template<> UE_NODEBUG WWISERESOURCELOADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseEventDestroyOptions>();
// ********** End Enum EWwiseEventDestroyOptions ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
