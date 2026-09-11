// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_Mac/AkMacInitializationSettings.h"
#include "InitializationSettings/AkInitializationSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkMacInitializationSettings() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMacAdvancedInitializationSettings(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkMacInitializationSettings(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkMacInitializationSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FAkMacAdvancedInitializationSettings ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkMacAdvancedInitializationSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkMacAdvancedInitializationSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkMacAdvancedInitializationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Mac/AkMacInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_uNumSpatialAudioPointSources_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "MinWwiseVersion", "2023.1" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Mac/AkMacInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of Apple Spatial Audio point sources to allocate for 3D audio use (each point source is a system audio object)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerboseSystemOutput_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "MinWwiseVersion", "2023.1" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Mac/AkMacInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Print detailed system output information to the system log." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkMacAdvancedInitializationSettings constinit property declarations 
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_uNumSpatialAudioPointSources;
	static void NewProp_bVerboseSystemOutput_SetBit(void* Obj)
	{
		((FAkMacAdvancedInitializationSettings*)Obj)->bVerboseSystemOutput = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerboseSystemOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkMacAdvancedInitializationSettings constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMacAdvancedInitializationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkMacAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkMacAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

// ********** Begin ScriptStruct FAkMacAdvancedInitializationSettings Property Definitions *********
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_uNumSpatialAudioPointSources = { "uNumSpatialAudioPointSources", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMacAdvancedInitializationSettings, uNumSpatialAudioPointSources), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_uNumSpatialAudioPointSources_MetaData), NewProp_uNumSpatialAudioPointSources_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bVerboseSystemOutput = { "bVerboseSystemOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkMacAdvancedInitializationSettings), &UHT_STATICS::NewProp_bVerboseSystemOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerboseSystemOutput_MetaData), NewProp_bVerboseSystemOutput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_uNumSpatialAudioPointSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bVerboseSystemOutput,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkMacAdvancedInitializationSettings Property Definitions ***********
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
	&NewStructOps,
	"AkMacAdvancedInitializationSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkMacAdvancedInitializationSettings>(),
	alignof(FAkMacAdvancedInitializationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkMacAdvancedInitializationSettings;
UScriptStruct* Z_Construct_UScriptStruct_FAkMacAdvancedInitializationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkMacAdvancedInitializationSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkMacAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMacAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkMacAdvancedInitializationSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FAkMacAdvancedInitializationSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkMacAdvancedInitializationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkMacAdvancedInitializationSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkMacAdvancedInitializationSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkMacAdvancedInitializationSettings ********************************

// ********** Begin Class UAkMacInitializationSettings Function MigrateMultiCoreRendering **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkMacInitializationSettings_MigrateMultiCoreRendering_Statics
struct UHT_STATICS
{
	struct AkMacInitializationSettings_eventMigrateMultiCoreRendering_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Mac/AkMacInitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MigrateMultiCoreRendering constinit property declarations *************
	static void NewProp_NewValue_SetBit(void* Obj)
	{
		((AkMacInitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MigrateMultiCoreRendering constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MigrateMultiCoreRendering Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkMacInitializationSettings_eventMigrateMultiCoreRendering_Parms), &UHT_STATICS::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MigrateMultiCoreRendering Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkMacInitializationSettings, nullptr, "MigrateMultiCoreRendering", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkMacInitializationSettings_eventMigrateMultiCoreRendering_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkMacInitializationSettings_eventMigrateMultiCoreRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkMacInitializationSettings_MigrateMultiCoreRendering(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkMacInitializationSettings::execMigrateMultiCoreRendering)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class UAkMacInitializationSettings Function MigrateMultiCoreRendering ************

// ********** Begin Class UAkMacInitializationSettings *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkMacInitializationSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Platforms/AkPlatform_Mac/AkMacInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Mac/AkMacInitializationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Mac/AkMacInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Mac/AkMacInitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Mac/AkMacInitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkMacInitializationSettings constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkMacInitializationSettings constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("MigrateMultiCoreRendering"), .Pointer = &UAkMacInitializationSettings::execMigrateMultiCoreRendering },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkMacInitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 672a47adc6caed588635fac4044f9ff2edc37180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMacInitializationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkMacInitializationSettings Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkMacInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSettings_MetaData), NewProp_CommonSettings_MetaData) }; // c4c676730747278c63afdf478467a55fdff79c35
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkMacInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationSettings_MetaData), NewProp_CommunicationSettings_MetaData) }; // 8e2233cdcdf10dd71a202c50f28e501a097382ae
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkMacInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkMacAdvancedInitializationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // edfec71908198701f47a83e6ab2cfad7e0e8223e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommonSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommunicationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedSettings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkMacInitializationSettings Property Definitions **************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkPlatformInitializationSettingsBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkMacInitializationSettings,
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
static void UAkMacInitializationSettings_StaticRegisterNativesUAkMacInitializationSettings()
{
	UClass* Class = UAkMacInitializationSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkMacInitializationSettings;
UClass* Z_Construct_UClass_UAkMacInitializationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkMacInitializationSettings;
		if (!Z_Registration_Info_UClass_UAkMacInitializationSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkMacInitializationSettings"),
				Z_Registration_Info_UClass_UAkMacInitializationSettings.InnerSingleton,
				UAkMacInitializationSettings_StaticRegisterNativesUAkMacInitializationSettings,
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
		return Z_Registration_Info_UClass_UAkMacInitializationSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkMacInitializationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMacInitializationSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkMacInitializationSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkMacInitializationSettings);
UAkMacInitializationSettings::~UAkMacInitializationSettings() {}
// ********** End Class UAkMacInitializationSettings ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacInitializationSettings_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAkMacAdvancedInitializationSettings, Z_Construct_UScriptStruct_FAkMacAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkMacAdvancedInitializationSettings"),&Z_Registration_Info_UScriptStruct_FAkMacAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMacAdvancedInitializationSettings), 3992897305U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkMacInitializationSettings, TEXT("UAkMacInitializationSettings"), &Z_Registration_Info_UClass_UAkMacInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMacInitializationSettings), 1884508922U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Mac_AkMacInitializationSettings_h__Script_AkAudio_5dd576a0e656712adc600910a7a5ddec8d8cee5b{
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
