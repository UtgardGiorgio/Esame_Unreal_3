// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Packaging/WwiseAssetLibraryInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryInfo() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwisePackagingRuntime(ETypeConstructPhase);
WWISEPACKAGINGRUNTIME_API UEnum* Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType(ETypeConstructPhase);
WWISEPACKAGINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo(ETypeConstructPhase);
WWISEPACKAGINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryRef(ETypeConstructPhase);
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter(ETypeConstructPhase);
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilter(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EWwiseAssetLibraryRefType *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType_Statics
template<> WWISEPACKAGINGRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseAssetLibraryRefType>()
{
	return Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * List of possible asset library references, as defined in the filtered assets\n */" },
#endif
		{ "ExternalSource.Name", "EWwiseAssetLibraryRefType::ExternalSource" },
		{ "InitBank.Name", "EWwiseAssetLibraryRefType::InitBank" },
		{ "Media.Name", "EWwiseAssetLibraryRefType::Media" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
		{ "SoundBank.Name", "EWwiseAssetLibraryRefType::SoundBank" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of possible asset library references, as defined in the filtered assets" },
#endif
		{ "Unknown.Name", "EWwiseAssetLibraryRefType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseAssetLibraryRefType::Unknown", (int64)EWwiseAssetLibraryRefType::Unknown },
		{ "EWwiseAssetLibraryRefType::InitBank", (int64)EWwiseAssetLibraryRefType::InitBank },
		{ "EWwiseAssetLibraryRefType::SoundBank", (int64)EWwiseAssetLibraryRefType::SoundBank },
		{ "EWwiseAssetLibraryRefType::Media", (int64)EWwiseAssetLibraryRefType::Media },
		{ "EWwiseAssetLibraryRefType::ExternalSource", (int64)EWwiseAssetLibraryRefType::ExternalSource },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwisePackagingRuntime,
	nullptr,
	"EWwiseAssetLibraryRefType",
	"EWwiseAssetLibraryRefType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EWwiseAssetLibraryRefType;
UEnum* Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EWwiseAssetLibraryRefType.OuterSingleton)
		{
			ZRIE_EWwiseAssetLibraryRefType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType, (UObject*)Z_Construct_UPackage__Script_WwisePackagingRuntime(ETypeConstructPhase::Outer), TEXT("EWwiseAssetLibraryRefType"));
		}
		return ZRIE_EWwiseAssetLibraryRefType.OuterSingleton;
	}
	if (!ZRIE_EWwiseAssetLibraryRefType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EWwiseAssetLibraryRefType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EWwiseAssetLibraryRefType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EWwiseAssetLibraryRefType ***************************************************

// ********** Begin ScriptStruct FWwiseAssetLibraryRef *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseAssetLibraryRef>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseAssetLibraryRef); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * One asset library reference towards a Wwise asset. This is the equivalent of a short-hand Wwise Project Database's AnyRef.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One asset library reference towards a Wwise asset. This is the equivalent of a short-hand Wwise Project Database's AnyRef." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageId_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankId_MetaData[] = {
		{ "Category", "Advanced" },
		{ "EditCondition", "Type == EWwiseAssetLibraryRefType::Media" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseAssetLibraryRef constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LanguageId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoundBankId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseAssetLibraryRef constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseAssetLibraryRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseAssetLibraryRef Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryRef, Type), Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // c4c8ffd9e1c1b9c8d6b97f851eb30910346b2066
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryRef, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryRef, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryRef, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LanguageId = { "LanguageId", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryRef, LanguageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageId_MetaData), NewProp_LanguageId_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SoundBankId = { "SoundBankId", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryRef, SoundBankId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundBankId_MetaData), NewProp_SoundBankId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LanguageId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundBankId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseAssetLibraryRef Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwisePackagingRuntime,
	nullptr,
	&NewStructOps,
	"WwiseAssetLibraryRef",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseAssetLibraryRef>(),
	alignof(FWwiseAssetLibraryRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryRef;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryRef(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryRef.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseAssetLibraryRef, (UObject*)Z_Construct_UPackage__Script_WwisePackagingRuntime(ETypeConstructPhase::Outer), TEXT("WwiseAssetLibraryRef"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryRef.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryRef.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryRef.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseAssetLibraryRef ***********************************************

// ********** Begin ScriptStruct FWwiseAssetLibraryInfo ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseAssetLibraryInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseAssetLibraryInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|AssetLibrary|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Information used to define the contents included in the Asset Library, to be cooked in the FWwiseAssetLibraryCookedData.\n */" },
#endif
		{ "DisplayName", "Asset Library Info" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information used to define the contents included in the Asset Library, to be cooked in the FWwiseAssetLibraryCookedData." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Filters to use to select assets to include in this Asset Library.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filters to use to select assets to include in this Asset Library." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedFilters_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Shared filters to use to select assets to include in this Asset Library, and that can be applied to multiple Asset Libraries.\n\x09 */" },
#endif
		{ "EditConditionHides", "TRUE" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shared filters to use to select assets to include in this Asset Library, and that can be applied to multiple Asset Libraries." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreloadedFilters_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryInfo.h" },
	};
#endif
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseAssetLibraryInfo constinit property declarations ************
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Filters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Filters;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SharedFilters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SharedFilters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreloadedFilters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreloadedFilters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif
// ********** End ScriptStruct FWwiseAssetLibraryInfo constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseAssetLibraryInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseAssetLibraryInfo Property Definitions ***********************
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0104000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWwiseAssetLibraryFilter, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0114008800000009, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryInfo, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filters_MetaData), NewProp_Filters_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_SharedFilters_Inner = { "SharedFilters", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWwiseSharedAssetLibraryFilter, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SharedFilters = { "SharedFilters", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryInfo, SharedFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedFilters_MetaData), NewProp_SharedFilters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreloadedFilters_Inner = { "PreloadedFilters", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWwiseSharedAssetLibraryFilter, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PreloadedFilters = { "PreloadedFilters", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAssetLibraryInfo, PreloadedFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreloadedFilters_MetaData), NewProp_PreloadedFilters_MetaData) };
#endif
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Filters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Filters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SharedFilters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SharedFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreloadedFilters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreloadedFilters,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
#endif
// ********** End ScriptStruct FWwiseAssetLibraryInfo Property Definitions *************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwisePackagingRuntime,
	nullptr,
	&NewStructOps,
	"WwiseAssetLibraryInfo",
	IF_WITH_EDITORONLY_DATA(UHT_STATICS::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(UHT_STATICS::PropPointers), 0),
	DataSizeOf<FWwiseAssetLibraryInfo>(),
	alignof(FWwiseAssetLibraryInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryInfo;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo, (UObject*)Z_Construct_UPackage__Script_WwisePackagingRuntime(ETypeConstructPhase::Outer), TEXT("WwiseAssetLibraryInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseAssetLibraryInfo **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h__Script_WwisePackagingRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_WwisePackagingRuntime_EWwiseAssetLibraryRefType, TEXT("EWwiseAssetLibraryRefType"), &ZRIE_EWwiseAssetLibraryRefType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3301507033U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseAssetLibraryRef, Z_Construct_UScriptStruct_FWwiseAssetLibraryRef_Statics::NewStructOps, TEXT("WwiseAssetLibraryRef"),&Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseAssetLibraryRef), 1054933663U) },
		{ Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo, Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo_Statics::NewStructOps, TEXT("WwiseAssetLibraryInfo"),&Z_Registration_Info_UScriptStruct_FWwiseAssetLibraryInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseAssetLibraryInfo), 2144928849U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryInfo_h__Script_WwisePackagingRuntime_552a501a95f5746b63a5a5657b82e2d7950215cd{
	TEXT("/Script/WwisePackagingRuntime"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
