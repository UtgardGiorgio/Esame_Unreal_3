// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneAkAudioEventSection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventSection() {}

// ********** Begin Cross Module References ********************************************************
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMovieSceneAkAudioEventSection *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A single floating point section that triggers a Wwise event.\n*/" },
#endif
		{ "IncludePath", "MovieSceneAkAudioEventSection.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single floating point section that triggers a Wwise event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "Category", "AkAudioEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The AkAudioEvent represented by this section */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The AkAudioEvent represented by this section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetriggerEvent_MetaData[] = {
		{ "Category", "AkAudioEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Indicates whether the Wwise event will be re-triggered when the end is reached. */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the Wwise event will be re-triggered when the end is reached." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrubTailLengthMs_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ClampMax", "500" },
		{ "ClampMin", "30" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The length, in ms, of scrub snippets */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The length, in ms, of scrub snippets" },
#endif
		{ "UIMax", "500" },
		{ "UIMin", "30" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopAtSectionEnd_MetaData[] = {
		{ "Category", "AkAudioEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates whether the Wwise event should be stopped when the section stops in the Unreal Sequencer. */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the Wwise event should be stopped when the section stops in the Unreal Sequencer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSourceDuration_MetaData[] = {
		{ "Category", "AkAudioEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The duration of the longest Wwise source that the Wwise event contains (taking trim into account). */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The duration of the longest Wwise source that the Wwise event contains (taking trim into account)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDurationSourceID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ID of the longest Wwise source that the Wwise event contains. */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the longest Wwise source that the Wwise event contains." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMovieSceneAkAudioEventSection constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static void NewProp_RetriggerEvent_SetBit(void* Obj)
	{
		((UMovieSceneAkAudioEventSection*)Obj)->RetriggerEvent = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RetriggerEvent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScrubTailLengthMs;
	static void NewProp_StopAtSectionEnd_SetBit(void* Obj)
	{
		((UMovieSceneAkAudioEventSection*)Obj)->StopAtSectionEnd = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopAtSectionEnd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSourceDuration;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaxDurationSourceID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMovieSceneAkAudioEventSection constinit property declarations *************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkAudioEventSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMovieSceneAkAudioEventSection Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, Event), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_RetriggerEvent = { "RetriggerEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneAkAudioEventSection), &UHT_STATICS::NewProp_RetriggerEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetriggerEvent_MetaData), NewProp_RetriggerEvent_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ScrubTailLengthMs = { "ScrubTailLengthMs", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, ScrubTailLengthMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrubTailLengthMs_MetaData), NewProp_ScrubTailLengthMs_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_StopAtSectionEnd = { "StopAtSectionEnd", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneAkAudioEventSection), &UHT_STATICS::NewProp_StopAtSectionEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopAtSectionEnd_MetaData), NewProp_StopAtSectionEnd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxSourceDuration = { "MaxSourceDuration", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, MaxSourceDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSourceDuration_MetaData), NewProp_MaxSourceDuration_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_MaxDurationSourceID = { "MaxDurationSourceID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, MaxDurationSourceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDurationSourceID_MetaData), NewProp_MaxDurationSourceID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RetriggerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScrubTailLengthMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StopAtSectionEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxSourceDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDurationSourceID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMovieSceneAkAudioEventSection Property Definitions ************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UMovieSceneSection,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMovieSceneAkAudioEventSection,
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
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection;
UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMovieSceneAkAudioEventSection;
		if (!Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MovieSceneAkAudioEventSection"),
				Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection.InnerSingleton,
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
		return Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection.OuterSingleton;
}
#undef UHT_STATICS
UMovieSceneAkAudioEventSection::UMovieSceneAkAudioEventSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMovieSceneAkAudioEventSection);
UMovieSceneAkAudioEventSection::~UMovieSceneAkAudioEventSection() {}
// ********** End Class UMovieSceneAkAudioEventSection *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAkAudioEventSection, TEXT("UMovieSceneAkAudioEventSection"), &Z_Registration_Info_UClass_UMovieSceneAkAudioEventSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAkAudioEventSection), 3144874492U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventSection_h__Script_AkAudio_a7abca353fa0af927126a558f9f6d48985cbeb49{
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
