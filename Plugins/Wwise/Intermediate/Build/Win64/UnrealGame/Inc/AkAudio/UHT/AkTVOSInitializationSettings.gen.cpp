// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h"
#include "InitializationSettings/AkAudioSession.h"
#include "InitializationSettings/AkInitializationSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkTVOSInitializationSettings() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkTVOSInitializationSettings(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkTVOSInitializationSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FAkTVOSAdvancedInitializationSettings *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkTVOSAdvancedInitializationSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkTVOSAdvancedInitializationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_uNumSpatialAudioPointSources_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "MinWwiseVersion", "2023.1" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of Apple Spatial Audio point sources to allocate for 3D audio use (each point source is a system audio object)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerboseSystemOutput_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "MinWwiseVersion", "2023.1" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Print detailed system output information to the system log." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkTVOSAdvancedInitializationSettings constinit property declarations 
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_uNumSpatialAudioPointSources;
	static void NewProp_bVerboseSystemOutput_SetBit(void* Obj)
	{
		((FAkTVOSAdvancedInitializationSettings*)Obj)->bVerboseSystemOutput = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerboseSystemOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkTVOSAdvancedInitializationSettings constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkTVOSAdvancedInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkTVOSAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkTVOSAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

// ********** Begin ScriptStruct FAkTVOSAdvancedInitializationSettings Property Definitions ********
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_uNumSpatialAudioPointSources = { "uNumSpatialAudioPointSources", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkTVOSAdvancedInitializationSettings, uNumSpatialAudioPointSources), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_uNumSpatialAudioPointSources_MetaData), NewProp_uNumSpatialAudioPointSources_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bVerboseSystemOutput = { "bVerboseSystemOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkTVOSAdvancedInitializationSettings), &UHT_STATICS::NewProp_bVerboseSystemOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerboseSystemOutput_MetaData), NewProp_bVerboseSystemOutput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_uNumSpatialAudioPointSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bVerboseSystemOutput,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkTVOSAdvancedInitializationSettings Property Definitions **********
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
	&NewStructOps,
	"AkTVOSAdvancedInitializationSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkTVOSAdvancedInitializationSettings>(),
	alignof(FAkTVOSAdvancedInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkTVOSAdvancedInitializationSettings;
UScriptStruct* Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkTVOSAdvancedInitializationSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkTVOSAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkTVOSAdvancedInitializationSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FAkTVOSAdvancedInitializationSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkTVOSAdvancedInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkTVOSAdvancedInitializationSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkTVOSAdvancedInitializationSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkTVOSAdvancedInitializationSettings *******************************

// ********** Begin Class UAkTVOSInitializationSettings ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkTVOSInitializationSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSession_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_tvOS/AkTVOSInitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkTVOSInitializationSettings constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioSession;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkTVOSInitializationSettings constinit property declarations **************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkTVOSInitializationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkTVOSInitializationSettings Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkTVOSInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSettings_MetaData), NewProp_CommonSettings_MetaData) }; // c4c676730747278c63afdf478467a55fdff79c35
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AudioSession = { "AudioSession", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkTVOSInitializationSettings, AudioSession), Z_Construct_UScriptStruct_FAkAudioSession, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSession_MetaData), NewProp_AudioSession_MetaData) }; // 13f2735327f1c8692be2be87680cb0b1aed70e4f
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkTVOSInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationSettings_MetaData), NewProp_CommunicationSettings_MetaData) }; // 8e2233cdcdf10dd71a202c50f28e501a097382ae
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkTVOSInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 3e17c1cc9112e2a56b2e7166f75491e01a8e85ca
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommonSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommunicationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedSettings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkTVOSInitializationSettings Property Definitions *************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkPlatformInitializationSettingsBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkTVOSInitializationSettings,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkTVOSInitializationSettings;
UClass* Z_Construct_UClass_UAkTVOSInitializationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkTVOSInitializationSettings;
		if (!Z_Registration_Info_UClass_UAkTVOSInitializationSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkTVOSInitializationSettings"),
				Z_Registration_Info_UClass_UAkTVOSInitializationSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkTVOSInitializationSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkTVOSInitializationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkTVOSInitializationSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkTVOSInitializationSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkTVOSInitializationSettings);
UAkTVOSInitializationSettings::~UAkTVOSInitializationSettings() {}
// ********** End Class UAkTVOSInitializationSettings **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings, Z_Construct_UScriptStruct_FAkTVOSAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkTVOSAdvancedInitializationSettings"),&Z_Registration_Info_UScriptStruct_FAkTVOSAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkTVOSAdvancedInitializationSettings), 1041744332U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkTVOSInitializationSettings, TEXT("UAkTVOSInitializationSettings"), &Z_Registration_Info_UClass_UAkTVOSInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkTVOSInitializationSettings), 2141598136U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_tvOS_AkTVOSInitializationSettings_h__Script_AkAudio_9c9aa0e79215dd0cebec05156cab45e6b010e3cb{
	TEXT("/Script/AkAudio"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
