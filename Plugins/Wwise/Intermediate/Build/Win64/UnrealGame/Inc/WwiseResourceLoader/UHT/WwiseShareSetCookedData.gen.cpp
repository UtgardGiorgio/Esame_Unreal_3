// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseShareSetCookedData.h"
#include "Wwise/CookedData/WwiseMediaCookedData.h"
#include "Wwise/CookedData/WwiseSoundBankCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseShareSetCookedData() {}

// ********** Begin Cross Module References ********************************************************
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseShareSetCookedData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseShareSetCookedData ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseShareSetCookedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseShareSetCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseShareSetCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShareSetId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseShareSetCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseShareSetCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseShareSetCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseShareSetCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseShareSetCookedData constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShareSetId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBanks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Media_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Media;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseShareSetCookedData constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseShareSetCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseShareSetCookedData Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ShareSetId = { "ShareSetId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseShareSetCookedData, ShareSetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShareSetId_MetaData), NewProp_ShareSetId_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 79727ff0bcc59bf45dec032eb64f33eabfea10bb
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseShareSetCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBanks_MetaData), NewProp_SoundBanks_MetaData) }; // 79727ff0bcc59bf45dec032eb64f33eabfea10bb
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseMediaCookedData, METADATA_PARAMS(0, nullptr) }; // 1e0bc38a8ffd775b1dce401090c8635ffb5a8850
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseShareSetCookedData, Media), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Media_MetaData), NewProp_Media_MetaData) }; // 1e0bc38a8ffd775b1dce401090c8635ffb5a8850
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseShareSetCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShareSetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBanks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Media_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Media,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseShareSetCookedData Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseShareSetCookedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseShareSetCookedData>(),
	alignof(FWwiseShareSetCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseShareSetCookedData;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseShareSetCookedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseShareSetCookedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseShareSetCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseShareSetCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseShareSetCookedData"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseShareSetCookedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseShareSetCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseShareSetCookedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseShareSetCookedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseShareSetCookedData ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseShareSetCookedData_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseShareSetCookedData, Z_Construct_UScriptStruct_FWwiseShareSetCookedData_Statics::NewStructOps, TEXT("WwiseShareSetCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseShareSetCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseShareSetCookedData), 544830003U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseShareSetCookedData_h__Script_WwiseResourceLoader_4db8243c316039f9f2aec74a19d81fa4e4693818{
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
