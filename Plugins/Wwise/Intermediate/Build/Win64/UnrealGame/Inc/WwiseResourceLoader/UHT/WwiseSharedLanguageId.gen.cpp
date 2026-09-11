// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/WwiseSharedLanguageId.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseSharedLanguageId() {}

// ********** Begin Cross Module References ********************************************************
WWISEFILEHANDLER_API UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedLanguageId(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseSharedLanguageId ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseSharedLanguageId>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseSharedLanguageId); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedLanguageId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageRequirement_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedLanguageId.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseSharedLanguageId constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_LanguageRequirement_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LanguageRequirement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseSharedLanguageId constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSharedLanguageId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseSharedLanguageId Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LanguageRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LanguageRequirement = { "LanguageRequirement", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseSharedLanguageId, LanguageRequirement), Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageRequirement_MetaData), NewProp_LanguageRequirement_MetaData) }; // 82cf094af4aa68b50438576e8cf52bf8c7e41c92
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LanguageRequirement_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LanguageRequirement,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseSharedLanguageId Property Definitions *************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseSharedLanguageId",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseSharedLanguageId>(),
	alignof(FWwiseSharedLanguageId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedLanguageId(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSharedLanguageId, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseSharedLanguageId"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseSharedLanguageId **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseSharedLanguageId, Z_Construct_UScriptStruct_FWwiseSharedLanguageId_Statics::NewStructOps, TEXT("WwiseSharedLanguageId"),&Z_Registration_Info_UScriptStruct_FWwiseSharedLanguageId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSharedLanguageId), 1338095154U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedLanguageId_h__Script_WwiseResourceLoader_d87f276ce95d792e1856c7cbb2c860a005626a7c{
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
