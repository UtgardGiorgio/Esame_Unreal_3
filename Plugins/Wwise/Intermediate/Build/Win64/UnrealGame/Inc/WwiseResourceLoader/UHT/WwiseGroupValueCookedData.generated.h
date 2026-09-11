// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/CookedData/WwiseGroupValueCookedData.h"

#ifdef WWISERESOURCELOADER_WwiseGroupValueCookedData_generated_h
#error "WwiseGroupValueCookedData.generated.h already included, missing '#pragma once' in WwiseGroupValueCookedData.h"
#endif
#define WWISERESOURCELOADER_WwiseGroupValueCookedData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWwiseGroupValueCookedData ****************************************
struct Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics;
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FWwiseGroupValueCookedData(ETypeConstructPhase::Inner); }


struct FWwiseGroupValueCookedData;
// ********** End ScriptStruct FWwiseGroupValueCookedData ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h

// ********** Begin Enum EWwiseGroupType ***********************************************************
#define FOREACH_ENUM_EWWISEGROUPTYPE(op) \
	op(EWwiseGroupType::Switch) \
	op(EWwiseGroupType::State) \
	op(EWwiseGroupType::Unknown) 

enum class EWwiseGroupType : uint8;
template<> struct TIsUEnumClass<EWwiseGroupType> { enum { Value = true }; };
template<> UE_NODEBUG WWISERESOURCELOADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseGroupType>();
// ********** End Enum EWwiseGroupType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
