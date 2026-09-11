// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAuxBus.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Wwise/CookedData/WwiseLocalizedAuxBusCookedData.h"
#include "Wwise/Info/WwiseObjectInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAuxBus() {}

// ********** Begin Cross Module References ********************************************************
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkAuxBus ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkAuxBus_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Advanced Attachment Volume" },
		{ "IncludePath", "AkAuxBus.h" },
		{ "ModuleRelativePath", "Classes/AkAuxBus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttenuationRadius_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAuxBus.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusInfo_MetaData[] = {
		{ "Category", "AkAuxBus" },
		{ "ModuleRelativePath", "Classes/AkAuxBus.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusCookedData_MetaData[] = {
		{ "Category", "AkAuxBus" },
		{ "ModuleRelativePath", "Classes/AkAuxBus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredBank_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkAuxBus.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAuxBus constinit property declarations ********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAttenuationRadius;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxBusInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxBusCookedData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequiredBank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkAuxBus constinit property declarations **********************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAuxBus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkAuxBus Property Definitions *******************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxAttenuationRadius = { "MaxAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAuxBus, MaxAttenuationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAttenuationRadius_MetaData), NewProp_MaxAttenuationRadius_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AuxBusInfo = { "AuxBusInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAuxBus, AuxBusInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusInfo_MetaData), NewProp_AuxBusInfo_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AuxBusCookedData = { "AuxBusCookedData", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAuxBus, AuxBusCookedData), Z_Construct_UScriptStruct_FWwiseLocalizedAuxBusCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusCookedData_MetaData), NewProp_AuxBusCookedData_MetaData) }; // 364b57b355fc9da72784073dcba8fc83331b4e3f
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RequiredBank = { "RequiredBank", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAuxBus, RequiredBank_DEPRECATED), Z_Construct_UClass_UAkAudioBank, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredBank_MetaData), NewProp_RequiredBank_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxAttenuationRadius,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxBusInfo,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxBusCookedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequiredBank,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkAuxBus Property Definitions *********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkAudioType,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkAuxBus,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAuxBus;
UClass* Z_Construct_UClass_UAkAuxBus(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkAuxBus;
		if (!Z_Registration_Info_UClass_UAkAuxBus.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkAuxBus"),
				Z_Registration_Info_UClass_UAkAuxBus.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkAuxBus.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkAuxBus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAuxBus.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAuxBus.OuterSingleton;
}
#undef UHT_STATICS
UAkAuxBus::UAkAuxBus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAuxBus);
UAkAuxBus::~UAkAuxBus() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAuxBus)
// ********** End Class UAkAuxBus ******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAuxBus, TEXT("UAkAuxBus"), &Z_Registration_Info_UClass_UAkAuxBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAuxBus), 1399836427U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAuxBus_h__Script_AkAudio_e8eb59d7253c5ec98db626b462be0ffd3ddeb01c{
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
