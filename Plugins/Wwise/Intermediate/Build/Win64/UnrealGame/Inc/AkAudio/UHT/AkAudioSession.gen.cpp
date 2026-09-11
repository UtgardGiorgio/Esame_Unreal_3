// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InitializationSettings/AkAudioSession.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAudioSession() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EAkAudioSessionCategory ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkAudioSessionCategory>()
{
	return Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Ambient.Name", "EAkAudioSessionCategory::Ambient" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "PlayAndRecord.Name", "EAkAudioSessionCategory::PlayAndRecord" },
		{ "SoloAmbient.Name", "EAkAudioSessionCategory::SoloAmbient" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkAudioSessionCategory::Ambient", (int64)EAkAudioSessionCategory::Ambient },
		{ "EAkAudioSessionCategory::SoloAmbient", (int64)EAkAudioSessionCategory::SoloAmbient },
		{ "EAkAudioSessionCategory::PlayAndRecord", (int64)EAkAudioSessionCategory::PlayAndRecord },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkAudioSessionCategory",
	"EAkAudioSessionCategory",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkAudioSessionCategory;
UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkAudioSessionCategory.OuterSingleton)
		{
			ZRIE_EAkAudioSessionCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkAudioSessionCategory"));
		}
		return ZRIE_EAkAudioSessionCategory.OuterSingleton;
	}
	if (!ZRIE_EAkAudioSessionCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkAudioSessionCategory.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkAudioSessionCategory.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkAudioSessionCategory *****************************************************

// ********** Begin Enum EAkAudioSessionCategoryOptions ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkAudioSessionCategoryOptions>()
{
	return Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AllowBluetooth.Name", "EAkAudioSessionCategoryOptions::AllowBluetooth" },
		{ "AllowBluetoothA2DP.Name", "EAkAudioSessionCategoryOptions::AllowBluetoothA2DP" },
		{ "Bitmask", "" },
		{ "DefaultToSpeaker.Name", "EAkAudioSessionCategoryOptions::DefaultToSpeaker" },
		{ "DuckOthers.Name", "EAkAudioSessionCategoryOptions::DuckOthers" },
		{ "MixWithOthers.Name", "EAkAudioSessionCategoryOptions::MixWithOthers" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkAudioSessionCategoryOptions::MixWithOthers", (int64)EAkAudioSessionCategoryOptions::MixWithOthers },
		{ "EAkAudioSessionCategoryOptions::DuckOthers", (int64)EAkAudioSessionCategoryOptions::DuckOthers },
		{ "EAkAudioSessionCategoryOptions::AllowBluetooth", (int64)EAkAudioSessionCategoryOptions::AllowBluetooth },
		{ "EAkAudioSessionCategoryOptions::DefaultToSpeaker", (int64)EAkAudioSessionCategoryOptions::DefaultToSpeaker },
		{ "EAkAudioSessionCategoryOptions::AllowBluetoothA2DP", (int64)EAkAudioSessionCategoryOptions::AllowBluetoothA2DP },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkAudioSessionCategoryOptions",
	"EAkAudioSessionCategoryOptions",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkAudioSessionCategoryOptions;
UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkAudioSessionCategoryOptions.OuterSingleton)
		{
			ZRIE_EAkAudioSessionCategoryOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkAudioSessionCategoryOptions"));
		}
		return ZRIE_EAkAudioSessionCategoryOptions.OuterSingleton;
	}
	if (!ZRIE_EAkAudioSessionCategoryOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkAudioSessionCategoryOptions.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkAudioSessionCategoryOptions.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkAudioSessionCategoryOptions **********************************************

// ********** Begin Enum EAkAudioSessionMode *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkAudioSessionMode>()
{
	return Z_Construct_UEnum_AkAudio_EAkAudioSessionMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Default.Name", "EAkAudioSessionMode::Default" },
		{ "GameChat.Name", "EAkAudioSessionMode::GameChat" },
		{ "Measurement.Name", "EAkAudioSessionMode::Measurement" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "MoviePlayback.Name", "EAkAudioSessionMode::MoviePlayback" },
		{ "VideoChat.Name", "EAkAudioSessionMode::VideoChat" },
		{ "VideoRecording.Name", "EAkAudioSessionMode::VideoRecording" },
		{ "VoiceChat.Name", "EAkAudioSessionMode::VoiceChat" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkAudioSessionMode::Default", (int64)EAkAudioSessionMode::Default },
		{ "EAkAudioSessionMode::VoiceChat", (int64)EAkAudioSessionMode::VoiceChat },
		{ "EAkAudioSessionMode::GameChat", (int64)EAkAudioSessionMode::GameChat },
		{ "EAkAudioSessionMode::VideoRecording", (int64)EAkAudioSessionMode::VideoRecording },
		{ "EAkAudioSessionMode::Measurement", (int64)EAkAudioSessionMode::Measurement },
		{ "EAkAudioSessionMode::MoviePlayback", (int64)EAkAudioSessionMode::MoviePlayback },
		{ "EAkAudioSessionMode::VideoChat", (int64)EAkAudioSessionMode::VideoChat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkAudioSessionMode",
	"EAkAudioSessionMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkAudioSessionMode;
UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkAudioSessionMode.OuterSingleton)
		{
			ZRIE_EAkAudioSessionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkAudioSessionMode"));
		}
		return ZRIE_EAkAudioSessionMode.OuterSingleton;
	}
	if (!ZRIE_EAkAudioSessionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkAudioSessionMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkAudioSessionMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkAudioSessionMode *********************************************************

// ********** Begin Enum EAkAudioSessionRouteSharingPolicy *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkAudioSessionRouteSharingPolicy>()
{
	return Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Default.Name", "EAkAudioSessionRouteSharingPolicy::Default" },
		{ "LongFormAudio.Name", "EAkAudioSessionRouteSharingPolicy::LongFormAudio" },
		{ "LongFormVideo.Name", "EAkAudioSessionRouteSharingPolicy::LongFormVideo" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkAudioSessionRouteSharingPolicy::Default", (int64)EAkAudioSessionRouteSharingPolicy::Default },
		{ "EAkAudioSessionRouteSharingPolicy::LongFormAudio", (int64)EAkAudioSessionRouteSharingPolicy::LongFormAudio },
		{ "EAkAudioSessionRouteSharingPolicy::LongFormVideo", (int64)EAkAudioSessionRouteSharingPolicy::LongFormVideo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkAudioSessionRouteSharingPolicy",
	"EAkAudioSessionRouteSharingPolicy",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkAudioSessionRouteSharingPolicy;
UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkAudioSessionRouteSharingPolicy.OuterSingleton)
		{
			ZRIE_EAkAudioSessionRouteSharingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkAudioSessionRouteSharingPolicy"));
		}
		return ZRIE_EAkAudioSessionRouteSharingPolicy.OuterSingleton;
	}
	if (!ZRIE_EAkAudioSessionRouteSharingPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkAudioSessionRouteSharingPolicy.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkAudioSessionRouteSharingPolicy.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkAudioSessionRouteSharingPolicy *******************************************

// ********** Begin ScriptStruct FAkAudioSession ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkAudioSession_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkAudioSession>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkAudioSession); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionCategory_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The IDs of the iOS audio session categories, useful for defining app-level audio behaviours such as inter-app audio mixing policies and audio routing behaviours.These IDs are functionally equivalent to the corresponding constants defined by the iOS audio session service back-end (AVAudioSession). Refer to Xcode documentation for details on the audio session categories." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionCategoryOptions_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkAudioSessionCategoryOptions" },
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The IDs of the iOS audio session category options, used for customizing the audio session category features. These IDs are functionally equivalent to the corresponding constants defined by the iOS audio session service back-end (AVAudioSession). Refer to Xcode documentation for details on the audio session category options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionMode_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The IDs of the iOS audio session modes, used for customizing the audio session for typical app types. These IDs are functionally equivalent to the corresponding constants defined by the iOS audio session service back-end (AVAudioSession). Refer to Xcode documentation for details on the audio session category options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSessionRouteSharingPolicy_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "MinWwiseVersion", "2024.1" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines which audio routes are permitted for the audio session controlled by Wwise. These policies only apply for the \"Playback\" audio session category. These IDs are funtionally equivalent to the corresponding constants defined by the iOS audio session service backend (AVAudioSession). Refer to Xcode documentation for details on the audio session route-sharing policies." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkAudioSession constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioSessionCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSessionCategory;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioSessionCategoryOptions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioSessionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSessionMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioSessionRouteSharingPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSessionRouteSharingPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkAudioSession constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAudioSession>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkAudioSession Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AudioSessionCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AudioSessionCategory = { "AudioSessionCategory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionCategory), Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSessionCategory_MetaData), NewProp_AudioSessionCategory_MetaData) }; // 2a31b0c0aa36828e1fb479fa5d20252a6a2b5d06
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_AudioSessionCategoryOptions = { "AudioSessionCategoryOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionCategoryOptions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSessionCategoryOptions_MetaData), NewProp_AudioSessionCategoryOptions_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AudioSessionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AudioSessionMode = { "AudioSessionMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionMode), Z_Construct_UEnum_AkAudio_EAkAudioSessionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSessionMode_MetaData), NewProp_AudioSessionMode_MetaData) }; // 4315e861b3a9c2997971ff8c2204eff3aa191554
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AudioSessionRouteSharingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AudioSessionRouteSharingPolicy = { "AudioSessionRouteSharingPolicy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionRouteSharingPolicy), Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSessionRouteSharingPolicy_MetaData), NewProp_AudioSessionRouteSharingPolicy_MetaData) }; // ccde078b4c7bc133d70964908f5d3860b7053557
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioSessionCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioSessionCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioSessionCategoryOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioSessionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioSessionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioSessionRouteSharingPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioSessionRouteSharingPolicy,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkAudioSession Property Definitions ********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkAudioSession",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkAudioSession>(),
	alignof(FAkAudioSession),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkAudioSession;
UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkAudioSession.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkAudioSession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAudioSession, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkAudioSession"));
		}
		return Z_Registration_Info_UScriptStruct_FAkAudioSession.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkAudioSession.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkAudioSession.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkAudioSession.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkAudioSession *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory, TEXT("EAkAudioSessionCategory"), &ZRIE_EAkAudioSessionCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 707899584U) },
		{ Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions, TEXT("EAkAudioSessionCategoryOptions"), &ZRIE_EAkAudioSessionCategoryOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3554017178U) },
		{ Z_Construct_UEnum_AkAudio_EAkAudioSessionMode, TEXT("EAkAudioSessionMode"), &ZRIE_EAkAudioSessionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1125509217U) },
		{ Z_Construct_UEnum_AkAudio_EAkAudioSessionRouteSharingPolicy, TEXT("EAkAudioSessionRouteSharingPolicy"), &ZRIE_EAkAudioSessionRouteSharingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3437102987U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAkAudioSession, Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewStructOps, TEXT("AkAudioSession"),&Z_Registration_Info_UScriptStruct_FAkAudioSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAudioSession), 334656339U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h__Script_AkAudio_5bb3c96f03413c47af44cafd9886f0d20b4e804a{
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
