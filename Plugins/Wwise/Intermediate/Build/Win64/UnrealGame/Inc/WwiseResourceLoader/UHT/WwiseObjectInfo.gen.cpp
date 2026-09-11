// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Info/WwiseObjectInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseObjectInfo() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseObjectInfo **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseObjectInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseObjectInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
		{ "DisplayName", "Wwise Object Info" },
		{ "HasNativeBreak", "/Script/WwiseResourceLoader.WwiseObjectInfoLibrary:BreakStruct" },
		{ "HasNativeMake", "/Script/WwiseResourceLoader.WwiseObjectInfoLibrary:MakeStruct" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseShortId_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardCodedSoundBankShortId_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/Wwise/Info/WwiseObjectInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseObjectInfo constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_WwiseShortId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WwiseName;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_HardCodedSoundBankShortId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseObjectInfo constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseObjectInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseObjectInfo Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseObjectInfo, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseGuid_MetaData), NewProp_WwiseGuid_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseObjectInfo, WwiseShortId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseShortId_MetaData), NewProp_WwiseShortId_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseObjectInfo, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseObjectInfo, HardCodedSoundBankShortId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardCodedSoundBankShortId_MetaData), NewProp_HardCodedSoundBankShortId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HardCodedSoundBankShortId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseObjectInfo Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseObjectInfo",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseObjectInfo>(),
	alignof(FWwiseObjectInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseObjectInfo;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseObjectInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseObjectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseObjectInfo, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseObjectInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseObjectInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseObjectInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseObjectInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseObjectInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseObjectInfo ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseObjectInfo_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseObjectInfo, Z_Construct_UScriptStruct_FWwiseObjectInfo_Statics::NewStructOps, TEXT("WwiseObjectInfo"),&Z_Registration_Info_UScriptStruct_FWwiseObjectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseObjectInfo), 247523858U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_Info_WwiseObjectInfo_h__Script_WwiseResourceLoader_1c36f01fda8d0d0ca6a71a486e8e24a11165aa31{
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
