// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneAkTrack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkTrack() {}

// ********** Begin Cross Module References ********************************************************
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack(ETypeConstructPhase);
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMovieSceneAkTrack *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMovieSceneAkTrack_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Handles manipulation of an Ak track in a movie scene\n */" },
#endif
		{ "IncludePath", "MovieSceneAkTrack.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkTrack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles manipulation of an Ak track in a movie scene" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All the sections in this track */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkTrack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All the sections in this track" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAMasterTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneAkTrack.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMovieSceneAkTrack constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static void NewProp_bIsAMasterTrack_SetBit(void* Obj)
	{
		((UMovieSceneAkTrack*)Obj)->bIsAMasterTrack = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAMasterTrack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMovieSceneAkTrack constinit property declarations *************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMovieSceneAkTrack Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsAMasterTrack = { "bIsAMasterTrack", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneAkTrack), &UHT_STATICS::NewProp_bIsAMasterTrack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAMasterTrack_MetaData), NewProp_bIsAMasterTrack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Sections,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsAMasterTrack,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMovieSceneAkTrack Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UMovieSceneNameableTrack,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMovieSceneAkTrack,
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
	0x00A800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UMovieSceneAkTrack;
UClass* Z_Construct_UClass_UMovieSceneAkTrack(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMovieSceneAkTrack;
		if (!Z_Registration_Info_UClass_UMovieSceneAkTrack.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MovieSceneAkTrack"),
				Z_Registration_Info_UClass_UMovieSceneAkTrack.InnerSingleton,
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
		return Z_Registration_Info_UClass_UMovieSceneAkTrack.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMovieSceneAkTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAkTrack.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneAkTrack.OuterSingleton;
}
#undef UHT_STATICS
UMovieSceneAkTrack::UMovieSceneAkTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMovieSceneAkTrack);
UMovieSceneAkTrack::~UMovieSceneAkTrack() {}
// ********** End Class UMovieSceneAkTrack *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAkTrack, TEXT("UMovieSceneAkTrack"), &Z_Registration_Info_UClass_UMovieSceneAkTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAkTrack), 3162880690U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkTrack_h__Script_AkAudio_c1ea7481c6099fb50733e9dc1bab41ba3c681db1{
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
