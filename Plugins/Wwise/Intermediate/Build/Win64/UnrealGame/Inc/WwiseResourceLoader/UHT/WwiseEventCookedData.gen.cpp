// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseEventCookedData.h"
#include "Wwise/CookedData/WwiseExternalSourceCookedData.h"
#include "Wwise/CookedData/WwiseGroupValueCookedData.h"
#include "Wwise/CookedData/WwiseMediaCookedData.h"
#include "Wwise/CookedData/WwiseSoundBankCookedData.h"
#include "Wwise/CookedData/WwiseSwitchContainerLeafCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseEventCookedData() {}

// ********** Begin Cross Module References ********************************************************
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventCookedData(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EWwiseEventDestroyOptions *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions_Statics
template<> WWISERESOURCELOADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseEventDestroyOptions>()
{
	return Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
		{ "StopEventOnDestroy.Name", "EWwiseEventDestroyOptions::StopEventOnDestroy" },
		{ "WaitForEventEnd.Name", "EWwiseEventDestroyOptions::WaitForEventEnd" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseEventDestroyOptions::StopEventOnDestroy", (int64)EWwiseEventDestroyOptions::StopEventOnDestroy },
		{ "EWwiseEventDestroyOptions::WaitForEventEnd", (int64)EWwiseEventDestroyOptions::WaitForEventEnd },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	"EWwiseEventDestroyOptions",
	"EWwiseEventDestroyOptions",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EWwiseEventDestroyOptions;
UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EWwiseEventDestroyOptions.OuterSingleton)
		{
			ZRIE_EWwiseEventDestroyOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("EWwiseEventDestroyOptions"));
		}
		return ZRIE_EWwiseEventDestroyOptions.OuterSingleton;
	}
	if (!ZRIE_EWwiseEventDestroyOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EWwiseEventDestroyOptions.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EWwiseEventDestroyOptions.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EWwiseEventDestroyOptions ***************************************************

// ********** Begin ScriptStruct FWwiseEventCookedData *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseEventCookedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseEventCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchContainerLeaves_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredGroupValueSet_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyOptions_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseEventCookedData constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_EventId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBanks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Media_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Media;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchContainerLeaves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SwitchContainerLeaves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredGroupValueSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RequiredGroupValueSet;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseEventCookedData constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseEventCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseEventCookedData Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, EventId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventId_MetaData), NewProp_EventId_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 79727ff0bcc59bf45dec032eb64f33eabfea10bb
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBanks_MetaData), NewProp_SoundBanks_MetaData) }; // 79727ff0bcc59bf45dec032eb64f33eabfea10bb
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseMediaCookedData, METADATA_PARAMS(0, nullptr) }; // 1e0bc38a8ffd775b1dce401090c8635ffb5a8850
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, Media), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Media_MetaData), NewProp_Media_MetaData) }; // 1e0bc38a8ffd775b1dce401090c8635ffb5a8850
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData, METADATA_PARAMS(0, nullptr) }; // 7821e65c7a5265489321d85f8b0110971a1ce1ac
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSources_MetaData), NewProp_ExternalSources_MetaData) }; // 7821e65c7a5265489321d85f8b0110971a1ce1ac
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SwitchContainerLeaves_Inner = { "SwitchContainerLeaves", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData, METADATA_PARAMS(0, nullptr) }; // c984fd73fbd415075a76b99437a8e52a77975d98
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SwitchContainerLeaves = { "SwitchContainerLeaves", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, SwitchContainerLeaves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchContainerLeaves_MetaData), NewProp_SwitchContainerLeaves_MetaData) }; // c984fd73fbd415075a76b99437a8e52a77975d98
static_assert(TModels_V<CGetTypeHashable, FWwiseGroupValueCookedData>, "The structure 'FWwiseGroupValueCookedData' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RequiredGroupValueSet_ElementProp = { "RequiredGroupValueSet", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseGroupValueCookedData, METADATA_PARAMS(0, nullptr) }; // 8fb3596f777e55e972cf5e3a06645453788eceb2
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_RequiredGroupValueSet = { "RequiredGroupValueSet", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, RequiredGroupValueSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredGroupValueSet_MetaData), NewProp_RequiredGroupValueSet_MetaData) }; // 8fb3596f777e55e972cf5e3a06645453788eceb2
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyOptions_MetaData), NewProp_DestroyOptions_MetaData) }; // 31f999005d7e6bdd726d3bf20fd86c9d30fde542
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBanks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Media_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Media,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchContainerLeaves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchContainerLeaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequiredGroupValueSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequiredGroupValueSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseEventCookedData Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseEventCookedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseEventCookedData>(),
	alignof(FWwiseEventCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseEventCookedData;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventCookedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseEventCookedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseEventCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseEventCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseEventCookedData"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseEventCookedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseEventCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseEventCookedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseEventCookedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseEventCookedData ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseEventCookedData_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, TEXT("EWwiseEventDestroyOptions"), &ZRIE_EWwiseEventDestroyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 838441216U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseEventCookedData, Z_Construct_UScriptStruct_FWwiseEventCookedData_Statics::NewStructOps, TEXT("WwiseEventCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseEventCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseEventCookedData), 1146420842U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseEventCookedData_h__Script_WwiseResourceLoader_5cf3bc1c1106ff43aefbd92e387d3c3412ac3e0c{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
