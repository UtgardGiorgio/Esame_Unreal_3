// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Packaging/WwiseFilterableAssetLibrary.h"
#include "Wwise/Packaging/WwiseAssetLibraryInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseFilterableAssetLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwisePackagingRuntime(ETypeConstructPhase);
WWISEPACKAGINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo(ETypeConstructPhase);
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseFilterableAssetLibrary(ETypeConstructPhase);
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseFilterableAssetLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UWwiseFilterableAssetLibrary *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWwiseFilterableAssetLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Abstract base UObject representing an object with an Editor-Only AssetLibraryInfo.\n *\n * This is typically for Shared AssetLibrary Filters and  AssetLibraries.\n *\n * This is used for WwiseAssetLibraryDetailsCustomization.\n */" },
#endif
		{ "IncludePath", "Wwise/Packaging/WwiseFilterableAssetLibrary.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseFilterableAssetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abstract base UObject representing an object with an Editor-Only AssetLibraryInfo.\n\nThis is typically for Shared AssetLibrary Filters and  AssetLibraries.\n\nThis is used for WwiseAssetLibraryDetailsCustomization." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Default" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseFilterableAssetLibrary.h" },
	};
#endif
#endif // WITH_METADATA

// ********** Begin Class UWwiseFilterableAssetLibrary constinit property declarations *************
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif
// ********** End Class UWwiseFilterableAssetLibrary constinit property declarations ***************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseFilterableAssetLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UWwiseFilterableAssetLibrary Property Definitions ************************
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010008800000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseFilterableAssetLibrary, Info), Z_Construct_UScriptStruct_FWwiseAssetLibraryInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 7fd90451d99b13a18a487e4f3f095bcac795cc8b
#endif
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
#endif
// ********** End Class UWwiseFilterableAssetLibrary Property Definitions **************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwisePackagingRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWwiseFilterableAssetLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(UHT_STATICS::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(UHT_STATICS::PropPointers), 0),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseFilterableAssetLibrary;
UClass* Z_Construct_UClass_UWwiseFilterableAssetLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWwiseFilterableAssetLibrary;
		if (!Z_Registration_Info_UClass_UWwiseFilterableAssetLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WwiseFilterableAssetLibrary"),
				Z_Registration_Info_UClass_UWwiseFilterableAssetLibrary.InnerSingleton,
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
		return Z_Registration_Info_UClass_UWwiseFilterableAssetLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWwiseFilterableAssetLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseFilterableAssetLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseFilterableAssetLibrary.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseFilterableAssetLibrary);
UWwiseFilterableAssetLibrary::~UWwiseFilterableAssetLibrary() {}
// ********** End Class UWwiseFilterableAssetLibrary ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseFilterableAssetLibrary_h__Script_WwisePackagingRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseFilterableAssetLibrary, TEXT("UWwiseFilterableAssetLibrary"), &Z_Registration_Info_UClass_UWwiseFilterableAssetLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseFilterableAssetLibrary), 3933618086U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseFilterableAssetLibrary_h__Script_WwisePackagingRuntime_122747070fbb6c1658a3c01d1b51287ecdbae284{
	TEXT("/Script/WwisePackagingRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
