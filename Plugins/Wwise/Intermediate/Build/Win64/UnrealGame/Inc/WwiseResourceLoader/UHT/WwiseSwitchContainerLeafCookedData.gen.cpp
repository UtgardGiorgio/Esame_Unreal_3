// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseSwitchContainerLeafCookedData.h"
#include "Wwise/CookedData/WwiseExternalSourceCookedData.h"
#include "Wwise/CookedData/WwiseGroupValueCookedData.h"
#include "Wwise/CookedData/WwiseMediaCookedData.h"
#include "Wwise/CookedData/WwiseSoundBankCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseSwitchContainerLeafCookedData() {}

// ********** Begin Cross Module References ********************************************************
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseSwitchContainerLeafCookedData *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseSwitchContainerLeafCookedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseSwitchContainerLeafCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSwitchContainerLeafCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupValueSet_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSwitchContainerLeafCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSwitchContainerLeafCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSwitchContainerLeafCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSwitchContainerLeafCookedData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseSwitchContainerLeafCookedData constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupValueSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_GroupValueSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBanks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Media_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Media;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseSwitchContainerLeafCookedData constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSwitchContainerLeafCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseSwitchContainerLeafCookedData Property Definitions **********
static_assert(TModels_V<CGetTypeHashable, FWwiseGroupValueCookedData>, "The structure 'FWwiseGroupValueCookedData' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GroupValueSet_ElementProp = { "GroupValueSet", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseGroupValueCookedData, METADATA_PARAMS(0, nullptr) }; // 8fb3596f777e55e972cf5e3a06645453788eceb2
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_GroupValueSet = { "GroupValueSet", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSwitchContainerLeafCookedData, GroupValueSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupValueSet_MetaData), NewProp_GroupValueSet_MetaData) }; // 8fb3596f777e55e972cf5e3a06645453788eceb2
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 79727ff0bcc59bf45dec032eb64f33eabfea10bb
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSwitchContainerLeafCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBanks_MetaData), NewProp_SoundBanks_MetaData) }; // 79727ff0bcc59bf45dec032eb64f33eabfea10bb
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseMediaCookedData, METADATA_PARAMS(0, nullptr) }; // 1e0bc38a8ffd775b1dce401090c8635ffb5a8850
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSwitchContainerLeafCookedData, Media), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Media_MetaData), NewProp_Media_MetaData) }; // 1e0bc38a8ffd775b1dce401090c8635ffb5a8850
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseExternalSourceCookedData, METADATA_PARAMS(0, nullptr) }; // 7821e65c7a5265489321d85f8b0110971a1ce1ac
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSwitchContainerLeafCookedData, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSources_MetaData), NewProp_ExternalSources_MetaData) }; // 7821e65c7a5265489321d85f8b0110971a1ce1ac
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroupValueSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroupValueSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBanks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Media_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Media,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSources,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseSwitchContainerLeafCookedData Property Definitions ************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseSwitchContainerLeafCookedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseSwitchContainerLeafCookedData>(),
	alignof(FWwiseSwitchContainerLeafCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseSwitchContainerLeafCookedData;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseSwitchContainerLeafCookedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseSwitchContainerLeafCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseSwitchContainerLeafCookedData"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseSwitchContainerLeafCookedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseSwitchContainerLeafCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseSwitchContainerLeafCookedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseSwitchContainerLeafCookedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseSwitchContainerLeafCookedData *********************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseSwitchContainerLeafCookedData_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData, Z_Construct_UScriptStruct_FWwiseSwitchContainerLeafCookedData_Statics::NewStructOps, TEXT("WwiseSwitchContainerLeafCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseSwitchContainerLeafCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSwitchContainerLeafCookedData), 3380936051U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseSwitchContainerLeafCookedData_h__Script_WwiseResourceLoader_926d202fbd84681af06582be3a7bfd7dbf67ffe1{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
