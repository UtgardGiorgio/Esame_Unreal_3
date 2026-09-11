// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseAssetLibraryCookedData.h"
#include "Wwise/WwisePackagedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryCookedData() {}

// ********** Begin Cross Module References ********************************************************
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwisePackagedFile(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseAssetLibraryCookedData **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseAssetLibraryCookedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseAssetLibraryCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAssetLibraryCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagedFiles_MetaData[] = {
		{ "Category", "Wwise|AssetLibrary" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAssetLibraryCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise|AssetLibrary" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAssetLibraryCookedData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseAssetLibraryCookedData constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_PackagedFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagedFiles;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseAssetLibraryCookedData constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseAssetLibraryCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseAssetLibraryCookedData Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PackagedFiles_Inner = { "PackagedFiles", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwisePackagedFile, METADATA_PARAMS(0, nullptr) }; // 57a2ebd0e15d20218417bfc4d25c8ae3da89e59d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PackagedFiles = { "PackagedFiles", nullptr, (EPropertyFlags)0x0010000000022801, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryCookedData, PackagedFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagedFiles_MetaData), NewProp_PackagedFiles_MetaData) }; // 57a2ebd0e15d20218417bfc4d25c8ae3da89e59d
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000022801, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PackagedFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PackagedFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseAssetLibraryCookedData Property Definitions *******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	&NewStructOps,
	"WwiseAssetLibraryCookedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseAssetLibraryCookedData>(),
	alignof(FWwiseAssetLibraryCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("WwiseAssetLibraryCookedData"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseAssetLibraryCookedData ****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAssetLibraryCookedData_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData, Z_Construct_UScriptStruct_FWwiseAssetLibraryCookedData_Statics::NewStructOps, TEXT("WwiseAssetLibraryCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseAssetLibraryCookedData), 4151020334U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAssetLibraryCookedData_h__Script_WwiseResourceLoader_96da06ca1f9c184ffb1eaa1f294a492fc4c1dd8d{
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
