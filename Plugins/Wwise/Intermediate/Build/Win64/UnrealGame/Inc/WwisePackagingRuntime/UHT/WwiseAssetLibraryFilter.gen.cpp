// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Packaging/WwiseAssetLibraryFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryFilter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwisePackagingRuntime(ETypeConstructPhase);
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter(ETypeConstructPhase);
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UWwiseAssetLibraryFilter *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWwiseAssetLibraryFilter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Wwise|AssetLibrary|Filter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Abstract base UObject representing a single AssetLibrary filter.\n *\n * A filter removes elements from the the Asset Library through the IsAssetAvailable operation.\n */" },
#endif
		{ "IncludePath", "Wwise/Packaging/WwiseAssetLibraryFilter.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abstract base UObject representing a single AssetLibrary filter.\n\nA filter removes elements from the the Asset Library through the IsAssetAvailable operation." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseAssetLibraryFilter constinit property declarations *****************
// ********** End Class UWwiseAssetLibraryFilter constinit property declarations *******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwisePackagingRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWwiseAssetLibraryFilter,
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
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseAssetLibraryFilter;
UClass* Z_Construct_UClass_UWwiseAssetLibraryFilter(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWwiseAssetLibraryFilter;
		if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WwiseAssetLibraryFilter"),
				Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.InnerSingleton,
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
		return Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryFilter.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseAssetLibraryFilter);
UWwiseAssetLibraryFilter::~UWwiseAssetLibraryFilter() {}
// ********** End Class UWwiseAssetLibraryFilter ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryFilter_h__Script_WwisePackagingRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibraryFilter, TEXT("UWwiseAssetLibraryFilter"), &Z_Registration_Info_UClass_UWwiseAssetLibraryFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryFilter), 2523362772U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackagingRuntime_Public_Wwise_Packaging_WwiseAssetLibraryFilter_h__Script_WwisePackagingRuntime_2a664002f6ebfa178789b3fc33b48196be6d4386{
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
