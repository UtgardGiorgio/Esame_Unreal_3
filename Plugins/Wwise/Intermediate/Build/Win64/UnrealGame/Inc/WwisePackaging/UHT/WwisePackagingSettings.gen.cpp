// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Packaging/WwisePackagingSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwisePackagingSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwisePackaging(ETypeConstructPhase);
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwisePackagingSettings(ETypeConstructPhase);
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibrary(ETypeConstructPhase);
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibraryGroup(ETypeConstructPhase);
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwisePackagingSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UWwisePackagingSettings **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWwisePackagingSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Wwise/Packaging/WwisePackagingSettings.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPackageAsBulkData_MetaData[] = {
		{ "Category", "Cooking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Determines whether the files are written as loose files in the packages, or inside the UAssets as Bulk Data.\n" },
#endif
		{ "DisplayName", "Package as Bulk Data" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the files are written as loose files in the packages, or inside the UAssets as Bulk Data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetLibrariesKeepAlive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetLibraryGroupsToKeepAlive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateAssetLibraryGroup_MetaData[] = {
		{ "Category", "Cooking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Template Library Group can be used when you create Modular Gameplay. By default, the template does nothing.\n" },
#endif
		{ "EditCondition", "bPackageAsBulkData" },
		{ "EditConditionHides", "TRUE" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Template Library Group can be used when you create Modular Gameplay. By default, the template does nothing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayModuleWithoutGroups_MetaData[] = {
		{ "Category", "GroupPreview" },
		{ "EditCondition", "bPackageAsBulkData" },
		{ "EditConditionHides", "TRUE" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingSettings.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialAssetLibraryCreated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Editor: If we are enabling the Bulk Data for the first time, we should create a default Shared Asset library. \n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor: If we are enabling the Bulk Data for the first time, we should create a default Shared Asset library." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMigratedToLibraryGroup_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used to track whether Library Groups exist after migrating the integration\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwisePackagingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to track whether Library Groups exist after migrating the integration" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UWwisePackagingSettings constinit property declarations ******************
	static void NewProp_bPackageAsBulkData_SetBit(void* Obj)
	{
		((UWwisePackagingSettings*)Obj)->bPackageAsBulkData = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackageAsBulkData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetLibrariesKeepAlive_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetLibrariesKeepAlive;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AssetLibraryGroupsToKeepAlive_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetLibraryGroupsToKeepAlive;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TemplateAssetLibraryGroup;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameplayModuleWithoutGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayModuleWithoutGroups;
#if WITH_EDITORONLY_DATA
	static void NewProp_bInitialAssetLibraryCreated_SetBit(void* Obj)
	{
		((UWwisePackagingSettings*)Obj)->bInitialAssetLibraryCreated = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialAssetLibraryCreated;
	static void NewProp_bMigratedToLibraryGroup_SetBit(void* Obj)
	{
		((UWwisePackagingSettings*)Obj)->bMigratedToLibraryGroup = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMigratedToLibraryGroup;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWwisePackagingSettings constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwisePackagingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UWwisePackagingSettings Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPackageAsBulkData = { "bPackageAsBulkData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwisePackagingSettings), &UHT_STATICS::NewProp_bPackageAsBulkData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPackageAsBulkData_MetaData), NewProp_bPackageAsBulkData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AssetLibrariesKeepAlive_Inner = { "AssetLibrariesKeepAlive", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWwiseAssetLibrary, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AssetLibrariesKeepAlive = { "AssetLibrariesKeepAlive", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UWwisePackagingSettings, AssetLibrariesKeepAlive), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetLibrariesKeepAlive_MetaData), NewProp_AssetLibrariesKeepAlive_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_AssetLibraryGroupsToKeepAlive_Inner = { "AssetLibraryGroupsToKeepAlive", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWwiseAssetLibraryGroup, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AssetLibraryGroupsToKeepAlive = { "AssetLibraryGroupsToKeepAlive", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UWwisePackagingSettings, AssetLibraryGroupsToKeepAlive), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetLibraryGroupsToKeepAlive_MetaData), NewProp_AssetLibraryGroupsToKeepAlive_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_TemplateAssetLibraryGroup = { "TemplateAssetLibraryGroup", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UWwisePackagingSettings, TemplateAssetLibraryGroup), Z_Construct_UClass_UWwiseAssetLibraryGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateAssetLibraryGroup_MetaData), NewProp_TemplateAssetLibraryGroup_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_GameplayModuleWithoutGroups_Inner = { "GameplayModuleWithoutGroups", nullptr, (EPropertyFlags)0x0000000000024000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GameplayModuleWithoutGroups = { "GameplayModuleWithoutGroups", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UWwisePackagingSettings, GameplayModuleWithoutGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayModuleWithoutGroups_MetaData), NewProp_GameplayModuleWithoutGroups_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInitialAssetLibraryCreated = { "bInitialAssetLibraryCreated", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwisePackagingSettings), &UHT_STATICS::NewProp_bInitialAssetLibraryCreated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialAssetLibraryCreated_MetaData), NewProp_bInitialAssetLibraryCreated_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMigratedToLibraryGroup = { "bMigratedToLibraryGroup", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwisePackagingSettings), &UHT_STATICS::NewProp_bMigratedToLibraryGroup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMigratedToLibraryGroup_MetaData), NewProp_bMigratedToLibraryGroup_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPackageAsBulkData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetLibrariesKeepAlive_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetLibrariesKeepAlive,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetLibraryGroupsToKeepAlive_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetLibraryGroupsToKeepAlive,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TemplateAssetLibraryGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GameplayModuleWithoutGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GameplayModuleWithoutGroups,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInitialAssetLibraryCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMigratedToLibraryGroup,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UWwisePackagingSettings Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwisePackaging,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWwisePackagingSettings,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UWwisePackagingSettings;
UClass* Z_Construct_UClass_UWwisePackagingSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWwisePackagingSettings;
		if (!Z_Registration_Info_UClass_UWwisePackagingSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WwisePackagingSettings"),
				Z_Registration_Info_UClass_UWwisePackagingSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UWwisePackagingSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWwisePackagingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwisePackagingSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwisePackagingSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwisePackagingSettings);
// ********** End Class UWwisePackagingSettings ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwisePackagingSettings_h__Script_WwisePackaging_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwisePackagingSettings, TEXT("UWwisePackagingSettings"), &Z_Registration_Info_UClass_UWwisePackagingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwisePackagingSettings), 4258849931U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwisePackagingSettings_h__Script_WwisePackaging_0b20fd6b835864d97669aa0d9b522058d15bcc28{
	TEXT("/Script/WwisePackaging"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
