// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneWwiseGameParameterTrack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneWwiseGameParameterTrack() {}

// ********** Begin Cross Module References ********************************************************
MOVIESCENE_API UClass* Z_Construct_UClass_IMovieSceneTrackTemplateProducer(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMovieSceneWwiseGameParameterTrack ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Handles manipulation of float properties in a movie scene\n */" },
#endif
		{ "IncludePath", "MovieSceneWwiseGameParameterTrack.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneWwiseGameParameterTrack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles manipulation of float properties in a movie scene" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMovieSceneWwiseGameParameterTrack constinit property declarations *******
// ********** End Class UMovieSceneWwiseGameParameterTrack constinit property declarations *********
	static FTypeConstructFunc* DependentSingletons[];
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneWwiseGameParameterTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UMovieSceneAkTrack,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer, (int32)VTABLE_OFFSET(UMovieSceneWwiseGameParameterTrack, IMovieSceneTrackTemplateProducer), false },  // 5ad930948ec95ab09e72092a10a2e71ef53ea268
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack;
UClass* Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMovieSceneWwiseGameParameterTrack;
		if (!Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MovieSceneWwiseGameParameterTrack"),
				Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.InnerSingleton,
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
		return Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMovieSceneWwiseGameParameterTrack);
UMovieSceneWwiseGameParameterTrack::~UMovieSceneWwiseGameParameterTrack() {}
// ********** End Class UMovieSceneWwiseGameParameterTrack *****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterTrack_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneWwiseGameParameterTrack, TEXT("UMovieSceneWwiseGameParameterTrack"), &Z_Registration_Info_UClass_UMovieSceneWwiseGameParameterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneWwiseGameParameterTrack), 3927502693U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneWwiseGameParameterTrack_h__Script_AkAudio_2d929fd75e5a124d403955c341b7cd80b4533e95{
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
