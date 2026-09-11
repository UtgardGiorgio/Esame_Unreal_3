// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseExternalSourceSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseSimpleExternalSource(ETypeConstructPhase);
WWISESIMPLEEXTERNALSOURCE_API UClass* Z_Construct_UClass_UWwiseExternalSourceSettings(ETypeConstructPhase);
WWISESIMPLEEXTERNALSOURCE_API UClass* Z_Construct_UClass_UWwiseExternalSourceSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UWwiseExternalSourceSettings *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWwiseExternalSourceSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInfoTable_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.DataTable" },
		{ "Category", "ExternalSources" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Table of all information required to properly load all external source media in the project\n//All files in this table are packaged in the built project\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Table of all information required to properly load all external source media in the project\nAll files in this table are packaged in the built project" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceDefaultMedia_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.DataTable" },
		{ "Category", "ExternalSources" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Optional table that defines a default media entry in the MediaInfoTable to load when an External Source is loaded\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional table that defines a default media entry in the MediaInfoTable to load when an External Source is loaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceStagingDirectory_MetaData[] = {
		{ "Category", "ExternalSources" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Staging location for External Source Media when cooking the project\n//This is the location from which to load external source media in the built project\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Staging location for External Source Media when cooking the project\nThis is the location from which to load external source media in the built project" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseExternalSourceSettings constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_MediaInfoTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSourceDefaultMedia;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSourceStagingDirectory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWwiseExternalSourceSettings constinit property declarations ***************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseExternalSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UWwiseExternalSourceSettings Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MediaInfoTable = { "MediaInfoTable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseExternalSourceSettings, MediaInfoTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInfoTable_MetaData), NewProp_MediaInfoTable_MetaData) }; // af11f93e8a98b61a8502d3dfb50f3175321d399c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ExternalSourceDefaultMedia = { "ExternalSourceDefaultMedia", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseExternalSourceSettings, ExternalSourceDefaultMedia), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSourceDefaultMedia_MetaData), NewProp_ExternalSourceDefaultMedia_MetaData) }; // af11f93e8a98b61a8502d3dfb50f3175321d399c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ExternalSourceStagingDirectory = { "ExternalSourceStagingDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseExternalSourceSettings, ExternalSourceStagingDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSourceStagingDirectory_MetaData), NewProp_ExternalSourceStagingDirectory_MetaData) }; // a9ea974572ee54d1b93cb49a6434fdbad40b6bf5
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaInfoTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSourceDefaultMedia,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSourceStagingDirectory,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UWwiseExternalSourceSettings Property Definitions **************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseSimpleExternalSource,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWwiseExternalSourceSettings,
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
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseExternalSourceSettings;
UClass* Z_Construct_UClass_UWwiseExternalSourceSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWwiseExternalSourceSettings;
		if (!Z_Registration_Info_UClass_UWwiseExternalSourceSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WwiseExternalSourceSettings"),
				Z_Registration_Info_UClass_UWwiseExternalSourceSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UWwiseExternalSourceSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWwiseExternalSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseExternalSourceSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseExternalSourceSettings.OuterSingleton;
}
#undef UHT_STATICS
UWwiseExternalSourceSettings::UWwiseExternalSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseExternalSourceSettings);
UWwiseExternalSourceSettings::~UWwiseExternalSourceSettings() {}
// ********** End Class UWwiseExternalSourceSettings ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceSettings_h__Script_WwiseSimpleExternalSource_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseExternalSourceSettings, TEXT("UWwiseExternalSourceSettings"), &Z_Registration_Info_UClass_UWwiseExternalSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseExternalSourceSettings), 914023599U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceSettings_h__Script_WwiseSimpleExternalSource_6341cca4b886dc639184c4dbbbf00db6d69af94a{
	TEXT("/Script/WwiseSimpleExternalSource"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
