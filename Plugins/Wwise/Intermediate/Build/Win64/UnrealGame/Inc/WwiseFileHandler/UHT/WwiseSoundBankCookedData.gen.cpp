// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseSoundBankCookedData.h"
#include "Wwise/WwisePackagedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseSoundBankCookedData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseFileHandler(ETypeConstructPhase);
WWISEFILEHANDLER_API UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwisePackagedFile(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EWwiseSoundBankType *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics
template<> WWISEFILEHANDLER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseSoundBankType>()
{
	return Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Bus.Name", "EWwiseSoundBankType::Bus" },
		{ "Event.Comment", "// = AKCODECID_BANK,\n" },
		{ "Event.Name", "EWwiseSoundBankType::Event" },
		{ "Event.ToolTip", "= AKCODECID_BANK," },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
		{ "User.Name", "EWwiseSoundBankType::User" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseSoundBankType::User", (int64)EWwiseSoundBankType::User },
		{ "EWwiseSoundBankType::Event", (int64)EWwiseSoundBankType::Event },
		{ "EWwiseSoundBankType::Bus", (int64)EWwiseSoundBankType::Bus },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseFileHandler,
	nullptr,
	"EWwiseSoundBankType",
	"EWwiseSoundBankType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EWwiseSoundBankType;
UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EWwiseSoundBankType.OuterSingleton)
		{
			ZRIE_EWwiseSoundBankType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(ETypeConstructPhase::Outer), TEXT("EWwiseSoundBankType"));
		}
		return ZRIE_EWwiseSoundBankType.OuterSingleton;
	}
	if (!ZRIE_EWwiseSoundBankType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EWwiseSoundBankType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EWwiseSoundBankType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EWwiseSoundBankType *********************************************************

// ********** Begin ScriptStruct FWwiseSoundBankCookedData *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseSoundBankCookedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseSoundBankCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Required data to load a SoundBank\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Required data to load a SoundBank" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Short ID for the SoundBank.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Short ID for the SoundBank." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bContainsMedia_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief True if the SoundBank contains media or media parts. False means a data-only SoundBank.\n\x09 *\n\x09 * Useful to load the SoundBank as a copy instead of keeping it Memory-mapped, as the SoundEngine will decode\n\x09 * data from the SoundBank, and has no use for the file itself.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief True if the SoundBank contains media or media parts. False means a data-only SoundBank.\n\nUseful to load the SoundBank as a copy instead of keeping it Memory-mapped, as the SoundEngine will decode\ndata from the SoundBank, and has no use for the file itself." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankType_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief User-created SoundBank, Event Auto-defined SoundBank, or Bus Auto-defined SoundBank.\n\x09 *\n\x09 * Useful for loading by file name.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief User-created SoundBank, Event Auto-defined SoundBank, or Bus Auto-defined SoundBank.\n\nUseful for loading by file name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagedFile_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Packaging information for this file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Packaging information for this file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPackagedFiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseSoundBankCookedData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseSoundBankCookedData constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoundBankId;
	static void NewProp_bContainsMedia_SetBit(void* Obj)
	{
		((FWwiseSoundBankCookedData*)Obj)->bContainsMedia = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bContainsMedia;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SoundBankType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundBankType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PackagedFile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalPackagedFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalPackagedFiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseSoundBankCookedData constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSoundBankCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseSoundBankCookedData Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SoundBankId = { "SoundBankId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSoundBankCookedData, SoundBankId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBankId_MetaData), NewProp_SoundBankId_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bContainsMedia = { "bContainsMedia", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FWwiseSoundBankCookedData), &UHT_STATICS::NewProp_bContainsMedia_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bContainsMedia_MetaData), NewProp_bContainsMedia_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SoundBankType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SoundBankType = { "SoundBankType", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSoundBankCookedData, SoundBankType), Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBankType_MetaData), NewProp_SoundBankType_MetaData) }; // f6f32f66239965f1b2ef760149ba0f9050d50936
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSoundBankCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PackagedFile = { "PackagedFile", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSoundBankCookedData, PackagedFile), Z_Construct_UScriptStruct_FWwisePackagedFile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagedFile_MetaData), NewProp_PackagedFile_MetaData) }; // 57a2ebd0e15d20218417bfc4d25c8ae3da89e59d
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AdditionalPackagedFiles_Inner = { "AdditionalPackagedFiles", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AdditionalPackagedFiles = { "AdditionalPackagedFiles", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSoundBankCookedData, AdditionalPackagedFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalPackagedFiles_MetaData), NewProp_AdditionalPackagedFiles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBankId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bContainsMedia,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBankType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBankType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PackagedFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdditionalPackagedFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdditionalPackagedFiles,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseSoundBankCookedData Property Definitions **********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseFileHandler,
	nullptr,
	&NewStructOps,
	"WwiseSoundBankCookedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseSoundBankCookedData>(),
	alignof(FWwiseSoundBankCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseSoundBankCookedData;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseSoundBankCookedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseSoundBankCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(ETypeConstructPhase::Outer), TEXT("WwiseSoundBankCookedData"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseSoundBankCookedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseSoundBankCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseSoundBankCookedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseSoundBankCookedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseSoundBankCookedData *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h__Script_WwiseFileHandler_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType, TEXT("EWwiseSoundBankType"), &ZRIE_EWwiseSoundBankType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4143132518U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData_Statics::NewStructOps, TEXT("WwiseSoundBankCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseSoundBankCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSoundBankCookedData), 2037546992U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseSoundBankCookedData_h__Script_WwiseFileHandler_255b5d52131db6d0080623238ff08fd8d1d21700{
	TEXT("/Script/WwiseFileHandler"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
