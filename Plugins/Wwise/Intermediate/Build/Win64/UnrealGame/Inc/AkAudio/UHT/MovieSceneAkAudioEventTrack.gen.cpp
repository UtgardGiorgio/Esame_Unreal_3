// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneAkAudioEventTrack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventTrack() {}

// ********** Begin Cross Module References ********************************************************
MOVIESCENE_API UClass* Z_Construct_UClass_IMovieSceneTrackTemplateProducer(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMovieSceneAkAudioEventTrack *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMovieSceneAkAudioEventTrack_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "MovieSceneAkAudioEventTrack.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventTrack.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMovieSceneAkAudioEventTrack constinit property declarations *************
// ********** End Class UMovieSceneAkAudioEventTrack constinit property declarations ***************
	static FTypeConstructFunc* DependentSingletons[];
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkAudioEventTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UMovieSceneAkTrack,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer, (int32)VTABLE_OFFSET(UMovieSceneAkAudioEventTrack, IMovieSceneTrackTemplateProducer), false },  // 5ad930948ec95ab09e72092a10a2e71ef53ea268
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMovieSceneAkAudioEventTrack,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack;
UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMovieSceneAkAudioEventTrack;
		if (!Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MovieSceneAkAudioEventTrack"),
				Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.InnerSingleton,
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
		return Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMovieSceneAkAudioEventTrack);
UMovieSceneAkAudioEventTrack::~UMovieSceneAkAudioEventTrack() {}
// ********** End Class UMovieSceneAkAudioEventTrack ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAkAudioEventTrack, TEXT("UMovieSceneAkAudioEventTrack"), &Z_Registration_Info_UClass_UMovieSceneAkAudioEventTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAkAudioEventTrack), 3341844852U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioEventTrack_h__Script_AkAudio_f34b07eace6ef0c2d37f0b9ce26de7ff39bbe458{
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
