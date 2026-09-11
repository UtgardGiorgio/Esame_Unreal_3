// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseExternalSourceMediaInfo() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseSimpleExternalSource(ETypeConstructPhase);
WWISESIMPLEEXTERNALSOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseExternalSourceMediaInfo *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseExternalSourceMediaInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseExternalSourceMediaInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Contains the necessary info package and load an external source media\n//There should be one entry for each external source media in the project \n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains the necessary info package and load an external source media\nThere should be one entry for each external source media in the project" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceMediaInfoId_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaName_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CodecID_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStreamed_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDeviceMemory_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryAlignment_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrefetchSize_MetaData[] = {
		{ "Category", "ExternalSourceMedia" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceMediaInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseExternalSourceMediaInfo constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalSourceMediaInfoId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MediaName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CodecID;
	static void NewProp_bIsStreamed_SetBit(void* Obj)
	{
		((FWwiseExternalSourceMediaInfo*)Obj)->bIsStreamed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStreamed;
	static void NewProp_bUseDeviceMemory_SetBit(void* Obj)
	{
		((FWwiseExternalSourceMediaInfo*)Obj)->bUseDeviceMemory = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDeviceMemory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MemoryAlignment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrefetchSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseExternalSourceMediaInfo constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseExternalSourceMediaInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FWwiseExternalSourceMediaInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWwiseExternalSourceMediaInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

// ********** Begin ScriptStruct FWwiseExternalSourceMediaInfo Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ExternalSourceMediaInfoId = { "ExternalSourceMediaInfoId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, ExternalSourceMediaInfoId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSourceMediaInfoId_MetaData), NewProp_ExternalSourceMediaInfoId_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_MediaName = { "MediaName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, MediaName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaName_MetaData), NewProp_MediaName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CodecID = { "CodecID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, CodecID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CodecID_MetaData), NewProp_CodecID_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsStreamed = { "bIsStreamed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FWwiseExternalSourceMediaInfo), &UHT_STATICS::NewProp_bIsStreamed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStreamed_MetaData), NewProp_bIsStreamed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseDeviceMemory = { "bUseDeviceMemory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FWwiseExternalSourceMediaInfo), &UHT_STATICS::NewProp_bUseDeviceMemory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDeviceMemory_MetaData), NewProp_bUseDeviceMemory_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MemoryAlignment = { "MemoryAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, MemoryAlignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryAlignment_MetaData), NewProp_MemoryAlignment_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PrefetchSize = { "PrefetchSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceMediaInfo, PrefetchSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrefetchSize_MetaData), NewProp_PrefetchSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSourceMediaInfoId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CodecID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsStreamed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseDeviceMemory,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MemoryAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrefetchSize,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseExternalSourceMediaInfo Property Definitions ******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseSimpleExternalSource,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WwiseExternalSourceMediaInfo",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseExternalSourceMediaInfo>(),
	alignof(FWwiseExternalSourceMediaInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseExternalSourceMediaInfo;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseExternalSourceMediaInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseExternalSourceMediaInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo, (UObject*)Z_Construct_UPackage__Script_WwiseSimpleExternalSource(ETypeConstructPhase::Outer), TEXT("WwiseExternalSourceMediaInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseExternalSourceMediaInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseExternalSourceMediaInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseExternalSourceMediaInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseExternalSourceMediaInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseExternalSourceMediaInfo ***************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceMediaInfo_h__Script_WwiseSimpleExternalSource_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo, Z_Construct_UScriptStruct_FWwiseExternalSourceMediaInfo_Statics::NewStructOps, TEXT("WwiseExternalSourceMediaInfo"),&Z_Registration_Info_UScriptStruct_FWwiseExternalSourceMediaInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseExternalSourceMediaInfo), 1239647958U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceMediaInfo_h__Script_WwiseSimpleExternalSource_6e2d4bcbbcfa05ce4eff76f0b9992073e03920e9{
	TEXT("/Script/WwiseSimpleExternalSource"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
