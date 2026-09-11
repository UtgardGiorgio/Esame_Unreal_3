// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseLocalizedEventCookedData.h"
#include "Wwise/CookedData/WwiseEventCookedData.h"
#include "Wwise/CookedData/WwiseLanguageCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseLocalizedEventCookedData() {}

// ********** Begin Cross Module References ********************************************************
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventCookedData(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseLocalizedEventCookedData ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseLocalizedEventCookedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseLocalizedEventCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventLanguageMap_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedEventCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* @brief Short ID for the Event.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedEventCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Short ID for the Event." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseLocalizedEventCookedData constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventLanguageMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventLanguageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EventLanguageMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EventId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseLocalizedEventCookedData constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLocalizedEventCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseLocalizedEventCookedData Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventLanguageMap_ValueProp = { "EventLanguageMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseEventCookedData, METADATA_PARAMS(0, nullptr) }; // 4454fe6a623111bca35a40afd9b0cf619384fba1
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventLanguageMap_Key_KeyProp = { "EventLanguageMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(0, nullptr) }; // fabfa47fc3485876f777252a42ac73e6b331ad40
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_EventLanguageMap = { "EventLanguageMap", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedEventCookedData, EventLanguageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventLanguageMap_MetaData), NewProp_EventLanguageMap_MetaData) }; // fabfa47fc3485876f777252a42ac73e6b331ad40 4454fe6a623111bca35a40afd9b0cf619384fba1
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedEventCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedEventCookedData, EventId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventId_MetaData), NewProp_EventId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventLanguageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventLanguageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventLanguageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseLocalizedEventCookedData Property Definitions *****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseLocalizedEventCookedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseLocalizedEventCookedData>(),
	alignof(FWwiseLocalizedEventCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseLocalizedEventCookedData"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseLocalizedEventCookedData **************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedEventCookedData_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData, Z_Construct_UScriptStruct_FWwiseLocalizedEventCookedData_Statics::NewStructOps, TEXT("WwiseLocalizedEventCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseLocalizedEventCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLocalizedEventCookedData), 25094171U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedEventCookedData_h__Script_WwiseResourceLoader_ef7b2b008ba03c87241c3584aa5a886abc3cbf18{
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
