// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseLocalizedShareSetCookedData.h"
#include "Wwise/CookedData/WwiseLanguageCookedData.h"
#include "Wwise/CookedData/WwiseShareSetCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseLocalizedShareSetCookedData() {}

// ********** Begin Cross Module References ********************************************************
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseShareSetCookedData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseLocalizedShareSetCookedData *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseLocalizedShareSetCookedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseLocalizedShareSetCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedShareSetCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShareSetLanguageMap_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedShareSetCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedShareSetCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShareSetId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* @brief Short ID for the ShareSet.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedShareSetCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Short ID for the ShareSet." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseLocalizedShareSetCookedData constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShareSetLanguageMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShareSetLanguageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ShareSetLanguageMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShareSetId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseLocalizedShareSetCookedData constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLocalizedShareSetCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseLocalizedShareSetCookedData Property Definitions ************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ShareSetLanguageMap_ValueProp = { "ShareSetLanguageMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseShareSetCookedData, METADATA_PARAMS(0, nullptr) }; // 20797233f49997f744248b8d67f582a5a2d13d9b
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ShareSetLanguageMap_Key_KeyProp = { "ShareSetLanguageMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(0, nullptr) }; // fabfa47fc3485876f777252a42ac73e6b331ad40
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ShareSetLanguageMap = { "ShareSetLanguageMap", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedShareSetCookedData, ShareSetLanguageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShareSetLanguageMap_MetaData), NewProp_ShareSetLanguageMap_MetaData) }; // fabfa47fc3485876f777252a42ac73e6b331ad40 20797233f49997f744248b8d67f582a5a2d13d9b
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedShareSetCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ShareSetId = { "ShareSetId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedShareSetCookedData, ShareSetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShareSetId_MetaData), NewProp_ShareSetId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShareSetLanguageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShareSetLanguageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShareSetLanguageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShareSetId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseLocalizedShareSetCookedData Property Definitions **************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseLocalizedShareSetCookedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseLocalizedShareSetCookedData>(),
	alignof(FWwiseLocalizedShareSetCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseLocalizedShareSetCookedData;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedShareSetCookedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseLocalizedShareSetCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseLocalizedShareSetCookedData"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseLocalizedShareSetCookedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedShareSetCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseLocalizedShareSetCookedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseLocalizedShareSetCookedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseLocalizedShareSetCookedData ***********************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedShareSetCookedData_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData, Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData_Statics::NewStructOps, TEXT("WwiseLocalizedShareSetCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseLocalizedShareSetCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLocalizedShareSetCookedData), 2354391962U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedShareSetCookedData_h__Script_WwiseResourceLoader_116b7ca4e91c69b1429f5f071ec8c80103054fc5{
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
