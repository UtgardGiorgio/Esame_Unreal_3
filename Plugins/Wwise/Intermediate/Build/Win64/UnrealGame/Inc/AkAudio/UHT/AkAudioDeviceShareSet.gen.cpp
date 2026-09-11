// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudioDeviceShareSet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Wwise/CookedData/WwiseAudioDeviceShareSetCookedData.h"
#include "Wwise/Info/WwiseObjectInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAudioDeviceShareSet() {}

// ********** Begin Cross Module References ********************************************************
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioDeviceShareSet(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioDeviceShareSet(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkAudioDeviceShareSet ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkAudioDeviceShareSet_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAudioDeviceShareSet.h" },
		{ "ModuleRelativePath", "Classes/AkAudioDeviceShareSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareSetCookedData_MetaData[] = {
		{ "Category", "AkAudioDeviceShareSet" },
		{ "ModuleRelativePath", "Classes/AkAudioDeviceShareSet.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareSetInfo_MetaData[] = {
		{ "Category", "AkAudioDeviceShareSet" },
		{ "ModuleRelativePath", "Classes/AkAudioDeviceShareSet.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UAkAudioDeviceShareSet constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioDeviceShareSetCookedData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioDeviceShareSetInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkAudioDeviceShareSet constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioDeviceShareSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkAudioDeviceShareSet Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AudioDeviceShareSetCookedData = { "AudioDeviceShareSetCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioDeviceShareSet, AudioDeviceShareSetCookedData), Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioDeviceShareSetCookedData_MetaData), NewProp_AudioDeviceShareSetCookedData_MetaData) }; // b38e4816d7521bb1faf6b22384f497d37d9323f4
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AudioDeviceShareSetInfo = { "AudioDeviceShareSetInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioDeviceShareSet, AudioDeviceShareSetInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioDeviceShareSetInfo_MetaData), NewProp_AudioDeviceShareSetInfo_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioDeviceShareSetCookedData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioDeviceShareSetInfo,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkAudioDeviceShareSet Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkAudioType,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkAudioDeviceShareSet,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAudioDeviceShareSet;
UClass* Z_Construct_UClass_UAkAudioDeviceShareSet(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkAudioDeviceShareSet;
		if (!Z_Registration_Info_UClass_UAkAudioDeviceShareSet.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkAudioDeviceShareSet"),
				Z_Registration_Info_UClass_UAkAudioDeviceShareSet.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkAudioDeviceShareSet.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkAudioDeviceShareSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioDeviceShareSet.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioDeviceShareSet.OuterSingleton;
}
#undef UHT_STATICS
UAkAudioDeviceShareSet::UAkAudioDeviceShareSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAudioDeviceShareSet);
UAkAudioDeviceShareSet::~UAkAudioDeviceShareSet() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAudioDeviceShareSet)
// ********** End Class UAkAudioDeviceShareSet *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioDeviceShareSet, TEXT("UAkAudioDeviceShareSet"), &Z_Registration_Info_UClass_UAkAudioDeviceShareSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioDeviceShareSet), 1955308582U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h__Script_AkAudio_3a6448f50b7d5ccc3afeaa875ee02ed9cabfdecf{
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
