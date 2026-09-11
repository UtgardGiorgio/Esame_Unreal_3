// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkGameplayTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkGameplayTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkActionOnEventType(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkChannelMask(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkCodecId(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkDurationCallbackInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkMarkerCallbackInfo(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiCc(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiGeneric(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteOnOff(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiPitchBend(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiProgramChange(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputSettings(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSegmentInfo(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioContext(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCurveInterpolation(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiCcValues(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkResult(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType(ETypeConstructPhase);
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature(ETypeConstructPhase);
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature(ETypeConstructPhase);
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_PanningRule(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioDeviceShareSet(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkDurationCallbackInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkMarkerCallbackInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EAkAudioContext ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkAudioContext_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkAudioContext>()
{
	return Z_Construct_UEnum_AkAudio_EAkAudioContext(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AlwaysActive.Comment", "// Editor sounds (e.g. UI)\n" },
		{ "AlwaysActive.Name", "EAkAudioContext::AlwaysActive" },
		{ "AlwaysActive.ToolTip", "Editor sounds (e.g. UI)" },
		{ "BlueprintType", "true" },
		{ "EditorAudio.Comment", "// Sounds playing during gameplay, simulation, PIE, etc.\n" },
		{ "EditorAudio.Name", "EAkAudioContext::EditorAudio" },
		{ "EditorAudio.ToolTip", "Sounds playing during gameplay, simulation, PIE, etc." },
		{ "Foreign.Name", "EAkAudioContext::Foreign" },
		{ "GameplayAudio.Comment", "// Sounds unrelated to gameplay or editor\n" },
		{ "GameplayAudio.Name", "EAkAudioContext::GameplayAudio" },
		{ "GameplayAudio.ToolTip", "Sounds unrelated to gameplay or editor" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkAudioContext::Foreign", (int64)EAkAudioContext::Foreign },
		{ "EAkAudioContext::GameplayAudio", (int64)EAkAudioContext::GameplayAudio },
		{ "EAkAudioContext::EditorAudio", (int64)EAkAudioContext::EditorAudio },
		{ "EAkAudioContext::AlwaysActive", (int64)EAkAudioContext::AlwaysActive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkAudioContext",
	"EAkAudioContext",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkAudioContext;
UEnum* Z_Construct_UEnum_AkAudio_EAkAudioContext(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkAudioContext.OuterSingleton)
		{
			ZRIE_EAkAudioContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioContext, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkAudioContext"));
		}
		return ZRIE_EAkAudioContext.OuterSingleton;
	}
	if (!ZRIE_EAkAudioContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkAudioContext.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkAudioContext.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkAudioContext *************************************************************

// ********** Begin Enum PanningRule ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_PanningRule_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<PanningRule>()
{
	return Z_Construct_UEnum_AkAudio_PanningRule(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Last.Comment", "///< Left and right positioned 180 degrees apart.\n" },
		{ "Last.Hidden", "" },
		{ "Last.Name", "PanningRule::Last" },
		{ "Last.ToolTip", "< Left and right positioned 180 degrees apart." },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "PanningRule_Headphones.Comment", "///< Left and right positioned 60 degrees apart (by default - see AK::SoundEngine::GetSpeakerAngles()).\n" },
		{ "PanningRule_Headphones.Name", "PanningRule::PanningRule_Headphones" },
		{ "PanningRule_Headphones.ToolTip", "< Left and right positioned 60 degrees apart (by default - see AK::SoundEngine::GetSpeakerAngles())." },
		{ "PanningRule_Speakers.Name", "PanningRule::PanningRule_Speakers" },
		{ "ScriptName", "EPanningRule" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PanningRule::PanningRule_Speakers", (int64)PanningRule::PanningRule_Speakers },
		{ "PanningRule::PanningRule_Headphones", (int64)PanningRule::PanningRule_Headphones },
		{ "PanningRule::Last", (int64)PanningRule::Last },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"PanningRule",
	"PanningRule",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_PanningRule;
UEnum* Z_Construct_UEnum_AkAudio_PanningRule(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_PanningRule.OuterSingleton)
		{
			ZRIE_PanningRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_PanningRule, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("PanningRule"));
		}
		return ZRIE_PanningRule.OuterSingleton;
	}
	if (!ZRIE_PanningRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_PanningRule.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_PanningRule.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum PanningRule *****************************************************************

// ********** Begin Enum AkAcousticPortalState *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_AkAcousticPortalState_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<AkAcousticPortalState>()
{
	return Z_Construct_UEnum_AkAudio_AkAcousticPortalState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Closed.DisplayName", "Disabled" },
		{ "Closed.Name", "AkAcousticPortalState::Closed" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "Open.DisplayName", "Enabled" },
		{ "Open.Name", "AkAcousticPortalState::Open" },
		{ "ScriptName", "EAkAcousticPortalState" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AkAcousticPortalState::Closed", (int64)AkAcousticPortalState::Closed },
		{ "AkAcousticPortalState::Open", (int64)AkAcousticPortalState::Open },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"AkAcousticPortalState",
	"AkAcousticPortalState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_AkAcousticPortalState;
UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_AkAcousticPortalState.OuterSingleton)
		{
			ZRIE_AkAcousticPortalState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkAcousticPortalState, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkAcousticPortalState"));
		}
		return ZRIE_AkAcousticPortalState.OuterSingleton;
	}
	if (!ZRIE_AkAcousticPortalState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_AkAcousticPortalState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_AkAcousticPortalState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum AkAcousticPortalState *******************************************************

// ********** Begin Enum AkChannelConfiguration ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_AkChannelConfiguration_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<AkChannelConfiguration>()
{
	return Z_Construct_UEnum_AkAudio_AkChannelConfiguration(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Ak_1_0.Name", "AkChannelConfiguration::Ak_1_0" },
		{ "Ak_2_0.Name", "AkChannelConfiguration::Ak_2_0" },
		{ "Ak_2_1.Name", "AkChannelConfiguration::Ak_2_1" },
		{ "Ak_3_0.Name", "AkChannelConfiguration::Ak_3_0" },
		{ "Ak_3_1.Name", "AkChannelConfiguration::Ak_3_1" },
		{ "Ak_4_0.Name", "AkChannelConfiguration::Ak_4_0" },
		{ "Ak_4_1.Name", "AkChannelConfiguration::Ak_4_1" },
		{ "Ak_5_0.Name", "AkChannelConfiguration::Ak_5_0" },
		{ "Ak_5_1.Name", "AkChannelConfiguration::Ak_5_1" },
		{ "Ak_5_1_2.Name", "AkChannelConfiguration::Ak_5_1_2" },
		{ "Ak_7_1.Name", "AkChannelConfiguration::Ak_7_1" },
		{ "Ak_7_1_2.Name", "AkChannelConfiguration::Ak_7_1_2" },
		{ "Ak_7_1_4.Name", "AkChannelConfiguration::Ak_7_1_4" },
		{ "Ak_Ambisonics_1st_order.Name", "AkChannelConfiguration::Ak_Ambisonics_1st_order" },
		{ "Ak_Ambisonics_2nd_order.Name", "AkChannelConfiguration::Ak_Ambisonics_2nd_order" },
		{ "Ak_Ambisonics_3rd_order.Name", "AkChannelConfiguration::Ak_Ambisonics_3rd_order" },
		{ "Ak_Ambisonics_4th_order.Name", "AkChannelConfiguration::Ak_Ambisonics_4th_order" },
		{ "Ak_Ambisonics_5th_order.Name", "AkChannelConfiguration::Ak_Ambisonics_5th_order" },
		{ "AK_Audio_Objects.Name", "AkChannelConfiguration::AK_Audio_Objects" },
		{ "Ak_Auro_10_1.Name", "AkChannelConfiguration::Ak_Auro_10_1" },
		{ "Ak_Auro_11_1.Name", "AkChannelConfiguration::Ak_Auro_11_1" },
		{ "Ak_Auro_13_1.Name", "AkChannelConfiguration::Ak_Auro_13_1" },
		{ "Ak_Auro_9_1.Name", "AkChannelConfiguration::Ak_Auro_9_1" },
		{ "Ak_LFE.Name", "AkChannelConfiguration::Ak_LFE" },
		{ "Ak_MainMix.Name", "AkChannelConfiguration::Ak_MainMix" },
		{ "Ak_Parent.Name", "AkChannelConfiguration::Ak_Parent" },
		{ "Ak_Passthrough.Name", "AkChannelConfiguration::Ak_Passthrough" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ScriptName", "EAkChannelConfiguration" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AkChannelConfiguration::Ak_Parent", (int64)AkChannelConfiguration::Ak_Parent },
		{ "AkChannelConfiguration::Ak_MainMix", (int64)AkChannelConfiguration::Ak_MainMix },
		{ "AkChannelConfiguration::Ak_Passthrough", (int64)AkChannelConfiguration::Ak_Passthrough },
		{ "AkChannelConfiguration::Ak_LFE", (int64)AkChannelConfiguration::Ak_LFE },
		{ "AkChannelConfiguration::AK_Audio_Objects", (int64)AkChannelConfiguration::AK_Audio_Objects },
		{ "AkChannelConfiguration::Ak_1_0", (int64)AkChannelConfiguration::Ak_1_0 },
		{ "AkChannelConfiguration::Ak_2_0", (int64)AkChannelConfiguration::Ak_2_0 },
		{ "AkChannelConfiguration::Ak_2_1", (int64)AkChannelConfiguration::Ak_2_1 },
		{ "AkChannelConfiguration::Ak_3_0", (int64)AkChannelConfiguration::Ak_3_0 },
		{ "AkChannelConfiguration::Ak_3_1", (int64)AkChannelConfiguration::Ak_3_1 },
		{ "AkChannelConfiguration::Ak_4_0", (int64)AkChannelConfiguration::Ak_4_0 },
		{ "AkChannelConfiguration::Ak_4_1", (int64)AkChannelConfiguration::Ak_4_1 },
		{ "AkChannelConfiguration::Ak_5_0", (int64)AkChannelConfiguration::Ak_5_0 },
		{ "AkChannelConfiguration::Ak_5_1", (int64)AkChannelConfiguration::Ak_5_1 },
		{ "AkChannelConfiguration::Ak_7_1", (int64)AkChannelConfiguration::Ak_7_1 },
		{ "AkChannelConfiguration::Ak_5_1_2", (int64)AkChannelConfiguration::Ak_5_1_2 },
		{ "AkChannelConfiguration::Ak_7_1_2", (int64)AkChannelConfiguration::Ak_7_1_2 },
		{ "AkChannelConfiguration::Ak_7_1_4", (int64)AkChannelConfiguration::Ak_7_1_4 },
		{ "AkChannelConfiguration::Ak_Auro_9_1", (int64)AkChannelConfiguration::Ak_Auro_9_1 },
		{ "AkChannelConfiguration::Ak_Auro_10_1", (int64)AkChannelConfiguration::Ak_Auro_10_1 },
		{ "AkChannelConfiguration::Ak_Auro_11_1", (int64)AkChannelConfiguration::Ak_Auro_11_1 },
		{ "AkChannelConfiguration::Ak_Auro_13_1", (int64)AkChannelConfiguration::Ak_Auro_13_1 },
		{ "AkChannelConfiguration::Ak_Ambisonics_1st_order", (int64)AkChannelConfiguration::Ak_Ambisonics_1st_order },
		{ "AkChannelConfiguration::Ak_Ambisonics_2nd_order", (int64)AkChannelConfiguration::Ak_Ambisonics_2nd_order },
		{ "AkChannelConfiguration::Ak_Ambisonics_3rd_order", (int64)AkChannelConfiguration::Ak_Ambisonics_3rd_order },
		{ "AkChannelConfiguration::Ak_Ambisonics_4th_order", (int64)AkChannelConfiguration::Ak_Ambisonics_4th_order },
		{ "AkChannelConfiguration::Ak_Ambisonics_5th_order", (int64)AkChannelConfiguration::Ak_Ambisonics_5th_order },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"AkChannelConfiguration",
	"AkChannelConfiguration",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_AkChannelConfiguration;
UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_AkChannelConfiguration.OuterSingleton)
		{
			ZRIE_AkChannelConfiguration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkChannelConfiguration, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkChannelConfiguration"));
		}
		return ZRIE_AkChannelConfiguration.OuterSingleton;
	}
	if (!ZRIE_AkChannelConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_AkChannelConfiguration.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_AkChannelConfiguration.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum AkChannelConfiguration ******************************************************

// ********** Begin Enum AkSpeakerConfiguration ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<AkSpeakerConfiguration>()
{
	return Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Ak_Speaker_Back_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Back_Center" },
		{ "Ak_Speaker_Back_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Back_Left" },
		{ "Ak_Speaker_Back_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Back_Right" },
		{ "Ak_Speaker_Front_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Front_Center" },
		{ "Ak_Speaker_Front_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Front_Left" },
		{ "Ak_Speaker_Front_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Front_Right" },
		{ "Ak_Speaker_Height_Back_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center" },
		{ "Ak_Speaker_Height_Back_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left" },
		{ "Ak_Speaker_Height_Back_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right" },
		{ "Ak_Speaker_Height_Front_Center.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center" },
		{ "Ak_Speaker_Height_Front_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left" },
		{ "Ak_Speaker_Height_Front_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right" },
		{ "Ak_Speaker_Low_Frequency.Name", "AkSpeakerConfiguration::Ak_Speaker_Low_Frequency" },
		{ "Ak_Speaker_Side_Left.Name", "AkSpeakerConfiguration::Ak_Speaker_Side_Left" },
		{ "Ak_Speaker_Side_Right.Name", "AkSpeakerConfiguration::Ak_Speaker_Side_Right" },
		{ "Ak_Speaker_Top.Name", "AkSpeakerConfiguration::Ak_Speaker_Top" },
		{ "Bitflags", "" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AkSpeakerConfiguration::Ak_Speaker_Front_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Front_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Front_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Front_Right },
		{ "AkSpeakerConfiguration::Ak_Speaker_Front_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Front_Center },
		{ "AkSpeakerConfiguration::Ak_Speaker_Low_Frequency", (int64)AkSpeakerConfiguration::Ak_Speaker_Low_Frequency },
		{ "AkSpeakerConfiguration::Ak_Speaker_Back_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Back_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Back_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Back_Right },
		{ "AkSpeakerConfiguration::Ak_Speaker_Back_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Back_Center },
		{ "AkSpeakerConfiguration::Ak_Speaker_Side_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Side_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Side_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Side_Right },
		{ "AkSpeakerConfiguration::Ak_Speaker_Top", (int64)AkSpeakerConfiguration::Ak_Speaker_Top },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center },
		{ "AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right", (int64)AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"AkSpeakerConfiguration",
	"AkSpeakerConfiguration",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_AkSpeakerConfiguration;
UEnum* Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_AkSpeakerConfiguration.OuterSingleton)
		{
			ZRIE_AkSpeakerConfiguration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkSpeakerConfiguration"));
		}
		return ZRIE_AkSpeakerConfiguration.OuterSingleton;
	}
	if (!ZRIE_AkSpeakerConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_AkSpeakerConfiguration.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_AkSpeakerConfiguration.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum AkSpeakerConfiguration ******************************************************

// ********** Begin Enum AkMultiPositionType *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<AkMultiPositionType>()
{
	return Z_Construct_UEnum_AkAudio_AkMultiPositionType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Last.Comment", "//AK::SoundEngine::MultiPositionType_MultiDirections,\n" },
		{ "Last.Hidden", "" },
		{ "Last.Name", "AkMultiPositionType::Last" },
		{ "Last.ToolTip", "AK::SoundEngine::MultiPositionType_MultiDirections," },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "MultiDirections.Comment", "//AK::SoundEngine::MultiPositionType_MultiSources,\n" },
		{ "MultiDirections.Name", "AkMultiPositionType::MultiDirections" },
		{ "MultiDirections.ToolTip", "AK::SoundEngine::MultiPositionType_MultiSources," },
		{ "MultiSources.Comment", "//AK::SoundEngine::MultiPositionType_SingleSource,\n" },
		{ "MultiSources.Name", "AkMultiPositionType::MultiSources" },
		{ "MultiSources.ToolTip", "AK::SoundEngine::MultiPositionType_SingleSource," },
		{ "ScriptName", "EAkMultiPositionType" },
		{ "SingleSource.Name", "AkMultiPositionType::SingleSource" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AkMultiPositionType::SingleSource", (int64)AkMultiPositionType::SingleSource },
		{ "AkMultiPositionType::MultiSources", (int64)AkMultiPositionType::MultiSources },
		{ "AkMultiPositionType::MultiDirections", (int64)AkMultiPositionType::MultiDirections },
		{ "AkMultiPositionType::Last", (int64)AkMultiPositionType::Last },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"AkMultiPositionType",
	"AkMultiPositionType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_AkMultiPositionType;
UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_AkMultiPositionType.OuterSingleton)
		{
			ZRIE_AkMultiPositionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkMultiPositionType, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkMultiPositionType"));
		}
		return ZRIE_AkMultiPositionType.OuterSingleton;
	}
	if (!ZRIE_AkMultiPositionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_AkMultiPositionType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_AkMultiPositionType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum AkMultiPositionType *********************************************************

// ********** Begin Enum AkActionOnEventType *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<AkActionOnEventType>()
{
	return Z_Construct_UEnum_AkAudio_AkActionOnEventType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Break.Comment", "// AK::SoundEngine::AkActionOnEventType_Break\n" },
		{ "Break.Name", "AkActionOnEventType::Break" },
		{ "Break.ToolTip", "AK::SoundEngine::AkActionOnEventType_Break" },
		{ "Last.Hidden", "" },
		{ "Last.Name", "AkActionOnEventType::Last" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "Pause.Comment", "// AK::SoundEngine::AkActionOnEventType_Pause\n" },
		{ "Pause.Name", "AkActionOnEventType::Pause" },
		{ "Pause.ToolTip", "AK::SoundEngine::AkActionOnEventType_Pause" },
		{ "ReleaseEnvelope.Comment", "// AK::SoundEngine::AkActionOnEventType_ReleaseEnvelope\n" },
		{ "ReleaseEnvelope.Name", "AkActionOnEventType::ReleaseEnvelope" },
		{ "ReleaseEnvelope.ToolTip", "AK::SoundEngine::AkActionOnEventType_ReleaseEnvelope" },
		{ "Resume.Comment", "// AK::SoundEngine::AkActionOnEventType_Resume\n" },
		{ "Resume.Name", "AkActionOnEventType::Resume" },
		{ "Resume.ToolTip", "AK::SoundEngine::AkActionOnEventType_Resume" },
		{ "ScriptName", "EAkActionOnEventType" },
		{ "Stop.Comment", "// AK::SoundEngine::AkActionOnEventType_Stop\n" },
		{ "Stop.Name", "AkActionOnEventType::Stop" },
		{ "Stop.ToolTip", "AK::SoundEngine::AkActionOnEventType_Stop" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AkActionOnEventType::Stop", (int64)AkActionOnEventType::Stop },
		{ "AkActionOnEventType::Pause", (int64)AkActionOnEventType::Pause },
		{ "AkActionOnEventType::Resume", (int64)AkActionOnEventType::Resume },
		{ "AkActionOnEventType::Break", (int64)AkActionOnEventType::Break },
		{ "AkActionOnEventType::ReleaseEnvelope", (int64)AkActionOnEventType::ReleaseEnvelope },
		{ "AkActionOnEventType::Last", (int64)AkActionOnEventType::Last },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"AkActionOnEventType",
	"AkActionOnEventType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_AkActionOnEventType;
UEnum* Z_Construct_UEnum_AkAudio_AkActionOnEventType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_AkActionOnEventType.OuterSingleton)
		{
			ZRIE_AkActionOnEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkActionOnEventType, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkActionOnEventType"));
		}
		return ZRIE_AkActionOnEventType.OuterSingleton;
	}
	if (!ZRIE_AkActionOnEventType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_AkActionOnEventType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_AkActionOnEventType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum AkActionOnEventType *********************************************************

// ********** Begin Enum EAkCurveInterpolation *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkCurveInterpolation>()
{
	return Z_Construct_UEnum_AkAudio_EAkCurveInterpolation(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Constant.Comment", "// Constant ( not valid for fading values )\n" },
		{ "Constant.Name", "EAkCurveInterpolation::Constant" },
		{ "Constant.ToolTip", "Constant ( not valid for fading values )" },
		{ "Exp1.Comment", "// Exp1\n" },
		{ "Exp1.Name", "EAkCurveInterpolation::Exp1" },
		{ "Exp1.ToolTip", "Exp1" },
		{ "Exp3.Comment", "// Exp3\n" },
		{ "Exp3.Name", "EAkCurveInterpolation::Exp3" },
		{ "Exp3.ToolTip", "Exp3" },
		{ "InvSCurve.Comment", "// Inversed S Curve\n" },
		{ "InvSCurve.Name", "EAkCurveInterpolation::InvSCurve" },
		{ "InvSCurve.ToolTip", "Inversed S Curve" },
		{ "Last.Hidden", "" },
		{ "Last.Name", "EAkCurveInterpolation::Last" },
		{ "LastFadeCurve.Comment", "// Update this value to reflect last curve available for fades\n" },
		{ "LastFadeCurve.Name", "EAkCurveInterpolation::LastFadeCurve" },
		{ "LastFadeCurve.ToolTip", "Update this value to reflect last curve available for fades" },
		{ "Linear.Comment", "// Linear (Default)\n" },
		{ "Linear.Name", "EAkCurveInterpolation::Linear" },
		{ "Linear.ToolTip", "Linear (Default)" },
		{ "Log1.Comment", "// Log1\n" },
		{ "Log1.Name", "EAkCurveInterpolation::Log1" },
		{ "Log1.ToolTip", "Log1" },
		{ "Log3.Comment", "// Log3\n" },
		{ "Log3.Name", "EAkCurveInterpolation::Log3" },
		{ "Log3.ToolTip", "Log3" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "SCurve.Comment", "// S Curve\n" },
		{ "SCurve.Name", "EAkCurveInterpolation::SCurve" },
		{ "SCurve.ToolTip", "S Curve" },
		{ "Sine.Comment", "// Sine\n" },
		{ "Sine.Name", "EAkCurveInterpolation::Sine" },
		{ "Sine.ToolTip", "Sine" },
		{ "SineRecip.Comment", "// Reciprocal of sine curve\n" },
		{ "SineRecip.Name", "EAkCurveInterpolation::SineRecip" },
		{ "SineRecip.ToolTip", "Reciprocal of sine curve" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkCurveInterpolation::Log3", (int64)EAkCurveInterpolation::Log3 },
		{ "EAkCurveInterpolation::Sine", (int64)EAkCurveInterpolation::Sine },
		{ "EAkCurveInterpolation::Log1", (int64)EAkCurveInterpolation::Log1 },
		{ "EAkCurveInterpolation::InvSCurve", (int64)EAkCurveInterpolation::InvSCurve },
		{ "EAkCurveInterpolation::Linear", (int64)EAkCurveInterpolation::Linear },
		{ "EAkCurveInterpolation::SCurve", (int64)EAkCurveInterpolation::SCurve },
		{ "EAkCurveInterpolation::Exp1", (int64)EAkCurveInterpolation::Exp1 },
		{ "EAkCurveInterpolation::SineRecip", (int64)EAkCurveInterpolation::SineRecip },
		{ "EAkCurveInterpolation::Exp3", (int64)EAkCurveInterpolation::Exp3 },
		{ "EAkCurveInterpolation::LastFadeCurve", (int64)EAkCurveInterpolation::LastFadeCurve },
		{ "EAkCurveInterpolation::Constant", (int64)EAkCurveInterpolation::Constant },
		{ "EAkCurveInterpolation::Last", (int64)EAkCurveInterpolation::Last },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkCurveInterpolation",
	"EAkCurveInterpolation",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkCurveInterpolation;
UEnum* Z_Construct_UEnum_AkAudio_EAkCurveInterpolation(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkCurveInterpolation.OuterSingleton)
		{
			ZRIE_EAkCurveInterpolation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCurveInterpolation, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkCurveInterpolation"));
		}
		return ZRIE_EAkCurveInterpolation.OuterSingleton;
	}
	if (!ZRIE_EAkCurveInterpolation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkCurveInterpolation.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkCurveInterpolation.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkCurveInterpolation *******************************************************

// ********** Begin Enum EAkResult *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkResult_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkResult>()
{
	return Z_Construct_UEnum_AkAudio_EAkResult(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AlreadyConnected.Name", "EAkResult::AlreadyConnected" },
		{ "AlreadyConnected.ToolTip", "The stream is already connected to another node." },
		{ "AlreadyInitialized.Name", "EAkResult::AlreadyInitialized" },
		{ "AlreadyInitialized.ToolTip", "Init() was called but that element was already initialized." },
		{ "AudioFileHeaderTooLarge.Name", "EAkResult::AudioFileHeaderTooLarge" },
		{ "AudioFileHeaderTooLarge.ToolTip", "The file header is too large." },
		{ "BankAlreadyLoaded.Name", "EAkResult::BankAlreadyLoaded" },
		{ "BankAlreadyLoaded.ToolTip", "The bank load failed because the bank is already loaded." },
		{ "BankReadError.Name", "EAkResult::BankReadError" },
		{ "BankReadError.ToolTip", "Error while reading a bank." },
		{ "BlueprintType", "true" },
		{ "Busy.Name", "EAkResult::Busy" },
		{ "Busy.ToolTip", "The system is busy and could not process the request." },
		{ "Cancelled.Name", "EAkResult::Cancelled" },
		{ "Cancelled.ToolTip", "The requested action was cancelled (not an error)." },
		{ "CannotAddItselfAsAChild.DisplayName", "Cannot Add Itself As A Child" },
		{ "CannotAddItselfAsAChild.Name", "EAkResult::CannotAddItselfAsAChild" },
		{ "CannotAddItselfAsAChild.ToolTip", "It is not possible to add itself as its own child." },
		{ "ChildAlreadyHasAParent.DisplayName", "Child Already Has A Parent" },
		{ "ChildAlreadyHasAParent.Name", "EAkResult::ChildAlreadyHasAParent" },
		{ "ChildAlreadyHasAParent.ToolTip", "The child already has a parent." },
		{ "CommandTooLarge.Name", "EAkResult::CommandTooLarge" },
		{ "CommandTooLarge.ToolTip", "SDK command is too large to fit in the command queue." },
		{ "DataAlignmentError.Name", "EAkResult::DataAlignmentError" },
		{ "DataAlignmentError.ToolTip", "A pointer to audio data was not aligned to the platform's required alignment (check AkTypes.h in the platform-specific folder)." },
		{ "DataNeeded.Name", "EAkResult::DataNeeded" },
		{ "DataNeeded.ToolTip", "The consumer needs more." },
		{ "DataReady.Name", "EAkResult::DataReady" },
		{ "DataReady.ToolTip", "The provider has available data." },
		{ "Deferred.Name", "EAkResult::Deferred" },
		{ "Deferred.ToolTip", "Returned by functions to indicate to the caller the that the operation is done asynchronously. Used by Low Level IO Hook implementations when async operation are suppored by the hardware." },
		{ "DeviceNotCompatible.Name", "EAkResult::DeviceNotCompatible" },
		{ "DeviceNotCompatible.ToolTip", "Incompatible Audio device." },
		{ "DeviceNotFound.Name", "EAkResult::DeviceNotFound" },
		{ "DeviceNotFound.ToolTip", "The specified device ID does not match with any of the output devices that the sound engine is currently using." },
		{ "DeviceNotReady.Name", "EAkResult::DeviceNotReady" },
		{ "DeviceNotReady.ToolTip", "Specified ID doesn't match a valid hardware device: either the device doesn't exist or is disabled." },
		{ "DLLCannotLoad.Name", "EAkResult::DLLCannotLoad" },
		{ "DLLCannotLoad.ToolTip", "Plugin DLL could not be loaded, either because it is not found or one dependency is missing." },
		{ "DLLPathNotFound.Name", "EAkResult::DLLPathNotFound" },
		{ "DLLPathNotFound.ToolTip", "Plugin DLL search path could not be found." },
		{ "DuplicateUniqueID.Name", "EAkResult::DuplicateUniqueID" },
		{ "DuplicateUniqueID.ToolTip", "Two Wwise objects share the same ID." },
		{ "ElementAlreadyInList.Name", "EAkResult::ElementAlreadyInList" },
		{ "ElementAlreadyInList.ToolTip", "The item could not be added because it was already in the list." },
		{ "Fail.Name", "EAkResult::Fail" },
		{ "Fail.ToolTip", "The operation failed." },
		{ "FileFormatMismatch.Name", "EAkResult::FileFormatMismatch" },
		{ "FileFormatMismatch.ToolTip", "Media file format unexpected" },
		{ "FileNotFound.Name", "EAkResult::FileNotFound" },
		{ "FileNotFound.ToolTip", "File not found." },
		{ "FilePathTooLong.Name", "EAkResult::FilePathTooLong" },
		{ "FilePathTooLong.ToolTip", "The combination of base path and file name exceeds maximum buffer lengths." },
		{ "FilePermissionError.Name", "EAkResult::FilePermissionError" },
		{ "FilePermissionError.ToolTip", "The file access permissions prevent opening a file." },
		{ "FormatNotReady.Name", "EAkResult::FormatNotReady" },
		{ "FormatNotReady.ToolTip", "Source format not known yet." },
		{ "IDNotFound.DisplayName", "ID Not Found" },
		{ "IDNotFound.Name", "EAkResult::IDNotFound" },
		{ "IDNotFound.ToolTip", "The ID was not found." },
		{ "InitBankNotLoaded.Name", "EAkResult::InitBankNotLoaded" },
		{ "InitBankNotLoaded.ToolTip", "The Init bank was not loaded yet, the sound engine isn't completely ready yet." },
		{ "InsufficientMemory.Name", "EAkResult::InsufficientMemory" },
		{ "InsufficientMemory.ToolTip", "Memory error." },
		{ "InvalidBankType.Name", "EAkResult::InvalidBankType" },
		{ "InvalidBankType.ToolTip", "Invalid bank type. The bank type was either supplied through a function call (e.g. LoadBank) or obtained from a bank loaded from memory." },
		{ "InvalidCustomPlatformName.Name", "EAkResult::InvalidCustomPlatformName" },
		{ "InvalidCustomPlatformName.ToolTip", "Detecting incompatibility between Custom platform of banks and custom platform of connected application." },
		{ "InvalidFile.Name", "EAkResult::InvalidFile" },
		{ "InvalidFile.ToolTip", "The provided file is the wrong format or unexpected values causes the file to be invalid." },
		{ "InvalidFileSize.Name", "EAkResult::InvalidFileSize" },
		{ "InvalidFileSize.ToolTip", "The file requested was found and opened but is either 0 bytes long or not the expected size. This usually point toward a Low Level IO Hook implementation error." },
		{ "InvalidFloatValue.Name", "EAkResult::InvalidFloatValue" },
		{ "InvalidFloatValue.ToolTip", "One parameter has a invalid float value such as NaN, INF or FLT_MAX." },
		{ "InvalidID.Name", "EAkResult::InvalidID" },
		{ "InvalidID.ToolTip", "The ID is invalid." },
		{ "InvalidInstanceID.Name", "EAkResult::InvalidInstanceID" },
		{ "InvalidInstanceID.ToolTip", "The InstanceID is invalid." },
		{ "InvalidLanguage.Name", "EAkResult::InvalidLanguage" },
		{ "InvalidLanguage.ToolTip", "The language is invalid (applies to the Low-Level I/O)." },
		{ "InvalidParameter.Name", "EAkResult::InvalidParameter" },
		{ "InvalidParameter.ToolTip", "Something is not within bounds, check the documentation of the function returning this code." },
		{ "InvalidStateGroup.Name", "EAkResult::InvalidStateGroup" },
		{ "InvalidStateGroup.ToolTip", "The StateGroup is not a valid channel." },
		{ "InvalidSwitchType.Name", "EAkResult::InvalidSwitchType" },
		{ "InvalidSwitchType.ToolTip", "Invalid switch type (used with the switch container)" },
		{ "Last.Hidden", "" },
		{ "Last.Name", "EAkResult::Last" },
		{ "MaxReached.Name", "EAkResult::MaxReached" },
		{ "MaxReached.ToolTip", "The maximum was reached." },
		{ "MemManagerNotInitialized.Name", "EAkResult::MemManagerNotInitialized" },
		{ "MemManagerNotInitialized.ToolTip", "The memory manager should have been initialized at this point." },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "MustBeVirtualized.Name", "EAkResult::MustBeVirtualized" },
		{ "MustBeVirtualized.ToolTip", "Sound was Not Allowed to play." },
		{ "NoDataNeeded.Name", "EAkResult::NoDataNeeded" },
		{ "NoDataNeeded.ToolTip", "The consumer does not need more." },
		{ "NoDataReady.Name", "EAkResult::NoDataReady" },
		{ "NoDataReady.ToolTip", "The provider does not have available data." },
		{ "NoDistinctListener.Name", "EAkResult::NoDistinctListener" },
		{ "NoDistinctListener.ToolTip", "No distinct listener provided for AddOutput" },
		{ "NoJavaVM.Name", "EAkResult::NoJavaVM" },
		{ "NoJavaVM.ToolTip", "No Java VM provided in AkInitSettings." },
		{ "NoMoreData.Name", "EAkResult::NoMoreData" },
		{ "NoMoreData.ToolTip", "No more data is available from the source." },
		{ "NotCompatible.Name", "EAkResult::NotCompatible" },
		{ "NotCompatible.ToolTip", "Incompatible formats." },
		{ "NotImplemented.Name", "EAkResult::NotImplemented" },
		{ "NotImplemented.ToolTip", "This feature is not implemented." },
		{ "NotInitialized.Name", "EAkResult::NotInitialized" },
		{ "NotInitialized.ToolTip", "The component being used is not initialized. Most likely AK::SoundEngine::Init() was not called yet, or AK::SoundEngine::Term was called too early." },
		{ "OpenSLError.Name", "EAkResult::OpenSLError" },
		{ "OpenSLError.ToolTip", "OpenSL returned an error.  Check error log for more details." },
		{ "PartialSuccess.Name", "EAkResult::PartialSuccess" },
		{ "PartialSuccess.ToolTip", "The operation succeeded partially." },
		{ "PathNodeAlreadyInList.Name", "EAkResult::PathNodeAlreadyInList" },
		{ "PathNodeAlreadyInList.ToolTip", "This path is already there." },
		{ "PathNodeNotInList.Name", "EAkResult::PathNodeNotInList" },
		{ "PathNodeNotInList.ToolTip", "This path is not there." },
		{ "PathNotFound.Name", "EAkResult::PathNotFound" },
		{ "PathNotFound.ToolTip", "This path is not known." },
		{ "PathNotPaused.Name", "EAkResult::PathNotPaused" },
		{ "PathNotPaused.ToolTip", "Only a paused path can be resumed." },
		{ "PathNotRunning.Name", "EAkResult::PathNotRunning" },
		{ "PathNotRunning.ToolTip", "Only a running path can be paused." },
		{ "PathNoVertices.Name", "EAkResult::PathNoVertices" },
		{ "PathNoVertices.ToolTip", "Stuff in vertices before trying to start it." },
		{ "PlayingIDNotFound.Name", "EAkResult::PlayingIDNotFound" },
		{ "PlayingIDNotFound.ToolTip", "Calling a function with a playing ID that is not known." },
		{ "PluginMediaNotAvailable.Name", "EAkResult::PluginMediaNotAvailable" },
		{ "PluginMediaNotAvailable.ToolTip", "Plugin media is not available for effect." },
		{ "PluginNotRegistered.Name", "EAkResult::PluginNotRegistered" },
		{ "PluginNotRegistered.ToolTip", "Plugin is not registered.  Make sure to implement a AK::PluginRegistration class for it and use AK_STATIC_LINK_PLUGIN in the game binary." },
		{ "ProcessDone.Name", "EAkResult::ProcessDone" },
		{ "ProcessDone.ToolTip", "The executed routine has finished its execution." },
		{ "ProcessNeeded.Name", "EAkResult::ProcessNeeded" },
		{ "ProcessNeeded.ToolTip", "A routine needs to be executed on some CPU." },
		{ "RejectedByFilter.Name", "EAkResult::RejectedByFilter" },
		{ "RejectedByFilter.ToolTip", "A play request was rejected due to the MIDI filter parameters." },
		{ "RenderedFX.Name", "EAkResult::RenderedFX" },
		{ "RenderedFX.ToolTip", "The effect on the node is rendered." },
		{ "ResourceInUse.Name", "EAkResult::ResourceInUse" },
		{ "ResourceInUse.ToolTip", "Resource is in use and cannot be released." },
		{ "SSEInstructionsNotSupported.Name", "EAkResult::SSEInstructionsNotSupported" },
		{ "SSEInstructionsNotSupported.ToolTip", "The machine does not support SSE instructions (required on PC)." },
		{ "StreamMgrNotInitialized.Name", "EAkResult::StreamMgrNotInitialized" },
		{ "StreamMgrNotInitialized.ToolTip", "The stream manager should have been initialized at this point." },
		{ "Success.Name", "EAkResult::Success" },
		{ "Success.ToolTip", "The operation was successful." },
		{ "TooManyConcurrentOperations.Name", "EAkResult::TooManyConcurrentOperations" },
		{ "TooManyConcurrentOperations.ToolTip", "When using StdStream, file operations can be blocking or not. When not blocking, operations need to be synchronized externally properly. If not, this error occurs." },
		{ "UnknownBankID.Name", "EAkResult::UnknownBankID" },
		{ "UnknownBankID.ToolTip", "Trying to load a bank using an ID which is not defined." },
		{ "UnknownFileError.Name", "EAkResult::UnknownFileError" },
		{ "UnknownFileError.ToolTip", "Rare file error occured, as opposed to AK_FileNotFound or AK_FilePermissionError. This lumps all unrecognized OS file system errors." },
		{ "UnsupportedChannelConfig.Name", "EAkResult::UnsupportedChannelConfig" },
		{ "UnsupportedChannelConfig.ToolTip", "Channel configuration is not supported in the current execution context." },
		{ "WrongBankVersion.Name", "EAkResult::WrongBankVersion" },
		{ "WrongBankVersion.ToolTip", "The bank version is not compatible with the current bank reader." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkResult::NotImplemented", (int64)EAkResult::NotImplemented },
		{ "EAkResult::Success", (int64)EAkResult::Success },
		{ "EAkResult::Fail", (int64)EAkResult::Fail },
		{ "EAkResult::PartialSuccess", (int64)EAkResult::PartialSuccess },
		{ "EAkResult::NotCompatible", (int64)EAkResult::NotCompatible },
		{ "EAkResult::AlreadyConnected", (int64)EAkResult::AlreadyConnected },
		{ "EAkResult::InvalidFile", (int64)EAkResult::InvalidFile },
		{ "EAkResult::AudioFileHeaderTooLarge", (int64)EAkResult::AudioFileHeaderTooLarge },
		{ "EAkResult::MaxReached", (int64)EAkResult::MaxReached },
		{ "EAkResult::InvalidID", (int64)EAkResult::InvalidID },
		{ "EAkResult::IDNotFound", (int64)EAkResult::IDNotFound },
		{ "EAkResult::InvalidInstanceID", (int64)EAkResult::InvalidInstanceID },
		{ "EAkResult::NoMoreData", (int64)EAkResult::NoMoreData },
		{ "EAkResult::InvalidStateGroup", (int64)EAkResult::InvalidStateGroup },
		{ "EAkResult::ChildAlreadyHasAParent", (int64)EAkResult::ChildAlreadyHasAParent },
		{ "EAkResult::InvalidLanguage", (int64)EAkResult::InvalidLanguage },
		{ "EAkResult::CannotAddItselfAsAChild", (int64)EAkResult::CannotAddItselfAsAChild },
		{ "EAkResult::InvalidParameter", (int64)EAkResult::InvalidParameter },
		{ "EAkResult::ElementAlreadyInList", (int64)EAkResult::ElementAlreadyInList },
		{ "EAkResult::PathNotFound", (int64)EAkResult::PathNotFound },
		{ "EAkResult::PathNoVertices", (int64)EAkResult::PathNoVertices },
		{ "EAkResult::PathNotRunning", (int64)EAkResult::PathNotRunning },
		{ "EAkResult::PathNotPaused", (int64)EAkResult::PathNotPaused },
		{ "EAkResult::PathNodeAlreadyInList", (int64)EAkResult::PathNodeAlreadyInList },
		{ "EAkResult::PathNodeNotInList", (int64)EAkResult::PathNodeNotInList },
		{ "EAkResult::DataNeeded", (int64)EAkResult::DataNeeded },
		{ "EAkResult::NoDataNeeded", (int64)EAkResult::NoDataNeeded },
		{ "EAkResult::DataReady", (int64)EAkResult::DataReady },
		{ "EAkResult::NoDataReady", (int64)EAkResult::NoDataReady },
		{ "EAkResult::InsufficientMemory", (int64)EAkResult::InsufficientMemory },
		{ "EAkResult::Cancelled", (int64)EAkResult::Cancelled },
		{ "EAkResult::UnknownBankID", (int64)EAkResult::UnknownBankID },
		{ "EAkResult::BankReadError", (int64)EAkResult::BankReadError },
		{ "EAkResult::InvalidSwitchType", (int64)EAkResult::InvalidSwitchType },
		{ "EAkResult::FormatNotReady", (int64)EAkResult::FormatNotReady },
		{ "EAkResult::WrongBankVersion", (int64)EAkResult::WrongBankVersion },
		{ "EAkResult::FileNotFound", (int64)EAkResult::FileNotFound },
		{ "EAkResult::DeviceNotReady", (int64)EAkResult::DeviceNotReady },
		{ "EAkResult::BankAlreadyLoaded", (int64)EAkResult::BankAlreadyLoaded },
		{ "EAkResult::RenderedFX", (int64)EAkResult::RenderedFX },
		{ "EAkResult::ProcessNeeded", (int64)EAkResult::ProcessNeeded },
		{ "EAkResult::ProcessDone", (int64)EAkResult::ProcessDone },
		{ "EAkResult::MemManagerNotInitialized", (int64)EAkResult::MemManagerNotInitialized },
		{ "EAkResult::StreamMgrNotInitialized", (int64)EAkResult::StreamMgrNotInitialized },
		{ "EAkResult::SSEInstructionsNotSupported", (int64)EAkResult::SSEInstructionsNotSupported },
		{ "EAkResult::Busy", (int64)EAkResult::Busy },
		{ "EAkResult::UnsupportedChannelConfig", (int64)EAkResult::UnsupportedChannelConfig },
		{ "EAkResult::PluginMediaNotAvailable", (int64)EAkResult::PluginMediaNotAvailable },
		{ "EAkResult::MustBeVirtualized", (int64)EAkResult::MustBeVirtualized },
		{ "EAkResult::CommandTooLarge", (int64)EAkResult::CommandTooLarge },
		{ "EAkResult::RejectedByFilter", (int64)EAkResult::RejectedByFilter },
		{ "EAkResult::InvalidCustomPlatformName", (int64)EAkResult::InvalidCustomPlatformName },
		{ "EAkResult::DLLCannotLoad", (int64)EAkResult::DLLCannotLoad },
		{ "EAkResult::DLLPathNotFound", (int64)EAkResult::DLLPathNotFound },
		{ "EAkResult::NoJavaVM", (int64)EAkResult::NoJavaVM },
		{ "EAkResult::OpenSLError", (int64)EAkResult::OpenSLError },
		{ "EAkResult::PluginNotRegistered", (int64)EAkResult::PluginNotRegistered },
		{ "EAkResult::DataAlignmentError", (int64)EAkResult::DataAlignmentError },
		{ "EAkResult::DeviceNotCompatible", (int64)EAkResult::DeviceNotCompatible },
		{ "EAkResult::DuplicateUniqueID", (int64)EAkResult::DuplicateUniqueID },
		{ "EAkResult::InitBankNotLoaded", (int64)EAkResult::InitBankNotLoaded },
		{ "EAkResult::DeviceNotFound", (int64)EAkResult::DeviceNotFound },
		{ "EAkResult::PlayingIDNotFound", (int64)EAkResult::PlayingIDNotFound },
		{ "EAkResult::InvalidFloatValue", (int64)EAkResult::InvalidFloatValue },
		{ "EAkResult::FileFormatMismatch", (int64)EAkResult::FileFormatMismatch },
		{ "EAkResult::NoDistinctListener", (int64)EAkResult::NoDistinctListener },
		{ "EAkResult::ResourceInUse", (int64)EAkResult::ResourceInUse },
		{ "EAkResult::InvalidBankType", (int64)EAkResult::InvalidBankType },
		{ "EAkResult::AlreadyInitialized", (int64)EAkResult::AlreadyInitialized },
		{ "EAkResult::NotInitialized", (int64)EAkResult::NotInitialized },
		{ "EAkResult::FilePermissionError", (int64)EAkResult::FilePermissionError },
		{ "EAkResult::UnknownFileError", (int64)EAkResult::UnknownFileError },
		{ "EAkResult::TooManyConcurrentOperations", (int64)EAkResult::TooManyConcurrentOperations },
		{ "EAkResult::InvalidFileSize", (int64)EAkResult::InvalidFileSize },
		{ "EAkResult::Deferred", (int64)EAkResult::Deferred },
		{ "EAkResult::FilePathTooLong", (int64)EAkResult::FilePathTooLong },
		{ "EAkResult::Last", (int64)EAkResult::Last },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkResult",
	"EAkResult",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkResult;
UEnum* Z_Construct_UEnum_AkAudio_EAkResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkResult.OuterSingleton)
		{
			ZRIE_EAkResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkResult, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkResult"));
		}
		return ZRIE_EAkResult.OuterSingleton;
	}
	if (!ZRIE_EAkResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkResult.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkResult.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkResult *******************************************************************

// ********** Begin Enum EAkCallbackType ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkCallbackType_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkCallbackType>()
{
	return Z_Construct_UEnum_AkAudio_EAkCallbackType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Bitmask", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*=============================================================================\n\nBegin - Ak Callback Blueprint classes and structures. Known limitations:\n- AkDynamicSequenceItemCallbackInfo is not exposed because Dynamic sequences are not part of this integration\n- AkSpeakerVolumeMatrixCallbackInfo cannot be exposed to Blueprint because it has to be executed in the audio thread\n- AkMusicPlaylistCallbackInfo cannot be exposed to Blueprint because it has to be executed in the audio thread\n\n=============================================================================*//// Type of callback. Used as a bitfield in methods AK::SoundEngine::PostEvent() and AK::SoundEngine::DynamicSequence::Open().\n" },
#endif
		{ "Duration.Name", "EAkCallbackType::Duration" },
		{ "Duration.ToolTip", "Callback triggered when the duration of the sound is known by the sound engine. AkCallbackInfo can be cast to AkDurationCallbackInfo." },
		{ "EndOfEvent.Name", "EAkCallbackType::EndOfEvent" },
		{ "EndOfEvent.ToolTip", "Callback triggered when reaching the end of an event. AkCallbackInfo can be cast to AkEventCallbackInfo." },
		{ "Last.Hidden", "" },
		{ "Last.Name", "EAkCallbackType::Last" },
		{ "Marker.Name", "EAkCallbackType::Marker" },
		{ "Marker.ToolTip", "Callback triggered when encountering a marker during playback. AkCallbackInfo can be cast to AkMarkerCallbackInfo." },
		{ "MIDIEvent.DisplayName", "MIDI Event" },
		{ "MIDIEvent.Name", "EAkCallbackType::MIDIEvent" },
		{ "MIDIEvent.ToolTip", "Enable notifications for MIDI events. AkCallbackInfo can be cast to AkMIDIEventCallbackInfo." },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "MusicPlayStarted.Name", "EAkCallbackType::MusicPlayStarted" },
		{ "MusicPlayStarted.ToolTip", "Callback triggered when a Play or Seek command has been executed (Seek commands are issued from AK::SoundEngine::SeekOnEvent()). Applies to objects of the Interactive-Music Hierarchy only. AkCallbackInfo can be cast to AkEventCallbackInfo." },
		{ "MusicSyncBar.Name", "EAkCallbackType::MusicSyncBar" },
		{ "MusicSyncBar.ToolTip", "Enable notifications on Music Bar. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "MusicSyncBeat.Name", "EAkCallbackType::MusicSyncBeat" },
		{ "MusicSyncBeat.ToolTip", "Enable notifications on Music Beat. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "MusicSyncEntry.Name", "EAkCallbackType::MusicSyncEntry" },
		{ "MusicSyncEntry.ToolTip", "Enable notifications on Music Entry Cue. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "MusicSyncExit.Name", "EAkCallbackType::MusicSyncExit" },
		{ "MusicSyncExit.ToolTip", "Enable notifications on Music Exit Cue. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "MusicSyncGrid.Name", "EAkCallbackType::MusicSyncGrid" },
		{ "MusicSyncGrid.ToolTip", "Enable notifications on Music Grid. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "MusicSyncPoint.Name", "EAkCallbackType::MusicSyncPoint" },
		{ "MusicSyncPoint.ToolTip", "Enable notifications on Music switch transition synchronization point. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "MusicSyncUserCue.Name", "EAkCallbackType::MusicSyncUserCue" },
		{ "MusicSyncUserCue.ToolTip", "Enable notifications on Music Custom Cue. AkCallbackInfo can be cast to AkMusicSyncCallbackInfo." },
		{ "Starvation.Name", "EAkCallbackType::Starvation" },
		{ "Starvation.ToolTip", "Callback triggered when playback skips a frame due to stream starvation. AkCallbackInfo can be cast to AkEventCallbackInfo." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin - Ak Callback Blueprint classes and structures. Known limitations:\n- AkDynamicSequenceItemCallbackInfo is not exposed because Dynamic sequences are not part of this integration\n- AkSpeakerVolumeMatrixCallbackInfo cannot be exposed to Blueprint because it has to be executed in the audio thread\n- AkMusicPlaylistCallbackInfo cannot be exposed to Blueprint because it has to be executed in the audio thread\n\n=============================================================================/// Type of callback. Used as a bitfield in methods AK::SoundEngine::PostEvent() and AK::SoundEngine::DynamicSequence::Open()." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkCallbackType::EndOfEvent", (int64)EAkCallbackType::EndOfEvent },
		{ "EAkCallbackType::Marker", (int64)EAkCallbackType::Marker },
		{ "EAkCallbackType::Duration", (int64)EAkCallbackType::Duration },
		{ "EAkCallbackType::Starvation", (int64)EAkCallbackType::Starvation },
		{ "EAkCallbackType::MusicPlayStarted", (int64)EAkCallbackType::MusicPlayStarted },
		{ "EAkCallbackType::MusicSyncBeat", (int64)EAkCallbackType::MusicSyncBeat },
		{ "EAkCallbackType::MusicSyncBar", (int64)EAkCallbackType::MusicSyncBar },
		{ "EAkCallbackType::MusicSyncEntry", (int64)EAkCallbackType::MusicSyncEntry },
		{ "EAkCallbackType::MusicSyncExit", (int64)EAkCallbackType::MusicSyncExit },
		{ "EAkCallbackType::MusicSyncGrid", (int64)EAkCallbackType::MusicSyncGrid },
		{ "EAkCallbackType::MusicSyncUserCue", (int64)EAkCallbackType::MusicSyncUserCue },
		{ "EAkCallbackType::MusicSyncPoint", (int64)EAkCallbackType::MusicSyncPoint },
		{ "EAkCallbackType::MIDIEvent", (int64)EAkCallbackType::MIDIEvent },
		{ "EAkCallbackType::Last", (int64)EAkCallbackType::Last },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkCallbackType",
	"EAkCallbackType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkCallbackType;
UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkCallbackType.OuterSingleton)
		{
			ZRIE_EAkCallbackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCallbackType, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkCallbackType"));
		}
		return ZRIE_EAkCallbackType.OuterSingleton;
	}
	if (!ZRIE_EAkCallbackType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkCallbackType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkCallbackType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkCallbackType *************************************************************

// ********** Begin Enum ERTPCValueType ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<ERTPCValueType>()
{
	return Z_Construct_UEnum_AkAudio_ERTPCValueType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Default.Comment", "// Need to set hard-coded 0, or else UHT complains.\n" },
		{ "Default.Name", "ERTPCValueType::Default" },
		{ "Default.ToolTip", "Need to set hard-coded 0, or else UHT complains." },
		{ "GameObject.Comment", "///< The value is the Global RTPC.\n" },
		{ "GameObject.Name", "ERTPCValueType::GameObject" },
		{ "GameObject.ToolTip", "< The value is the Global RTPC." },
		{ "Global.Comment", "///< The value is the Default RTPC.\n" },
		{ "Global.Name", "ERTPCValueType::Global" },
		{ "Global.ToolTip", "< The value is the Default RTPC." },
		{ "Last.Comment", "///< The value is not available for the RTPC specified.\n" },
		{ "Last.Hidden", "" },
		{ "Last.Name", "ERTPCValueType::Last" },
		{ "Last.ToolTip", "< The value is not available for the RTPC specified." },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "PlayingID.Comment", "///< The value is the game object specific RTPC.\n" },
		{ "PlayingID.Name", "ERTPCValueType::PlayingID" },
		{ "PlayingID.ToolTip", "< The value is the game object specific RTPC." },
		{ "Unavailable.Comment", "///< The value is the playing ID specific RTPC.\n" },
		{ "Unavailable.Name", "ERTPCValueType::Unavailable" },
		{ "Unavailable.ToolTip", "< The value is the playing ID specific RTPC." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTPCValueType::Default", (int64)ERTPCValueType::Default },
		{ "ERTPCValueType::Global", (int64)ERTPCValueType::Global },
		{ "ERTPCValueType::GameObject", (int64)ERTPCValueType::GameObject },
		{ "ERTPCValueType::PlayingID", (int64)ERTPCValueType::PlayingID },
		{ "ERTPCValueType::Unavailable", (int64)ERTPCValueType::Unavailable },
		{ "ERTPCValueType::Last", (int64)ERTPCValueType::Last },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"ERTPCValueType",
	"ERTPCValueType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERTPCValueType;
UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERTPCValueType.OuterSingleton)
		{
			ZRIE_ERTPCValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_ERTPCValueType, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("ERTPCValueType"));
		}
		return ZRIE_ERTPCValueType.OuterSingleton;
	}
	if (!ZRIE_ERTPCValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERTPCValueType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERTPCValueType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERTPCValueType **************************************************************

// ********** Begin Class UAkCallbackInfo **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkCallbackInfo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Callback information structure used as base for all notifications handled by \\ref AkCallbackFunc.\n/// \\sa \n/// - AK::SoundEngine::PostEvent()\n/// - \\ref soundengine_events\n" },
#endif
		{ "IncludePath", "AkGameplayTypes.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback information structure used as base for all notifications handled by \\ref AkCallbackFunc.\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkCallbackInfo constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkCallbackInfo constinit property declarations ****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkCallbackInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkCallbackInfo Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkCallbackInfo, AkComponent), Z_Construct_UClass_UAkComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AkComponent_MetaData), NewProp_AkComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkCallbackInfo Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkCallbackInfo,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkCallbackInfo;
UClass* Z_Construct_UClass_UAkCallbackInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkCallbackInfo;
		if (!Z_Registration_Info_UClass_UAkCallbackInfo.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkCallbackInfo"),
				Z_Registration_Info_UClass_UAkCallbackInfo.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAkCallbackInfo.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkCallbackInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkCallbackInfo.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkCallbackInfo.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkCallbackInfo);
UAkCallbackInfo::~UAkCallbackInfo() {}
// ********** End Class UAkCallbackInfo ************************************************************

// ********** Begin ScriptStruct FAkChannelMask ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkChannelMask_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkChannelMask>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkChannelMask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.AkSpeakerConfiguration" },
		{ "Category", "Channel Mask" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkChannelMask constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkChannelMask constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkChannelMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkChannelMask Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ChannelMask = { "ChannelMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FAkChannelMask, ChannelMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelMask_MetaData), NewProp_ChannelMask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChannelMask,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkChannelMask Property Definitions *********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkChannelMask",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkChannelMask>(),
	alignof(FAkChannelMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkChannelMask;
UScriptStruct* Z_Construct_UScriptStruct_FAkChannelMask(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkChannelMask.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkChannelMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkChannelMask, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkChannelMask"));
		}
		return Z_Registration_Info_UScriptStruct_FAkChannelMask.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkChannelMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkChannelMask.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkChannelMask.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkChannelMask ******************************************************

// ********** Begin ScriptStruct FAkOutputSettings *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkOutputSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkOutputSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkOutputSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareSet_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdDevice_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanRule_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "DisplayName", "PanningRule" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelConfig_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkOutputSettings constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioDeviceShareSet;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_IdDevice;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PanRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PanRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkOutputSettings constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkOutputSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkOutputSettings Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AudioDeviceShareSet = { "AudioDeviceShareSet", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FAkOutputSettings, AudioDeviceShareSet), Z_Construct_UClass_UAkAudioDeviceShareSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioDeviceShareSet_MetaData), NewProp_AudioDeviceShareSet_MetaData) };
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_IdDevice = { "IdDevice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(FAkOutputSettings, IdDevice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdDevice_MetaData), NewProp_IdDevice_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PanRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PanRule = { "PanRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAkOutputSettings, PanRule), Z_Construct_UEnum_AkAudio_PanningRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanRule_MetaData), NewProp_PanRule_MetaData) }; // 22bdd3afeae9e2c13cb749cbbe3983e15f602588
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ChannelConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ChannelConfig = { "ChannelConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAkOutputSettings, ChannelConfig), Z_Construct_UEnum_AkAudio_AkChannelConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelConfig_MetaData), NewProp_ChannelConfig_MetaData) }; // d371a70396260dc6799b413ab2087893f74ea43e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioDeviceShareSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IdDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PanRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PanRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChannelConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChannelConfig,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkOutputSettings Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkOutputSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkOutputSettings>(),
	alignof(FAkOutputSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkOutputSettings;
UScriptStruct* Z_Construct_UScriptStruct_FAkOutputSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkOutputSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkOutputSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkOutputSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkOutputSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FAkOutputSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkOutputSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkOutputSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkOutputSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkOutputSettings ***************************************************

// ********** Begin Class UAkEventCallbackInfo *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkEventCallbackInfo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Callback information structure corresponding to \\ref AK_EndOfEvent, \\ref AK_MusicPlayStarted and \\ref AK_Starvation.\n/// \\sa \n/// - AK::SoundEngine::PostEvent()\n/// - \\ref soundengine_events\n" },
#endif
		{ "IncludePath", "AkGameplayTypes.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback information structure corresponding to \\ref AK_EndOfEvent, \\ref AK_MusicPlayStarted and \\ref AK_Starvation.\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayingID_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|AkEvent" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventID_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|AkEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Playing ID of Event, returned by PostEvent()\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Playing ID of Event, returned by PostEvent()" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAkEventCallbackInfo constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EventID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkEventCallbackInfo constinit property declarations ***********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkEventCallbackInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkEventCallbackInfo Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAkEventCallbackInfo, PlayingID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayingID_MetaData), NewProp_PlayingID_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAkEventCallbackInfo, EventID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventID_MetaData), NewProp_EventID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkEventCallbackInfo Property Definitions **********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkCallbackInfo,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkEventCallbackInfo,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkEventCallbackInfo;
UClass* Z_Construct_UClass_UAkEventCallbackInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkEventCallbackInfo;
		if (!Z_Registration_Info_UClass_UAkEventCallbackInfo.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkEventCallbackInfo"),
				Z_Registration_Info_UClass_UAkEventCallbackInfo.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAkEventCallbackInfo.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkEventCallbackInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkEventCallbackInfo.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkEventCallbackInfo.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkEventCallbackInfo);
UAkEventCallbackInfo::~UAkEventCallbackInfo() {}
// ********** End Class UAkEventCallbackInfo *******************************************************

// ********** Begin Enum EAkMidiEventType **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkMidiEventType_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkMidiEventType>()
{
	return Z_Construct_UEnum_AkAudio_EAkMidiEventType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AkMidiEventTypeChannelAftertouch.Name", "EAkMidiEventType::AkMidiEventTypeChannelAftertouch" },
		{ "AkMidiEventTypeController.Name", "EAkMidiEventType::AkMidiEventTypeController" },
		{ "AkMidiEventTypeEscape.Name", "EAkMidiEventType::AkMidiEventTypeEscape" },
		{ "AkMidiEventTypeInvalid.Comment", "// Need to set hard-coded 0, or else UHT complains.\n" },
		{ "AkMidiEventTypeInvalid.Name", "EAkMidiEventType::AkMidiEventTypeInvalid" },
		{ "AkMidiEventTypeInvalid.ToolTip", "Need to set hard-coded 0, or else UHT complains." },
		{ "AkMidiEventTypeMeta.Name", "EAkMidiEventType::AkMidiEventTypeMeta" },
		{ "AkMidiEventTypeNoteAftertouch.Name", "EAkMidiEventType::AkMidiEventTypeNoteAftertouch" },
		{ "AkMidiEventTypeNoteOff.Name", "EAkMidiEventType::AkMidiEventTypeNoteOff" },
		{ "AkMidiEventTypeNoteOn.Name", "EAkMidiEventType::AkMidiEventTypeNoteOn" },
		{ "AkMidiEventTypePitchBend.Name", "EAkMidiEventType::AkMidiEventTypePitchBend" },
		{ "AkMidiEventTypeProgramChange.Name", "EAkMidiEventType::AkMidiEventTypeProgramChange" },
		{ "AkMidiEventTypeSysex.Name", "EAkMidiEventType::AkMidiEventTypeSysex" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkMidiEventType::AkMidiEventTypeInvalid", (int64)EAkMidiEventType::AkMidiEventTypeInvalid },
		{ "EAkMidiEventType::AkMidiEventTypeNoteOff", (int64)EAkMidiEventType::AkMidiEventTypeNoteOff },
		{ "EAkMidiEventType::AkMidiEventTypeNoteOn", (int64)EAkMidiEventType::AkMidiEventTypeNoteOn },
		{ "EAkMidiEventType::AkMidiEventTypeNoteAftertouch", (int64)EAkMidiEventType::AkMidiEventTypeNoteAftertouch },
		{ "EAkMidiEventType::AkMidiEventTypeController", (int64)EAkMidiEventType::AkMidiEventTypeController },
		{ "EAkMidiEventType::AkMidiEventTypeProgramChange", (int64)EAkMidiEventType::AkMidiEventTypeProgramChange },
		{ "EAkMidiEventType::AkMidiEventTypeChannelAftertouch", (int64)EAkMidiEventType::AkMidiEventTypeChannelAftertouch },
		{ "EAkMidiEventType::AkMidiEventTypePitchBend", (int64)EAkMidiEventType::AkMidiEventTypePitchBend },
		{ "EAkMidiEventType::AkMidiEventTypeSysex", (int64)EAkMidiEventType::AkMidiEventTypeSysex },
		{ "EAkMidiEventType::AkMidiEventTypeEscape", (int64)EAkMidiEventType::AkMidiEventTypeEscape },
		{ "EAkMidiEventType::AkMidiEventTypeMeta", (int64)EAkMidiEventType::AkMidiEventTypeMeta },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkMidiEventType",
	"EAkMidiEventType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkMidiEventType;
UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkMidiEventType.OuterSingleton)
		{
			ZRIE_EAkMidiEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkMidiEventType, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkMidiEventType"));
		}
		return ZRIE_EAkMidiEventType.OuterSingleton;
	}
	if (!ZRIE_EAkMidiEventType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkMidiEventType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkMidiEventType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkMidiEventType ************************************************************

// ********** Begin Enum EAkMidiCcValues ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkMidiCcValues>()
{
	return Z_Construct_UEnum_AkAudio_EAkMidiCcValues(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AkMidiCcAllControllersOff.Name", "EAkMidiCcValues::AkMidiCcAllControllersOff" },
		{ "AkMidiCcAllNotesOff.Name", "EAkMidiCcValues::AkMidiCcAllNotesOff" },
		{ "AkMidiCcAllSoundOff.Name", "EAkMidiCcValues::AkMidiCcAllSoundOff" },
		{ "AkMidiCcBalanceCoarse.Name", "EAkMidiCcValues::AkMidiCcBalanceCoarse" },
		{ "AkMidiCcBalanceFine.Name", "EAkMidiCcValues::AkMidiCcBalanceFine" },
		{ "AkMidiCcBankSelectCoarse.Comment", "// Need to set hard-coded 0, or else UHT complains.\n" },
		{ "AkMidiCcBankSelectCoarse.Name", "EAkMidiCcValues::AkMidiCcBankSelectCoarse" },
		{ "AkMidiCcBankSelectCoarse.ToolTip", "Need to set hard-coded 0, or else UHT complains." },
		{ "AkMidiCcBankSelectFine.Name", "EAkMidiCcValues::AkMidiCcBankSelectFine" },
		{ "AkMidiCcBreathCtrlCoarse.Name", "EAkMidiCcValues::AkMidiCcBreathCtrlCoarse" },
		{ "AkMidiCcBreathCtrlFine.Name", "EAkMidiCcValues::AkMidiCcBreathCtrlFine" },
		{ "AkMidiCcCelesteLevel.Name", "EAkMidiCcValues::AkMidiCcCelesteLevel" },
		{ "AkMidiCcChorusLevel.Name", "EAkMidiCcValues::AkMidiCcChorusLevel" },
		{ "AkMidiCcCtrl14Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl14Coarse" },
		{ "AkMidiCcCtrl14Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl14Fine" },
		{ "AkMidiCcCtrl15Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl15Coarse" },
		{ "AkMidiCcCtrl15Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl15Fine" },
		{ "AkMidiCcCtrl20Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl20Coarse" },
		{ "AkMidiCcCtrl20Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl20Fine" },
		{ "AkMidiCcCtrl21Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl21Coarse" },
		{ "AkMidiCcCtrl21Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl21Fine" },
		{ "AkMidiCcCtrl22Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl22Coarse" },
		{ "AkMidiCcCtrl22Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl22Fine" },
		{ "AkMidiCcCtrl23Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl23Coarse" },
		{ "AkMidiCcCtrl23Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl23Fine" },
		{ "AkMidiCcCtrl24Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl24Coarse" },
		{ "AkMidiCcCtrl24Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl24Fine" },
		{ "AkMidiCcCtrl25Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl25Coarse" },
		{ "AkMidiCcCtrl25Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl25Fine" },
		{ "AkMidiCcCtrl26Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl26Coarse" },
		{ "AkMidiCcCtrl26Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl26Fine" },
		{ "AkMidiCcCtrl27Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl27Coarse" },
		{ "AkMidiCcCtrl27Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl27Fine" },
		{ "AkMidiCcCtrl28Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl28Coarse" },
		{ "AkMidiCcCtrl28Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl28Fine" },
		{ "AkMidiCcCtrl29Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl29Coarse" },
		{ "AkMidiCcCtrl29Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl29Fine" },
		{ "AkMidiCcCtrl30Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl30Coarse" },
		{ "AkMidiCcCtrl30Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl30Fine" },
		{ "AkMidiCcCtrl31Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl31Coarse" },
		{ "AkMidiCcCtrl31Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl31Fine" },
		{ "AkMidiCcCtrl3Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl3Coarse" },
		{ "AkMidiCcCtrl3Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl3Fine" },
		{ "AkMidiCcCtrl9Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl9Coarse" },
		{ "AkMidiCcCtrl9Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl9Fine" },
		{ "AkMidiCcDataButtonM1.Name", "EAkMidiCcValues::AkMidiCcDataButtonM1" },
		{ "AkMidiCcDataButtonP1.Name", "EAkMidiCcValues::AkMidiCcDataButtonP1" },
		{ "AkMidiCcDataEntryCoarse.Name", "EAkMidiCcValues::AkMidiCcDataEntryCoarse" },
		{ "AkMidiCcDataEntryFine.Name", "EAkMidiCcValues::AkMidiCcDataEntryFine" },
		{ "AkMidiCcEffectCtrl1Coarse.Name", "EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse" },
		{ "AkMidiCcEffectCtrl1Fine.Name", "EAkMidiCcValues::AkMidiCcEffectCtrl1Fine" },
		{ "AkMidiCcEffectCtrl2Coarse.Name", "EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse" },
		{ "AkMidiCcEffectCtrl2Fine.Name", "EAkMidiCcValues::AkMidiCcEffectCtrl2Fine" },
		{ "AkMidiCcExpressionCoarse.Name", "EAkMidiCcValues::AkMidiCcExpressionCoarse" },
		{ "AkMidiCcExpressionFine.Name", "EAkMidiCcValues::AkMidiCcExpressionFine" },
		{ "AkMidiCcFootPedalCoarse.Name", "EAkMidiCcValues::AkMidiCcFootPedalCoarse" },
		{ "AkMidiCcFootPedalFine.Name", "EAkMidiCcValues::AkMidiCcFootPedalFine" },
		{ "AkMidiCcGeneralButton1.Name", "EAkMidiCcValues::AkMidiCcGeneralButton1" },
		{ "AkMidiCcGeneralButton2.Name", "EAkMidiCcValues::AkMidiCcGeneralButton2" },
		{ "AkMidiCcGeneralButton3.Name", "EAkMidiCcValues::AkMidiCcGeneralButton3" },
		{ "AkMidiCcGeneralButton4.Name", "EAkMidiCcValues::AkMidiCcGeneralButton4" },
		{ "AkMidiCcGenSlider1.Name", "EAkMidiCcValues::AkMidiCcGenSlider1" },
		{ "AkMidiCcGenSlider2.Name", "EAkMidiCcValues::AkMidiCcGenSlider2" },
		{ "AkMidiCcGenSlider3.Name", "EAkMidiCcValues::AkMidiCcGenSlider3" },
		{ "AkMidiCcGenSlider4.Name", "EAkMidiCcValues::AkMidiCcGenSlider4" },
		{ "AkMidiCcHoldPedal.Name", "EAkMidiCcValues::AkMidiCcHoldPedal" },
		{ "AkMidiCcHoldPedal2.Name", "EAkMidiCcValues::AkMidiCcHoldPedal2" },
		{ "AkMidiCcLegatoPedal.Name", "EAkMidiCcValues::AkMidiCcLegatoPedal" },
		{ "AkMidiCcLocalKeyboard.Name", "EAkMidiCcValues::AkMidiCcLocalKeyboard" },
		{ "AkMidiCcModWheelCoarse.Name", "EAkMidiCcValues::AkMidiCcModWheelCoarse" },
		{ "AkMidiCcModWheelFine.Name", "EAkMidiCcValues::AkMidiCcModWheelFine" },
		{ "AkMidiCcNonRegisterCoarse.Name", "EAkMidiCcValues::AkMidiCcNonRegisterCoarse" },
		{ "AkMidiCcNonRegisterFine.Name", "EAkMidiCcValues::AkMidiCcNonRegisterFine" },
		{ "AkMidiCcOmniModeOff.Name", "EAkMidiCcValues::AkMidiCcOmniModeOff" },
		{ "AkMidiCcOmniModeOn.Name", "EAkMidiCcValues::AkMidiCcOmniModeOn" },
		{ "AkMidiCcOmniMonophonicOn.Name", "EAkMidiCcValues::AkMidiCcOmniMonophonicOn" },
		{ "AkMidiCcOmniPolyphonicOn.Name", "EAkMidiCcValues::AkMidiCcOmniPolyphonicOn" },
		{ "AkMidiCcPanPositionCoarse.Name", "EAkMidiCcValues::AkMidiCcPanPositionCoarse" },
		{ "AkMidiCcPanPositionFine.Name", "EAkMidiCcValues::AkMidiCcPanPositionFine" },
		{ "AkMidiCcPhaserLevel.Name", "EAkMidiCcValues::AkMidiCcPhaserLevel" },
		{ "AkMidiCcPortamentoCoarse.Name", "EAkMidiCcValues::AkMidiCcPortamentoCoarse" },
		{ "AkMidiCcPortamentoFine.Name", "EAkMidiCcValues::AkMidiCcPortamentoFine" },
		{ "AkMidiCcPortamentoOnOff.Name", "EAkMidiCcValues::AkMidiCcPortamentoOnOff" },
		{ "AkMidiCcReverbLevel.Name", "EAkMidiCcValues::AkMidiCcReverbLevel" },
		{ "AkMidiCcSoftPedal.Name", "EAkMidiCcValues::AkMidiCcSoftPedal" },
		{ "AkMidiCcSoundAttackTime.Name", "EAkMidiCcValues::AkMidiCcSoundAttackTime" },
		{ "AkMidiCcSoundBrightness.Name", "EAkMidiCcValues::AkMidiCcSoundBrightness" },
		{ "AkMidiCcSoundCtrl10.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl10" },
		{ "AkMidiCcSoundCtrl6.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl6" },
		{ "AkMidiCcSoundCtrl7.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl7" },
		{ "AkMidiCcSoundCtrl8.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl8" },
		{ "AkMidiCcSoundCtrl9.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl9" },
		{ "AkMidiCcSoundReleaseTime.Name", "EAkMidiCcValues::AkMidiCcSoundReleaseTime" },
		{ "AkMidiCcSoundTimbre.Name", "EAkMidiCcValues::AkMidiCcSoundTimbre" },
		{ "AkMidiCcSoundVariation.Name", "EAkMidiCcValues::AkMidiCcSoundVariation" },
		{ "AkMidiCcSustenutoPedal.Name", "EAkMidiCcValues::AkMidiCcSustenutoPedal" },
		{ "AkMidiCcTremoloLevel.Name", "EAkMidiCcValues::AkMidiCcTremoloLevel" },
		{ "AkMidiCcVolumeCoarse.Name", "EAkMidiCcValues::AkMidiCcVolumeCoarse" },
		{ "AkMidiCcVolumeFine.Name", "EAkMidiCcValues::AkMidiCcVolumeFine" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkMidiCcValues::AkMidiCcBankSelectCoarse", (int64)EAkMidiCcValues::AkMidiCcBankSelectCoarse },
		{ "EAkMidiCcValues::AkMidiCcModWheelCoarse", (int64)EAkMidiCcValues::AkMidiCcModWheelCoarse },
		{ "EAkMidiCcValues::AkMidiCcBreathCtrlCoarse", (int64)EAkMidiCcValues::AkMidiCcBreathCtrlCoarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl3Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl3Coarse },
		{ "EAkMidiCcValues::AkMidiCcFootPedalCoarse", (int64)EAkMidiCcValues::AkMidiCcFootPedalCoarse },
		{ "EAkMidiCcValues::AkMidiCcPortamentoCoarse", (int64)EAkMidiCcValues::AkMidiCcPortamentoCoarse },
		{ "EAkMidiCcValues::AkMidiCcDataEntryCoarse", (int64)EAkMidiCcValues::AkMidiCcDataEntryCoarse },
		{ "EAkMidiCcValues::AkMidiCcVolumeCoarse", (int64)EAkMidiCcValues::AkMidiCcVolumeCoarse },
		{ "EAkMidiCcValues::AkMidiCcBalanceCoarse", (int64)EAkMidiCcValues::AkMidiCcBalanceCoarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl9Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl9Coarse },
		{ "EAkMidiCcValues::AkMidiCcPanPositionCoarse", (int64)EAkMidiCcValues::AkMidiCcPanPositionCoarse },
		{ "EAkMidiCcValues::AkMidiCcExpressionCoarse", (int64)EAkMidiCcValues::AkMidiCcExpressionCoarse },
		{ "EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse },
		{ "EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl14Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl14Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl15Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl15Coarse },
		{ "EAkMidiCcValues::AkMidiCcGenSlider1", (int64)EAkMidiCcValues::AkMidiCcGenSlider1 },
		{ "EAkMidiCcValues::AkMidiCcGenSlider2", (int64)EAkMidiCcValues::AkMidiCcGenSlider2 },
		{ "EAkMidiCcValues::AkMidiCcGenSlider3", (int64)EAkMidiCcValues::AkMidiCcGenSlider3 },
		{ "EAkMidiCcValues::AkMidiCcGenSlider4", (int64)EAkMidiCcValues::AkMidiCcGenSlider4 },
		{ "EAkMidiCcValues::AkMidiCcCtrl20Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl20Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl21Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl21Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl22Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl22Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl23Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl23Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl24Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl24Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl25Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl25Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl26Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl26Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl27Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl27Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl28Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl28Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl29Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl29Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl30Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl30Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl31Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl31Coarse },
		{ "EAkMidiCcValues::AkMidiCcBankSelectFine", (int64)EAkMidiCcValues::AkMidiCcBankSelectFine },
		{ "EAkMidiCcValues::AkMidiCcModWheelFine", (int64)EAkMidiCcValues::AkMidiCcModWheelFine },
		{ "EAkMidiCcValues::AkMidiCcBreathCtrlFine", (int64)EAkMidiCcValues::AkMidiCcBreathCtrlFine },
		{ "EAkMidiCcValues::AkMidiCcCtrl3Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl3Fine },
		{ "EAkMidiCcValues::AkMidiCcFootPedalFine", (int64)EAkMidiCcValues::AkMidiCcFootPedalFine },
		{ "EAkMidiCcValues::AkMidiCcPortamentoFine", (int64)EAkMidiCcValues::AkMidiCcPortamentoFine },
		{ "EAkMidiCcValues::AkMidiCcDataEntryFine", (int64)EAkMidiCcValues::AkMidiCcDataEntryFine },
		{ "EAkMidiCcValues::AkMidiCcVolumeFine", (int64)EAkMidiCcValues::AkMidiCcVolumeFine },
		{ "EAkMidiCcValues::AkMidiCcBalanceFine", (int64)EAkMidiCcValues::AkMidiCcBalanceFine },
		{ "EAkMidiCcValues::AkMidiCcCtrl9Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl9Fine },
		{ "EAkMidiCcValues::AkMidiCcPanPositionFine", (int64)EAkMidiCcValues::AkMidiCcPanPositionFine },
		{ "EAkMidiCcValues::AkMidiCcExpressionFine", (int64)EAkMidiCcValues::AkMidiCcExpressionFine },
		{ "EAkMidiCcValues::AkMidiCcEffectCtrl1Fine", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl1Fine },
		{ "EAkMidiCcValues::AkMidiCcEffectCtrl2Fine", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl2Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl14Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl14Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl15Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl15Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl20Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl20Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl21Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl21Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl22Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl22Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl23Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl23Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl24Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl24Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl25Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl25Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl26Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl26Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl27Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl27Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl28Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl28Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl29Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl29Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl30Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl30Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl31Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl31Fine },
		{ "EAkMidiCcValues::AkMidiCcHoldPedal", (int64)EAkMidiCcValues::AkMidiCcHoldPedal },
		{ "EAkMidiCcValues::AkMidiCcPortamentoOnOff", (int64)EAkMidiCcValues::AkMidiCcPortamentoOnOff },
		{ "EAkMidiCcValues::AkMidiCcSustenutoPedal", (int64)EAkMidiCcValues::AkMidiCcSustenutoPedal },
		{ "EAkMidiCcValues::AkMidiCcSoftPedal", (int64)EAkMidiCcValues::AkMidiCcSoftPedal },
		{ "EAkMidiCcValues::AkMidiCcLegatoPedal", (int64)EAkMidiCcValues::AkMidiCcLegatoPedal },
		{ "EAkMidiCcValues::AkMidiCcHoldPedal2", (int64)EAkMidiCcValues::AkMidiCcHoldPedal2 },
		{ "EAkMidiCcValues::AkMidiCcSoundVariation", (int64)EAkMidiCcValues::AkMidiCcSoundVariation },
		{ "EAkMidiCcValues::AkMidiCcSoundTimbre", (int64)EAkMidiCcValues::AkMidiCcSoundTimbre },
		{ "EAkMidiCcValues::AkMidiCcSoundReleaseTime", (int64)EAkMidiCcValues::AkMidiCcSoundReleaseTime },
		{ "EAkMidiCcValues::AkMidiCcSoundAttackTime", (int64)EAkMidiCcValues::AkMidiCcSoundAttackTime },
		{ "EAkMidiCcValues::AkMidiCcSoundBrightness", (int64)EAkMidiCcValues::AkMidiCcSoundBrightness },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl6", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl6 },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl7", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl7 },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl8", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl8 },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl9", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl9 },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl10", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl10 },
		{ "EAkMidiCcValues::AkMidiCcGeneralButton1", (int64)EAkMidiCcValues::AkMidiCcGeneralButton1 },
		{ "EAkMidiCcValues::AkMidiCcGeneralButton2", (int64)EAkMidiCcValues::AkMidiCcGeneralButton2 },
		{ "EAkMidiCcValues::AkMidiCcGeneralButton3", (int64)EAkMidiCcValues::AkMidiCcGeneralButton3 },
		{ "EAkMidiCcValues::AkMidiCcGeneralButton4", (int64)EAkMidiCcValues::AkMidiCcGeneralButton4 },
		{ "EAkMidiCcValues::AkMidiCcReverbLevel", (int64)EAkMidiCcValues::AkMidiCcReverbLevel },
		{ "EAkMidiCcValues::AkMidiCcTremoloLevel", (int64)EAkMidiCcValues::AkMidiCcTremoloLevel },
		{ "EAkMidiCcValues::AkMidiCcChorusLevel", (int64)EAkMidiCcValues::AkMidiCcChorusLevel },
		{ "EAkMidiCcValues::AkMidiCcCelesteLevel", (int64)EAkMidiCcValues::AkMidiCcCelesteLevel },
		{ "EAkMidiCcValues::AkMidiCcPhaserLevel", (int64)EAkMidiCcValues::AkMidiCcPhaserLevel },
		{ "EAkMidiCcValues::AkMidiCcDataButtonP1", (int64)EAkMidiCcValues::AkMidiCcDataButtonP1 },
		{ "EAkMidiCcValues::AkMidiCcDataButtonM1", (int64)EAkMidiCcValues::AkMidiCcDataButtonM1 },
		{ "EAkMidiCcValues::AkMidiCcNonRegisterCoarse", (int64)EAkMidiCcValues::AkMidiCcNonRegisterCoarse },
		{ "EAkMidiCcValues::AkMidiCcNonRegisterFine", (int64)EAkMidiCcValues::AkMidiCcNonRegisterFine },
		{ "EAkMidiCcValues::AkMidiCcAllSoundOff", (int64)EAkMidiCcValues::AkMidiCcAllSoundOff },
		{ "EAkMidiCcValues::AkMidiCcAllControllersOff", (int64)EAkMidiCcValues::AkMidiCcAllControllersOff },
		{ "EAkMidiCcValues::AkMidiCcLocalKeyboard", (int64)EAkMidiCcValues::AkMidiCcLocalKeyboard },
		{ "EAkMidiCcValues::AkMidiCcAllNotesOff", (int64)EAkMidiCcValues::AkMidiCcAllNotesOff },
		{ "EAkMidiCcValues::AkMidiCcOmniModeOff", (int64)EAkMidiCcValues::AkMidiCcOmniModeOff },
		{ "EAkMidiCcValues::AkMidiCcOmniModeOn", (int64)EAkMidiCcValues::AkMidiCcOmniModeOn },
		{ "EAkMidiCcValues::AkMidiCcOmniMonophonicOn", (int64)EAkMidiCcValues::AkMidiCcOmniMonophonicOn },
		{ "EAkMidiCcValues::AkMidiCcOmniPolyphonicOn", (int64)EAkMidiCcValues::AkMidiCcOmniPolyphonicOn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkMidiCcValues",
	"EAkMidiCcValues",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkMidiCcValues;
UEnum* Z_Construct_UEnum_AkAudio_EAkMidiCcValues(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkMidiCcValues.OuterSingleton)
		{
			ZRIE_EAkMidiCcValues.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkMidiCcValues, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkMidiCcValues"));
		}
		return ZRIE_EAkMidiCcValues.OuterSingleton;
	}
	if (!ZRIE_EAkMidiCcValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkMidiCcValues.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkMidiCcValues.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkMidiCcValues *************************************************************

// ********** Begin ScriptStruct FAkMidiEventBase **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkMidiEventBase_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkMidiEventBase>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkMidiEventBase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chan_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkMidiEventBase constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Chan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkMidiEventBase constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiEventBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkMidiEventBase Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiEventBase, Type), Z_Construct_UEnum_AkAudio_EAkMidiEventType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // cde95b4ce78c33ba2dc7a1fce5069ec0d29fd5e3
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Chan = { "Chan", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiEventBase, Chan), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chan_MetaData), NewProp_Chan_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Chan,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkMidiEventBase Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkMidiEventBase",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkMidiEventBase>(),
	alignof(FAkMidiEventBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkMidiEventBase;
UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkMidiEventBase.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkMidiEventBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiEventBase, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkMidiEventBase"));
		}
		return Z_Registration_Info_UScriptStruct_FAkMidiEventBase.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkMidiEventBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkMidiEventBase.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkMidiEventBase.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkMidiEventBase ****************************************************

// ********** Begin ScriptStruct FAkMidiGeneric ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkMidiGeneric_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkMidiGeneric>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkMidiGeneric); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|Generic" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Param2_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|Generic" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkMidiGeneric constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Param1;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Param2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkMidiGeneric constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiGeneric>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkMidiGeneric>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiGeneric cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

// ********** Begin ScriptStruct FAkMidiGeneric Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiGeneric, Param1), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Param1_MetaData), NewProp_Param1_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiGeneric, Param2), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Param2_MetaData), NewProp_Param2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Param1,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Param2,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkMidiGeneric Property Definitions *********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkMidiEventBase,
	&NewStructOps,
	"AkMidiGeneric",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkMidiGeneric>(),
	alignof(FAkMidiGeneric),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkMidiGeneric;
UScriptStruct* Z_Construct_UScriptStruct_FAkMidiGeneric(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkMidiGeneric.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkMidiGeneric.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiGeneric, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkMidiGeneric"));
		}
		return Z_Registration_Info_UScriptStruct_FAkMidiGeneric.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkMidiGeneric.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkMidiGeneric.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkMidiGeneric.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkMidiGeneric ******************************************************

// ********** Begin ScriptStruct FAkMidiNoteOnOff **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkMidiNoteOnOff>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkMidiNoteOnOff); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|NoteOnOff" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|NoteOnOff" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkMidiNoteOnOff constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Note;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkMidiNoteOnOff constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiNoteOnOff>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkMidiNoteOnOff>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiNoteOnOff cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

// ********** Begin ScriptStruct FAkMidiNoteOnOff Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiNoteOnOff, Note), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Note_MetaData), NewProp_Note_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiNoteOnOff, Velocity), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Note,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Velocity,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkMidiNoteOnOff Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkMidiEventBase,
	&NewStructOps,
	"AkMidiNoteOnOff",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkMidiNoteOnOff>(),
	alignof(FAkMidiNoteOnOff),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkMidiNoteOnOff;
UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteOnOff(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkMidiNoteOnOff.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkMidiNoteOnOff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiNoteOnOff, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkMidiNoteOnOff"));
		}
		return Z_Registration_Info_UScriptStruct_FAkMidiNoteOnOff.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkMidiNoteOnOff.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkMidiNoteOnOff.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkMidiNoteOnOff.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkMidiNoteOnOff ****************************************************

// ********** Begin ScriptStruct FAkMidiCc *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkMidiCc_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkMidiCc>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkMidiCc); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cc_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|CC" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|CC" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkMidiCc constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Cc_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Cc;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkMidiCc constinit property declarations ***************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiCc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkMidiCc>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiCc cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

// ********** Begin ScriptStruct FAkMidiCc Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Cc_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Cc = { "Cc", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiCc, Cc), Z_Construct_UEnum_AkAudio_EAkMidiCcValues, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cc_MetaData), NewProp_Cc_MetaData) }; // bf3d52ba1c27345f47041fff936b86b77d72ec26
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiCc, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Cc_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Cc,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkMidiCc Property Definitions **************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkMidiEventBase,
	&NewStructOps,
	"AkMidiCc",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkMidiCc>(),
	alignof(FAkMidiCc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkMidiCc;
UScriptStruct* Z_Construct_UScriptStruct_FAkMidiCc(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkMidiCc.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkMidiCc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiCc, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkMidiCc"));
		}
		return Z_Registration_Info_UScriptStruct_FAkMidiCc.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkMidiCc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkMidiCc.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkMidiCc.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkMidiCc ***********************************************************

// ********** Begin ScriptStruct FAkMidiPitchBend **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkMidiPitchBend>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkMidiPitchBend); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueLsb_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|PitchBend" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueMsb_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|PitchBend" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullValue_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|PitchBend" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkMidiPitchBend constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueLsb;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueMsb;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FullValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkMidiPitchBend constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiPitchBend>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkMidiPitchBend>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiPitchBend cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

// ********** Begin ScriptStruct FAkMidiPitchBend Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ValueLsb = { "ValueLsb", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiPitchBend, ValueLsb), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueLsb_MetaData), NewProp_ValueLsb_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ValueMsb = { "ValueMsb", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiPitchBend, ValueMsb), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueMsb_MetaData), NewProp_ValueMsb_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FullValue = { "FullValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiPitchBend, FullValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullValue_MetaData), NewProp_FullValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValueLsb,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValueMsb,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FullValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkMidiPitchBend Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkMidiEventBase,
	&NewStructOps,
	"AkMidiPitchBend",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkMidiPitchBend>(),
	alignof(FAkMidiPitchBend),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkMidiPitchBend;
UScriptStruct* Z_Construct_UScriptStruct_FAkMidiPitchBend(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkMidiPitchBend.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkMidiPitchBend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiPitchBend, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkMidiPitchBend"));
		}
		return Z_Registration_Info_UScriptStruct_FAkMidiPitchBend.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkMidiPitchBend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkMidiPitchBend.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkMidiPitchBend.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkMidiPitchBend ****************************************************

// ********** Begin ScriptStruct FAkMidiNoteAftertouch *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkMidiNoteAftertouch>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkMidiNoteAftertouch); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|NoteAfterTouch" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|NoteAfterTouch" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkMidiNoteAftertouch constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Note;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkMidiNoteAftertouch constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiNoteAftertouch>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkMidiNoteAftertouch>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiNoteAftertouch cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

// ********** Begin ScriptStruct FAkMidiNoteAftertouch Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiNoteAftertouch, Note), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Note_MetaData), NewProp_Note_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiNoteAftertouch, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Note,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkMidiNoteAftertouch Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkMidiEventBase,
	&NewStructOps,
	"AkMidiNoteAftertouch",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkMidiNoteAftertouch>(),
	alignof(FAkMidiNoteAftertouch),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkMidiNoteAftertouch;
UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkMidiNoteAftertouch.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkMidiNoteAftertouch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkMidiNoteAftertouch"));
		}
		return Z_Registration_Info_UScriptStruct_FAkMidiNoteAftertouch.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkMidiNoteAftertouch.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkMidiNoteAftertouch.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkMidiNoteAftertouch.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkMidiNoteAftertouch ***********************************************

// ********** Begin ScriptStruct FAkMidiChannelAftertouch ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkMidiChannelAftertouch>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkMidiChannelAftertouch); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|ChannelAfterTouch" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkMidiChannelAftertouch constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkMidiChannelAftertouch constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiChannelAftertouch>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkMidiChannelAftertouch>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiChannelAftertouch cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

// ********** Begin ScriptStruct FAkMidiChannelAftertouch Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiChannelAftertouch, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkMidiChannelAftertouch Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkMidiEventBase,
	&NewStructOps,
	"AkMidiChannelAftertouch",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkMidiChannelAftertouch>(),
	alignof(FAkMidiChannelAftertouch),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkMidiChannelAftertouch;
UScriptStruct* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkMidiChannelAftertouch.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkMidiChannelAftertouch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkMidiChannelAftertouch"));
		}
		return Z_Registration_Info_UScriptStruct_FAkMidiChannelAftertouch.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkMidiChannelAftertouch.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkMidiChannelAftertouch.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkMidiChannelAftertouch.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkMidiChannelAftertouch ********************************************

// ********** Begin ScriptStruct FAkMidiProgramChange **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkMidiProgramChange>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkMidiProgramChange); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgramNum_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI|ProgramChange" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkMidiProgramChange constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProgramNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkMidiProgramChange constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiProgramChange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkMidiProgramChange>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiProgramChange cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

// ********** Begin ScriptStruct FAkMidiProgramChange Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ProgramNum = { "ProgramNum", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMidiProgramChange, ProgramNum), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgramNum_MetaData), NewProp_ProgramNum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProgramNum,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkMidiProgramChange Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkMidiEventBase,
	&NewStructOps,
	"AkMidiProgramChange",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkMidiProgramChange>(),
	alignof(FAkMidiProgramChange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkMidiProgramChange;
UScriptStruct* Z_Construct_UScriptStruct_FAkMidiProgramChange(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkMidiProgramChange.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkMidiProgramChange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiProgramChange, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkMidiProgramChange"));
		}
		return Z_Registration_Info_UScriptStruct_FAkMidiProgramChange.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkMidiProgramChange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkMidiProgramChange.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkMidiProgramChange.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkMidiProgramChange ************************************************

// ********** Begin Class UAkMIDIEventCallbackInfo Function GetCc **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics
struct UHT_STATICS
{
	struct AkMIDIEventCallbackInfo_eventGetCc_Parms
	{
		FAkMidiCc AsCc;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCc constinit property declarations *********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AsCc;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetCc_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCc constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCc Property Definitions ********************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AsCc = { "AsCc", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetCc_Parms, AsCc), Z_Construct_UScriptStruct_FAkMidiCc, METADATA_PARAMS(0, nullptr) }; // 506d41e03b4d2961e59a49804f6cb4946c293628
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetCc_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AsCc,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCc Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetCc", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkMIDIEventCallbackInfo_eventGetCc_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkMIDIEventCallbackInfo_eventGetCc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetCc)
{
	P_GET_STRUCT_REF(FAkMidiCc,Z_Param_Out_AsCc);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCc(Z_Param_Out_AsCc);
	P_NATIVE_END;
}
// ********** End Class UAkMIDIEventCallbackInfo Function GetCc ************************************

// ********** Begin Class UAkMIDIEventCallbackInfo Function GetChannel *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics
struct UHT_STATICS
{
	struct AkMIDIEventCallbackInfo_eventGetChannel_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetChannel constinit property declarations ****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetChannel constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetChannel Property Definitions ***************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetChannel_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetChannel Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetChannel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkMIDIEventCallbackInfo_eventGetChannel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkMIDIEventCallbackInfo_eventGetChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetChannel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetChannel();
	P_NATIVE_END;
}
// ********** End Class UAkMIDIEventCallbackInfo Function GetChannel *******************************

// ********** Begin Class UAkMIDIEventCallbackInfo Function GetChannelAftertouch *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics
struct UHT_STATICS
{
	struct AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms
	{
		FAkMidiChannelAftertouch AsChannelAftertouch;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetChannelAftertouch constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AsChannelAftertouch;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetChannelAftertouch constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetChannelAftertouch Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AsChannelAftertouch = { "AsChannelAftertouch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms, AsChannelAftertouch), Z_Construct_UScriptStruct_FAkMidiChannelAftertouch, METADATA_PARAMS(0, nullptr) }; // 0b588b5947f1da38c6b8ae0c6aa2a4ff4eb21dc6
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AsChannelAftertouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetChannelAftertouch Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetChannelAftertouch", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetChannelAftertouch)
{
	P_GET_STRUCT_REF(FAkMidiChannelAftertouch,Z_Param_Out_AsChannelAftertouch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetChannelAftertouch(Z_Param_Out_AsChannelAftertouch);
	P_NATIVE_END;
}
// ********** End Class UAkMIDIEventCallbackInfo Function GetChannelAftertouch *********************

// ********** Begin Class UAkMIDIEventCallbackInfo Function GetGeneric *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics
struct UHT_STATICS
{
	struct AkMIDIEventCallbackInfo_eventGetGeneric_Parms
	{
		FAkMidiGeneric AsGeneric;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGeneric constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AsGeneric;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetGeneric_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGeneric constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGeneric Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AsGeneric = { "AsGeneric", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetGeneric_Parms, AsGeneric), Z_Construct_UScriptStruct_FAkMidiGeneric, METADATA_PARAMS(0, nullptr) }; // f3d1dc9473d447fb8b2005457dfd37b8eb2edeed
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetGeneric_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AsGeneric,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGeneric Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetGeneric", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkMIDIEventCallbackInfo_eventGetGeneric_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkMIDIEventCallbackInfo_eventGetGeneric_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetGeneric)
{
	P_GET_STRUCT_REF(FAkMidiGeneric,Z_Param_Out_AsGeneric);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGeneric(Z_Param_Out_AsGeneric);
	P_NATIVE_END;
}
// ********** End Class UAkMIDIEventCallbackInfo Function GetGeneric *******************************

// ********** Begin Class UAkMIDIEventCallbackInfo Function GetNoteAftertouch **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics
struct UHT_STATICS
{
	struct AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms
	{
		FAkMidiNoteAftertouch AsNoteAftertouch;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNoteAftertouch constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AsNoteAftertouch;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNoteAftertouch constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNoteAftertouch Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AsNoteAftertouch = { "AsNoteAftertouch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms, AsNoteAftertouch), Z_Construct_UScriptStruct_FAkMidiNoteAftertouch, METADATA_PARAMS(0, nullptr) }; // d7ce47b2a0c3c70b4d52da40a9cb3943f58ca142
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AsNoteAftertouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNoteAftertouch Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetNoteAftertouch", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetNoteAftertouch)
{
	P_GET_STRUCT_REF(FAkMidiNoteAftertouch,Z_Param_Out_AsNoteAftertouch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetNoteAftertouch(Z_Param_Out_AsNoteAftertouch);
	P_NATIVE_END;
}
// ********** End Class UAkMIDIEventCallbackInfo Function GetNoteAftertouch ************************

// ********** Begin Class UAkMIDIEventCallbackInfo Function GetNoteOff *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics
struct UHT_STATICS
{
	struct AkMIDIEventCallbackInfo_eventGetNoteOff_Parms
	{
		FAkMidiNoteOnOff AsNoteOff;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNoteOff constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AsNoteOff;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetNoteOff_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNoteOff constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNoteOff Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AsNoteOff = { "AsNoteOff", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteOff_Parms, AsNoteOff), Z_Construct_UScriptStruct_FAkMidiNoteOnOff, METADATA_PARAMS(0, nullptr) }; // 7a1d0401083ecdd3dae1a1bb2d09ebbb6a0ac9d5
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetNoteOff_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AsNoteOff,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNoteOff Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetNoteOff", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkMIDIEventCallbackInfo_eventGetNoteOff_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkMIDIEventCallbackInfo_eventGetNoteOff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetNoteOff)
{
	P_GET_STRUCT_REF(FAkMidiNoteOnOff,Z_Param_Out_AsNoteOff);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetNoteOff(Z_Param_Out_AsNoteOff);
	P_NATIVE_END;
}
// ********** End Class UAkMIDIEventCallbackInfo Function GetNoteOff *******************************

// ********** Begin Class UAkMIDIEventCallbackInfo Function GetNoteOn ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics
struct UHT_STATICS
{
	struct AkMIDIEventCallbackInfo_eventGetNoteOn_Parms
	{
		FAkMidiNoteOnOff AsNoteOn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNoteOn constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AsNoteOn;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetNoteOn_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNoteOn constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNoteOn Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AsNoteOn = { "AsNoteOn", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteOn_Parms, AsNoteOn), Z_Construct_UScriptStruct_FAkMidiNoteOnOff, METADATA_PARAMS(0, nullptr) }; // 7a1d0401083ecdd3dae1a1bb2d09ebbb6a0ac9d5
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetNoteOn_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AsNoteOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNoteOn Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetNoteOn", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkMIDIEventCallbackInfo_eventGetNoteOn_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkMIDIEventCallbackInfo_eventGetNoteOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetNoteOn)
{
	P_GET_STRUCT_REF(FAkMidiNoteOnOff,Z_Param_Out_AsNoteOn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetNoteOn(Z_Param_Out_AsNoteOn);
	P_NATIVE_END;
}
// ********** End Class UAkMIDIEventCallbackInfo Function GetNoteOn ********************************

// ********** Begin Class UAkMIDIEventCallbackInfo Function GetPitchBend ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics
struct UHT_STATICS
{
	struct AkMIDIEventCallbackInfo_eventGetPitchBend_Parms
	{
		FAkMidiPitchBend AsPitchBend;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPitchBend constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AsPitchBend;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetPitchBend_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPitchBend constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPitchBend Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AsPitchBend = { "AsPitchBend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetPitchBend_Parms, AsPitchBend), Z_Construct_UScriptStruct_FAkMidiPitchBend, METADATA_PARAMS(0, nullptr) }; // 96719f262f1b3ddcaa83dc929623434a67719a50
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetPitchBend_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AsPitchBend,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPitchBend Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetPitchBend", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkMIDIEventCallbackInfo_eventGetPitchBend_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkMIDIEventCallbackInfo_eventGetPitchBend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetPitchBend)
{
	P_GET_STRUCT_REF(FAkMidiPitchBend,Z_Param_Out_AsPitchBend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPitchBend(Z_Param_Out_AsPitchBend);
	P_NATIVE_END;
}
// ********** End Class UAkMIDIEventCallbackInfo Function GetPitchBend *****************************

// ********** Begin Class UAkMIDIEventCallbackInfo Function GetProgramChange ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics
struct UHT_STATICS
{
	struct AkMIDIEventCallbackInfo_eventGetProgramChange_Parms
	{
		FAkMidiProgramChange AsProgramChange;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetProgramChange constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AsProgramChange;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetProgramChange_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProgramChange constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProgramChange Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AsProgramChange = { "AsProgramChange", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetProgramChange_Parms, AsProgramChange), Z_Construct_UScriptStruct_FAkMidiProgramChange, METADATA_PARAMS(0, nullptr) }; // c6b75e69c712cc6aeb01ee8239438f4259a41d51
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetProgramChange_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AsProgramChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetProgramChange Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetProgramChange", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkMIDIEventCallbackInfo_eventGetProgramChange_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkMIDIEventCallbackInfo_eventGetProgramChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetProgramChange)
{
	P_GET_STRUCT_REF(FAkMidiProgramChange,Z_Param_Out_AsProgramChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetProgramChange(Z_Param_Out_AsProgramChange);
	P_NATIVE_END;
}
// ********** End Class UAkMIDIEventCallbackInfo Function GetProgramChange *************************

// ********** Begin Class UAkMIDIEventCallbackInfo Function GetType ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics
struct UHT_STATICS
{
	struct AkMIDIEventCallbackInfo_eventGetType_Parms
	{
		EAkMidiEventType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|MIDI" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetType constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetType constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetType Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkMidiEventType, METADATA_PARAMS(0, nullptr) }; // cde95b4ce78c33ba2dc7a1fce5069ec0d29fd5e3
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetType Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetType", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkMIDIEventCallbackInfo_eventGetType_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkMIDIEventCallbackInfo_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAkMidiEventType*)Z_Param__Result=P_THIS->GetType();
	P_NATIVE_END;
}
// ********** End Class UAkMIDIEventCallbackInfo Function GetType **********************************

// ********** Begin Class UAkMIDIEventCallbackInfo *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Callback information structure corresponding to \\ref AK_MidiEvent\n/// \\sa \n/// - AK::SoundEngine::PostEvent()\n/// - \\ref soundengine_events\n" },
#endif
		{ "IncludePath", "AkGameplayTypes.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback information structure corresponding to \\ref AK_MidiEvent\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAkMIDIEventCallbackInfo constinit property declarations *****************
// ********** End Class UAkMIDIEventCallbackInfo constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCc"), .Pointer = &UAkMIDIEventCallbackInfo::execGetCc },
		{ .NameUTF8 = UTF8TEXT("GetChannel"), .Pointer = &UAkMIDIEventCallbackInfo::execGetChannel },
		{ .NameUTF8 = UTF8TEXT("GetChannelAftertouch"), .Pointer = &UAkMIDIEventCallbackInfo::execGetChannelAftertouch },
		{ .NameUTF8 = UTF8TEXT("GetGeneric"), .Pointer = &UAkMIDIEventCallbackInfo::execGetGeneric },
		{ .NameUTF8 = UTF8TEXT("GetNoteAftertouch"), .Pointer = &UAkMIDIEventCallbackInfo::execGetNoteAftertouch },
		{ .NameUTF8 = UTF8TEXT("GetNoteOff"), .Pointer = &UAkMIDIEventCallbackInfo::execGetNoteOff },
		{ .NameUTF8 = UTF8TEXT("GetNoteOn"), .Pointer = &UAkMIDIEventCallbackInfo::execGetNoteOn },
		{ .NameUTF8 = UTF8TEXT("GetPitchBend"), .Pointer = &UAkMIDIEventCallbackInfo::execGetPitchBend },
		{ .NameUTF8 = UTF8TEXT("GetProgramChange"), .Pointer = &UAkMIDIEventCallbackInfo::execGetProgramChange },
		{ .NameUTF8 = UTF8TEXT("GetType"), .Pointer = &UAkMIDIEventCallbackInfo::execGetType },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc, "GetCc" }, // 6db084e5dc6c0907d475f81358a6b4df4c552f2c
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel, "GetChannel" }, // 145691d660c3e00b783974032b4a478b26e970ed
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch, "GetChannelAftertouch" }, // 2871b31978e031d7b876cd3a17c7d9e14e4c3192
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric, "GetGeneric" }, // 56e430a71d3755446852d879079f3f75cf49853d
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch, "GetNoteAftertouch" }, // 6a5f1ceb693fae68b0a77acd3f4e56f8a353566e
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff, "GetNoteOff" }, // 4549505e78be1add3abac9bc74a91440d8681416
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn, "GetNoteOn" }, // 07ece9bb45f187d925734feeb8732fc26685a07c
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend, "GetPitchBend" }, // db7288aa573ca8d3a066bbfd60ae2c478c5c69c1
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange, "GetProgramChange" }, // d5256aeeae4c660ec8509df792867052719f7a8f
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType, "GetType" }, // 226fe29546f8d36890bed002a9ebfd8906fdcf10
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMIDIEventCallbackInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkEventCallbackInfo,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkMIDIEventCallbackInfo,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAkMIDIEventCallbackInfo_StaticRegisterNativesUAkMIDIEventCallbackInfo()
{
	UClass* Class = UAkMIDIEventCallbackInfo::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo;
UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkMIDIEventCallbackInfo;
		if (!Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkMIDIEventCallbackInfo"),
				Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo.InnerSingleton,
				UAkMIDIEventCallbackInfo_StaticRegisterNativesUAkMIDIEventCallbackInfo,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkMIDIEventCallbackInfo);
UAkMIDIEventCallbackInfo::~UAkMIDIEventCallbackInfo() {}
// ********** End Class UAkMIDIEventCallbackInfo ***************************************************

// ********** Begin Class UAkMarkerCallbackInfo ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkMarkerCallbackInfo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Callback information structure corresponding to \\ref AK_Marker.\n/// \\sa \n/// - AK::SoundEngine::PostEvent()\n/// - \\ref soundengine_events\n/// - \\ref soundengine_markers\n" },
#endif
		{ "IncludePath", "AkGameplayTypes.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback information structure corresponding to \\ref AK_Marker.\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events\n- \\ref soundengine_markers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Marker" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Marker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Cue point identifier\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Cue point identifier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Marker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Position in the cue point (unit: sample frames)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Position in the cue point (unit: sample frames)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAkMarkerCallbackInfo constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkMarkerCallbackInfo constinit property declarations **********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMarkerCallbackInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkMarkerCallbackInfo Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAkMarkerCallbackInfo, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAkMarkerCallbackInfo, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UAkMarkerCallbackInfo, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Label,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkMarkerCallbackInfo Property Definitions *********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkEventCallbackInfo,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkMarkerCallbackInfo,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkMarkerCallbackInfo;
UClass* Z_Construct_UClass_UAkMarkerCallbackInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkMarkerCallbackInfo;
		if (!Z_Registration_Info_UClass_UAkMarkerCallbackInfo.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkMarkerCallbackInfo"),
				Z_Registration_Info_UClass_UAkMarkerCallbackInfo.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAkMarkerCallbackInfo.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkMarkerCallbackInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMarkerCallbackInfo.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkMarkerCallbackInfo.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkMarkerCallbackInfo);
UAkMarkerCallbackInfo::~UAkMarkerCallbackInfo() {}
// ********** End Class UAkMarkerCallbackInfo ******************************************************

// ********** Begin Class UAkDurationCallbackInfo **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkDurationCallbackInfo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Callback information structure corresponding to \\ref AK_Duration.\n/// \\sa \n/// - AK::SoundEngine::PostEvent()\n/// - \\ref soundengine_events\n" },
#endif
		{ "IncludePath", "AkGameplayTypes.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback information structure corresponding to \\ref AK_Duration.\n\\sa\n- AK::SoundEngine::PostEvent()\n- \\ref soundengine_events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Duration of the sound (unit: milliseconds)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Duration of the sound (unit: milliseconds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioNodeID_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Estimated duration of the sound depending on source settings such as pitch. (unit: milliseconds)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Estimated duration of the sound depending on source settings such as pitch. (unit: milliseconds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaID_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Audio Node ID of playing item\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Audio Node ID of playing item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStreaming_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Duration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Media ID of playing item. (corresponds to 'ID' attribute of 'File' element in SoundBank metadata file)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Media ID of playing item. (corresponds to 'ID' attribute of 'File' element in SoundBank metadata file)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAkDurationCallbackInfo constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EstimatedDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioNodeID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MediaID;
	static void NewProp_bStreaming_SetBit(void* Obj)
	{
		((UAkDurationCallbackInfo*)Obj)->bStreaming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreaming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkDurationCallbackInfo constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkDurationCallbackInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkDurationCallbackInfo Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDurationCallbackInfo, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EstimatedDuration = { "EstimatedDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDurationCallbackInfo, EstimatedDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EstimatedDuration_MetaData), NewProp_EstimatedDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AudioNodeID = { "AudioNodeID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDurationCallbackInfo, AudioNodeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioNodeID_MetaData), NewProp_AudioNodeID_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MediaID = { "MediaID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAkDurationCallbackInfo, MediaID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaID_MetaData), NewProp_MediaID_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStreaming = { "bStreaming", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkDurationCallbackInfo), &UHT_STATICS::NewProp_bStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStreaming_MetaData), NewProp_bStreaming_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EstimatedDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioNodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStreaming,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkDurationCallbackInfo Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkEventCallbackInfo,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkDurationCallbackInfo,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkDurationCallbackInfo;
UClass* Z_Construct_UClass_UAkDurationCallbackInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkDurationCallbackInfo;
		if (!Z_Registration_Info_UClass_UAkDurationCallbackInfo.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkDurationCallbackInfo"),
				Z_Registration_Info_UClass_UAkDurationCallbackInfo.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAkDurationCallbackInfo.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkDurationCallbackInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkDurationCallbackInfo.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkDurationCallbackInfo.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkDurationCallbackInfo);
UAkDurationCallbackInfo::~UAkDurationCallbackInfo() {}
// ********** End Class UAkDurationCallbackInfo ****************************************************

// ********** Begin ScriptStruct FAkSegmentInfo ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkSegmentInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkSegmentInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkSegmentInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Structure used to query info on active playing segments.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure used to query info on active playing segments." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPosition_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreEntryDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Current position of the segment, relative to the Entry Cue, in milliseconds. Range is [-iPreEntryDuration, iActiveDuration+iPostExitDuration].\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Current position of the segment, relative to the Entry Cue, in milliseconds. Range is [-iPreEntryDuration, iActiveDuration+iPostExitDuration]." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Duration of the pre-entry region of the segment, in milliseconds.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Duration of the pre-entry region of the segment, in milliseconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostExitDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Duration of the active region of the segment (between the Entry and Exit Cues), in milliseconds.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Duration of the active region of the segment (between the Entry and Exit Cues), in milliseconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingLookAheadTime_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Duration of the post-exit region of the segment, in milliseconds.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Duration of the post-exit region of the segment, in milliseconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeatDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Number of milliseconds remaining in the \"looking-ahead\" state of the segment, when it is silent but streamed tracks are being prefetched.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Number of milliseconds remaining in the \"looking-ahead\" state of the segment, when it is silent but streamed tracks are being prefetched." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Beat Duration in seconds.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Beat Duration in seconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridDuration_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Bar Duration in seconds.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Bar Duration in seconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridOffset_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|SegmentInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Grid duration in seconds.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Grid duration in seconds." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkSegmentInfo constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreEntryDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PostExitDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingLookAheadTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BarDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkSegmentInfo constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSegmentInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkSegmentInfo Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CurrentPosition = { "CurrentPosition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSegmentInfo, CurrentPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPosition_MetaData), NewProp_CurrentPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PreEntryDuration = { "PreEntryDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSegmentInfo, PreEntryDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreEntryDuration_MetaData), NewProp_PreEntryDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ActiveDuration = { "ActiveDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSegmentInfo, ActiveDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDuration_MetaData), NewProp_ActiveDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PostExitDuration = { "PostExitDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSegmentInfo, PostExitDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostExitDuration_MetaData), NewProp_PostExitDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RemainingLookAheadTime = { "RemainingLookAheadTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSegmentInfo, RemainingLookAheadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingLookAheadTime_MetaData), NewProp_RemainingLookAheadTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BeatDuration = { "BeatDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSegmentInfo, BeatDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeatDuration_MetaData), NewProp_BeatDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BarDuration = { "BarDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSegmentInfo, BarDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarDuration_MetaData), NewProp_BarDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GridDuration = { "GridDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSegmentInfo, GridDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridDuration_MetaData), NewProp_GridDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GridOffset = { "GridOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSegmentInfo, GridOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridOffset_MetaData), NewProp_GridOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreEntryDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PostExitDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RemainingLookAheadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BeatDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BarDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GridDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GridOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkSegmentInfo Property Definitions *********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkSegmentInfo",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkSegmentInfo>(),
	alignof(FAkSegmentInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkSegmentInfo;
UScriptStruct* Z_Construct_UScriptStruct_FAkSegmentInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkSegmentInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkSegmentInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSegmentInfo, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkSegmentInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FAkSegmentInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkSegmentInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkSegmentInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkSegmentInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkSegmentInfo ******************************************************

// ********** Begin Class UAkMusicSyncCallbackInfo *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkGameplayTypes.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayingID_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Music" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentInfo_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Playing ID of Event, returned by PostEvent()\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Playing ID of Event, returned by PostEvent()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicSyncType_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Segment information corresponding to the segment triggering this callback.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Segment information corresponding to the segment triggering this callback." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserCueName_MetaData[] = {
		{ "Category", "Audiokinetic|AkCallbackInfo|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///< Would be either \\ref AK_MusicSyncEntry, \\ref AK_MusicSyncBeat, \\ref AK_MusicSyncBar, \\ref AK_MusicSyncExit, \\ref AK_MusicSyncGrid, \\ref AK_MusicSyncPoint or \\ref AK_MusicSyncUserCue.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Would be either \\ref AK_MusicSyncEntry, \\ref AK_MusicSyncBeat, \\ref AK_MusicSyncBar, \\ref AK_MusicSyncExit, \\ref AK_MusicSyncGrid, \\ref AK_MusicSyncPoint or \\ref AK_MusicSyncUserCue." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAkMusicSyncCallbackInfo constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MusicSyncType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MusicSyncType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserCueName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkMusicSyncCallbackInfo constinit property declarations *******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMusicSyncCallbackInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkMusicSyncCallbackInfo Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, PlayingID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayingID_MetaData), NewProp_PlayingID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SegmentInfo = { "SegmentInfo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, SegmentInfo), Z_Construct_UScriptStruct_FAkSegmentInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentInfo_MetaData), NewProp_SegmentInfo_MetaData) }; // c6641a6011a89c28927b98fe31aedf41c5accb6b
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MusicSyncType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MusicSyncType = { "MusicSyncType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, MusicSyncType), Z_Construct_UEnum_AkAudio_EAkCallbackType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicSyncType_MetaData), NewProp_MusicSyncType_MetaData) }; // 15c60491945abd309625a2db504ba56b92a33a0e
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_UserCueName = { "UserCueName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UAkMusicSyncCallbackInfo, UserCueName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserCueName_MetaData), NewProp_UserCueName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MusicSyncType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MusicSyncType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserCueName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkMusicSyncCallbackInfo Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkCallbackInfo,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkMusicSyncCallbackInfo,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo;
UClass* Z_Construct_UClass_UAkMusicSyncCallbackInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkMusicSyncCallbackInfo;
		if (!Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkMusicSyncCallbackInfo"),
				Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkMusicSyncCallbackInfo);
UAkMusicSyncCallbackInfo::~UAkMusicSyncCallbackInfo() {}
// ********** End Class UAkMusicSyncCallbackInfo ***************************************************

// ********** Begin Delegate FOnAkPostEventCallback ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AkAudio_eventOnAkPostEventCallback_Parms
	{
		EAkCallbackType CallbackType;
		UAkCallbackInfo* CallbackInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAkPostEventCallback constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CallbackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CallbackType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallbackInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAkPostEventCallback constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAkPostEventCallback Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CallbackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CallbackType = { "CallbackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnAkPostEventCallback_Parms, CallbackType), Z_Construct_UEnum_AkAudio_EAkCallbackType, METADATA_PARAMS(0, nullptr) }; // 15c60491945abd309625a2db504ba56b92a33a0e
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CallbackInfo = { "CallbackInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnAkPostEventCallback_Parms, CallbackInfo), Z_Construct_UClass_UAkCallbackInfo, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackInfo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnAkPostEventCallback Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio, nullptr, "OnAkPostEventCallback__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AkAudio_eventOnAkPostEventCallback_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AkAudio_eventOnAkPostEventCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnAkPostEventCallback **************************************************

// ********** Begin Delegate FOnAkBankCallback *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AkAudio_eventOnAkBankCallback_Parms
	{
		EAkResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAkBankCallback constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAkBankCallback constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAkBankCallback Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnAkBankCallback_Parms, Result), Z_Construct_UEnum_AkAudio_EAkResult, METADATA_PARAMS(0, nullptr) }; // 2e463a2ff40be78e8a00882c78894b2e31a75265
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnAkBankCallback Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio, nullptr, "OnAkBankCallback__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AkAudio_eventOnAkBankCallback_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AkAudio_eventOnAkBankCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnAkBankCallback *******************************************************

// ********** Begin Delegate FOnSetCurrentAudioCultureCallback *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms
	{
		bool Succeeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSetCurrentAudioCultureCallback constinit property declarations *****
	static void NewProp_Succeeded_SetBit(void* Obj)
	{
		((_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms*)Obj)->Succeeded = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Succeeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSetCurrentAudioCultureCallback constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSetCurrentAudioCultureCallback Property Definitions ****************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms), &UHT_STATICS::NewProp_Succeeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Succeeded,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnSetCurrentAudioCultureCallback Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio, nullptr, "OnSetCurrentAudioCultureCallback__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnSetCurrentAudioCultureCallback ***************************************

// ********** Begin Enum AkCodecId *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_AkCodecId_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<AkCodecId>()
{
	return Z_Construct_UEnum_AkAudio_AkCodecId(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ADPCM.Comment", "///< ADPCM encoding\n" },
		{ "ADPCM.Name", "AkCodecId::ADPCM" },
		{ "ADPCM.ToolTip", "< ADPCM encoding" },
		{ "AkOpus.Comment", "///< Opus encoding\n" },
		{ "AkOpus.Name", "AkCodecId::AkOpus" },
		{ "AkOpus.ToolTip", "< Opus encoding" },
		{ "AkOpusWEM.Comment", "///< WEM Opus encoding\n" },
		{ "AkOpusWEM.Name", "AkCodecId::AkOpusWEM" },
		{ "AkOpusWEM.ToolTip", "< WEM Opus encoding" },
		{ "ATRAC9.Comment", "///< ATRAC-9 encoding\n" },
		{ "ATRAC9.Name", "AkCodecId::ATRAC9" },
		{ "ATRAC9.ToolTip", "< ATRAC-9 encoding" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*=============================================================================\n\nBegin - AkExternalSources enums and structures. Known limitations:\n\x09- It is not possible to set external sources from memory using Blueprint\n\x09- It is not possible to stream external sources from disk\n\n=============================================================================*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
		{ "None.Comment", "///< None: required default.\n" },
		{ "None.Name", "AkCodecId::None" },
		{ "None.ToolTip", "< None: required default." },
		{ "OpusNX.Comment", "///< OpusNX encoding\n" },
		{ "OpusNX.Name", "AkCodecId::OpusNX" },
		{ "OpusNX.ToolTip", "< OpusNX encoding" },
		{ "PCM.Comment", "///< PCM encoding\n" },
		{ "PCM.Name", "AkCodecId::PCM" },
		{ "PCM.ToolTip", "< PCM encoding" },
		{ "ScriptName", "EAkCodecId" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin - AkExternalSources enums and structures. Known limitations:\n       - It is not possible to set external sources from memory using Blueprint\n       - It is not possible to stream external sources from disk" },
#endif
		{ "Vorbis.Comment", "///< Vorbis encoding\n" },
		{ "Vorbis.Name", "AkCodecId::Vorbis" },
		{ "Vorbis.ToolTip", "< Vorbis encoding" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AkCodecId::None", (int64)AkCodecId::None },
		{ "AkCodecId::PCM", (int64)AkCodecId::PCM },
		{ "AkCodecId::ADPCM", (int64)AkCodecId::ADPCM },
		{ "AkCodecId::Vorbis", (int64)AkCodecId::Vorbis },
		{ "AkCodecId::ATRAC9", (int64)AkCodecId::ATRAC9 },
		{ "AkCodecId::OpusNX", (int64)AkCodecId::OpusNX },
		{ "AkCodecId::AkOpus", (int64)AkCodecId::AkOpus },
		{ "AkCodecId::AkOpusWEM", (int64)AkCodecId::AkOpusWEM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"AkCodecId",
	"AkCodecId",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_AkCodecId;
UEnum* Z_Construct_UEnum_AkAudio_AkCodecId(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_AkCodecId.OuterSingleton)
		{
			ZRIE_AkCodecId.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkCodecId, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkCodecId"));
		}
		return ZRIE_AkCodecId.OuterSingleton;
	}
	if (!ZRIE_AkCodecId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_AkCodecId.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_AkCodecId.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum AkCodecId *******************************************************************

// ********** Begin ScriptStruct FAkExternalSourceInfo *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkExternalSourceInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkExternalSourceInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSrcName_MetaData[] = {
		{ "Category", "Audiokinetic|AkExternalSourceInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Name of the source given in the project. (The Cookie ID)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the source given in the project. (The Cookie ID)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CodecID_MetaData[] = {
		{ "Category", "Audiokinetic|AkExternalSourceInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Codec ID for the file. \n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Codec ID for the file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "Category", "Audiokinetic|AkExternalSourceInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// File path for the source. (Relative to ExternalSources folder in your sound bank folder)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "File path for the source. (Relative to ExternalSources folder in your sound bank folder)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceAsset_MetaData[] = {
		{ "Category", "Audiokinetic|AkExternalSourceInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Hard link to the media asset to use, it can be either streamed or not using IsStreamed\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hard link to the media asset to use, it can be either streamed or not using IsStreamed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsStreamed_MetaData[] = {
		{ "Category", "Audiokinetic|AkExternalSourceInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Is the ExternalSourceAsset streamed or not\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the ExternalSourceAsset streamed or not" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkExternalSourceInfo constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalSrcName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CodecID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CodecID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalSourceAsset;
	static void NewProp_IsStreamed_SetBit(void* Obj)
	{
		((FAkExternalSourceInfo*)Obj)->IsStreamed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStreamed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkExternalSourceInfo constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkExternalSourceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkExternalSourceInfo Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ExternalSrcName = { "ExternalSrcName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FAkExternalSourceInfo, ExternalSrcName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSrcName_MetaData), NewProp_ExternalSrcName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CodecID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CodecID = { "CodecID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAkExternalSourceInfo, CodecID), Z_Construct_UEnum_AkAudio_AkCodecId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CodecID_MetaData), NewProp_CodecID_MetaData) }; // f71259aba0d158b01fadf1c5b1cb73645ec94f1f
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FAkExternalSourceInfo, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ExternalSourceAsset = { "ExternalSourceAsset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FAkExternalSourceInfo, ExternalSourceAsset), Z_Construct_UClass_UAkExternalMediaAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSourceAsset_MetaData), NewProp_ExternalSourceAsset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_IsStreamed = { "IsStreamed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkExternalSourceInfo), &UHT_STATICS::NewProp_IsStreamed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsStreamed_MetaData), NewProp_IsStreamed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSrcName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CodecID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CodecID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSourceAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IsStreamed,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkExternalSourceInfo Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkExternalSourceInfo",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkExternalSourceInfo>(),
	alignof(FAkExternalSourceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkExternalSourceInfo;
UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkExternalSourceInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkExternalSourceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkExternalSourceInfo, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkExternalSourceInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FAkExternalSourceInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkExternalSourceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkExternalSourceInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkExternalSourceInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkExternalSourceInfo ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AkAudio_EAkAudioContext, TEXT("EAkAudioContext"), &ZRIE_EAkAudioContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4078588549U) },
		{ Z_Construct_UEnum_AkAudio_PanningRule, TEXT("PanningRule"), &ZRIE_PanningRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 582865839U) },
		{ Z_Construct_UEnum_AkAudio_AkAcousticPortalState, TEXT("AkAcousticPortalState"), &ZRIE_AkAcousticPortalState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3973031349U) },
		{ Z_Construct_UEnum_AkAudio_AkChannelConfiguration, TEXT("AkChannelConfiguration"), &ZRIE_AkChannelConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3547440899U) },
		{ Z_Construct_UEnum_AkAudio_AkSpeakerConfiguration, TEXT("AkSpeakerConfiguration"), &ZRIE_AkSpeakerConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2984083333U) },
		{ Z_Construct_UEnum_AkAudio_AkMultiPositionType, TEXT("AkMultiPositionType"), &ZRIE_AkMultiPositionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3410114412U) },
		{ Z_Construct_UEnum_AkAudio_AkActionOnEventType, TEXT("AkActionOnEventType"), &ZRIE_AkActionOnEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1938439684U) },
		{ Z_Construct_UEnum_AkAudio_EAkCurveInterpolation, TEXT("EAkCurveInterpolation"), &ZRIE_EAkCurveInterpolation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2544771076U) },
		{ Z_Construct_UEnum_AkAudio_EAkResult, TEXT("EAkResult"), &ZRIE_EAkResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 776354351U) },
		{ Z_Construct_UEnum_AkAudio_EAkCallbackType, TEXT("EAkCallbackType"), &ZRIE_EAkCallbackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 365298833U) },
		{ Z_Construct_UEnum_AkAudio_ERTPCValueType, TEXT("ERTPCValueType"), &ZRIE_ERTPCValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2905610685U) },
		{ Z_Construct_UEnum_AkAudio_EAkMidiEventType, TEXT("EAkMidiEventType"), &ZRIE_EAkMidiEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3454622540U) },
		{ Z_Construct_UEnum_AkAudio_EAkMidiCcValues, TEXT("EAkMidiCcValues"), &ZRIE_EAkMidiCcValues, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3208467130U) },
		{ Z_Construct_UEnum_AkAudio_AkCodecId, TEXT("AkCodecId"), &ZRIE_AkCodecId, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4145174955U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAkChannelMask, Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewStructOps, TEXT("AkChannelMask"),&Z_Registration_Info_UScriptStruct_FAkChannelMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkChannelMask), 1853981633U) },
		{ Z_Construct_UScriptStruct_FAkOutputSettings, Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewStructOps, TEXT("AkOutputSettings"),&Z_Registration_Info_UScriptStruct_FAkOutputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkOutputSettings), 3403505008U) },
		{ Z_Construct_UScriptStruct_FAkMidiEventBase, Z_Construct_UScriptStruct_FAkMidiEventBase_Statics::NewStructOps, TEXT("AkMidiEventBase"),&Z_Registration_Info_UScriptStruct_FAkMidiEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiEventBase), 3403455879U) },
		{ Z_Construct_UScriptStruct_FAkMidiGeneric, Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewStructOps, TEXT("AkMidiGeneric"),&Z_Registration_Info_UScriptStruct_FAkMidiGeneric, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiGeneric), 4090616980U) },
		{ Z_Construct_UScriptStruct_FAkMidiNoteOnOff, Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewStructOps, TEXT("AkMidiNoteOnOff"),&Z_Registration_Info_UScriptStruct_FAkMidiNoteOnOff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiNoteOnOff), 2048721921U) },
		{ Z_Construct_UScriptStruct_FAkMidiCc, Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewStructOps, TEXT("AkMidiCc"),&Z_Registration_Info_UScriptStruct_FAkMidiCc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiCc), 1349337568U) },
		{ Z_Construct_UScriptStruct_FAkMidiPitchBend, Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewStructOps, TEXT("AkMidiPitchBend"),&Z_Registration_Info_UScriptStruct_FAkMidiPitchBend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiPitchBend), 2524028710U) },
		{ Z_Construct_UScriptStruct_FAkMidiNoteAftertouch, Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewStructOps, TEXT("AkMidiNoteAftertouch"),&Z_Registration_Info_UScriptStruct_FAkMidiNoteAftertouch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiNoteAftertouch), 3620620210U) },
		{ Z_Construct_UScriptStruct_FAkMidiChannelAftertouch, Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewStructOps, TEXT("AkMidiChannelAftertouch"),&Z_Registration_Info_UScriptStruct_FAkMidiChannelAftertouch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiChannelAftertouch), 190352217U) },
		{ Z_Construct_UScriptStruct_FAkMidiProgramChange, Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics::NewStructOps, TEXT("AkMidiProgramChange"),&Z_Registration_Info_UScriptStruct_FAkMidiProgramChange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiProgramChange), 3333906025U) },
		{ Z_Construct_UScriptStruct_FAkSegmentInfo, Z_Construct_UScriptStruct_FAkSegmentInfo_Statics::NewStructOps, TEXT("AkSegmentInfo"),&Z_Registration_Info_UScriptStruct_FAkSegmentInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSegmentInfo), 3328449120U) },
		{ Z_Construct_UScriptStruct_FAkExternalSourceInfo, Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewStructOps, TEXT("AkExternalSourceInfo"),&Z_Registration_Info_UScriptStruct_FAkExternalSourceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkExternalSourceInfo), 83655709U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkCallbackInfo, TEXT("UAkCallbackInfo"), &Z_Registration_Info_UClass_UAkCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkCallbackInfo), 1744060853U) },
		{ Z_Construct_UClass_UAkEventCallbackInfo, TEXT("UAkEventCallbackInfo"), &Z_Registration_Info_UClass_UAkEventCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkEventCallbackInfo), 3271450342U) },
		{ Z_Construct_UClass_UAkMIDIEventCallbackInfo, TEXT("UAkMIDIEventCallbackInfo"), &Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMIDIEventCallbackInfo), 1742557054U) },
		{ Z_Construct_UClass_UAkMarkerCallbackInfo, TEXT("UAkMarkerCallbackInfo"), &Z_Registration_Info_UClass_UAkMarkerCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMarkerCallbackInfo), 3295586698U) },
		{ Z_Construct_UClass_UAkDurationCallbackInfo, TEXT("UAkDurationCallbackInfo"), &Z_Registration_Info_UClass_UAkDurationCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkDurationCallbackInfo), 3322704694U) },
		{ Z_Construct_UClass_UAkMusicSyncCallbackInfo, TEXT("UAkMusicSyncCallbackInfo"), &Z_Registration_Info_UClass_UAkMusicSyncCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMusicSyncCallbackInfo), 2931266014U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h__Script_AkAudio_4ccb9bfcd263cb62400c3bef143b06f5f4cbff78{
	TEXT("/Script/AkAudio"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
