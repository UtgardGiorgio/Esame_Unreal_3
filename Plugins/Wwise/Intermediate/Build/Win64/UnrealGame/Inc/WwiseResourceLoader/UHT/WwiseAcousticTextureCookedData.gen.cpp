// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseAcousticTextureCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAcousticTextureCookedData() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseAcousticTextureCookedData ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseAcousticTextureCookedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseAcousticTextureCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionLow_MetaData[] = {
		{ "Category", "AkTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture's lower Absorption value. The percentage by which sound within a low frequency range is dampened.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture's lower Absorption value. The percentage by which sound within a low frequency range is dampened." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionMidLow_MetaData[] = {
		{ "Category", "AkTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture's mid-low Absorption value. The percentage by which sound within a mid-low frequency range is dampened.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture's mid-low Absorption value. The percentage by which sound within a mid-low frequency range is dampened." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionMidHigh_MetaData[] = {
		{ "Category", "AkTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture's mid-high Absorption value. The percentage by which sound within a mid-high frequency range is dampened.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture's mid-high Absorption value. The percentage by which sound within a mid-high frequency range is dampened." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionHigh_MetaData[] = {
		{ "Category", "AkTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture's high Absorption value. The percentage by which sound within a high frequency range is dampened.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture's high Absorption value. The percentage by which sound within a high frequency range is dampened." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseAcousticTextureCookedData constinit property declarations ***
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionLow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionMidLow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionMidHigh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionHigh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShortId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseAcousticTextureCookedData constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseAcousticTextureCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseAcousticTextureCookedData Property Definitions **************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AbsorptionLow = { "AbsorptionLow", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, AbsorptionLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionLow_MetaData), NewProp_AbsorptionLow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AbsorptionMidLow = { "AbsorptionMidLow", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, AbsorptionMidLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionMidLow_MetaData), NewProp_AbsorptionMidLow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AbsorptionMidHigh = { "AbsorptionMidHigh", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, AbsorptionMidHigh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionMidHigh_MetaData), NewProp_AbsorptionMidHigh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AbsorptionHigh = { "AbsorptionHigh", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, AbsorptionHigh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionHigh_MetaData), NewProp_AbsorptionHigh_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ShortId = { "ShortId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, ShortId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortId_MetaData), NewProp_ShortId_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AbsorptionLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AbsorptionMidLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AbsorptionMidHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AbsorptionHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseAcousticTextureCookedData Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseAcousticTextureCookedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseAcousticTextureCookedData>(),
	alignof(FWwiseAcousticTextureCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseAcousticTextureCookedData"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseAcousticTextureCookedData *************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAcousticTextureCookedData_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData, Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewStructOps, TEXT("WwiseAcousticTextureCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseAcousticTextureCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseAcousticTextureCookedData), 2016126981U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAcousticTextureCookedData_h__Script_WwiseResourceLoader_aa9f153b60d6f5c97c624d7e2ccbf3a2c68b9b4a{
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
