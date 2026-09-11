// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_iOS/AkIOSInitializationSettings.h"
#include "InitializationSettings/AkAudioSession.h"
#include "InitializationSettings/AkInitializationSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkIOSInitializationSettings() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkIOSAdvancedInitializationSettings(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkIOSInitializationSettings(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkIOSInitializationSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FAkIOSAdvancedInitializationSettings ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkIOSAdvancedInitializationSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkIOSAdvancedInitializationSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkIOSAdvancedInitializationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_iOS/AkIOSInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_uNumSpatialAudioPointSources_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "MinWwiseVersion", "2023.1" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_iOS/AkIOSInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of Apple Spatial Audio point sources to allocate for 3D audio use (each point source is a system audio object)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerboseSystemOutput_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "MinWwiseVersion", "2023.1" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_iOS/AkIOSInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Print detailed system output information to the system log." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkIOSAdvancedInitializationSettings constinit property declarations 
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_uNumSpatialAudioPointSources;
	static void NewProp_bVerboseSystemOutput_SetBit(void* Obj)
	{
		((FAkIOSAdvancedInitializationSettings*)Obj)->bVerboseSystemOutput = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerboseSystemOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkIOSAdvancedInitializationSettings constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkIOSAdvancedInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkIOSAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkIOSAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

// ********** Begin ScriptStruct FAkIOSAdvancedInitializationSettings Property Definitions *********
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_uNumSpatialAudioPointSources = { "uNumSpatialAudioPointSources", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkIOSAdvancedInitializationSettings, uNumSpatialAudioPointSources), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_uNumSpatialAudioPointSources_MetaData), NewProp_uNumSpatialAudioPointSources_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bVerboseSystemOutput = { "bVerboseSystemOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkIOSAdvancedInitializationSettings), &UHT_STATICS::NewProp_bVerboseSystemOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerboseSystemOutput_MetaData), NewProp_bVerboseSystemOutput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_uNumSpatialAudioPointSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bVerboseSystemOutput,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkIOSAdvancedInitializationSettings Property Definitions ***********
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
	&NewStructOps,
	"AkIOSAdvancedInitializationSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkIOSAdvancedInitializationSettings>(),
	alignof(FAkIOSAdvancedInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkIOSAdvancedInitializationSettings;
UScriptStruct* Z_Construct_UScriptStruct_FAkIOSAdvancedInitializationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkIOSAdvancedInitializationSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkIOSAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkIOSAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkIOSAdvancedInitializationSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FAkIOSAdvancedInitializationSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkIOSAdvancedInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkIOSAdvancedInitializationSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkIOSAdvancedInitializationSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkIOSAdvancedInitializationSettings ********************************

// ********** Begin Class UAkIOSInitializationSettings *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkIOSInitializationSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Platforms/AkPlatform_iOS/AkIOSInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_iOS/AkIOSInitializationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_iOS/AkIOSInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSession_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_iOS/AkIOSInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_iOS/AkIOSInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_iOS/AkIOSInitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkIOSInitializationSettings constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioSession;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkIOSInitializationSettings constinit property declarations ***************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkIOSInitializationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkIOSInitializationSettings Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkIOSInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSettings_MetaData), NewProp_CommonSettings_MetaData) }; // c4c676730747278c63afdf478467a55fdff79c35
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AudioSession = { "AudioSession", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkIOSInitializationSettings, AudioSession), Z_Construct_UScriptStruct_FAkAudioSession, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSession_MetaData), NewProp_AudioSession_MetaData) }; // 13f2735327f1c8692be2be87680cb0b1aed70e4f
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkIOSInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationSettings_MetaData), NewProp_CommunicationSettings_MetaData) }; // 8e2233cdcdf10dd71a202c50f28e501a097382ae
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkIOSInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkIOSAdvancedInitializationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // 7cc97a25ee7c3d59b43ed00771896ebc2ec3fab9
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommonSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommunicationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedSettings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkIOSInitializationSettings Property Definitions **************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkPlatformInitializationSettingsBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkIOSInitializationSettings,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UAkIOSInitializationSettings;
UClass* Z_Construct_UClass_UAkIOSInitializationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkIOSInitializationSettings;
		if (!Z_Registration_Info_UClass_UAkIOSInitializationSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkIOSInitializationSettings"),
				Z_Registration_Info_UClass_UAkIOSInitializationSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkIOSInitializationSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkIOSInitializationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkIOSInitializationSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkIOSInitializationSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkIOSInitializationSettings);
UAkIOSInitializationSettings::~UAkIOSInitializationSettings() {}
// ********** End Class UAkIOSInitializationSettings ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSInitializationSettings_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAkIOSAdvancedInitializationSettings, Z_Construct_UScriptStruct_FAkIOSAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkIOSAdvancedInitializationSettings"),&Z_Registration_Info_UScriptStruct_FAkIOSAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkIOSAdvancedInitializationSettings), 2093578789U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkIOSInitializationSettings, TEXT("UAkIOSInitializationSettings"), &Z_Registration_Info_UClass_UAkIOSInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkIOSInitializationSettings), 3740472510U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_iOS_AkIOSInitializationSettings_h__Script_AkAudio_0e22dc3c1cec57f3d5686e95a7e1ec1760cfef17{
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
