// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wwise/Info/WwiseEventInfo.h"

#ifdef WWISERESOURCELOADER_WwiseEventInfo_generated_h
#error "WwiseEventInfo.generated.h already included, missing '#pragma once' in WwiseEventInfo.h"
#endif
#define WWISERESOURCELOADER_WwiseEventInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWwiseEventInfo ***************************************************
struct Z_Construct_UScriptStruct_FWwiseEventInfo_Statics;
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventInfo(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseEventInfo_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWwiseEventInfo_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FWwiseEventInfo(ETypeConstructPhase::Inner); } \
	typedef FWwiseObjectInfo Super;


struct FWwiseEventInfo;
// ********** End ScriptStruct FWwiseEventInfo *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseEventInfo_h

// ********** Begin Enum EWwiseEventSwitchContainerLoading *****************************************
#define FOREACH_ENUM_EWWISEEVENTSWITCHCONTAINERLOADING(op) \
	op(EWwiseEventSwitchContainerLoading::AlwaysLoad) \
	op(EWwiseEventSwitchContainerLoading::LoadOnReference) 

enum class EWwiseEventSwitchContainerLoading : uint8;
template<> struct TIsUEnumClass<EWwiseEventSwitchContainerLoading> { enum { Value = true }; };
template<> UE_NODEBUG WWISERESOURCELOADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseEventSwitchContainerLoading>();
// ********** End Enum EWwiseEventSwitchContainerLoading *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
