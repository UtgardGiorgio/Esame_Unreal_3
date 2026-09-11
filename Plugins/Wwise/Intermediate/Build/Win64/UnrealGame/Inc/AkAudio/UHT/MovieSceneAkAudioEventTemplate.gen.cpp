// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneAkAudioEventTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventTemplate() {}

// ********** Begin Cross Module References ********************************************************
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FMovieSceneAkAudioEventTemplate ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMovieSceneAkAudioEventTemplate>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMovieSceneAkAudioEventTemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneAkAudioEventTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieSceneAkAudioEventTemplate.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMovieSceneAkAudioEventTemplate constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMovieSceneAkAudioEventTemplate constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAkAudioEventTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FMovieSceneAkAudioEventTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneAkAudioEventTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

// ********** Begin ScriptStruct FMovieSceneAkAudioEventTemplate Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneAkAudioEventTemplate, Section), Z_Construct_UClass_UMovieSceneAkAudioEventSection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Section,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMovieSceneAkAudioEventTemplate Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneAkAudioEventTemplate",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMovieSceneAkAudioEventTemplate>(),
	alignof(FMovieSceneAkAudioEventTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovieSceneAkAudioEventTemplate;
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMovieSceneAkAudioEventTemplate.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMovieSceneAkAudioEventTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("MovieSceneAkAudioEventTemplate"));
		}
		return Z_Registration_Info_UScriptStruct_FMovieSceneAkAudioEventTemplate.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneAkAudioEventTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovieSceneAkAudioEventTemplate.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMovieSceneAkAudioEventTemplate.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMovieSceneAkAudioEventTemplate *************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Private_MovieSceneAkAudioEventTemplate_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate, Z_Construct_UScriptStruct_FMovieSceneAkAudioEventTemplate_Statics::NewStructOps, TEXT("MovieSceneAkAudioEventTemplate"),&Z_Registration_Info_UScriptStruct_FMovieSceneAkAudioEventTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneAkAudioEventTemplate), 116804434U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Private_MovieSceneAkAudioEventTemplate_h__Script_AkAudio_a815f9042bd64b4395f73236d1b78112a36a95cd{
	TEXT("/Script/AkAudio"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
