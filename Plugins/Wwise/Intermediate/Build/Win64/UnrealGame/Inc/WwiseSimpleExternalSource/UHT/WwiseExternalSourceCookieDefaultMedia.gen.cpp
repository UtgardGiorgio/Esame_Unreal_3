// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/SimpleExtSrc/WwiseExternalSourceCookieDefaultMedia.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseExternalSourceCookieDefaultMedia() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseSimpleExternalSource(ETypeConstructPhase);
WWISESIMPLEEXTERNALSOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseExternalSourceCookieDefaultMedia ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseExternalSourceCookieDefaultMedia>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseExternalSourceCookieDefaultMedia); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Maps from an external source cookie to an entry in the FWwiseExternalSourceMediaInfo table\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceCookieDefaultMedia.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps from an external source cookie to an entry in the FWwiseExternalSourceMediaInfo table" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceCookie_MetaData[] = {
		{ "Category", "ExternalSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Hash of the external source name, technically a uint32\n//Used as the search key external source in the default external source table\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceCookieDefaultMedia.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash of the external source name, technically a uint32\nUsed as the search key external source in the default external source table" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceName_MetaData[] = {
		{ "Category", "ExternalSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Name of the external source name in Wwise\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceCookieDefaultMedia.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the external source name in Wwise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInfoId_MetaData[] = {
		{ "Category", "ExternalSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Id of the media in the ExternalMediaInfoTable\n//Used to lookup media in the ExternalMediaInfoTable\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceCookieDefaultMedia.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Id of the media in the ExternalMediaInfoTable\nUsed to lookup media in the ExternalMediaInfoTable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaName_MetaData[] = {
		{ "Category", "ExternalSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Not actually used, but helps keep track of what's pointing where. \n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceCookieDefaultMedia.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Not actually used, but helps keep track of what's pointing where." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseExternalSourceCookieDefaultMedia constinit property declarations 
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ExternalSourceCookie;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalSourceName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MediaInfoId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MediaName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseExternalSourceCookieDefaultMedia constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseExternalSourceCookieDefaultMedia>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FWwiseExternalSourceCookieDefaultMedia>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWwiseExternalSourceCookieDefaultMedia cannot be polymorphic unless super FTableRowBase is polymorphic");

// ********** Begin ScriptStruct FWwiseExternalSourceCookieDefaultMedia Property Definitions *******
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_ExternalSourceCookie = { "ExternalSourceCookie", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceCookieDefaultMedia, ExternalSourceCookie), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSourceCookie_MetaData), NewProp_ExternalSourceCookie_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ExternalSourceName = { "ExternalSourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceCookieDefaultMedia, ExternalSourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSourceName_MetaData), NewProp_ExternalSourceName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MediaInfoId = { "MediaInfoId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceCookieDefaultMedia, MediaInfoId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInfoId_MetaData), NewProp_MediaInfoId_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_MediaName = { "MediaName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceCookieDefaultMedia, MediaName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaName_MetaData), NewProp_MediaName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSourceCookie,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaInfoId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseExternalSourceCookieDefaultMedia Property Definitions *********
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseSimpleExternalSource,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WwiseExternalSourceCookieDefaultMedia",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseExternalSourceCookieDefaultMedia>(),
	alignof(FWwiseExternalSourceCookieDefaultMedia),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia, (UObject*)Z_Construct_UPackage__Script_WwiseSimpleExternalSource(ETypeConstructPhase::Outer), TEXT("WwiseExternalSourceCookieDefaultMedia"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseExternalSourceCookieDefaultMedia ******************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceCookieDefaultMedia_h__Script_WwiseSimpleExternalSource_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia, Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewStructOps, TEXT("WwiseExternalSourceCookieDefaultMedia"),&Z_Registration_Info_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseExternalSourceCookieDefaultMedia), 2633000356U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceCookieDefaultMedia_h__Script_WwiseSimpleExternalSource_f23425219401140a09ffe34275b1d167bf2f7692{
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
