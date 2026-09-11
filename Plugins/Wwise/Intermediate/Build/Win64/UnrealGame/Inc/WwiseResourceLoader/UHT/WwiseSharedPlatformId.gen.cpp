// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/WwiseSharedPlatformId.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseSharedPlatformId() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedPlatformId(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseSharedPlatformId ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseSharedPlatformId>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseSharedPlatformId); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedPlatformId.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseSharedPlatformId constinit property declarations ************
// ********** End ScriptStruct FWwiseSharedPlatformId constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSharedPlatformId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseSharedPlatformId",
	nullptr,
	0,
	DataSizeOf<FWwiseSharedPlatformId>(),
	alignof(FWwiseSharedPlatformId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedPlatformId(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSharedPlatformId, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseSharedPlatformId"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseSharedPlatformId **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedPlatformId_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseSharedPlatformId, Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics::NewStructOps, TEXT("WwiseSharedPlatformId"),&Z_Registration_Info_UScriptStruct_FWwiseSharedPlatformId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSharedPlatformId), 60253602U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedPlatformId_h__Script_WwiseResourceLoader_58c1fbad8a69e341776552c9108b4a37f7fda98b{
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
