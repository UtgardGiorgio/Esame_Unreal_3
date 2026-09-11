// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/WwiseLanguageId.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseLanguageId() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageId(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseLanguageId **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseLanguageId_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseLanguageId>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseLanguageId); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseLanguageId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseLanguageId.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageName_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseLanguageId.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseLanguageId constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_LanguageId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LanguageName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseLanguageId constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLanguageId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseLanguageId Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LanguageId = { "LanguageId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLanguageId, LanguageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageId_MetaData), NewProp_LanguageId_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LanguageName = { "LanguageName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLanguageId, LanguageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageName_MetaData), NewProp_LanguageName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LanguageId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LanguageName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseLanguageId Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseLanguageId",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseLanguageId>(),
	alignof(FWwiseLanguageId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseLanguageId;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageId(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseLanguageId.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseLanguageId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLanguageId, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseLanguageId"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseLanguageId.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseLanguageId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseLanguageId.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseLanguageId.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseLanguageId ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseLanguageId_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseLanguageId, Z_Construct_UScriptStruct_FWwiseLanguageId_Statics::NewStructOps, TEXT("WwiseLanguageId"),&Z_Registration_Info_UScriptStruct_FWwiseLanguageId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLanguageId), 4123538884U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseLanguageId_h__Script_WwiseResourceLoader_261b5dcb232e7c9af2f6f4eb61a89b8a0f19d5bd{
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
