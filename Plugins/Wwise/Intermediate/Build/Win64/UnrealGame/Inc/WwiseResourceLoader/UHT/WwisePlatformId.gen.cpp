// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/WwisePlatformId.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwisePlatformId() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwisePlatformId(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwisePlatformId **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwisePlatformId_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwisePlatformId>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwisePlatformId); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwisePlatformId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformGuid_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwisePlatformId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/WwisePlatformId.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathRelativeToGeneratedSoundBanks_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwisePlatformId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceRootPath_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwisePlatformId.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwisePlatformId constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformGuid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlatformName;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PathRelativeToGeneratedSoundBanks;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExternalSourceRootPath;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwisePlatformId constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwisePlatformId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwisePlatformId Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlatformGuid = { "PlatformGuid", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FWwisePlatformId, PlatformGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformGuid_MetaData), NewProp_PlatformGuid_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwisePlatformId, PlatformName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformName_MetaData), NewProp_PlatformName_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_PathRelativeToGeneratedSoundBanks = { "PathRelativeToGeneratedSoundBanks", nullptr, (EPropertyFlags)0x0010000800022801, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwisePlatformId, PathRelativeToGeneratedSoundBanks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathRelativeToGeneratedSoundBanks_MetaData), NewProp_PathRelativeToGeneratedSoundBanks_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ExternalSourceRootPath = { "ExternalSourceRootPath", nullptr, (EPropertyFlags)0x0010000800022801, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwisePlatformId, ExternalSourceRootPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSourceRootPath_MetaData), NewProp_ExternalSourceRootPath_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlatformGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlatformName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PathRelativeToGeneratedSoundBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSourceRootPath,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwisePlatformId Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwisePlatformId",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwisePlatformId>(),
	alignof(FWwisePlatformId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwisePlatformId;
UScriptStruct* Z_Construct_UScriptStruct_FWwisePlatformId(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwisePlatformId.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwisePlatformId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwisePlatformId, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwisePlatformId"));
		}
		return Z_Registration_Info_UScriptStruct_FWwisePlatformId.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwisePlatformId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwisePlatformId.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwisePlatformId.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwisePlatformId ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwisePlatformId_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwisePlatformId, Z_Construct_UScriptStruct_FWwisePlatformId_Statics::NewStructOps, TEXT("WwisePlatformId"),&Z_Registration_Info_UScriptStruct_FWwisePlatformId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwisePlatformId), 4114687670U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwisePlatformId_h__Script_WwiseResourceLoader_ccf40ceb9769a2bb397ff8b80b387bbf9d7982bc{
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
