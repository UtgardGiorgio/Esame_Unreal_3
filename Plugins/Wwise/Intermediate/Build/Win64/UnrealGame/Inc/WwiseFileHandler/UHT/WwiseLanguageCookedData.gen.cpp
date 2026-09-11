// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/CookedData/WwiseLanguageCookedData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseLanguageCookedData() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseFileHandler(ETypeConstructPhase);
WWISEFILEHANDLER_API UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement(ETypeConstructPhase);
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EWwiseLanguageRequirement *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics
template<> WWISEFILEHANDLER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseLanguageRequirement>()
{
	return Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IsDefault.Name", "EWwiseLanguageRequirement::IsDefault" },
		{ "IsOptional.Name", "EWwiseLanguageRequirement::IsOptional" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLanguageCookedData.h" },
		{ "SFX.Name", "EWwiseLanguageRequirement::SFX" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseLanguageRequirement::IsDefault", (int64)EWwiseLanguageRequirement::IsDefault },
		{ "EWwiseLanguageRequirement::IsOptional", (int64)EWwiseLanguageRequirement::IsOptional },
		{ "EWwiseLanguageRequirement::SFX", (int64)EWwiseLanguageRequirement::SFX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseFileHandler,
	nullptr,
	"EWwiseLanguageRequirement",
	"EWwiseLanguageRequirement",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EWwiseLanguageRequirement;
UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EWwiseLanguageRequirement.OuterSingleton)
		{
			ZRIE_EWwiseLanguageRequirement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(ETypeConstructPhase::Outer), TEXT("EWwiseLanguageRequirement"));
		}
		return ZRIE_EWwiseLanguageRequirement.OuterSingleton;
	}
	if (!ZRIE_EWwiseLanguageRequirement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EWwiseLanguageRequirement.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EWwiseLanguageRequirement.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EWwiseLanguageRequirement ***************************************************

// ********** Begin ScriptStruct FWwiseLanguageCookedData ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseLanguageCookedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseLanguageCookedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLanguageCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Short ID for the Language\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLanguageCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Short ID for the Language" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Language name as set in Wwise\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLanguageCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Language name as set in Wwise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageRequirement_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Is this language the default in Wwise\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLanguageCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Is this language the default in Wwise" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseLanguageCookedData constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_LanguageId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LanguageName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LanguageRequirement_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LanguageRequirement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseLanguageCookedData constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLanguageCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FWwiseLanguageCookedData Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LanguageId = { "LanguageId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLanguageCookedData, LanguageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageId_MetaData), NewProp_LanguageId_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LanguageName = { "LanguageName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLanguageCookedData, LanguageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageName_MetaData), NewProp_LanguageName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LanguageRequirement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LanguageRequirement = { "LanguageRequirement", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLanguageCookedData, LanguageRequirement), Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageRequirement_MetaData), NewProp_LanguageRequirement_MetaData) }; // 82cf094af4aa68b50438576e8cf52bf8c7e41c92
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LanguageId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LanguageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LanguageRequirement_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LanguageRequirement,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseLanguageCookedData Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseFileHandler,
	nullptr,
	&NewStructOps,
	"WwiseLanguageCookedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseLanguageCookedData>(),
	alignof(FWwiseLanguageCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseLanguageCookedData;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseLanguageCookedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseLanguageCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLanguageCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(ETypeConstructPhase::Outer), TEXT("WwiseLanguageCookedData"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseLanguageCookedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseLanguageCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseLanguageCookedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseLanguageCookedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseLanguageCookedData ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h__Script_WwiseFileHandler_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement, TEXT("EWwiseLanguageRequirement"), &ZRIE_EWwiseLanguageRequirement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2194606410U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FWwiseLanguageCookedData, Z_Construct_UScriptStruct_FWwiseLanguageCookedData_Statics::NewStructOps, TEXT("WwiseLanguageCookedData"),&Z_Registration_Info_UScriptStruct_FWwiseLanguageCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLanguageCookedData), 4206863487U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseLanguageCookedData_h__Script_WwiseFileHandler_a97acfe68047d01816382e562f78c17fd73329f4{
	TEXT("/Script/WwiseFileHandler"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
