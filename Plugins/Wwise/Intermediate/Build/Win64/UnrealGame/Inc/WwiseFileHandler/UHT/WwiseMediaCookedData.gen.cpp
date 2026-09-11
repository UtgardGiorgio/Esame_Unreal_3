// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseMediaCookedData.h"
#include "Wwise/WwisePackagedFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseMediaCookedData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseFileHandler(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwisePackagedFile(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FWwiseMediaCookedData *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseMediaCookedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseMediaCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Short ID for the Media\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Short ID for the Media" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagedFile_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Packaging information for this file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Packaging information for this file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPackagedFiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsingReferenceLanguage_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief True if it is a Reference Language item, or is a media shared by multiple languages.\n\x09 *\n\x09 * Used during packaging for logging purposes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief True if it is a Reference Language item, or is a media shared by multiple languages.\n\nUsed during packaging for logging purposes." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseMediaCookedData constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MediaId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PackagedFile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalPackagedFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalPackagedFiles;
#if WITH_EDITORONLY_DATA
	static void NewProp_bUsingReferenceLanguage_SetBit(void* Obj)
	{
		((FWwiseMediaCookedData*)Obj)->bUsingReferenceLanguage = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingReferenceLanguage;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseMediaCookedData constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseMediaCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseMediaCookedData Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MediaId = { "MediaId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseMediaCookedData, MediaId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaId_MetaData), NewProp_MediaId_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseMediaCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PackagedFile = { "PackagedFile", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseMediaCookedData, PackagedFile), Z_Construct_UScriptStruct_FWwisePackagedFile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagedFile_MetaData), NewProp_PackagedFile_MetaData) }; // 57a2ebd0e15d20218417bfc4d25c8ae3da89e59d
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AdditionalPackagedFiles_Inner = { "AdditionalPackagedFiles", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AdditionalPackagedFiles = { "AdditionalPackagedFiles", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseMediaCookedData, AdditionalPackagedFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalPackagedFiles_MetaData), NewProp_AdditionalPackagedFiles_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUsingReferenceLanguage = { "bUsingReferenceLanguage", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FWwiseMediaCookedData), &UHT_STATICS::NewProp_bUsingReferenceLanguage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsingReferenceLanguage_MetaData), NewProp_bUsingReferenceLanguage_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PackagedFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdditionalPackagedFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdditionalPackagedFiles,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUsingReferenceLanguage,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseMediaCookedData Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseFileHandler,
	nullptr,
	&NewStructOps,
	"WwiseMediaCookedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseMediaCookedData>(),
	alignof(FWwiseMediaCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseMediaCookedData;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseMediaCookedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseMediaCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseMediaCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(ETypeConstructPhase::Outer), TEXT("WwiseMediaCookedData"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseMediaCookedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseMediaCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseMediaCookedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseMediaCookedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseMediaCookedData ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h__Script_WwiseFileHandler_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseMediaCookedData, Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewStructOps, TEXT("WwiseMediaCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseMediaCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseMediaCookedData), 504087434U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h__Script_WwiseFileHandler_37b2310f100fcd2566dba0911f961950f1ffc090{
	TEXT("/Script/WwiseFileHandler"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
