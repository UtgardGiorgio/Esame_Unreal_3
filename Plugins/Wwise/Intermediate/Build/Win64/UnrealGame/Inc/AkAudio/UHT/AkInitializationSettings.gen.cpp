// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InitializationSettings/AkInitializationSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkInitializationSettings() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMainOutputSettings(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSpatialAudioSettings(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkChannelConfigType(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkChannelMask(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCommSystem(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkPanningRule(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkTransmissionOperation(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EAkPanningRule ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkPanningRule>()
{
	return Z_Construct_UEnum_AkAudio_EAkPanningRule(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Headphones.Name", "EAkPanningRule::Headphones" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "Speakers.Name", "EAkPanningRule::Speakers" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkPanningRule::Speakers", (int64)EAkPanningRule::Speakers },
		{ "EAkPanningRule::Headphones", (int64)EAkPanningRule::Headphones },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkPanningRule",
	"EAkPanningRule",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkPanningRule;
UEnum* Z_Construct_UEnum_AkAudio_EAkPanningRule(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkPanningRule.OuterSingleton)
		{
			ZRIE_EAkPanningRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkPanningRule, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkPanningRule"));
		}
		return ZRIE_EAkPanningRule.OuterSingleton;
	}
	if (!ZRIE_EAkPanningRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkPanningRule.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkPanningRule.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkPanningRule **************************************************************

// ********** Begin Enum EAkChannelConfigType ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkChannelConfigType>()
{
	return Z_Construct_UEnum_AkAudio_EAkChannelConfigType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Ambisonic.Name", "EAkChannelConfigType::Ambisonic" },
		{ "Anonymous.Name", "EAkChannelConfigType::Anonymous" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "Standard.Name", "EAkChannelConfigType::Standard" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkChannelConfigType::Anonymous", (int64)EAkChannelConfigType::Anonymous },
		{ "EAkChannelConfigType::Standard", (int64)EAkChannelConfigType::Standard },
		{ "EAkChannelConfigType::Ambisonic", (int64)EAkChannelConfigType::Ambisonic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkChannelConfigType",
	"EAkChannelConfigType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkChannelConfigType;
UEnum* Z_Construct_UEnum_AkAudio_EAkChannelConfigType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkChannelConfigType.OuterSingleton)
		{
			ZRIE_EAkChannelConfigType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkChannelConfigType, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkChannelConfigType"));
		}
		return ZRIE_EAkChannelConfigType.OuterSingleton;
	}
	if (!ZRIE_EAkChannelConfigType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkChannelConfigType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkChannelConfigType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkChannelConfigType ********************************************************

// ********** Begin Enum EAkChannelMask ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkChannelMask>()
{
	return Z_Construct_UEnum_AkAudio_EAkChannelMask(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BackCenter.Name", "EAkChannelMask::BackCenter" },
		{ "BackLeft.Name", "EAkChannelMask::BackLeft" },
		{ "BackRight.Name", "EAkChannelMask::BackRight" },
		{ "Bitmask", "" },
		{ "FrontCenter.Name", "EAkChannelMask::FrontCenter" },
		{ "FrontLeft.Name", "EAkChannelMask::FrontLeft" },
		{ "FrontRight.Name", "EAkChannelMask::FrontRight" },
		{ "HeightBackCenter.Name", "EAkChannelMask::HeightBackCenter" },
		{ "HeightBackLeft.Name", "EAkChannelMask::HeightBackLeft" },
		{ "HeightBackRight.Name", "EAkChannelMask::HeightBackRight" },
		{ "HeightFrontCenter.Name", "EAkChannelMask::HeightFrontCenter" },
		{ "HeightFrontLeft.Name", "EAkChannelMask::HeightFrontLeft" },
		{ "HeightFrontRight.Name", "EAkChannelMask::HeightFrontRight" },
		{ "LowFrequency.Name", "EAkChannelMask::LowFrequency" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "SideLeft.Name", "EAkChannelMask::SideLeft" },
		{ "SideRight.Name", "EAkChannelMask::SideRight" },
		{ "Top.Name", "EAkChannelMask::Top" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkChannelMask::FrontLeft", (int64)EAkChannelMask::FrontLeft },
		{ "EAkChannelMask::FrontRight", (int64)EAkChannelMask::FrontRight },
		{ "EAkChannelMask::FrontCenter", (int64)EAkChannelMask::FrontCenter },
		{ "EAkChannelMask::LowFrequency", (int64)EAkChannelMask::LowFrequency },
		{ "EAkChannelMask::BackLeft", (int64)EAkChannelMask::BackLeft },
		{ "EAkChannelMask::BackRight", (int64)EAkChannelMask::BackRight },
		{ "EAkChannelMask::BackCenter", (int64)EAkChannelMask::BackCenter },
		{ "EAkChannelMask::SideLeft", (int64)EAkChannelMask::SideLeft },
		{ "EAkChannelMask::SideRight", (int64)EAkChannelMask::SideRight },
		{ "EAkChannelMask::Top", (int64)EAkChannelMask::Top },
		{ "EAkChannelMask::HeightFrontLeft", (int64)EAkChannelMask::HeightFrontLeft },
		{ "EAkChannelMask::HeightFrontCenter", (int64)EAkChannelMask::HeightFrontCenter },
		{ "EAkChannelMask::HeightFrontRight", (int64)EAkChannelMask::HeightFrontRight },
		{ "EAkChannelMask::HeightBackLeft", (int64)EAkChannelMask::HeightBackLeft },
		{ "EAkChannelMask::HeightBackCenter", (int64)EAkChannelMask::HeightBackCenter },
		{ "EAkChannelMask::HeightBackRight", (int64)EAkChannelMask::HeightBackRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkChannelMask",
	"EAkChannelMask",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkChannelMask;
UEnum* Z_Construct_UEnum_AkAudio_EAkChannelMask(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkChannelMask.OuterSingleton)
		{
			ZRIE_EAkChannelMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkChannelMask, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkChannelMask"));
		}
		return ZRIE_EAkChannelMask.OuterSingleton;
	}
	if (!ZRIE_EAkChannelMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkChannelMask.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkChannelMask.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkChannelMask **************************************************************

// ********** Begin Enum EAkTransmissionOperation **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkTransmissionOperation_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkTransmissionOperation>()
{
	return Z_Construct_UEnum_AkAudio_EAkTransmissionOperation(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Add.Name", "EAkTransmissionOperation::Add" },
		{ "Max.Name", "EAkTransmissionOperation::Max" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "Multiply.Name", "EAkTransmissionOperation::Multiply" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkTransmissionOperation::Add", (int64)EAkTransmissionOperation::Add },
		{ "EAkTransmissionOperation::Multiply", (int64)EAkTransmissionOperation::Multiply },
		{ "EAkTransmissionOperation::Max", (int64)EAkTransmissionOperation::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkTransmissionOperation",
	"EAkTransmissionOperation",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkTransmissionOperation;
UEnum* Z_Construct_UEnum_AkAudio_EAkTransmissionOperation(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkTransmissionOperation.OuterSingleton)
		{
			ZRIE_EAkTransmissionOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkTransmissionOperation, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkTransmissionOperation"));
		}
		return ZRIE_EAkTransmissionOperation.OuterSingleton;
	}
	if (!ZRIE_EAkTransmissionOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkTransmissionOperation.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkTransmissionOperation.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkTransmissionOperation ****************************************************

// ********** Begin Enum EAkCommSystem *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkCommSystem>()
{
	return Z_Construct_UEnum_AkAudio_EAkCommSystem(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HTCS.Comment", "// AkCommSettings::AkCommSystem_Socket,\n" },
		{ "HTCS.Name", "EAkCommSystem::HTCS" },
		{ "HTCS.ToolTip", "AkCommSettings::AkCommSystem_Socket," },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "Socket.Name", "EAkCommSystem::Socket" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkCommSystem::Socket", (int64)EAkCommSystem::Socket },
		{ "EAkCommSystem::HTCS", (int64)EAkCommSystem::HTCS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkCommSystem",
	"EAkCommSystem",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkCommSystem;
UEnum* Z_Construct_UEnum_AkAudio_EAkCommSystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkCommSystem.OuterSingleton)
		{
			ZRIE_EAkCommSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCommSystem, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkCommSystem"));
		}
		return ZRIE_EAkCommSystem.OuterSingleton;
	}
	if (!ZRIE_EAkCommSystem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkCommSystem.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkCommSystem.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkCommSystem ***************************************************************

// ********** Begin ScriptStruct FAkMainOutputSettings *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkMainOutputSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkMainOutputSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareSet_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of a custom audio device to use. Custom audio devices are defined in the Audio Device ShareSet section of the Wwise project. Leave this empty to output normally through the default audio device." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Device-specific identifier when you are using multiple devices of the same type. Leave the setting at 0 (default) if you are using only one device." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanningRule_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rule for 3D panning of signals routed to a stereo bus. In \"Speakers\" mode, the angle of the front loudspeakers is used. In \"Headphones\" mode, the speaker angles are superseded by constant power panning between two virtual microphones spaced 180 degrees apart." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelConfigType_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A code that completes the identification of channels by uChannelMask. Anonymous: Channel mask == 0 and channels. Standard: Channels must be identified with standard defines in AkSpeakerConfigs. Ambisonic: Channel mask == 0 and channels follow standard ambisonic order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkChannelMask" },
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A bit field, whose channel identifiers depend on AkChannelConfigType (up to 20)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfChannels_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of channels, identified (deduced from channel mask) or anonymous (set directly)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkMainOutputSettings constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AudioDeviceShareSet;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DeviceID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PanningRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PanningRule;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelConfigType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelConfigType;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ChannelMask;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberOfChannels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkMainOutputSettings constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMainOutputSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkMainOutputSettings Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AudioDeviceShareSet = { "AudioDeviceShareSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, AudioDeviceShareSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioDeviceShareSet_MetaData), NewProp_AudioDeviceShareSet_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, DeviceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceID_MetaData), NewProp_DeviceID_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PanningRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PanningRule = { "PanningRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, PanningRule), Z_Construct_UEnum_AkAudio_EAkPanningRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanningRule_MetaData), NewProp_PanningRule_MetaData) }; // c7651e27e4d75149cac3d6952e179fa101c3d512
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ChannelConfigType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ChannelConfigType = { "ChannelConfigType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, ChannelConfigType), Z_Construct_UEnum_AkAudio_EAkChannelConfigType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelConfigType_MetaData), NewProp_ChannelConfigType_MetaData) }; // 98e9fb578d43f1fa98279afd9b01b7b7e223a0e0
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_ChannelMask = { "ChannelMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, ChannelMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelMask_MetaData), NewProp_ChannelMask_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_NumberOfChannels = { "NumberOfChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, NumberOfChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfChannels_MetaData), NewProp_NumberOfChannels_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioDeviceShareSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PanningRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PanningRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChannelConfigType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChannelConfigType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChannelMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumberOfChannels,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkMainOutputSettings Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkMainOutputSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkMainOutputSettings>(),
	alignof(FAkMainOutputSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkMainOutputSettings;
UScriptStruct* Z_Construct_UScriptStruct_FAkMainOutputSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkMainOutputSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkMainOutputSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMainOutputSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkMainOutputSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FAkMainOutputSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkMainOutputSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkMainOutputSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkMainOutputSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkMainOutputSettings ***********************************************

// ********** Begin ScriptStruct FAkSpatialAudioSettings *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkSpatialAudioSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkSpatialAudioSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSoundPropagationDepth_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of portals that sound can propagate through. The default value is 8." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementThreshold_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance (in game units) that an emitter or listener has to move to trigger a recalculation of reflections and diffraction. A high distance value has a lower CPU load than a low distance value, but the accuracy is also lower. Note that this value does not affect the ray tracing itself. Rays are cast each time a Spatial Audio update is executed. The default value is 25." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPrimaryRays_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of primary rays used in the ray tracing engine. A larger value increases the chances of finding reflection and diffraction paths but results in higher CPU usage. When the CPU limit is active (see the CPU Limit Percentage Spatial Audio Setting), this setting represents the maximum allowed number of primary rays. The default value is 35." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionOrder_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum reflection order: the number of \"bounces\" in a reflection path.A higher reflection order renders more detail at the expense of higher CPU usage.The default value is 2." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDiffractionPaths_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Limit the maximum number of diffraction paths computed per emitter, excluding the direct/transmission path. The acoustics engine searches for up to 'Max Diffraction Paths' paths and stops searching when this limit is reached. Setting a low number for uMaxDiffractionPaths (1-4) uses fewer CPU resources, but is more likely to cause discontinuities in the resulting audio. This can occur, for example, when a more prominent path is discovered, displacing a less prominent one. Conversely, a larger number (8 or more) produces higher quality output but requires more CPU resources. The recommended range is 2-8." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGlobalReflectionPaths_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Max Global Reflection Paths [Experimental]" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a global reflection path limit among all sound emitters with early reflections enabled. Potential reflection paths, discovered by raycasting, are first sorted according to a heuristic to determine which paths are the most prominent. Afterwards, the full reflection path calculation is only performed on the most prominent 'Max Reflection Paths'. Limiting the total number of reflection path calculations can significantly reduce CPU usage. Recommended range: 10-50. Set to 0 to disable the limit. In this case, the number of paths computed is unbounded and depends on how many are discovered by raycasting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffractionOrder_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum diffraction order: the number of \"bends\" in a diffraction path. A high diffraction order accommodates more complex geometry at the expense of higher CPU usage. Diffraction must be enabled on the geometry to find diffraction paths. Set to 0 to disable diffraction on all geometry. This parameter limits the recursion depth of diffraction rays cast from the listener to scan the environment and also the depth of the diffraction search to find paths between emitter and listener. To optimize CPU usage, set it to the maximum number of edges you expect the obstructing geometry to traverse. The default value is 4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEmitterRoomAuxSends_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "MinWwiseVersion", "2023.1" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of game-defined auxiliary sends that can originate from a single emitter. An emitter can send to its own Room and to all adjacent Rooms if the emitter and listener are in the same Room. If a limit is set, the most prominent sends are kept, based on spread to the adjacent portal from the emitter's perspective. Set to 1 to only allow emitters to send directly to their current Room, and to the Room a listener is transitioning to if inside a portal. Set to 0 to disable the limit. The default value is 3." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffractionOnReflectionsOrder_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum possible number of diffraction points at each end of a reflection path. Diffraction on reflection allows reflections to fade in and out smoothly as the listener or emitter moves in and out of the reflection's shadow zone. When greater than zero, diffraction rays are sent from the listener to search for reflections around one or more corners from the listener. Diffraction must be enabled on the geometry to find diffracted reflections. Set to 0 to disable diffraction on reflections. Set to 2 or greater to allow Reflection paths to travel through Portals. The default value is 2." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDiffractionAngleDegrees_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "MinWwiseVersion", "2024.1" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The largest possible diffraction value, in degrees, beyond which paths are not computed and are inaudible. Must be greater than zero. Default value: 180 degrees. A large value (for example, 360 degrees) allows paths to propagate further around corners and obstacles, but takes more CPU time to compute. A gain is applied to each diffraction path to taper the volume of the path to zero as the diffraction angle approaches fMaxDiffractionAngleDegrees, and appears in the Voice Inspector as 'Propagation Path Gain'. This tapering gain is applied in addition to the diffraction curves, and prevents paths from popping in or out suddenly when the maximum diffraction angle is exceeded. In Wwise Authoring, the horizontal axis of a diffraction curve in the attenuation editor is defined over the range 0-100%, corresponding to angles 0-180 degrees.  If fMaxDiffractionAngleDegrees is greater than 180 degrees, diffraction coefficients over 100% are clamped and the curve is evaluated at the rightmost point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumPathLength_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length of the rays that are cast inside Spatial Audio. Effectively caps the maximum length of an individual segment in a reflection or diffraction path. The default value is 100000." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPULimitPercentage_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "CPU Limit Percentage" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the targeted computation time allocated for the ray tracing engine as a percentage [0, 100] of the current audio frame. The ray tracing engine dynamically adapts the number of primary rays to target the specified computation time. The computed number of primary rays cannot exceed the value specified by the Number Of Primary Rays Spatial Audio Setting. A value of 0 indicates no target has been set. In this case, the number of primary rays is fixed and is set by the Number Of Primary Rays Spatial Audio Setting. The default value is 0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingConstantMs_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Smoothing Constant (ms) [Experimental]" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable parameter smoothing on the diffraction paths generated by the Acoustics Engine. Set 'Smoothing Constant (ms)' to a value greater than 0 to define the time constant (in milliseconds) for parameter smoothing. The time constant of an exponential moving average is the amount of time for the smoothed response of a unit step function to reach 1 - 1/e ~= 63.2% of the original signal. A large value (eg. 500-1000 ms) results in less variance but introduces lag, which is a good choice when using conservative values for uNumberOfPrimaryRays (eg. 5-10), uMaxDiffractionPaths (eg. 1-3) or fMovementThreshold ( > 1m ), in order to reduce overall CPU cost. A small value (eg. 10-100 ms) results in greater accuracy and faster convergence of rendering parameters. Set to 0 to disable path smoothing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadBalancingSpread_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Load Balancing Spread" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The computation of spatial audio paths is spread on LoadBalancingSpread frames. Spreading the computation of paths over several frames can prevent CPU peaks. The spread introduces a delay in path computation. The default value is 1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableGeometricDiffractionAndTransmission_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable computation of geometric diffraction and transmission paths for all sources that have the \"Diffraction and Transmission\" option selected in the Positioning tab of the Wwise Property Editor. This flag enables sound paths around (diffraction) and through (transmission) geometry. Setting EnableGeometricDiffractionAndTransmission to false implies that geometry is only to be used for reflection calculation. Diffraction edges must be enabled on geometry for diffraction calculation. If EnableGeometricDiffractionAndTransmission is false but a sound has \"Diffraction and Transmission\" selected in the Positioning tab of Wwise Authoring, the sound will diffract through portals but pass through geometry as if it isn't there. Typically, we recommend you disable this setting if the game will perform obstruction calculations, but geometry is still passed to Spatial Audio for reflection calculations. The default value is true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalcEmitterVirtualPosition_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An emitter that is diffracted through a portal or around geometry will have its apparent or virtual position calculated by Wwise Spatial Audio and passed on to the sound engine. The default value is true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionOperation_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "MinWwiseVersion", "2024.1" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The operation used to determine transmission loss on direct paths." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkSpatialAudioSettings constinit property declarations ***********
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxSoundPropagationDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementThreshold;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberOfPrimaryRays;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ReflectionOrder;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxDiffractionPaths;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxGlobalReflectionPaths;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DiffractionOrder;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxEmitterRoomAuxSends;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DiffractionOnReflectionsOrder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDiffractionAngleDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumPathLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CPULimitPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingConstantMs;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LoadBalancingSpread;
	static void NewProp_EnableGeometricDiffractionAndTransmission_SetBit(void* Obj)
	{
		((FAkSpatialAudioSettings*)Obj)->EnableGeometricDiffractionAndTransmission = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGeometricDiffractionAndTransmission;
	static void NewProp_CalcEmitterVirtualPosition_SetBit(void* Obj)
	{
		((FAkSpatialAudioSettings*)Obj)->CalcEmitterVirtualPosition = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CalcEmitterVirtualPosition;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_TransmissionOperation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransmissionOperation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkSpatialAudioSettings constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSpatialAudioSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkSpatialAudioSettings Property Definitions **********************
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MaxSoundPropagationDepth = { "MaxSoundPropagationDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxSoundPropagationDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSoundPropagationDepth_MetaData), NewProp_MaxSoundPropagationDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MovementThreshold = { "MovementThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MovementThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementThreshold_MetaData), NewProp_MovementThreshold_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_NumberOfPrimaryRays = { "NumberOfPrimaryRays", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, NumberOfPrimaryRays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPrimaryRays_MetaData), NewProp_NumberOfPrimaryRays_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_ReflectionOrder = { "ReflectionOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, ReflectionOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionOrder_MetaData), NewProp_ReflectionOrder_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MaxDiffractionPaths = { "MaxDiffractionPaths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxDiffractionPaths), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDiffractionPaths_MetaData), NewProp_MaxDiffractionPaths_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MaxGlobalReflectionPaths = { "MaxGlobalReflectionPaths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxGlobalReflectionPaths), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGlobalReflectionPaths_MetaData), NewProp_MaxGlobalReflectionPaths_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_DiffractionOrder = { "DiffractionOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, DiffractionOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffractionOrder_MetaData), NewProp_DiffractionOrder_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MaxEmitterRoomAuxSends = { "MaxEmitterRoomAuxSends", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxEmitterRoomAuxSends), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEmitterRoomAuxSends_MetaData), NewProp_MaxEmitterRoomAuxSends_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_DiffractionOnReflectionsOrder = { "DiffractionOnReflectionsOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, DiffractionOnReflectionsOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffractionOnReflectionsOrder_MetaData), NewProp_DiffractionOnReflectionsOrder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxDiffractionAngleDegrees = { "MaxDiffractionAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxDiffractionAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDiffractionAngleDegrees_MetaData), NewProp_MaxDiffractionAngleDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumPathLength = { "MaximumPathLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaximumPathLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumPathLength_MetaData), NewProp_MaximumPathLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CPULimitPercentage = { "CPULimitPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, CPULimitPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPULimitPercentage_MetaData), NewProp_CPULimitPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SmoothingConstantMs = { "SmoothingConstantMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, SmoothingConstantMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingConstantMs_MetaData), NewProp_SmoothingConstantMs_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_LoadBalancingSpread = { "LoadBalancingSpread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, LoadBalancingSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadBalancingSpread_MetaData), NewProp_LoadBalancingSpread_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_EnableGeometricDiffractionAndTransmission = { "EnableGeometricDiffractionAndTransmission", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkSpatialAudioSettings), &UHT_STATICS::NewProp_EnableGeometricDiffractionAndTransmission_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableGeometricDiffractionAndTransmission_MetaData), NewProp_EnableGeometricDiffractionAndTransmission_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_CalcEmitterVirtualPosition = { "CalcEmitterVirtualPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkSpatialAudioSettings), &UHT_STATICS::NewProp_CalcEmitterVirtualPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalcEmitterVirtualPosition_MetaData), NewProp_CalcEmitterVirtualPosition_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_TransmissionOperation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_TransmissionOperation = { "TransmissionOperation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, TransmissionOperation), Z_Construct_UEnum_AkAudio_EAkTransmissionOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmissionOperation_MetaData), NewProp_TransmissionOperation_MetaData) }; // 619b1d46362f606c040abea188884d431bcb6314
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxSoundPropagationDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MovementThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumberOfPrimaryRays,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReflectionOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDiffractionPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxGlobalReflectionPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DiffractionOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxEmitterRoomAuxSends,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DiffractionOnReflectionsOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDiffractionAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumPathLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CPULimitPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SmoothingConstantMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LoadBalancingSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnableGeometricDiffractionAndTransmission,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CalcEmitterVirtualPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransmissionOperation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransmissionOperation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkSpatialAudioSettings Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkSpatialAudioSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkSpatialAudioSettings>(),
	alignof(FAkSpatialAudioSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings;
UScriptStruct* Z_Construct_UScriptStruct_FAkSpatialAudioSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSpatialAudioSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkSpatialAudioSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkSpatialAudioSettings *********************************************

// ********** Begin ScriptStruct FAkCommunicationSettings ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkCommunicationSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkCommunicationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the communication pool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiscoveryBroadcastPort_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The port where the authoring application broadcasts \"Game Discovery\" requests to discover games running on the network. Default value: 24024. (Cannot be set to 0)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandPort_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The \"command\" channel port. Set to 0 to request a dynamic/ephemeral port." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkName_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name used to identify this game within the authoring application. Leave empty to use FApp::GetProjectName()." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkCommunicationSettings constinit property declarations **********
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PoolSize;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_DiscoveryBroadcastPort;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_CommandPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NetworkName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkCommunicationSettings constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkCommunicationSettings Property Definitions *********************
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettings, PoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolSize_MetaData), NewProp_PoolSize_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams UHT_STATICS::NewProp_DiscoveryBroadcastPort = { "DiscoveryBroadcastPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettings, DiscoveryBroadcastPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiscoveryBroadcastPort_MetaData), NewProp_DiscoveryBroadcastPort_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams UHT_STATICS::NewProp_CommandPort = { "CommandPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettings, CommandPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandPort_MetaData), NewProp_CommandPort_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_NetworkName = { "NetworkName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettings, NetworkName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkName_MetaData), NewProp_NetworkName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DiscoveryBroadcastPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommandPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NetworkName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkCommunicationSettings Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkCommunicationSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkCommunicationSettings>(),
	alignof(FAkCommunicationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkCommunicationSettings;
UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkCommunicationSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkCommunicationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkCommunicationSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FAkCommunicationSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkCommunicationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkCommunicationSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkCommunicationSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkCommunicationSettings ********************************************

// ********** Begin ScriptStruct FAkCommunicationSettingsWithSystemInitialization ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkCommunicationSettingsWithSystemInitialization>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkCommunicationSettingsWithSystemInitialization); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitializeSystemComms_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether or not to initialize the communication system. Some consoles have critical requirements for initialization of their communications systems. Set to false only if your game already uses sockets before sound engine initialization." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkCommunicationSettingsWithSystemInitialization constinit property declarations 
	static void NewProp_InitializeSystemComms_SetBit(void* Obj)
	{
		((FAkCommunicationSettingsWithSystemInitialization*)Obj)->InitializeSystemComms = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InitializeSystemComms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkCommunicationSettingsWithSystemInitialization constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettingsWithSystemInitialization>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkCommunicationSettingsWithSystemInitialization>() == std::is_polymorphic<FAkCommunicationSettings>(), "USTRUCT FAkCommunicationSettingsWithSystemInitialization cannot be polymorphic unless super FAkCommunicationSettings is polymorphic");

// ********** Begin ScriptStruct FAkCommunicationSettingsWithSystemInitialization Property Definitions 
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_InitializeSystemComms = { "InitializeSystemComms", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkCommunicationSettingsWithSystemInitialization), &UHT_STATICS::NewProp_InitializeSystemComms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitializeSystemComms_MetaData), NewProp_InitializeSystemComms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitializeSystemComms,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkCommunicationSettingsWithSystemInitialization Property Definitions 
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkCommunicationSettings,
	&NewStructOps,
	"AkCommunicationSettingsWithSystemInitialization",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkCommunicationSettingsWithSystemInitialization>(),
	alignof(FAkCommunicationSettingsWithSystemInitialization),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization;
UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkCommunicationSettingsWithSystemInitialization"));
		}
		return Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkCommunicationSettingsWithSystemInitialization ********************

// ********** Begin ScriptStruct FAkCommunicationSettingsWithCommSelection *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkCommunicationSettingsWithCommSelection>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkCommunicationSettingsWithCommSelection); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSystem_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select between Socket and HTCS communication protocol. Socket is the Default option." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkCommunicationSettingsWithCommSelection constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_CommunicationSystem_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CommunicationSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkCommunicationSettingsWithCommSelection constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettingsWithCommSelection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkCommunicationSettingsWithCommSelection>() == std::is_polymorphic<FAkCommunicationSettings>(), "USTRUCT FAkCommunicationSettingsWithCommSelection cannot be polymorphic unless super FAkCommunicationSettings is polymorphic");

// ********** Begin ScriptStruct FAkCommunicationSettingsWithCommSelection Property Definitions ****
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CommunicationSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CommunicationSystem = { "CommunicationSystem", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettingsWithCommSelection, CommunicationSystem), Z_Construct_UEnum_AkAudio_EAkCommSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationSystem_MetaData), NewProp_CommunicationSystem_MetaData) }; // 6225d73b488af91437100ee18047b0d8ef4bfe1b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommunicationSystem_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommunicationSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkCommunicationSettingsWithCommSelection Property Definitions ******
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkCommunicationSettings,
	&NewStructOps,
	"AkCommunicationSettingsWithCommSelection",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkCommunicationSettingsWithCommSelection>(),
	alignof(FAkCommunicationSettingsWithCommSelection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection;
UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkCommunicationSettingsWithCommSelection"));
		}
		return Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkCommunicationSettingsWithCommSelection ***************************

// ********** Begin ScriptStruct FAkMemoryArenaInitializationSettings ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkMemoryArenaInitializationSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkMemoryArenaInitializationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySbaInitSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initial size of SBA portion of the Primary Memory Arena." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryTlsfInitSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initial size of TLSF portion of the Primary Memory Arena." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryTlsfSpanSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of each secondary span initialized for TLSF portion of the Primary Memory Arena." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryMemReservedLimit_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum amount of memory that will be reserved for the Primary Memory Arena. A value of 0 will indicate no limit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAllocSizeHuge_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum size of allocations to be considered 'Huge' for the Primary Memory Arena. Huge allocations are put into standalone spans, separate from the TLSF spans" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaTlsfInitSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initial size of TLSF portion of the Media Memory Arena." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaTlsfSpanSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of each secondary span initialized for TLSF portion of the Media Memory Arena." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaMemReservedLimit_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum amount of memory that will be reserved for the Media Memory Arena. A value of 0 will indicate no limit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaAllocSizeHuge_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Memory Arena Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum size of allocations to be considered 'Huge' for the Media Memory Arena. Huge allocations are put into standalone spans, separate from the TLSF spans" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkMemoryArenaInitializationSettings constinit property declarations 
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PrimarySbaInitSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PrimaryTlsfInitSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PrimaryTlsfSpanSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PrimaryMemReservedLimit;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PrimaryAllocSizeHuge;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MediaTlsfInitSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MediaTlsfSpanSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MediaMemReservedLimit;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MediaAllocSizeHuge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkMemoryArenaInitializationSettings constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMemoryArenaInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkMemoryArenaInitializationSettings Property Definitions *********
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_PrimarySbaInitSize = { "PrimarySbaInitSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, PrimarySbaInitSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimarySbaInitSize_MetaData), NewProp_PrimarySbaInitSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_PrimaryTlsfInitSize = { "PrimaryTlsfInitSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, PrimaryTlsfInitSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryTlsfInitSize_MetaData), NewProp_PrimaryTlsfInitSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_PrimaryTlsfSpanSize = { "PrimaryTlsfSpanSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, PrimaryTlsfSpanSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryTlsfSpanSize_MetaData), NewProp_PrimaryTlsfSpanSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_PrimaryMemReservedLimit = { "PrimaryMemReservedLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, PrimaryMemReservedLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryMemReservedLimit_MetaData), NewProp_PrimaryMemReservedLimit_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_PrimaryAllocSizeHuge = { "PrimaryAllocSizeHuge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, PrimaryAllocSizeHuge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAllocSizeHuge_MetaData), NewProp_PrimaryAllocSizeHuge_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MediaTlsfInitSize = { "MediaTlsfInitSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, MediaTlsfInitSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaTlsfInitSize_MetaData), NewProp_MediaTlsfInitSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MediaTlsfSpanSize = { "MediaTlsfSpanSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, MediaTlsfSpanSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaTlsfSpanSize_MetaData), NewProp_MediaTlsfSpanSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MediaMemReservedLimit = { "MediaMemReservedLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, MediaMemReservedLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaMemReservedLimit_MetaData), NewProp_MediaMemReservedLimit_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MediaAllocSizeHuge = { "MediaAllocSizeHuge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMemoryArenaInitializationSettings, MediaAllocSizeHuge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaAllocSizeHuge_MetaData), NewProp_MediaAllocSizeHuge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrimarySbaInitSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrimaryTlsfInitSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrimaryTlsfSpanSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrimaryMemReservedLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrimaryAllocSizeHuge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaTlsfInitSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaTlsfSpanSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaMemReservedLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaAllocSizeHuge,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkMemoryArenaInitializationSettings Property Definitions ***********
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkMemoryArenaInitializationSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkMemoryArenaInitializationSettings>(),
	alignof(FAkMemoryArenaInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings;
UScriptStruct* Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkMemoryArenaInitializationSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkMemoryArenaInitializationSettings ********************************

// ********** Begin ScriptStruct FAkCommonInitializationSettings ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkCommonInitializationSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkCommonInitializationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfMemoryPools_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of memory pools. A memory pool is required for each loaded bank." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfPositioningPaths_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of automation paths for positioning sounds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandQueueSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the command queue." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerFrame_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of samples per audio frame (256, 512, 1024, or 2048)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainOutputSettings_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platform-independent initialization settings of output devices." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingLookAheadRatio_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplication factor for all streaming look-ahead heuristic values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfRefillsInVoice_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of refill buffers in voice buffer. Set to 2 for double-buffered. The default value is 4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatialAudioSettings_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryArenaSettings_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "MinWwiseVersion", "2024.1" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkCommonInitializationSettings constinit property declarations ***
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumNumberOfMemoryPools;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumNumberOfPositioningPaths;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CommandQueueSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SamplesPerFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MainOutputSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingLookAheadRatio;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_NumberOfRefillsInVoice;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpatialAudioSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MemoryArenaSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkCommonInitializationSettings constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommonInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkCommonInitializationSettings Property Definitions **************
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MaximumNumberOfMemoryPools = { "MaximumNumberOfMemoryPools", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MaximumNumberOfMemoryPools), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumNumberOfMemoryPools_MetaData), NewProp_MaximumNumberOfMemoryPools_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MaximumNumberOfPositioningPaths = { "MaximumNumberOfPositioningPaths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MaximumNumberOfPositioningPaths), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumNumberOfPositioningPaths_MetaData), NewProp_MaximumNumberOfPositioningPaths_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_CommandQueueSize = { "CommandQueueSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, CommandQueueSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandQueueSize_MetaData), NewProp_CommandQueueSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_SamplesPerFrame = { "SamplesPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, SamplesPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplesPerFrame_MetaData), NewProp_SamplesPerFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MainOutputSettings = { "MainOutputSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MainOutputSettings), Z_Construct_UScriptStruct_FAkMainOutputSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainOutputSettings_MetaData), NewProp_MainOutputSettings_MetaData) }; // ab016f64a41acecb5fe1b0000e832741b8ebea2e
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StreamingLookAheadRatio = { "StreamingLookAheadRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, StreamingLookAheadRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingLookAheadRatio_MetaData), NewProp_StreamingLookAheadRatio_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams UHT_STATICS::NewProp_NumberOfRefillsInVoice = { "NumberOfRefillsInVoice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, NumberOfRefillsInVoice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfRefillsInVoice_MetaData), NewProp_NumberOfRefillsInVoice_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SpatialAudioSettings = { "SpatialAudioSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, SpatialAudioSettings), Z_Construct_UScriptStruct_FAkSpatialAudioSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatialAudioSettings_MetaData), NewProp_SpatialAudioSettings_MetaData) }; // 665c05ea101a1be6ab65791fd4d09bc87e38f3a3
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MemoryArenaSettings = { "MemoryArenaSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MemoryArenaSettings), Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryArenaSettings_MetaData), NewProp_MemoryArenaSettings_MetaData) }; // d0352cce18ef0e1ec977d1d7281bd09a919e0c09
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumNumberOfMemoryPools,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumNumberOfPositioningPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommandQueueSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SamplesPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MainOutputSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreamingLookAheadRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumberOfRefillsInVoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpatialAudioSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MemoryArenaSettings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkCommonInitializationSettings Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkCommonInitializationSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkCommonInitializationSettings>(),
	alignof(FAkCommonInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings;
UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommonInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkCommonInitializationSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkCommonInitializationSettings *************************************

// ********** Begin ScriptStruct FAkCommonInitializationSettingsWithSampleRate *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkCommonInitializationSettingsWithSampleRate>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkCommonInitializationSettingsWithSampleRate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "Common Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sampling Rate. Default is 48000 Hz. Use 24000hz for low quality. Any positive reasonable sample rate is supported; however, be careful setting a custom value. Using an odd or really low sample rate may cause the sound engine to malfunction." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkCommonInitializationSettingsWithSampleRate constinit property declarations 
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkCommonInitializationSettingsWithSampleRate constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommonInitializationSettingsWithSampleRate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkCommonInitializationSettingsWithSampleRate>() == std::is_polymorphic<FAkCommonInitializationSettings>(), "USTRUCT FAkCommonInitializationSettingsWithSampleRate cannot be polymorphic unless super FAkCommonInitializationSettings is polymorphic");

// ********** Begin ScriptStruct FAkCommonInitializationSettingsWithSampleRate Property Definitions 
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettingsWithSampleRate, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SampleRate,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkCommonInitializationSettingsWithSampleRate Property Definitions **
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkCommonInitializationSettings,
	&NewStructOps,
	"AkCommonInitializationSettingsWithSampleRate",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkCommonInitializationSettingsWithSampleRate>(),
	alignof(FAkCommonInitializationSettingsWithSampleRate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate;
UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkCommonInitializationSettingsWithSampleRate"));
		}
		return Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkCommonInitializationSettingsWithSampleRate ***********************

// ********** Begin ScriptStruct FAkAdvancedInitializationSettings *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkAdvancedInitializationSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkAdvancedInitializationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IO_MemorySize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of memory pool for I/O (for automatic streams). It is rounded down to a multiple of uGranularity and then passed directly to AK::MemoryMgr::CreatePool()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IO_Granularity_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "I/O requests granularity (typical bytes/request)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAutoStreamBufferLength_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Targeted automatic stream buffer length (ms). When a stream reaches that buffering, it stops being scheduled for I/O except if the scheduler is idle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseStreamCache_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the device attempts to reuse I/O buffers that have already been streamed from disk. This is particularly useful when streaming small looping sounds. However, there is a small increase in CPU usage when allocating memory, and a slightly larger memory footprint in the StreamManager pool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumPinnedBytesInCache_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of bytes that can be \"pinned\" using AK::SoundEngine::PinEventInStreamCache() or AK::IAkStreamMgr::PinFileInCache()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableGameSyncPreparation_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true to enable AK::SoundEngine::PrepareGameSync usage." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousPlaybackLookAhead_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of quanta ahead when continuous containers instantiate a new voice before the following sounds start playing. This look-ahead time allows I/O to occur, and is especially useful to reduce the latency of continuous containers with trigger rate or sample-accurate transitions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonitorQueuePoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the monitoring queue pool. This parameter is ignored in Release builds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHardwareTimeoutMs_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time (in milliseconds) to wait for hardware devices to trigger an audio interrupt. If there is no interrupt after that time, the sound engine reverts to silent mode and continues operating until the hardware responds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugOutOfRangeCheckEnabled_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug setting: Enable checks for out-of-range (and NAN) floats in the processing code. Do not enable in any normal usage because this setting uses a lot of CPU. It prints error messages in the log if invalid values are found at various points in the pipeline. Contact AK Support with the new error messages for more information." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugOutOfRangeLimit_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "EditCondition", "DebugOutOfRangeCheckEnabled" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug setting: Only used when Debug Out Of Range Check Enabled is true. This defines the maximum values samples can have. Normal audio must be contained within +1/-1. Set this limit to a value greater than 1 to allow temporary or short excursions out of range. The default value is 16." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkAdvancedInitializationSettings constinit property declarations *
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_IO_MemorySize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_IO_Granularity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetAutoStreamBufferLength;
	static void NewProp_UseStreamCache_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->UseStreamCache = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseStreamCache;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumPinnedBytesInCache;
	static void NewProp_EnableGameSyncPreparation_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->EnableGameSyncPreparation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGameSyncPreparation;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ContinuousPlaybackLookAhead;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MonitorQueuePoolSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumHardwareTimeoutMs;
	static void NewProp_DebugOutOfRangeCheckEnabled_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->DebugOutOfRangeCheckEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugOutOfRangeCheckEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugOutOfRangeLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkAdvancedInitializationSettings constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkAdvancedInitializationSettings Property Definitions ************
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_IO_MemorySize = { "IO_MemorySize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, IO_MemorySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IO_MemorySize_MetaData), NewProp_IO_MemorySize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_IO_Granularity = { "IO_Granularity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, IO_Granularity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IO_Granularity_MetaData), NewProp_IO_Granularity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TargetAutoStreamBufferLength = { "TargetAutoStreamBufferLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, TargetAutoStreamBufferLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAutoStreamBufferLength_MetaData), NewProp_TargetAutoStreamBufferLength_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_UseStreamCache = { "UseStreamCache", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &UHT_STATICS::NewProp_UseStreamCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseStreamCache_MetaData), NewProp_UseStreamCache_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MaximumPinnedBytesInCache = { "MaximumPinnedBytesInCache", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MaximumPinnedBytesInCache), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumPinnedBytesInCache_MetaData), NewProp_MaximumPinnedBytesInCache_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_EnableGameSyncPreparation = { "EnableGameSyncPreparation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &UHT_STATICS::NewProp_EnableGameSyncPreparation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableGameSyncPreparation_MetaData), NewProp_EnableGameSyncPreparation_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_ContinuousPlaybackLookAhead = { "ContinuousPlaybackLookAhead", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, ContinuousPlaybackLookAhead), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinuousPlaybackLookAhead_MetaData), NewProp_ContinuousPlaybackLookAhead_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MonitorQueuePoolSize = { "MonitorQueuePoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MonitorQueuePoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonitorQueuePoolSize_MetaData), NewProp_MonitorQueuePoolSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MaximumHardwareTimeoutMs = { "MaximumHardwareTimeoutMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MaximumHardwareTimeoutMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumHardwareTimeoutMs_MetaData), NewProp_MaximumHardwareTimeoutMs_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DebugOutOfRangeCheckEnabled = { "DebugOutOfRangeCheckEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &UHT_STATICS::NewProp_DebugOutOfRangeCheckEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugOutOfRangeCheckEnabled_MetaData), NewProp_DebugOutOfRangeCheckEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DebugOutOfRangeLimit = { "DebugOutOfRangeLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, DebugOutOfRangeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugOutOfRangeLimit_MetaData), NewProp_DebugOutOfRangeLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IO_MemorySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IO_Granularity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetAutoStreamBufferLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UseStreamCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumPinnedBytesInCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnableGameSyncPreparation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ContinuousPlaybackLookAhead,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MonitorQueuePoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumHardwareTimeoutMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugOutOfRangeCheckEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugOutOfRangeLimit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkAdvancedInitializationSettings Property Definitions **************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkAdvancedInitializationSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkAdvancedInitializationSettings>(),
	alignof(FAkAdvancedInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings;
UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkAdvancedInitializationSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkAdvancedInitializationSettings ***********************************

// ********** Begin ScriptStruct FAkAdvancedInitializationSettingsWithMultiCoreRendering ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkAdvancedInitializationSettingsWithMultiCoreRendering); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableMultiCoreRendering_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable to run SoundEngine processing tasks on the Unreal Engine worker threads. Requires Editor restart." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumJobWorkers_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "EditCondition", "EnableMultiCoreRendering" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configure the maximum number of workers that the Sound Engine will request at any given time. Requires Editor restart." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JobWorkerMaxExecutionTimeUSec_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "EditCondition", "EnableMultiCoreRendering" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum time allotted for each Sound Engine job in microseconds (0 is unlimited). Requires Editor restart." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkAdvancedInitializationSettingsWithMultiCoreRendering constinit property declarations 
	static void NewProp_EnableMultiCoreRendering_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettingsWithMultiCoreRendering*)Obj)->EnableMultiCoreRendering = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableMultiCoreRendering;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNumJobWorkers;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_JobWorkerMaxExecutionTimeUSec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkAdvancedInitializationSettingsWithMultiCoreRendering constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettingsWithMultiCoreRendering>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>() == std::is_polymorphic<FAkAdvancedInitializationSettings>(), "USTRUCT FAkAdvancedInitializationSettingsWithMultiCoreRendering cannot be polymorphic unless super FAkAdvancedInitializationSettings is polymorphic");

// ********** Begin ScriptStruct FAkAdvancedInitializationSettingsWithMultiCoreRendering Property Definitions 
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_EnableMultiCoreRendering = { "EnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), &UHT_STATICS::NewProp_EnableMultiCoreRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableMultiCoreRendering_MetaData), NewProp_EnableMultiCoreRendering_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_MaxNumJobWorkers = { "MaxNumJobWorkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettingsWithMultiCoreRendering, MaxNumJobWorkers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumJobWorkers_MetaData), NewProp_MaxNumJobWorkers_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_JobWorkerMaxExecutionTimeUSec = { "JobWorkerMaxExecutionTimeUSec", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettingsWithMultiCoreRendering, JobWorkerMaxExecutionTimeUSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JobWorkerMaxExecutionTimeUSec_MetaData), NewProp_JobWorkerMaxExecutionTimeUSec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnableMultiCoreRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxNumJobWorkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_JobWorkerMaxExecutionTimeUSec,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkAdvancedInitializationSettingsWithMultiCoreRendering Property Definitions 
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings,
	&NewStructOps,
	"AkAdvancedInitializationSettingsWithMultiCoreRendering",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(),
	alignof(FAkAdvancedInitializationSettingsWithMultiCoreRendering),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering;
UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"));
		}
		return Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkAdvancedInitializationSettingsWithMultiCoreRendering *************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AkAudio_EAkPanningRule, TEXT("EAkPanningRule"), &ZRIE_EAkPanningRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3345292839U) },
		{ Z_Construct_UEnum_AkAudio_EAkChannelConfigType, TEXT("EAkChannelConfigType"), &ZRIE_EAkChannelConfigType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2565471063U) },
		{ Z_Construct_UEnum_AkAudio_EAkChannelMask, TEXT("EAkChannelMask"), &ZRIE_EAkChannelMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1519023824U) },
		{ Z_Construct_UEnum_AkAudio_EAkTransmissionOperation, TEXT("EAkTransmissionOperation"), &ZRIE_EAkTransmissionOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1637555526U) },
		{ Z_Construct_UEnum_AkAudio_EAkCommSystem, TEXT("EAkCommSystem"), &ZRIE_EAkCommSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1646647099U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAkMainOutputSettings, Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewStructOps, TEXT("AkMainOutputSettings"),&Z_Registration_Info_UScriptStruct_FAkMainOutputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMainOutputSettings), 2868997988U) },
		{ Z_Construct_UScriptStruct_FAkSpatialAudioSettings, Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewStructOps, TEXT("AkSpatialAudioSettings"),&Z_Registration_Info_UScriptStruct_FAkSpatialAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSpatialAudioSettings), 1717306858U) },
		{ Z_Construct_UScriptStruct_FAkCommunicationSettings, Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewStructOps, TEXT("AkCommunicationSettings"),&Z_Registration_Info_UScriptStruct_FAkCommunicationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommunicationSettings), 3200058031U) },
		{ Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewStructOps, TEXT("AkCommunicationSettingsWithSystemInitialization"),&Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommunicationSettingsWithSystemInitialization), 2384606157U) },
		{ Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewStructOps, TEXT("AkCommunicationSettingsWithCommSelection"),&Z_Registration_Info_UScriptStruct_FAkCommunicationSettingsWithCommSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommunicationSettingsWithCommSelection), 73283194U) },
		{ Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings, Z_Construct_UScriptStruct_FAkMemoryArenaInitializationSettings_Statics::NewStructOps, TEXT("AkMemoryArenaInitializationSettings"),&Z_Registration_Info_UScriptStruct_FAkMemoryArenaInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMemoryArenaInitializationSettings), 3493145806U) },
		{ Z_Construct_UScriptStruct_FAkCommonInitializationSettings, Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewStructOps, TEXT("AkCommonInitializationSettings"),&Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommonInitializationSettings), 1747036840U) },
		{ Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewStructOps, TEXT("AkCommonInitializationSettingsWithSampleRate"),&Z_Registration_Info_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommonInitializationSettingsWithSampleRate), 3301340787U) },
		{ Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkAdvancedInitializationSettings"),&Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAdvancedInitializationSettings), 1519242750U) },
		{ Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewStructOps, TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"),&Z_Registration_Info_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), 2688922822U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h__Script_AkAudio_ace24d99fddcff23142170722e1d55252f1660c3{
	TEXT("/Script/AkAudio"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
