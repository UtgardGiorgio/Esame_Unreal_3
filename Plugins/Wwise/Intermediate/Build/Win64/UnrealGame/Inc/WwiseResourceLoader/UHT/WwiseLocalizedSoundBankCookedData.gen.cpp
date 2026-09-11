// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h"
#include "Wwise/CookedData/WwiseLanguageCookedData.h"
#include "Wwise/CookedData/WwiseSoundBankCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseLocalizedSoundBankCookedData() {}

// ********** Begin Cross Module References ********************************************************
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseLocalizedSoundBankCookedData ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseLocalizedSoundBankCookedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseLocalizedSoundBankCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankLanguageMap_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* @brief Short ID for the SoundBank.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Short ID for the SoundBank." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseLocalizedSoundBankCookedData constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBankLanguageMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBankLanguageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SoundBankLanguageMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoundBankId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseLocalizedSoundBankCookedData constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLocalizedSoundBankCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseLocalizedSoundBankCookedData Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SoundBankLanguageMap_ValueProp = { "SoundBankLanguageMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 79727ff0bcc59bf45dec032eb64f33eabfea10bb
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SoundBankLanguageMap_Key_KeyProp = { "SoundBankLanguageMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(0, nullptr) }; // fabfa47fc3485876f777252a42ac73e6b331ad40
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_SoundBankLanguageMap = { "SoundBankLanguageMap", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedSoundBankCookedData, SoundBankLanguageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBankLanguageMap_MetaData), NewProp_SoundBankLanguageMap_MetaData) }; // fabfa47fc3485876f777252a42ac73e6b331ad40 79727ff0bcc59bf45dec032eb64f33eabfea10bb
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedSoundBankCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SoundBankId = { "SoundBankId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedSoundBankCookedData, SoundBankId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBankId_MetaData), NewProp_SoundBankId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBankLanguageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBankLanguageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBankLanguageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBankId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseLocalizedSoundBankCookedData Property Definitions *************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseLocalizedSoundBankCookedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseLocalizedSoundBankCookedData>(),
	alignof(FWwiseLocalizedSoundBankCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseLocalizedSoundBankCookedData"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseLocalizedSoundBankCookedData **********************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedSoundBankCookedData_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData, Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewStructOps, TEXT("WwiseLocalizedSoundBankCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseLocalizedSoundBankCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLocalizedSoundBankCookedData), 1266179224U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedSoundBankCookedData_h__Script_WwiseResourceLoader_fa0ca22c10bc5a3e8bf523c516f8437435399db4{
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
