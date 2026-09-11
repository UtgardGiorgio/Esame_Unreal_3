// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkDeprecated.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkDeprecated() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkFolder(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkLocalizedMediaAsset(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkFolder(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkLocalizedMediaAsset(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkAssetData *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkAssetData_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//These classes are deprecated but we use them during migration to clean up old assets\n" },
#endif
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These classes are deprecated but we use them during migration to clean up old assets" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAssetData constinit property declarations *****************************
// ********** End Class UAkAssetData constinit property declarations *******************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkAssetData,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAssetData;
UClass* Z_Construct_UClass_UAkAssetData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkAssetData;
		if (!Z_Registration_Info_UClass_UAkAssetData.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkAssetData"),
				Z_Registration_Info_UClass_UAkAssetData.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkAssetData.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkAssetData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetData.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAssetData.OuterSingleton;
}
#undef UHT_STATICS
UAkAssetData::UAkAssetData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAssetData);
UAkAssetData::~UAkAssetData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAssetData)
// ********** End Class UAkAssetData ***************************************************************

// ********** Begin Class UAkAssetPlatformData *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkAssetPlatformData_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetDataPerPlatform_MetaData[] = {
		{ "Category", "UAkAssetData" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAssetData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAssetPlatformData constinit property declarations *********************
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetDataPerPlatform_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetDataPerPlatform_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssetDataPerPlatform;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentAssetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkAssetPlatformData constinit property declarations ***********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetPlatformData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkAssetPlatformData Property Definitions ********************************
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AssetDataPerPlatform_ValueProp = { "AssetDataPerPlatform", nullptr, (EPropertyFlags)0x0104000800020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAkAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AssetDataPerPlatform_Key_KeyProp = { "AssetDataPerPlatform_Key", nullptr, (EPropertyFlags)0x0100000800020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_AssetDataPerPlatform = { "AssetDataPerPlatform", nullptr, (EPropertyFlags)0x0144000800022001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAssetPlatformData, AssetDataPerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetDataPerPlatform_MetaData), NewProp_AssetDataPerPlatform_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentAssetData = { "CurrentAssetData", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAssetPlatformData, CurrentAssetData), Z_Construct_UClass_UAkAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAssetData_MetaData), NewProp_CurrentAssetData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetDataPerPlatform_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetDataPerPlatform_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetDataPerPlatform,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentAssetData,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkAssetPlatformData Property Definitions **********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkAssetPlatformData,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAssetPlatformData;
UClass* Z_Construct_UClass_UAkAssetPlatformData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkAssetPlatformData;
		if (!Z_Registration_Info_UClass_UAkAssetPlatformData.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkAssetPlatformData"),
				Z_Registration_Info_UClass_UAkAssetPlatformData.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkAssetPlatformData.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkAssetPlatformData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetPlatformData.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAssetPlatformData.OuterSingleton;
}
#undef UHT_STATICS
UAkAssetPlatformData::UAkAssetPlatformData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAssetPlatformData);
UAkAssetPlatformData::~UAkAssetPlatformData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAssetPlatformData)
// ********** End Class UAkAssetPlatformData *******************************************************

// ********** Begin Class UAkMediaAssetData ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkMediaAssetData_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkMediaAssetData constinit property declarations ************************
// ********** End Class UAkMediaAssetData constinit property declarations **************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMediaAssetData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkMediaAssetData,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkMediaAssetData;
UClass* Z_Construct_UClass_UAkMediaAssetData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkMediaAssetData;
		if (!Z_Registration_Info_UClass_UAkMediaAssetData.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkMediaAssetData"),
				Z_Registration_Info_UClass_UAkMediaAssetData.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkMediaAssetData.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkMediaAssetData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMediaAssetData.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkMediaAssetData.OuterSingleton;
}
#undef UHT_STATICS
UAkMediaAssetData::UAkMediaAssetData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkMediaAssetData);
UAkMediaAssetData::~UAkMediaAssetData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkMediaAssetData)
// ********** End Class UAkMediaAssetData **********************************************************

// ********** Begin Class UAkMediaAsset ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkMediaAsset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaAssetDataPerPlatform_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkMediaAsset constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaAssetDataPerPlatform_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MediaAssetDataPerPlatform_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MediaAssetDataPerPlatform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkMediaAsset constinit property declarations ******************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMediaAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkMediaAsset Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MediaAssetDataPerPlatform_ValueProp = { "MediaAssetDataPerPlatform", nullptr, (EPropertyFlags)0x0104000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAkMediaAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_MediaAssetDataPerPlatform_Key_KeyProp = { "MediaAssetDataPerPlatform_Key", nullptr, (EPropertyFlags)0x0100000000020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_MediaAssetDataPerPlatform = { "MediaAssetDataPerPlatform", nullptr, (EPropertyFlags)0x0144000000022001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UAkMediaAsset, MediaAssetDataPerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaAssetDataPerPlatform_MetaData), NewProp_MediaAssetDataPerPlatform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaAssetDataPerPlatform_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaAssetDataPerPlatform_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaAssetDataPerPlatform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkMediaAsset Property Definitions *****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkMediaAsset,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkMediaAsset;
UClass* Z_Construct_UClass_UAkMediaAsset(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkMediaAsset;
		if (!Z_Registration_Info_UClass_UAkMediaAsset.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkMediaAsset"),
				Z_Registration_Info_UClass_UAkMediaAsset.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkMediaAsset.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkMediaAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMediaAsset.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkMediaAsset.OuterSingleton;
}
#undef UHT_STATICS
UAkMediaAsset::UAkMediaAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkMediaAsset);
UAkMediaAsset::~UAkMediaAsset() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkMediaAsset)
// ********** End Class UAkMediaAsset **************************************************************

