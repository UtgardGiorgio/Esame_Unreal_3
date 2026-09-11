// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseItemType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseItemType() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EWwiseItemType(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EWwiseItemType ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EWwiseItemType_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseItemType>()
{
	return Z_Construct_UEnum_AkAudio_EWwiseItemType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AcousticTexture.Name", "EWwiseItemType::AcousticTexture" },
		{ "ActorMixer.Name", "EWwiseItemType::ActorMixer" },
		{ "AudioDeviceShareSet.Name", "EWwiseItemType::AudioDeviceShareSet" },
		{ "AuxBus.Name", "EWwiseItemType::AuxBus" },
		{ "BlendContainer.Name", "EWwiseItemType::BlendContainer" },
		{ "Bus.Name", "EWwiseItemType::Bus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @enum EWwiseItemType\n * @brief Enumeration representing different types of Wwise items in a Wwise project.\n *\n * This enum defines all the possible item types that can be found in the Wwise project hierarchy,\n * including events, busses, switches, states, and various container types.\n */" },
#endif
		{ "EffectShareSet.Name", "EWwiseItemType::EffectShareSet" },
		{ "Event.Name", "EWwiseItemType::Event" },
		{ "First.Name", "EWwiseItemType::First" },
		{ "Folder.Name", "EWwiseItemType::Folder" },
		{ "GameParameter.Name", "EWwiseItemType::GameParameter" },
		{ "InitBank.Name", "EWwiseItemType::InitBank" },
		{ "Last.Name", "EWwiseItemType::Last" },
		{ "LastWwiseBrowserType.Name", "EWwiseItemType::LastWwiseBrowserType" },
		{ "ModuleRelativePath", "Classes/WwiseItemType.h" },
		{ "MotionBus.Name", "EWwiseItemType::MotionBus" },
		{ "NestedWorkUnit.Name", "EWwiseItemType::NestedWorkUnit" },
		{ "None.Name", "EWwiseItemType::None" },
		{ "PhysicalFolder.Name", "EWwiseItemType::PhysicalFolder" },
		{ "Project.Name", "EWwiseItemType::Project" },
		{ "RandomSequenceContainer.Name", "EWwiseItemType::RandomSequenceContainer" },
		{ "Sound.Name", "EWwiseItemType::Sound" },
		{ "StandaloneWorkUnit.Name", "EWwiseItemType::StandaloneWorkUnit" },
		{ "State.Name", "EWwiseItemType::State" },
		{ "StateGroup.Name", "EWwiseItemType::StateGroup" },
		{ "Switch.Name", "EWwiseItemType::Switch" },
		{ "SwitchContainer.Name", "EWwiseItemType::SwitchContainer" },
		{ "SwitchGroup.Name", "EWwiseItemType::SwitchGroup" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@enum EWwiseItemType\n@brief Enumeration representing different types of Wwise items in a Wwise project.\n\nThis enum defines all the possible item types that can be found in the Wwise project hierarchy,\nincluding events, busses, switches, states, and various container types." },
#endif
		{ "Trigger.Name", "EWwiseItemType::Trigger" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseItemType::Event", (int64)EWwiseItemType::Event },
		{ "EWwiseItemType::AuxBus", (int64)EWwiseItemType::AuxBus },
		{ "EWwiseItemType::AcousticTexture", (int64)EWwiseItemType::AcousticTexture },
		{ "EWwiseItemType::AudioDeviceShareSet", (int64)EWwiseItemType::AudioDeviceShareSet },
		{ "EWwiseItemType::State", (int64)EWwiseItemType::State },
		{ "EWwiseItemType::Switch", (int64)EWwiseItemType::Switch },
		{ "EWwiseItemType::GameParameter", (int64)EWwiseItemType::GameParameter },
		{ "EWwiseItemType::Trigger", (int64)EWwiseItemType::Trigger },
		{ "EWwiseItemType::EffectShareSet", (int64)EWwiseItemType::EffectShareSet },
		{ "EWwiseItemType::ActorMixer", (int64)EWwiseItemType::ActorMixer },
		{ "EWwiseItemType::Bus", (int64)EWwiseItemType::Bus },
		{ "EWwiseItemType::Project", (int64)EWwiseItemType::Project },
		{ "EWwiseItemType::StandaloneWorkUnit", (int64)EWwiseItemType::StandaloneWorkUnit },
		{ "EWwiseItemType::NestedWorkUnit", (int64)EWwiseItemType::NestedWorkUnit },
		{ "EWwiseItemType::PhysicalFolder", (int64)EWwiseItemType::PhysicalFolder },
		{ "EWwiseItemType::Folder", (int64)EWwiseItemType::Folder },
		{ "EWwiseItemType::Sound", (int64)EWwiseItemType::Sound },
		{ "EWwiseItemType::SwitchContainer", (int64)EWwiseItemType::SwitchContainer },
		{ "EWwiseItemType::RandomSequenceContainer", (int64)EWwiseItemType::RandomSequenceContainer },
		{ "EWwiseItemType::BlendContainer", (int64)EWwiseItemType::BlendContainer },
		{ "EWwiseItemType::MotionBus", (int64)EWwiseItemType::MotionBus },
		{ "EWwiseItemType::StateGroup", (int64)EWwiseItemType::StateGroup },
		{ "EWwiseItemType::SwitchGroup", (int64)EWwiseItemType::SwitchGroup },
		{ "EWwiseItemType::InitBank", (int64)EWwiseItemType::InitBank },
		{ "EWwiseItemType::First", (int64)EWwiseItemType::First },
		{ "EWwiseItemType::Last", (int64)EWwiseItemType::Last },
		{ "EWwiseItemType::LastWwiseBrowserType", (int64)EWwiseItemType::LastWwiseBrowserType },
		{ "EWwiseItemType::None", (int64)EWwiseItemType::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EWwiseItemType",
	"EWwiseItemType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EWwiseItemType;
UEnum* Z_Construct_UEnum_AkAudio_EWwiseItemType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EWwiseItemType.OuterSingleton)
		{
			ZRIE_EWwiseItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EWwiseItemType, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EWwiseItemType"));
		}
		return ZRIE_EWwiseItemType.OuterSingleton;
	}
	if (!ZRIE_EWwiseItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EWwiseItemType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EWwiseItemType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EWwiseItemType **************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_WwiseItemType_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AkAudio_EWwiseItemType, TEXT("EWwiseItemType"), &ZRIE_EWwiseItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1435991361U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_WwiseItemType_h__Script_AkAudio_eeed3883087b10fc2b76367fa76b3309b0ec1530{
	TEXT("/Script/AkAudio"),
	nullptr, 0,
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
