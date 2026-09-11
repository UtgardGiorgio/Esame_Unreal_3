// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Info/WwiseGroupValueInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseGroupValueInfo() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueInfo(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseGroupValueInfo **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseGroupValueInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseGroupValueInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
		{ "DisplayName", "GroupValue Info" },
		{ "HasNativeBreak", "/Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary:BreakStruct" },
		{ "HasNativeMake", "/Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary:MakeStruct" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseGroupValueInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupShortId_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseGroupValueInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseGroupValueInfo constinit property declarations **************
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GroupShortId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseGroupValueInfo constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseGroupValueInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FWwiseGroupValueInfo>() == std::is_polymorphic<FWwiseObjectInfo>(), "USTRUCT FWwiseGroupValueInfo cannot be polymorphic unless super FWwiseObjectInfo is polymorphic");

// ********** Begin ScriptStruct FWwiseGroupValueInfo Property Definitions *************************
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_GroupShortId = { "GroupShortId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGroupValueInfo, GroupShortId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupShortId_MetaData), NewProp_GroupShortId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroupShortId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseGroupValueInfo Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	Z_Construct_UScriptStruct_FWwiseObjectInfo,
	&NewStructOps,
	"WwiseGroupValueInfo",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseGroupValueInfo>(),
	alignof(FWwiseGroupValueInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseGroupValueInfo, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseGroupValueInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseGroupValueInfo ************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseGroupValueInfo_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseGroupValueInfo, Z_Construct_UScriptStruct_FWwiseGroupValueInfo_Statics::NewStructOps, TEXT("WwiseGroupValueInfo"),&Z_Registration_Info_UScriptStruct_FWwiseGroupValueInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseGroupValueInfo), 3578477144U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseGroupValueInfo_h__Script_WwiseResourceLoader_921aaf5260119fa674af84ca4296aa92b50ad34d{
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
