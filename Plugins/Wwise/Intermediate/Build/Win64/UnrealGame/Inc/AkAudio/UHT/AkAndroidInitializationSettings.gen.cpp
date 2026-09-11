// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h"
#include "InitializationSettings/AkInitializationSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAndroidInitializationSettings() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidInitializationSettings(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidInitializationSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EAkAndroidAudioAPI ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkAndroidAudioAPI>()
{
	return Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AAudio.Name", "EAkAndroidAudioAPI::AAudio" },
		{ "Bitmask", "" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
		{ "OpenSL_ES.Name", "EAkAndroidAudioAPI::OpenSL_ES" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkAndroidAudioAPI::AAudio", (int64)EAkAndroidAudioAPI::AAudio },
		{ "EAkAndroidAudioAPI::OpenSL_ES", (int64)EAkAndroidAudioAPI::OpenSL_ES },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkAndroidAudioAPI",
	"EAkAndroidAudioAPI",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkAndroidAudioAPI;
UEnum* Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkAndroidAudioAPI.OuterSingleton)
		{
			ZRIE_EAkAndroidAudioAPI.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkAndroidAudioAPI"));
		}
		return ZRIE_EAkAndroidAudioAPI.OuterSingleton;
	}
	if (!ZRIE_EAkAndroidAudioAPI.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkAndroidAudioAPI.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkAndroidAudioAPI.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkAndroidAudioAPI **********************************************************

// ********** Begin ScriptStruct FAkAndroidAdvancedInitializationSettings **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkAndroidAdvancedInitializationSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkAndroidAdvancedInitializationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioAPI_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkAndroidAudioAPI" },
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main audio API to use. Leave set to \"Default\" for the default audio sink." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundFrameSizeToHardwareSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used when hardware-preferred frame size and user-preferred frame size are not compatible. If true (default), the sound engine will initialize to a multiple of the HW setting, close to the user setting. If false, the user setting is used as is, regardless of the HW preference (might incur a performance hit)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseLowLatencyMode_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "MinWwiseVersion", "2023.1" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the lowest output latency possible for the current hardware. If true (default), the output audio device will be initialized in low-latency operation, allowing for more responsive audio playback on most devices. However, when operating in low-latency mode, some devices may have differences in audio reproduction. If false, the output audio device will be initialized without low-latency operation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerboseSink_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable this to inspect sink behavior. Useful for debugging non-standard Android devices." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkAndroidAdvancedInitializationSettings constinit property declarations 
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioAPI;
	static void NewProp_RoundFrameSizeToHardwareSize_SetBit(void* Obj)
	{
		((FAkAndroidAdvancedInitializationSettings*)Obj)->RoundFrameSizeToHardwareSize = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RoundFrameSizeToHardwareSize;
	static void NewProp_UseLowLatencyMode_SetBit(void* Obj)
	{
		((FAkAndroidAdvancedInitializationSettings*)Obj)->UseLowLatencyMode = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseLowLatencyMode;
	static void NewProp_bVerboseSink_SetBit(void* Obj)
	{
		((FAkAndroidAdvancedInitializationSettings*)Obj)->bVerboseSink = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerboseSink;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkAndroidAdvancedInitializationSettings constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAndroidAdvancedInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkAndroidAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkAndroidAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

// ********** Begin ScriptStruct FAkAndroidAdvancedInitializationSettings Property Definitions *****
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_AudioAPI = { "AudioAPI", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAndroidAdvancedInitializationSettings, AudioAPI), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioAPI_MetaData), NewProp_AudioAPI_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_RoundFrameSizeToHardwareSize = { "RoundFrameSizeToHardwareSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAndroidAdvancedInitializationSettings), &UHT_STATICS::NewProp_RoundFrameSizeToHardwareSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundFrameSizeToHardwareSize_MetaData), NewProp_RoundFrameSizeToHardwareSize_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_UseLowLatencyMode = { "UseLowLatencyMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAndroidAdvancedInitializationSettings), &UHT_STATICS::NewProp_UseLowLatencyMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseLowLatencyMode_MetaData), NewProp_UseLowLatencyMode_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bVerboseSink = { "bVerboseSink", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAndroidAdvancedInitializationSettings), &UHT_STATICS::NewProp_bVerboseSink_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerboseSink_MetaData), NewProp_bVerboseSink_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioAPI,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoundFrameSizeToHardwareSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UseLowLatencyMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bVerboseSink,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkAndroidAdvancedInitializationSettings Property Definitions *******
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
	&NewStructOps,
	"AkAndroidAdvancedInitializationSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkAndroidAdvancedInitializationSettings>(),
	alignof(FAkAndroidAdvancedInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkAndroidAdvancedInitializationSettings;
UScriptStruct* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkAndroidAdvancedInitializationSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkAndroidAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkAndroidAdvancedInitializationSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FAkAndroidAdvancedInitializationSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkAndroidAdvancedInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkAndroidAdvancedInitializationSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkAndroidAdvancedInitializationSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkAndroidAdvancedInitializationSettings ****************************

// ********** Begin Class UAkAndroidInitializationSettings Function MigrateMultiCoreRendering ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics
struct UHT_STATICS
{
	struct AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MigrateMultiCoreRendering constinit property declarations *************
	static void NewProp_NewValue_SetBit(void* Obj)
	{
		((AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MigrateMultiCoreRendering constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MigrateMultiCoreRendering Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms), &UHT_STATICS::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MigrateMultiCoreRendering Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkAndroidInitializationSettings, nullptr, "MigrateMultiCoreRendering", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkAndroidInitializationSettings::execMigrateMultiCoreRendering)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class UAkAndroidInitializationSettings Function MigrateMultiCoreRendering ********

// ********** Begin Class UAkAndroidInitializationSettings *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkAndroidInitializationSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAndroidInitializationSettings constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkAndroidInitializationSettings constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("MigrateMultiCoreRendering"), .Pointer = &UAkAndroidInitializationSettings::execMigrateMultiCoreRendering },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 4a1406991d4a344ebeaf5f7b7a0e82d05f32dcc4
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAndroidInitializationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkAndroidInitializationSettings Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAndroidInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSettings_MetaData), NewProp_CommonSettings_MetaData) }; // c4c676730747278c63afdf478467a55fdff79c35
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAndroidInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationSettings_MetaData), NewProp_CommunicationSettings_MetaData) }; // 8e2233cdcdf10dd71a202c50f28e501a097382ae
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAndroidInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 2284fcd51938740441b21f78db6c9c55692a2762
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommonSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommunicationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedSettings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkAndroidInitializationSettings Property Definitions **********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkPlatformInitializationSettingsBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkAndroidInitializationSettings,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAkAndroidInitializationSettings_StaticRegisterNativesUAkAndroidInitializationSettings()
{
	UClass* Class = UAkAndroidInitializationSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAndroidInitializationSettings;
UClass* Z_Construct_UClass_UAkAndroidInitializationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkAndroidInitializationSettings;
		if (!Z_Registration_Info_UClass_UAkAndroidInitializationSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkAndroidInitializationSettings"),
				Z_Registration_Info_UClass_UAkAndroidInitializationSettings.InnerSingleton,
				UAkAndroidInitializationSettings_StaticRegisterNativesUAkAndroidInitializationSettings,
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
		return Z_Registration_Info_UClass_UAkAndroidInitializationSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkAndroidInitializationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAndroidInitializationSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAndroidInitializationSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAndroidInitializationSettings);
UAkAndroidInitializationSettings::~UAkAndroidInitializationSettings() {}
// ********** End Class UAkAndroidInitializationSettings *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI, TEXT("EAkAndroidAudioAPI"), &ZRIE_EAkAndroidAudioAPI, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2718374819U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings, Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkAndroidAdvancedInitializationSettings"),&Z_Registration_Info_UScriptStruct_FAkAndroidAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAndroidAdvancedInitializationSettings), 579140821U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAndroidInitializationSettings, TEXT("UAkAndroidInitializationSettings"), &Z_Registration_Info_UClass_UAkAndroidInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAndroidInitializationSettings), 2477763693U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h__Script_AkAudio_0bdb77a3546a0d29f50831f250938b4bae75b790{
	TEXT("/Script/AkAudio"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
