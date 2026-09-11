// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseInitBankCookedData.h"
#include "Wwise/CookedData/WwiseLanguageCookedData.h"
#include "Wwise/CookedData/WwiseMediaCookedData.h"
#include "Wwise/CookedData/WwiseSoundBankCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseInitBankCookedData() {}

// ********** Begin Cross Module References ********************************************************
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseInitBankCookedData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseInitBankCookedData ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseInitBankCookedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseInitBankCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseInitBankCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseInitBankCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseInitBankCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseInitBankCookedData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseInitBankCookedData constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBanks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Media_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Media;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Language_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Language;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseInitBankCookedData constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseInitBankCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FWwiseInitBankCookedData>() == std::is_polymorphic<FWwiseSoundBankCookedData>(), "USTRUCT FWwiseInitBankCookedData cannot be polymorphic unless super FWwiseSoundBankCookedData is polymorphic");

// ********** Begin ScriptStruct FWwiseInitBankCookedData Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 79727ff0bcc59bf45dec032eb64f33eabfea10bb
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseInitBankCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBanks_MetaData), NewProp_SoundBanks_MetaData) }; // 79727ff0bcc59bf45dec032eb64f33eabfea10bb
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseMediaCookedData, METADATA_PARAMS(0, nullptr) }; // 1e0bc38a8ffd775b1dce401090c8635ffb5a8850
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseInitBankCookedData, Media), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Media_MetaData), NewProp_Media_MetaData) }; // 1e0bc38a8ffd775b1dce401090c8635ffb5a8850
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Language_Inner = { "Language", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(0, nullptr) }; // fabfa47fc3485876f777252a42ac73e6b331ad40
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseInitBankCookedData, Language), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) }; // fabfa47fc3485876f777252a42ac73e6b331ad40
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBanks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Media_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Media,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Language_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Language,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseInitBankCookedData Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	Z_Construct_UScriptStruct_FWwiseSoundBankCookedData,
	&NewStructOps,
	"WwiseInitBankCookedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseInitBankCookedData>(),
	alignof(FWwiseInitBankCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseInitBankCookedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseInitBankCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseInitBankCookedData"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseInitBankCookedData ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseInitBankCookedData_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseInitBankCookedData, Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewStructOps, TEXT("WwiseInitBankCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseInitBankCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseInitBankCookedData), 2995917676U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseInitBankCookedData_h__Script_WwiseResourceLoader_26e2629393226fa772240f35cbcd8e521382ff3d{
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
