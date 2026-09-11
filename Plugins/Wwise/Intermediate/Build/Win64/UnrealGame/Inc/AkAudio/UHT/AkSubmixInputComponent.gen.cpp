// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkSubmixInputComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkSubmixInputComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDEPRECATED_UAkSubmixInputComponent **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "DisplayName", "AkSubmixInput ( DEPRECATED )" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkSubmixInputComponent.h" },
		{ "ModuleRelativePath", "Classes/AkSubmixInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "(DEPRECATED) See AudioLink: https://www.audiokinetic.com/en/library/edge/?source=UE4&id=using_audio_link.html)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[] = {
		{ "Category", "SubmixInput" },
		{ "ModuleRelativePath", "Classes/AkSubmixInputComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDEPRECATED_UAkSubmixInputComponent constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDEPRECATED_UAkSubmixInputComponent constinit property declarations ********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_UAkSubmixInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDEPRECATED_UAkSubmixInputComponent Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_UAkSubmixInputComponent, SubmixToRecord), Z_Construct_UClass_USoundSubmix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixToRecord_MetaData), NewProp_SubmixToRecord_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SubmixToRecord,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDEPRECATED_UAkSubmixInputComponent Property Definitions *******************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkAudioInputComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x02B002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent;
UClass* Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDEPRECATED_UAkSubmixInputComponent;
		if (!Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("UAkSubmixInputComponent"),
				Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDEPRECATED_UAkSubmixInputComponent);
UDEPRECATED_UAkSubmixInputComponent::~UDEPRECATED_UAkSubmixInputComponent() {}
// ********** End Class UDEPRECATED_UAkSubmixInputComponent ****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_UAkSubmixInputComponent, TEXT("UDEPRECATED_UAkSubmixInputComponent"), &Z_Registration_Info_UClass_UDEPRECATED_UAkSubmixInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_UAkSubmixInputComponent), 2332893509U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h__Script_AkAudio_aaf3e8c29ab1bd43f2f9b206c485188114d4d1f3{
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
