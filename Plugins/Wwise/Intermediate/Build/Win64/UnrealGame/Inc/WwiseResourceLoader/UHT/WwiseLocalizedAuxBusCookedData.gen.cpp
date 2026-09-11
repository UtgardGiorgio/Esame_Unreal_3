// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseLocalizedAuxBusCookedData.h"
#include "Wwise/CookedData/WwiseAuxBusCookedData.h"
#include "Wwise/CookedData/WwiseLanguageCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseLocalizedAuxBusCookedData() {}

// ********** Begin Cross Module References ********************************************************
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAuxBusCookedData(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseLocalizedAuxBusCookedData ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseLocalizedAuxBusCookedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseLocalizedAuxBusCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedAuxBusCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusLanguageMap_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedAuxBusCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedAuxBusCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedAuxBusCookedData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseLocalizedAuxBusCookedData constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxBusLanguageMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxBusLanguageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AuxBusLanguageMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AuxBusId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseLocalizedAuxBusCookedData constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLocalizedAuxBusCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseLocalizedAuxBusCookedData Property Definitions **************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AuxBusLanguageMap_ValueProp = { "AuxBusLanguageMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseAuxBusCookedData, METADATA_PARAMS(0, nullptr) }; // 3bce1b34cecc0ab077fdba7f7f2f7e5df66d0575
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AuxBusLanguageMap_Key_KeyProp = { "AuxBusLanguageMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(0, nullptr) }; // fabfa47fc3485876f777252a42ac73e6b331ad40
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_AuxBusLanguageMap = { "AuxBusLanguageMap", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedAuxBusCookedData, AuxBusLanguageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusLanguageMap_MetaData), NewProp_AuxBusLanguageMap_MetaData) }; // fabfa47fc3485876f777252a42ac73e6b331ad40 3bce1b34cecc0ab077fdba7f7f2f7e5df66d0575
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedAuxBusCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AuxBusId = { "AuxBusId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedAuxBusCookedData, AuxBusId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusId_MetaData), NewProp_AuxBusId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxBusLanguageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxBusLanguageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxBusLanguageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxBusId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseLocalizedAuxBusCookedData Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseLocalizedAuxBusCookedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseLocalizedAuxBusCookedData>(),
	alignof(FWwiseLocalizedAuxBusCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseLocalizedAuxBusCookedData"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseLocalizedAuxBusCookedData *************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedAuxBusCookedData_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData, Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData_Statics::NewStructOps, TEXT("WwiseLocalizedAuxBusCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseLocalizedAuxBusCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLocalizedAuxBusCookedData), 910907315U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedAuxBusCookedData_h__Script_WwiseResourceLoader_482b0930828386ac23a63e4919622b548f9b5ffd{
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
