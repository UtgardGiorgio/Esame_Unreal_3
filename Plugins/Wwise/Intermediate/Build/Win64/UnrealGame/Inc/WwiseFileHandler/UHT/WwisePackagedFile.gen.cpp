// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/WwisePackagedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwisePackagedFile() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseFileHandler(ETypeConstructPhase);
WWISEFILEHANDLER_API UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwisePackagingStrategy(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwisePackagedFile(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EWwisePackagingStrategy ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_WwiseFileHandler_EWwisePackagingStrategy_Statics
template<> WWISEFILEHANDLER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwisePackagingStrategy>()
{
	return Z_Construct_UEnum_WwiseFileHandler_EWwisePackagingStrategy(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdditionalFile.Comment", "/// File is stored outside of the UAsset, through the \"CookAdditionalFilesOverride\" method. \n" },
		{ "AdditionalFile.Name", "EWwisePackagingStrategy::AdditionalFile" },
		{ "AdditionalFile.ToolTip", "File is stored outside of the UAsset, through the \"CookAdditionalFilesOverride\" method." },
		{ "BlueprintType", "true" },
		{ "BulkData.Comment", "/// File is stored in the Bulk Data.\n" },
		{ "BulkData.Name", "EWwisePackagingStrategy::BulkData" },
		{ "BulkData.ToolTip", "File is stored in the Bulk Data." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Determines how to package this FWwisePackagedFile.\n */" },
#endif
		{ "External.Comment", "/// File is stored externally (in a library, elsewhere.)\n" },
		{ "External.Name", "EWwisePackagingStrategy::External" },
		{ "External.ToolTip", "File is stored externally (in a library, elsewhere.)" },
		{ "HybridAdditionalFile.Comment", "/// File is stored outside of the UAsset. However, the prefetch is stored in the Bulk Data.\n" },
		{ "HybridAdditionalFile.Name", "EWwisePackagingStrategy::HybridAdditionalFile" },
		{ "HybridAdditionalFile.ToolTip", "File is stored outside of the UAsset. However, the prefetch is stored in the Bulk Data." },
		{ "ModuleRelativePath", "Public/Wwise/WwisePackagedFile.h" },
		{ "Source.Comment", "/// No packaging. Retrieve the file directly from the Generated SoundBanks.\n" },
		{ "Source.Name", "EWwisePackagingStrategy::Source" },
		{ "Source.ToolTip", "No packaging. Retrieve the file directly from the Generated SoundBanks." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Determines how to package this FWwisePackagedFile." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwisePackagingStrategy::Source", (int64)EWwisePackagingStrategy::Source },
		{ "EWwisePackagingStrategy::AdditionalFile", (int64)EWwisePackagingStrategy::AdditionalFile },
		{ "EWwisePackagingStrategy::HybridAdditionalFile", (int64)EWwisePackagingStrategy::HybridAdditionalFile },
		{ "EWwisePackagingStrategy::BulkData", (int64)EWwisePackagingStrategy::BulkData },
		{ "EWwisePackagingStrategy::External", (int64)EWwisePackagingStrategy::External },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseFileHandler,
	nullptr,
	"EWwisePackagingStrategy",
	"EWwisePackagingStrategy",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EWwisePackagingStrategy;
UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwisePackagingStrategy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EWwisePackagingStrategy.OuterSingleton)
		{
			ZRIE_EWwisePackagingStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseFileHandler_EWwisePackagingStrategy, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(ETypeConstructPhase::Outer), TEXT("EWwisePackagingStrategy"));
		}
		return ZRIE_EWwisePackagingStrategy.OuterSingleton;
	}
	if (!ZRIE_EWwisePackagingStrategy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EWwisePackagingStrategy.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EWwisePackagingStrategy.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EWwisePackagingStrategy *****************************************************

// ********** Begin ScriptStruct FWwisePackagedFile ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwisePackagedFile_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwisePackagedFile>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwisePackagedFile); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Defines and handles one packaged file.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/WwisePackagedFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Defines and handles one packaged file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagingStrategy_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determines how to package the file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/WwisePackagedFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines how to package the file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Path name, including the platform's root, relative to the Wwise Staging Directory specified\n\x09 * in the Wwise Integration Settings in Unreal.\n\x09 *\n\x09 * This is used either in Source or AdditionalFile, where the full path is provided here.\n\x09 *\n\x09 * In order to properly include the Project Content directory, use the GetFullPathName() method instead.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/WwisePackagedFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Path name, including the platform's root, relative to the Wwise Staging Directory specified\nin the Wwise Integration Settings in Unreal.\n\nThis is used either in Source or AdditionalFile, where the full path is provided here.\n\nIn order to properly include the Project Content directory, use the GetFullPathName() method instead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularGameplayName_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwisePackagedFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStreaming_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief When true, the asset is not fully loaded in memory at load time.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/WwisePackagedFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief When true, the asset is not fully loaded in memory at load time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrefetchSize_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief The number of bytes to retrieve at load time. Only used if streaming, in Source or AdditionalFile.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/WwisePackagedFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief The number of bytes to retrieve at load time. Only used if streaming, in Source or AdditionalFile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryAlignment_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Alignment required to load the file on device. Can be 0 if there are no particular requirements.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/WwisePackagedFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Alignment required to load the file on device. Can be 0 if there are no particular requirements." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeviceMemory_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief True if the file needs to be loaded in a special memory zone on the device.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/WwisePackagedFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief True if the file needs to be loaded in a special memory zone on the device." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePathName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Path name of the Source file within the generated SoundBanks directory.\n\x09 *\n\x09 * Used while serializing this asset in cooking exclusively.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/WwisePackagedFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Path name of the Source file within the generated SoundBanks directory.\n\nUsed while serializing this asset in cooking exclusively." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Debug name of the asset, as used for logging during packaging.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/WwisePackagedFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Debug name of the asset, as used for logging during packaging." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseProjectUsageCount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Number of usages in the Wwise project.\n\x09 *\n\x09 * Using the same file in two different Events, or the same Event in two different Switch Containers, will mark the file to 2.\n\x09 * It can be 0 if undefined.\n\x09 *\n\x09 * This is not a ref-count!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/WwisePackagedFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Number of usages in the Wwise project.\n\nUsing the same file in two different Events, or the same Event in two different Switch Containers, will mark the file to 2.\nIt can be 0 if undefined.\n\nThis is not a ref-count!" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Content identification hash. Typically defined with the asset type, Short ID, and a language.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/WwisePackagedFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Content identification hash. Typically defined with the asset type, Short ID, and a language." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwisePackagedFile constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_PackagingStrategy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PackagingStrategy;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PathName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ModularGameplayName;
	static void NewProp_bStreaming_SetBit(void* Obj)
	{
		((FWwisePackagedFile*)Obj)->bStreaming = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreaming;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrefetchSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MemoryAlignment;
	static void NewProp_bDeviceMemory_SetBit(void* Obj)
	{
		((FWwisePackagedFile*)Obj)->bDeviceMemory = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeviceMemory;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePathName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseProjectUsageCount;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Hash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwisePackagedFile constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwisePackagedFile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwisePackagedFile Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PackagingStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PackagingStrategy = { "PackagingStrategy", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FWwisePackagedFile, PackagingStrategy), Z_Construct_UEnum_WwiseFileHandler_EWwisePackagingStrategy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagingStrategy_MetaData), NewProp_PackagingStrategy_MetaData) }; // 7f42eadf49a39bc3b1e8826a2089a090896bbacb
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_PathName = { "PathName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwisePackagedFile, PathName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathName_MetaData), NewProp_PathName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ModularGameplayName = { "ModularGameplayName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwisePackagedFile, ModularGameplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularGameplayName_MetaData), NewProp_ModularGameplayName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStreaming = { "bStreaming", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FWwisePackagedFile), &UHT_STATICS::NewProp_bStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStreaming_MetaData), NewProp_bStreaming_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PrefetchSize = { "PrefetchSize", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwisePackagedFile, PrefetchSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrefetchSize_MetaData), NewProp_PrefetchSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MemoryAlignment = { "MemoryAlignment", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwisePackagedFile, MemoryAlignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryAlignment_MetaData), NewProp_MemoryAlignment_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDeviceMemory = { "bDeviceMemory", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FWwisePackagedFile), &UHT_STATICS::NewProp_bDeviceMemory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeviceMemory_MetaData), NewProp_bDeviceMemory_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourcePathName = { "SourcePathName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FWwisePackagedFile, SourcePathName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePathName_MetaData), NewProp_SourcePathName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FWwisePackagedFile, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_WwiseProjectUsageCount = { "WwiseProjectUsageCount", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwisePackagedFile, WwiseProjectUsageCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseProjectUsageCount_MetaData), NewProp_WwiseProjectUsageCount_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FWwisePackagedFile, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PackagingStrategy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PackagingStrategy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModularGameplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrefetchSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MemoryAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDeviceMemory,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseProjectUsageCount,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hash,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwisePackagedFile Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseFileHandler,
	nullptr,
	&NewStructOps,
	"WwisePackagedFile",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwisePackagedFile>(),
	alignof(FWwisePackagedFile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwisePackagedFile;
UScriptStruct* Z_Construct_UScriptStruct_FWwisePackagedFile(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwisePackagedFile.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwisePackagedFile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwisePackagedFile, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(ETypeConstructPhase::Outer), TEXT("WwisePackagedFile"));
		}
		return Z_Registration_Info_UScriptStruct_FWwisePackagedFile.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwisePackagedFile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwisePackagedFile.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwisePackagedFile.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwisePackagedFile **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwisePackagedFile_h__Script_WwiseFileHandler_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_WwiseFileHandler_EWwisePackagingStrategy, TEXT("EWwisePackagingStrategy"), &ZRIE_EWwisePackagingStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2135091935U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwisePackagedFile, Z_Construct_UScriptStruct_FWwisePackagedFile_Statics::NewStructOps, TEXT("WwisePackagedFile"),&Z_Registration_Info_UScriptStruct_FWwisePackagedFile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwisePackagedFile), 1470294992U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwisePackagedFile_h__Script_WwiseFileHandler_f4c71b454a05c550a3c82310ea47b77c8183d248{
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
