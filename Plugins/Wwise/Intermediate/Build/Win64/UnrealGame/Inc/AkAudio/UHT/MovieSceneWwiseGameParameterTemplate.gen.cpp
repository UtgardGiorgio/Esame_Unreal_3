// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneWwiseGameParameterTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneWwiseGameParameterTemplate() {}

// ********** Begin Cross Module References ********************************************************
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterSection(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FMovieSceneWwiseGameParameterTemplate *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMovieSceneWwiseGameParameterTemplate>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMovieSceneWwiseGameParameterTemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneWwiseGameParameterTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieSceneWwiseGameParameterTemplate.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMovieSceneWwiseGameParameterTemplate constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMovieSceneWwiseGameParameterTemplate constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneWwiseGameParameterTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FMovieSceneWwiseGameParameterTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneWwiseGameParameterTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

// ********** Begin ScriptStruct FMovieSceneWwiseGameParameterTemplate Property Definitions ********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneWwiseGameParameterTemplate, Section), Z_Construct_UClass_UMovieSceneWwiseGameParameterSection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Section,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMovieSceneWwiseGameParameterTemplate Property Definitions **********
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneWwiseGameParameterTemplate",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMovieSceneWwiseGameParameterTemplate>(),
	alignof(FMovieSceneWwiseGameParameterTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate;
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("MovieSceneWwiseGameParameterTemplate"));
		}
		return Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMovieSceneWwiseGameParameterTemplate *******************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Private_MovieSceneWwiseGameParameterTemplate_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate, Z_Construct_UScriptStruct_FMovieSceneWwiseGameParameterTemplate_Statics::NewStructOps, TEXT("MovieSceneWwiseGameParameterTemplate"),&Z_Registration_Info_UScriptStruct_FMovieSceneWwiseGameParameterTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneWwiseGameParameterTemplate), 314068344U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Private_MovieSceneWwiseGameParameterTemplate_h__Script_AkAudio_50cbe975efc4178d85ba370b51337929f389d02f{
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
