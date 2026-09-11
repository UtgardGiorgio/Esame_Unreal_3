// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h"
#include "InitializationSettings/AkInitializationSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkLinuxArm64InitializationSettings() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxArm64InitializationSettings(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitializationSettingsBase(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxArm64InitializationSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkLinuxArm64InitializationSettings Function MigrateMultiCoreRendering ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering_Statics
struct UHT_STATICS
{
	struct AkLinuxArm64InitializationSettings_eventMigrateMultiCoreRendering_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MigrateMultiCoreRendering constinit property declarations *************
	static void NewProp_NewValue_SetBit(void* Obj)
	{
		((AkLinuxArm64InitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MigrateMultiCoreRendering constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MigrateMultiCoreRendering Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkLinuxArm64InitializationSettings_eventMigrateMultiCoreRendering_Parms), &UHT_STATICS::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MigrateMultiCoreRendering Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkLinuxArm64InitializationSettings, nullptr, "MigrateMultiCoreRendering", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkLinuxArm64InitializationSettings_eventMigrateMultiCoreRendering_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkLinuxArm64InitializationSettings_eventMigrateMultiCoreRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkLinuxArm64InitializationSettings::execMigrateMultiCoreRendering)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class UAkLinuxArm64InitializationSettings Function MigrateMultiCoreRendering *****

// ********** Begin Class UAkLinuxArm64InitializationSettings **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkLinuxArm64InitializationSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_LinuxArm64/AkLinuxArm64InitializationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkLinuxArm64InitializationSettings constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkLinuxArm64InitializationSettings constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("MigrateMultiCoreRendering"), .Pointer = &UAkLinuxArm64InitializationSettings::execMigrateMultiCoreRendering },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkLinuxArm64InitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // f651281808c401198a262405fd54e64120e9689b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLinuxArm64InitializationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkLinuxArm64InitializationSettings Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLinuxArm64InitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSettings_MetaData), NewProp_CommonSettings_MetaData) }; // c4c676730747278c63afdf478467a55fdff79c35
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLinuxArm64InitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicationSettings_MetaData), NewProp_CommunicationSettings_MetaData) }; // 8e2233cdcdf10dd71a202c50f28e501a097382ae
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLinuxArm64InitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // a045b4c6da594334dd92b57aed309e8409954b4b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommonSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommunicationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedSettings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkLinuxArm64InitializationSettings Property Definitions *******************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkPlatformInitializationSettingsBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkLinuxArm64InitializationSettings,
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
static void UAkLinuxArm64InitializationSettings_StaticRegisterNativesUAkLinuxArm64InitializationSettings()
{
	UClass* Class = UAkLinuxArm64InitializationSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings;
UClass* Z_Construct_UClass_UAkLinuxArm64InitializationSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkLinuxArm64InitializationSettings;
		if (!Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkLinuxArm64InitializationSettings"),
				Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings.InnerSingleton,
				UAkLinuxArm64InitializationSettings_StaticRegisterNativesUAkLinuxArm64InitializationSettings,
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
		return Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkLinuxArm64InitializationSettings);
UAkLinuxArm64InitializationSettings::~UAkLinuxArm64InitializationSettings() {}
// ********** End Class UAkLinuxArm64InitializationSettings ****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkLinuxArm64InitializationSettings, TEXT("UAkLinuxArm64InitializationSettings"), &Z_Registration_Info_UClass_UAkLinuxArm64InitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLinuxArm64InitializationSettings), 2297407071U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64InitializationSettings_h__Script_AkAudio_4b790635f8ee44ffd1e2d3b8f73c20fc05cbd7f4{
	TEXT("/Script/AkAudio"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
