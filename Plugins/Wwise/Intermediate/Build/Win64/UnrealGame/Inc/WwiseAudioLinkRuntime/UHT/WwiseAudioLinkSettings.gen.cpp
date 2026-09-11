// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/AudioLink/WwiseAudioLinkSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAudioLinkSettings() {}

// ********** Begin Cross Module References ********************************************************
AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseAudioLinkRuntime(ETypeConstructPhase);
WWISEAUDIOLINKRUNTIME_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettings(ETypeConstructPhase);
WWISEAUDIOLINKRUNTIME_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UWwiseAudioLinkSettings **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWwiseAudioLinkSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Wwise/AudioLink/WwiseAudioLinkSettings.h" },
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
		{ "ScriptName", "UWwiseAudioLinkSettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEvent_MetaData[] = {
		{ "Category", "Wwise|AudioLink" },
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldClearBufferOnReceipt_MetaData[] = {
		{ "Category", "Wwise|AudioLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When enabled, the receiving code clears the buffer after it is read, so it is not rendered by Unreal. Only applies if running both renderers simultaneously.  */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, the receiving code clears the buffer after it is read, so it is not rendered by Unreal. Only applies if running both renderers simultaneously." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProducerToConsumerBufferRatio_MetaData[] = {
		{ "Category", "Wwise|AudioLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ratio of producer to consumer buffer size. A value of 2.0 means it is twice as big as the consumer buffer.  */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ratio of producer to consumer buffer size. A value of 2.0 means it is twice as big as the consumer buffer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSilenceFillRatio_MetaData[] = {
		{ "Category", "Wwise|AudioLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ratio of the initial buffer to fill with silence before consumption. This can prevent starvation at the cost of additional latency. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ratio of the initial buffer to fill with silence before consumption. This can prevent starvation at the cost of additional latency." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEventResolved_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Once the SoftObjectReference has been resolved, attach the reference here so it's owned. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Once the SoftObjectReference has been resolved, attach the reference here so it's owned." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseAudioLinkSettings constinit property declarations ******************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StartEvent;
	static void NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj)
	{
		((UWwiseAudioLinkSettings*)Obj)->bShouldClearBufferOnReceipt = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldClearBufferOnReceipt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProducerToConsumerBufferRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSilenceFillRatio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartEventResolved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWwiseAudioLinkSettings constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAudioLinkSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UWwiseAudioLinkSettings Property Definitions *****************************
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_StartEvent = { "StartEvent", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkSettings, StartEvent), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEvent_MetaData), NewProp_StartEvent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShouldClearBufferOnReceipt = { "bShouldClearBufferOnReceipt", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAudioLinkSettings), &UHT_STATICS::NewProp_bShouldClearBufferOnReceipt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldClearBufferOnReceipt_MetaData), NewProp_bShouldClearBufferOnReceipt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ProducerToConsumerBufferRatio = { "ProducerToConsumerBufferRatio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkSettings, ProducerToConsumerBufferRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProducerToConsumerBufferRatio_MetaData), NewProp_ProducerToConsumerBufferRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InitialSilenceFillRatio = { "InitialSilenceFillRatio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkSettings, InitialSilenceFillRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSilenceFillRatio_MetaData), NewProp_InitialSilenceFillRatio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartEventResolved = { "StartEventResolved", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkSettings, StartEventResolved), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEventResolved_MetaData), NewProp_StartEventResolved_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShouldClearBufferOnReceipt,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProducerToConsumerBufferRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialSilenceFillRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartEventResolved,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UWwiseAudioLinkSettings Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAudioLinkSettingsAbstract,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseAudioLinkRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWwiseAudioLinkSettings,
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
	0x001010A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseAudioLinkSettings;
UClass* Z_Construct_UClass_UWwiseAudioLinkSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWwiseAudioLinkSettings;
		if (!Z_Registration_Info_UClass_UWwiseAudioLinkSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WwiseAudioLinkSettings"),
				Z_Registration_Info_UClass_UWwiseAudioLinkSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UWwiseAudioLinkSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWwiseAudioLinkSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAudioLinkSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAudioLinkSettings.OuterSingleton;
}
#undef UHT_STATICS
UWwiseAudioLinkSettings::UWwiseAudioLinkSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseAudioLinkSettings);
UWwiseAudioLinkSettings::~UWwiseAudioLinkSettings() {}
// ********** End Class UWwiseAudioLinkSettings ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkSettings_h__Script_WwiseAudioLinkRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAudioLinkSettings, TEXT("UWwiseAudioLinkSettings"), &Z_Registration_Info_UClass_UWwiseAudioLinkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAudioLinkSettings), 1753658911U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkSettings_h__Script_WwiseAudioLinkRuntime_e12cce8f65f8103408a58124a3401f7a90de4372{
	TEXT("/Script/WwiseAudioLinkRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
