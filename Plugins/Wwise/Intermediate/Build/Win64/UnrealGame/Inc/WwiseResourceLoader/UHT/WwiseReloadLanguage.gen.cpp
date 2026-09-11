// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/WwiseReloadLanguage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseReloadLanguage() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EWwiseReloadLanguage ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics
template<> WWISERESOURCELOADER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseReloadLanguage>()
{
	return Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Determines the reload strategy to use for language changes.\n */" },
#endif
		{ "Immediate.Comment", "/// Reloads immediately without stopping any processes. The game is responsible for stopping and restarting\n/// sounds that could be affected, or audible breaks might occur. This is useful when some\n/// sounds can continue to play, such as music and ambient sounds, while the dialogues are being\n/// internally reloaded.\n/// \n/// Depending on the quantity of currently loaded localized banks, the operation can take a long time.\n/// \n/// \\warning Affected events need to be restarted when the operation is done.\n" },
		{ "Immediate.Name", "EWwiseReloadLanguage::Immediate" },
		{ "Immediate.ToolTip", "Reloads immediately without stopping any processes. The game is responsible for stopping and restarting\nsounds that could be affected, or audible breaks might occur. This is useful when some\nsounds can continue to play, such as music and ambient sounds, while the dialogues are being\ninternally reloaded.\n\nDepending on the quantity of currently loaded localized banks, the operation can take a long time.\n\n\\warning Affected events need to be restarted when the operation is done." },
		{ "Manual.Comment", "/// Doesn't reload anything and doesn't call any SoundEngine operations. The game must reload elements as required.\n" },
		{ "Manual.Name", "EWwiseReloadLanguage::Manual" },
		{ "Manual.ToolTip", "Doesn't reload anything and doesn't call any SoundEngine operations. The game must reload elements as required." },
		{ "ModuleRelativePath", "Public/Wwise/WwiseReloadLanguage.h" },
		{ "Safe.Comment", "/// Stops all sounds first, unloads all the localized banks, and reloads the new language. This causes\n/// an audible break while the operation is done.\n/// \n/// Depending on the quantity of currently loaded localized banks, the operation can take a long time.\n/// \n/// \\warning Affected events need to be restarted when the operation is done.\n" },
		{ "Safe.Name", "EWwiseReloadLanguage::Safe" },
		{ "Safe.ToolTip", "Stops all sounds first, unloads all the localized banks, and reloads the new language. This causes\nan audible break while the operation is done.\n\nDepending on the quantity of currently loaded localized banks, the operation can take a long time.\n\n\\warning Affected events need to be restarted when the operation is done." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Determines the reload strategy to use for language changes." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseReloadLanguage::Manual", (int64)EWwiseReloadLanguage::Manual },
		{ "EWwiseReloadLanguage::Immediate", (int64)EWwiseReloadLanguage::Immediate },
		{ "EWwiseReloadLanguage::Safe", (int64)EWwiseReloadLanguage::Safe },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
	nullptr,
	"EWwiseReloadLanguage",
	"EWwiseReloadLanguage",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EWwiseReloadLanguage;
UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EWwiseReloadLanguage.OuterSingleton)
		{
			ZRIE_EWwiseReloadLanguage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase::Outer), TEXT("EWwiseReloadLanguage"));
		}
		return ZRIE_EWwiseReloadLanguage.OuterSingleton;
	}
	if (!ZRIE_EWwiseReloadLanguage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EWwiseReloadLanguage.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EWwiseReloadLanguage.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EWwiseReloadLanguage ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseReloadLanguage_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage, TEXT("EWwiseReloadLanguage"), &ZRIE_EWwiseReloadLanguage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 744110311U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseReloadLanguage_h__Script_WwiseResourceLoader_cc1bc6b46f929e4ab252756dc4d2562c22f72530{
	TEXT("/Script/WwiseResourceLoader"),
	nullptr, 0,
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
