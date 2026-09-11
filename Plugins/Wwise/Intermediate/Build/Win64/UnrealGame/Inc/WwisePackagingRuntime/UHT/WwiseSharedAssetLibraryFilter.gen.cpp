// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Packaging/WwiseSharedAssetLibraryFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseSharedAssetLibraryFilter() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwisePackagingRuntime(ETypeConstructPhase);
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseFilterableAssetLibrary(ETypeConstructPhase);
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilter(ETypeConstructPhase);
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilter(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UWwiseSharedAssetLibraryFilter *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWwiseSharedAssetLibraryFilter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A reusable list of Wwise Asset Library Filters. \n */" },
#endif
		{ "DisplayName", "Wwise Shared Asset Library Filter" },
		{ "IncludePath", "Wwise/Packaging/WwiseSharedAssetLibraryFilter.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseSharedAssetLibraryFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A reusable list of Wwise Asset Library Filters." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseSharedAssetLibraryFilter constinit property declarations ***********
// ********** End Class UWwiseSharedAssetLibraryFilter constinit property declarations *************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseSharedAssetLibraryFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWwiseFilterableAssetLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwisePackagingRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWwiseSharedAssetLibraryFilter,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter;
UClass* Z_Construct_UClass_UWwiseSharedAssetLibraryFilter(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWwiseSharedAssetLibraryFilter;
		if (!Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WwiseSharedAssetLibraryFilter"),
				Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.InnerSingleton,
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
		return Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseSharedAssetLibraryFilter);
UWwiseSharedAssetLibraryFilter::~UWwiseSharedAssetLibraryFilter() {}
// ********** End Class UWwiseSharedAssetLibraryFilter *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseSharedAssetLibraryFilter_h__Script_WwisePackagingRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseSharedAssetLibraryFilter, TEXT("UWwiseSharedAssetLibraryFilter"), &Z_Registration_Info_UClass_UWwiseSharedAssetLibraryFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseSharedAssetLibraryFilter), 2239368620U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseSharedAssetLibraryFilter_h__Script_WwisePackagingRuntime_5f5ce76a0902809e7b28cd20d54b63624576c6d8{
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
