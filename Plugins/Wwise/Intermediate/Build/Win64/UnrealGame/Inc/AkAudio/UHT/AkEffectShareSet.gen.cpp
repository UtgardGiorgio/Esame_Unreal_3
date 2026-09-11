// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkEffectShareSet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Wwise/CookedData/WwiseLocalizedShareSetCookedData.h"
#include "Wwise/Info/WwiseObjectInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkEffectShareSet() {}

// ********** Begin Cross Module References ********************************************************
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkEffectShareSet(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkEffectShareSet(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkEffectShareSet ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkEffectShareSet_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkEffectShareSet.h" },
		{ "ModuleRelativePath", "Classes/AkEffectShareSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShareSetCookedData_MetaData[] = {
		{ "Category", "AkEffectShareSet" },
		{ "ModuleRelativePath", "Classes/AkEffectShareSet.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShareSetInfo_MetaData[] = {
		{ "Category", "AkEffectShareSet" },
		{ "ModuleRelativePath", "Classes/AkEffectShareSet.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UAkEffectShareSet constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShareSetCookedData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShareSetInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkEffectShareSet constinit property declarations **************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkEffectShareSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkEffectShareSet Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ShareSetCookedData = { "ShareSetCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkEffectShareSet, ShareSetCookedData), Z_Construct_UScriptStruct_FWwiseLocalizedShareSetCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShareSetCookedData_MetaData), NewProp_ShareSetCookedData_MetaData) }; // 8c552b9a5d16fb918a1a24837e8776cace1d23ea
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ShareSetInfo = { "ShareSetInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkEffectShareSet, ShareSetInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShareSetInfo_MetaData), NewProp_ShareSetInfo_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShareSetCookedData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShareSetInfo,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkEffectShareSet Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkAudioType,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkEffectShareSet,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UAkEffectShareSet;
UClass* Z_Construct_UClass_UAkEffectShareSet(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkEffectShareSet;
		if (!Z_Registration_Info_UClass_UAkEffectShareSet.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkEffectShareSet"),
				Z_Registration_Info_UClass_UAkEffectShareSet.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkEffectShareSet.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkEffectShareSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkEffectShareSet.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkEffectShareSet.OuterSingleton;
}
#undef UHT_STATICS
UAkEffectShareSet::UAkEffectShareSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkEffectShareSet);
UAkEffectShareSet::~UAkEffectShareSet() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkEffectShareSet)
// ********** End Class UAkEffectShareSet **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkEffectShareSet, TEXT("UAkEffectShareSet"), &Z_Registration_Info_UClass_UAkEffectShareSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkEffectShareSet), 788506131U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkEffectShareSet_h__Script_AkAudio_64529244135617c5cc9c76609da7fb25b8f1e1e6{
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
