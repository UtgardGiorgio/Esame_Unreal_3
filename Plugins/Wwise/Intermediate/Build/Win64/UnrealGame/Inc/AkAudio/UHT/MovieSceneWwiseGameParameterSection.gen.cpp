// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneWwiseGameParameterSection.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Curves/RichCurve.h"
#include "MovieSceneFloatChannelSerializationHelper.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneWwiseGameParameterSection() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve(ETypeConstructPhase);
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel(ETypeConstructPhase);
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterSection(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterSection(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMovieSceneWwiseGameParameterSection *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMovieSceneWwiseGameParameterSection_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A single floating point section\n*/" },
#endif
		{ "IncludePath", "MovieSceneWwiseGameParameterSection.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneWwiseGameParameterSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single floating point section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameParameter_MetaData[] = {
		{ "Category", "WwiseGameParameter" },
		{ "ModuleRelativePath", "Classes/MovieSceneWwiseGameParameterSection.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve data */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneWwiseGameParameterSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatChannelSerializationHelper_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enabled serialization of GameParameterChannel when 4.24 support was added. \n" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneWwiseGameParameterSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enabled serialization of GameParameterChannel when 4.24 support was added." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameParameterChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneWwiseGameParameterSection.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMovieSceneWwiseGameParameterSection constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameParameter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatChannelSerializationHelper;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameParameterChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMovieSceneWwiseGameParameterSection constinit property declarations *******
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneWwiseGameParameterSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMovieSceneWwiseGameParameterSection Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GameParameter = { "GameParameter", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneWwiseGameParameterSection, GameParameter), Z_Construct_UClass_UAkRtpc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameParameter_MetaData), NewProp_GameParameter_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneWwiseGameParameterSection, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatCurve_MetaData), NewProp_FloatCurve_MetaData) }; // 28fb44b60692b6b1fe1c67f0d097e47124003582
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FloatChannelSerializationHelper = { "FloatChannelSerializationHelper", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneWwiseGameParameterSection, FloatChannelSerializationHelper), Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatChannelSerializationHelper_MetaData), NewProp_FloatChannelSerializationHelper_MetaData) }; // 1f48a8d91b66f65dea1b85b9bc1a999a70851779
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GameParameterChannel = { "GameParameterChannel", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneWwiseGameParameterSection, GameParameterChannel), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameParameterChannel_MetaData), NewProp_GameParameterChannel_MetaData) }; // 704d4204b4e51bc1d774a2a15fe4c767cb501911
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GameParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloatCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloatChannelSerializationHelper,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GameParameterChannel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMovieSceneWwiseGameParameterSection Property Definitions ******************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UMovieSceneSection,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMovieSceneWwiseGameParameterSection,
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
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterSection;
UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterSection(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMovieSceneWwiseGameParameterSection;
		if (!Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterSection.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MovieSceneWwiseGameParameterSection"),
				Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterSection.InnerSingleton,
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
		return Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterSection.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterSection.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterSection.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMovieSceneWwiseGameParameterSection);
UMovieSceneWwiseGameParameterSection::~UMovieSceneWwiseGameParameterSection() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneWwiseGameParameterSection)
// ********** End Class UMovieSceneWwiseGameParameterSection ***************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterSection_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneWwiseGameParameterSection, TEXT("UMovieSceneWwiseGameParameterSection"), &Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneWwiseGameParameterSection), 3403337633U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterSection_h__Script_AkAudio_c77113562977ddfeccb2d0435211aea1c40e61c7{
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
