// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Info/WwiseEventInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseEventInfo() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions(ETypeConstructPhase);
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventInfo(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EWwiseEventSwitchContainerLoading *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading_Statics
template<> WWISERESOURCELOADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseEventSwitchContainerLoading>()
{
	return Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AlwaysLoad.DisplayName", "Always Load Media" },
		{ "AlwaysLoad.Name", "EWwiseEventSwitchContainerLoading::AlwaysLoad" },
		{ "BlueprintType", "true" },
		{ "LoadOnReference.DisplayName", "Load Media Only When Referenced" },
		{ "LoadOnReference.Name", "EWwiseEventSwitchContainerLoading::LoadOnReference" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseEventInfo.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseEventSwitchContainerLoading::AlwaysLoad", (int64)EWwiseEventSwitchContainerLoading::AlwaysLoad },
		{ "EWwiseEventSwitchContainerLoading::LoadOnReference", (int64)EWwiseEventSwitchContainerLoading::LoadOnReference },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	"EWwiseEventSwitchContainerLoading",
	"EWwiseEventSwitchContainerLoading",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EWwiseEventSwitchContainerLoading;
UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EWwiseEventSwitchContainerLoading.OuterSingleton)
		{
			ZRIE_EWwiseEventSwitchContainerLoading.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("EWwiseEventSwitchContainerLoading"));
		}
		return ZRIE_EWwiseEventSwitchContainerLoading.OuterSingleton;
	}
	if (!ZRIE_EWwiseEventSwitchContainerLoading.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EWwiseEventSwitchContainerLoading.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EWwiseEventSwitchContainerLoading.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EWwiseEventSwitchContainerLoading *******************************************

// ********** Begin ScriptStruct FWwiseEventInfo ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseEventInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseEventInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseEventInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
		{ "DisplayName", "Event Info" },
		{ "HasNativeBreak", "/Script/WwiseResourceLoader.WwiseEventInfoLibrary:BreakStruct" },
		{ "HasNativeMake", "/Script/WwiseResourceLoader.WwiseEventInfoLibrary:MakeStruct" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseEventInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchContainerLoading_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseEventInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyOptions_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseEventInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseEventInfo constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SwitchContainerLoading_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SwitchContainerLoading;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseEventInfo constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseEventInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FWwiseEventInfo>() == std::is_polymorphic<FWwiseObjectInfo>(), "USTRUCT FWwiseEventInfo cannot be polymorphic unless super FWwiseObjectInfo is polymorphic");

// ********** Begin ScriptStruct FWwiseEventInfo Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SwitchContainerLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SwitchContainerLoading = { "SwitchContainerLoading", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventInfo, SwitchContainerLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchContainerLoading_MetaData), NewProp_SwitchContainerLoading_MetaData) }; // 9933948363039c8233d429f57725b5030c278ef2
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseEventInfo, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyOptions_MetaData), NewProp_DestroyOptions_MetaData) }; // 31f999005d7e6bdd726d3bf20fd86c9d30fde542
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchContainerLoading_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchContainerLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyOptions,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseEventInfo Property Definitions ********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	Z_Construct_UScriptStruct_FWwiseObjectInfo,
	&NewStructOps,
	"WwiseEventInfo",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseEventInfo>(),
	alignof(FWwiseEventInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseEventInfo;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseEventInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseEventInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseEventInfo, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseEventInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseEventInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseEventInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseEventInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseEventInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseEventInfo *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseEventInfo_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, TEXT("EWwiseEventSwitchContainerLoading"), &ZRIE_EWwiseEventSwitchContainerLoading, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2570294403U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseEventInfo, Z_Construct_UScriptStruct_FWwiseEventInfo_Statics::NewStructOps, TEXT("WwiseEventInfo"),&Z_Registration_Info_UScriptStruct_FWwiseEventInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseEventInfo), 2207712907U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseEventInfo_h__Script_WwiseResourceLoader_837f36a049a84741094712a2c09ea27dba05bfef{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