// ********** Begin Class UAkLocalizedMediaAsset ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkLocalizedMediaAsset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkLocalizedMediaAsset constinit property declarations *******************
// ********** End Class UAkLocalizedMediaAsset constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLocalizedMediaAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkMediaAsset,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkLocalizedMediaAsset,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkLocalizedMediaAsset;
UClass* Z_Construct_UClass_UAkLocalizedMediaAsset(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkLocalizedMediaAsset;
		if (!Z_Registration_Info_UClass_UAkLocalizedMediaAsset.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkLocalizedMediaAsset"),
				Z_Registration_Info_UClass_UAkLocalizedMediaAsset.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkLocalizedMediaAsset.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkLocalizedMediaAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLocalizedMediaAsset.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkLocalizedMediaAsset.OuterSingleton;
}
#undef UHT_STATICS
UAkLocalizedMediaAsset::UAkLocalizedMediaAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkLocalizedMediaAsset);
UAkLocalizedMediaAsset::~UAkLocalizedMediaAsset() {}
// ********** End Class UAkLocalizedMediaAsset *****************************************************

// ********** Begin Class UAkExternalMediaAsset ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkExternalMediaAsset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkExternalMediaAsset constinit property declarations ********************
// ********** End Class UAkExternalMediaAsset constinit property declarations **********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkExternalMediaAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkMediaAsset,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkExternalMediaAsset,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkExternalMediaAsset;
UClass* Z_Construct_UClass_UAkExternalMediaAsset(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkExternalMediaAsset;
		if (!Z_Registration_Info_UClass_UAkExternalMediaAsset.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkExternalMediaAsset"),
				Z_Registration_Info_UClass_UAkExternalMediaAsset.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkExternalMediaAsset.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkExternalMediaAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkExternalMediaAsset.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkExternalMediaAsset.OuterSingleton;
}
#undef UHT_STATICS
UAkExternalMediaAsset::UAkExternalMediaAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkExternalMediaAsset);
UAkExternalMediaAsset::~UAkExternalMediaAsset() {}
// ********** End Class UAkExternalMediaAsset ******************************************************

// ********** Begin Class UAkFolder ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkFolder_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "AkDeprecated.h" },
		{ "ModuleRelativePath", "Classes/AkDeprecated.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkFolder constinit property declarations ********************************
// ********** End Class UAkFolder constinit property declarations **********************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkFolder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkAudioType,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkFolder,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkFolder;
UClass* Z_Construct_UClass_UAkFolder(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkFolder;
		if (!Z_Registration_Info_UClass_UAkFolder.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkFolder"),
				Z_Registration_Info_UClass_UAkFolder.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkFolder.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkFolder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkFolder.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkFolder.OuterSingleton;
}
#undef UHT_STATICS
UAkFolder::UAkFolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkFolder);
UAkFolder::~UAkFolder() {}
// ********** End Class UAkFolder ******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkDeprecated_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAssetData, TEXT("UAkAssetData"), &Z_Registration_Info_UClass_UAkAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetData), 3188156089U) },
		{ Z_Construct_UClass_UAkAssetPlatformData, TEXT("UAkAssetPlatformData"), &Z_Registration_Info_UClass_UAkAssetPlatformData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetPlatformData), 2119676416U) },
		{ Z_Construct_UClass_UAkMediaAssetData, TEXT("UAkMediaAssetData"), &Z_Registration_Info_UClass_UAkMediaAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMediaAssetData), 1082814772U) },
		{ Z_Construct_UClass_UAkMediaAsset, TEXT("UAkMediaAsset"), &Z_Registration_Info_UClass_UAkMediaAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMediaAsset), 1361386539U) },
		{ Z_Construct_UClass_UAkLocalizedMediaAsset, TEXT("UAkLocalizedMediaAsset"), &Z_Registration_Info_UClass_UAkLocalizedMediaAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLocalizedMediaAsset), 3906934614U) },
		{ Z_Construct_UClass_UAkExternalMediaAsset, TEXT("UAkExternalMediaAsset"), &Z_Registration_Info_UClass_UAkExternalMediaAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkExternalMediaAsset), 460672898U) },
		{ Z_Construct_UClass_UAkFolder, TEXT("UAkFolder"), &Z_Registration_Info_UClass_UAkFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkFolder), 4000361024U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkDeprecated_h__Script_AkAudio_7a2cf2a2ced3a99bc1054c6b0f5c237f55301f50{
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
