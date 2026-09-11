// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Packaging/WwiseAssetLibraryGroup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibraryGroup() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwisePackaging(ETypeConstructPhase);
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibraryGroup(ETypeConstructPhase);
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibrary(ETypeConstructPhase);
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibraryGroup(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UWwiseAssetLibraryGroup **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWwiseAssetLibraryGroup_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prioritized list of all Wwise Asset Libraries to include when packaging its Gameplay Module's Wwise Assets.\n// If no values are set or if they fall through, shared Wwise Assets are cooked as Additional Data.\n" },
#endif
		{ "DisplayName", "Wwise Asset Library Filter Group" },
		{ "IncludePath", "Wwise/Packaging/WwiseAssetLibraryGroup.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryGroup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prioritized list of all Wwise Asset Libraries to include when packaging its Gameplay Module's Wwise Assets.\nIf no values are set or if they fall through, shared Wwise Assets are cooked as Additional Data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Libraries_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Prioritized list of all Wwise Libraries to include when packaging Wwise assets as Bulk Data.\n//If no value is set or if they fall through, shared Wwise asset files are cooked as Additional Data.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibraryGroup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prioritized list of all Wwise Libraries to include when packaging Wwise assets as Bulk Data.\nIf no value is set or if they fall through, shared Wwise asset files are cooked as Additional Data." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseAssetLibraryGroup constinit property declarations ******************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Libraries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Libraries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWwiseAssetLibraryGroup constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibraryGroup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UWwiseAssetLibraryGroup Property Definitions *****************************
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_Libraries_Inner = { "Libraries", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWwiseAssetLibrary, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Libraries = { "Libraries", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAssetLibraryGroup, Libraries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Libraries_MetaData), NewProp_Libraries_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Libraries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Libraries,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UWwiseAssetLibraryGroup Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwisePackaging,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWwiseAssetLibraryGroup,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseAssetLibraryGroup;
UClass* Z_Construct_UClass_UWwiseAssetLibraryGroup(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWwiseAssetLibraryGroup;
		if (!Z_Registration_Info_UClass_UWwiseAssetLibraryGroup.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WwiseAssetLibraryGroup"),
				Z_Registration_Info_UClass_UWwiseAssetLibraryGroup.InnerSingleton,
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
		return Z_Registration_Info_UClass_UWwiseAssetLibraryGroup.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWwiseAssetLibraryGroup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibraryGroup.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibraryGroup.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseAssetLibraryGroup);
// ********** End Class UWwiseAssetLibraryGroup ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibraryGroup_h__Script_WwisePackaging_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibraryGroup, TEXT("UWwiseAssetLibraryGroup"), &Z_Registration_Info_UClass_UWwiseAssetLibraryGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibraryGroup), 1537729392U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibraryGroup_h__Script_WwisePackaging_b4e7af7c173ff8c949409854bb9bc8b0e64549a0{
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
