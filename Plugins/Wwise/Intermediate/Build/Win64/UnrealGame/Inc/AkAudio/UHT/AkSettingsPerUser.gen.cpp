// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkSettingsPerUser.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkSettingsPerUser() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkSettingsPerUser(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EWwiseProjectDatabaseLoadMode(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkSettingsPerUser(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EWwiseProjectDatabaseLoadMode *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EWwiseProjectDatabaseLoadMode_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EWwiseProjectDatabaseLoadMode>()
{
	return Z_Construct_UEnum_AkAudio_EWwiseProjectDatabaseLoadMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Asynchronous.Comment", "/** Load the Project Database asynchronously in the background. Faster editor startup but data is not ready on editor load. */" },
		{ "Asynchronous.DisplayName", "Asynchronous" },
		{ "Asynchronous.Name", "EWwiseProjectDatabaseLoadMode::Asynchronous" },
		{ "Asynchronous.ToolTip", "Load the Project Database asynchronously in the background. Faster editor startup but data is not ready on editor load." },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
		{ "Synchronous.Comment", "/** Load the Project Database synchronously during module startup. Blocks editor loading but ensures data is ready immediately. */" },
		{ "Synchronous.DisplayName", "Synchronous" },
		{ "Synchronous.Name", "EWwiseProjectDatabaseLoadMode::Synchronous" },
		{ "Synchronous.ToolTip", "Load the Project Database synchronously during module startup. Blocks editor loading but ensures data is ready immediately." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWwiseProjectDatabaseLoadMode::Synchronous", (int64)EWwiseProjectDatabaseLoadMode::Synchronous },
		{ "EWwiseProjectDatabaseLoadMode::Asynchronous", (int64)EWwiseProjectDatabaseLoadMode::Asynchronous },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EWwiseProjectDatabaseLoadMode",
	"EWwiseProjectDatabaseLoadMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EWwiseProjectDatabaseLoadMode;
UEnum* Z_Construct_UEnum_AkAudio_EWwiseProjectDatabaseLoadMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EWwiseProjectDatabaseLoadMode.OuterSingleton)
		{
			ZRIE_EWwiseProjectDatabaseLoadMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EWwiseProjectDatabaseLoadMode, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EWwiseProjectDatabaseLoadMode"));
		}
		return ZRIE_EWwiseProjectDatabaseLoadMode.OuterSingleton;
	}
	if (!ZRIE_EWwiseProjectDatabaseLoadMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EWwiseProjectDatabaseLoadMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EWwiseProjectDatabaseLoadMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EWwiseProjectDatabaseLoadMode ***********************************************

// ********** Begin Class UAkSettingsPerUser *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkSettingsPerUser_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "AkSettingsPerUser.h" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseWindowsInstallationPath_MetaData[] = {
		{ "Category", "Installation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wwise Installation Path (Root folder containing the Authoring, SDK, etc folders)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wwise Installation Path (Root folder containing the Authoring, SDK, etc folders)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseMacInstallationPath_MetaData[] = {
		{ "AbsolutePath", "" },
		{ "Category", "Installation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wwise Installation Path (Root folder containing the Authoring, SDK, etc folders)\n" },
#endif
		{ "FilePathFilter", "app" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wwise Installation Path (Root folder containing the Authoring, SDK, etc folders)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootOutputPathOverride_MetaData[] = {
		{ "Category", "Installation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Override the Root Output Path in the project settings\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the Root Output Path in the project settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedSoundBanksFolderOverride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectDatabaseLoadMode_MetaData[] = {
		{ "Category", "Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Controls how the Wwise Project Database is loaded during editor startup. Requires Editor restart to take effect.\n" },
#endif
		{ "DisplayName", "Project Database Load Mode" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls how the Wwise Project Database is loaded during editor startup. Requires Editor restart to take effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaapiIPAddress_MetaData[] = {
		{ "Category", "WAAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IP Address used to connect to WAAPI. Changing this requires Editor restart\n" },
#endif
		{ "DisplayName", "WAAPI IP Address" },
		{ "EditCondition", "bAutoConnectToWAAPI" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IP Address used to connect to WAAPI. Changing this requires Editor restart" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaapiPort_MetaData[] = {
		{ "Category", "WAAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Network Port used to connect to WAAPI. Changing this requires Editor restart\n" },
#endif
		{ "DisplayName", "WAAPI Port" },
		{ "EditCondition", "bAutoConnectToWAAPI" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Network Port used to connect to WAAPI. Changing this requires Editor restart" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnectToWAAPI_MetaData[] = {
		{ "Category", "WAAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to connect to WAAPI or not\n" },
#endif
		{ "DisplayName", "Auto-Connect to WAAPI" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to connect to WAAPI or not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSyncSelection_MetaData[] = {
		{ "Category", "WAAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to synchronize the selection between the Wwise Browser and the Wwise Project Explorer\n" },
#endif
		{ "DisplayName", "Auto-Sync Selection" },
		{ "EditCondition", "bAutoConnectToWAAPI" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to synchronize the selection between the Wwise Browser and the Wwise Project Explorer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaapiCallsTimeout_MetaData[] = {
		{ "Category", "WAAPI" },
		{ "ClampMin", "-1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time out value for WAAPI calls (in ms). If set to -1, WAAPI calls will never time out\n" },
#endif
		{ "DisplayName", "WAAPI Calls Timeout" },
		{ "EditCondition", "bAutoConnectToWAAPI" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time out value for WAAPI calls (in ms). If set to -1, WAAPI calls will never time out" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaapiTranslatorTimeout_MetaData[] = {
		{ "Category", "Error Message Translator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time out value for the WAAPI error message translator to translate an error message (in ms). If set to 0, disable the translator entirely\n" },
#endif
		{ "DisplayName", "WAAPI Translator Timeout" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time out value for the WAAPI error message translator to translate an error message (in ms). If set to 0, disable the translator entirely" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuppressGeneratedSoundBanksPathWarnings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundDataGenerationSkipLanguage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerboseSoundBankGeneration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AskForWwiseAssetReload_MetaData[] = {
		{ "Category", "Asset Reload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Opens a notification that the user must accept before reloading Wwise Asset Data\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Opens a notification that the user must accept before reloading Wwise Asset Data" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualizeRoomsAndPortals_MetaData[] = {
		{ "Category", "Viewports" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visualize rooms and portals in the viewport. This requires 'realtime' to be enabled in the viewport.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visualize rooms and portals in the viewport. This requires 'realtime' to be enabled in the viewport." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowReverbInfo_MetaData[] = {
		{ "Category", "Viewports" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When enabled, information about AkReverbComponents will be displayed in viewports, above the component's UPrimitiveComponent parent. This requires 'realtime' to be enabled in the viewport.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, information about AkReverbComponents will be displayed in viewports, above the component's UPrimitiveComponent parent. This requires 'realtime' to be enabled in the viewport." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UAkSettingsPerUser constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseWindowsInstallationPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseMacInstallationPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootOutputPathOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedSoundBanksFolderOverride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectDatabaseLoadMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectDatabaseLoadMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WaapiIPAddress;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_WaapiPort;
	static void NewProp_bAutoConnectToWAAPI_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->bAutoConnectToWAAPI = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnectToWAAPI;
	static void NewProp_AutoSyncSelection_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->AutoSyncSelection = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoSyncSelection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaapiCallsTimeout;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_WaapiTranslatorTimeout;
	static void NewProp_SuppressGeneratedSoundBanksPathWarnings_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->SuppressGeneratedSoundBanksPathWarnings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SuppressGeneratedSoundBanksPathWarnings;
	static void NewProp_SoundDataGenerationSkipLanguage_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->SoundDataGenerationSkipLanguage = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SoundDataGenerationSkipLanguage;
	static void NewProp_VerboseSoundBankGeneration_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->VerboseSoundBankGeneration = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VerboseSoundBankGeneration;
	static void NewProp_AskForWwiseAssetReload_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->AskForWwiseAssetReload = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AskForWwiseAssetReload;
#if WITH_EDITORONLY_DATA
	static void NewProp_VisualizeRoomsAndPortals_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->VisualizeRoomsAndPortals = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VisualizeRoomsAndPortals;
	static void NewProp_bShowReverbInfo_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->bShowReverbInfo = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowReverbInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkSettingsPerUser constinit property declarations *************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSettingsPerUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkSettingsPerUser Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WwiseWindowsInstallationPath = { "WwiseWindowsInstallationPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, WwiseWindowsInstallationPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseWindowsInstallationPath_MetaData), NewProp_WwiseWindowsInstallationPath_MetaData) }; // a9ea974572ee54d1b93cb49a6434fdbad40b6bf5
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WwiseMacInstallationPath = { "WwiseMacInstallationPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, WwiseMacInstallationPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseMacInstallationPath_MetaData), NewProp_WwiseMacInstallationPath_MetaData) }; // 0b92f70c4aaca653170512ccb353f3aa009da14a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RootOutputPathOverride = { "RootOutputPathOverride", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, RootOutputPathOverride), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootOutputPathOverride_MetaData), NewProp_RootOutputPathOverride_MetaData) }; // a9ea974572ee54d1b93cb49a6434fdbad40b6bf5
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeneratedSoundBanksFolderOverride = { "GeneratedSoundBanksFolderOverride", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, GeneratedSoundBanksFolderOverride_DEPRECATED), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedSoundBanksFolderOverride_MetaData), NewProp_GeneratedSoundBanksFolderOverride_MetaData) }; // a9ea974572ee54d1b93cb49a6434fdbad40b6bf5
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ProjectDatabaseLoadMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ProjectDatabaseLoadMode = { "ProjectDatabaseLoadMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, ProjectDatabaseLoadMode), Z_Construct_UEnum_AkAudio_EWwiseProjectDatabaseLoadMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectDatabaseLoadMode_MetaData), NewProp_ProjectDatabaseLoadMode_MetaData) }; // 59d1ad70e92260d3983c2bb9566196e8fc27d8e7
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WaapiIPAddress = { "WaapiIPAddress", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, WaapiIPAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaapiIPAddress_MetaData), NewProp_WaapiIPAddress_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_WaapiPort = { "WaapiPort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, WaapiPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaapiPort_MetaData), NewProp_WaapiPort_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoConnectToWAAPI = { "bAutoConnectToWAAPI", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &UHT_STATICS::NewProp_bAutoConnectToWAAPI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoConnectToWAAPI_MetaData), NewProp_bAutoConnectToWAAPI_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_AutoSyncSelection = { "AutoSyncSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &UHT_STATICS::NewProp_AutoSyncSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSyncSelection_MetaData), NewProp_AutoSyncSelection_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_WaapiCallsTimeout = { "WaapiCallsTimeout", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, WaapiCallsTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaapiCallsTimeout_MetaData), NewProp_WaapiCallsTimeout_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_WaapiTranslatorTimeout = { "WaapiTranslatorTimeout", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettingsPerUser, WaapiTranslatorTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaapiTranslatorTimeout_MetaData), NewProp_WaapiTranslatorTimeout_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_SuppressGeneratedSoundBanksPathWarnings = { "SuppressGeneratedSoundBanksPathWarnings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &UHT_STATICS::NewProp_SuppressGeneratedSoundBanksPathWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuppressGeneratedSoundBanksPathWarnings_MetaData), NewProp_SuppressGeneratedSoundBanksPathWarnings_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_SoundDataGenerationSkipLanguage = { "SoundDataGenerationSkipLanguage", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &UHT_STATICS::NewProp_SoundDataGenerationSkipLanguage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundDataGenerationSkipLanguage_MetaData), NewProp_SoundDataGenerationSkipLanguage_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_VerboseSoundBankGeneration = { "VerboseSoundBankGeneration", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &UHT_STATICS::NewProp_VerboseSoundBankGeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerboseSoundBankGeneration_MetaData), NewProp_VerboseSoundBankGeneration_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_AskForWwiseAssetReload = { "AskForWwiseAssetReload", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &UHT_STATICS::NewProp_AskForWwiseAssetReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AskForWwiseAssetReload_MetaData), NewProp_AskForWwiseAssetReload_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_VisualizeRoomsAndPortals = { "VisualizeRoomsAndPortals", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &UHT_STATICS::NewProp_VisualizeRoomsAndPortals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualizeRoomsAndPortals_MetaData), NewProp_VisualizeRoomsAndPortals_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowReverbInfo = { "bShowReverbInfo", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettingsPerUser), &UHT_STATICS::NewProp_bShowReverbInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowReverbInfo_MetaData), NewProp_bShowReverbInfo_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseWindowsInstallationPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseMacInstallationPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RootOutputPathOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedSoundBanksFolderOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProjectDatabaseLoadMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProjectDatabaseLoadMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WaapiIPAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WaapiPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoConnectToWAAPI,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutoSyncSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WaapiCallsTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WaapiTranslatorTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SuppressGeneratedSoundBanksPathWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundDataGenerationSkipLanguage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VerboseSoundBankGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AskForWwiseAssetReload,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VisualizeRoomsAndPortals,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowReverbInfo,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkSettingsPerUser Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkSettingsPerUser,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkSettingsPerUser;
UClass* Z_Construct_UClass_UAkSettingsPerUser(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkSettingsPerUser;
		if (!Z_Registration_Info_UClass_UAkSettingsPerUser.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkSettingsPerUser"),
				Z_Registration_Info_UClass_UAkSettingsPerUser.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAkSettingsPerUser.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkSettingsPerUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSettingsPerUser.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkSettingsPerUser.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkSettingsPerUser);
UAkSettingsPerUser::~UAkSettingsPerUser() {}
// ********** End Class UAkSettingsPerUser *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AkAudio_EWwiseProjectDatabaseLoadMode, TEXT("EWwiseProjectDatabaseLoadMode"), &ZRIE_EWwiseProjectDatabaseLoadMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1506913648U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkSettingsPerUser, TEXT("UAkSettingsPerUser"), &Z_Registration_Info_UClass_UAkSettingsPerUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSettingsPerUser), 3051820913U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h__Script_AkAudio_2ea2a0a77b94c0057464666f14abb16d0fb8cdd0{
	TEXT("/Script/AkAudio"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
