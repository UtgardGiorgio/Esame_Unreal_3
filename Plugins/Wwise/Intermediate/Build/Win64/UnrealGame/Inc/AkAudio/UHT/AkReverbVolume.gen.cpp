// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkReverbVolume.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkReverbVolume() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AVolume(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbVolume(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbVolume(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AAkReverbVolume **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AAkReverbVolume_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09""AAkReverbVolume\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Advanced Attachment Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkReverbVolume.h" },
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAkReverbVolume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this volume is currently enabled and able to affect sounds */" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this volume is currently enabled and able to affect sounds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wwise Auxiliary Bus associated to this AkReverbVolume */" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wwise Auxiliary Bus associated to this AkReverbVolume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum send level to the Wwise Auxiliary Bus associated to this AkReverbVolume */" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum send level to the Wwise Auxiliary Bus associated to this AkReverbVolume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeRate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rate at which to fade in/out the SendLevel of the current Reverb Volume when entering/exiting it, in percentage per second (0.2 will make the fade time 5 seconds) */" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate at which to fade in/out the SendLevel of the current Reverb Volume when entering/exiting it, in percentage per second (0.2 will make the fade time 5 seconds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The precedence in which the AkReverbVolumes will be applied. In the case of overlapping volumes, only the ones \n\x09 * with the highest priority are chosen (the number of simultaneous AkReverbVolumes is configurable in the Unreal \n\x09 * Editor Project Settings under Plugins > Wwise). If two or more overlapping AkReverbVolumes have the same \n\x09 * priority, the chosen AkReverbVolume is unpredictable.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The precedence in which the AkReverbVolumes will be applied. In the case of overlapping volumes, only the ones\nwith the highest priority are chosen (the number of simultaneous AkReverbVolumes is configurable in the Unreal\nEditor Project Settings under Plugins > Wwise). If two or more overlapping AkReverbVolumes have the same\npriority, the chosen AkReverbVolume is unpredictable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateReverbComponent_MetaData[] = {
		{ "Category", "ReverbVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAkReverbVolume constinit property declarations **************************
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((AAkReverbVolume*)Obj)->bEnabled_DEPRECATED = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LateReverbComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAkReverbVolume constinit property declarations ****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkReverbVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AAkReverbVolume Property Definitions *************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkReverbVolume), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbVolume, AuxBus_DEPRECATED), Z_Construct_UClass_UAkAuxBus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBus_MetaData), NewProp_AuxBus_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbVolume, AuxBusName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusName_MetaData), NewProp_AuxBusName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbVolume, SendLevel_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendLevel_MetaData), NewProp_SendLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FadeRate = { "FadeRate", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbVolume, FadeRate_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeRate_MetaData), NewProp_FadeRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbVolume, Priority_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LateReverbComponent = { "LateReverbComponent", nullptr, (EPropertyFlags)0x01140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbVolume, LateReverbComponent), Z_Construct_UClass_UAkLateReverbComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateReverbComponent_MetaData), NewProp_LateReverbComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxBusName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SendLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FadeRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LateReverbComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AAkReverbVolume Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AVolume,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AAkReverbVolume,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_AAkReverbVolume;
UClass* Z_Construct_UClass_AAkReverbVolume(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AAkReverbVolume;
		if (!Z_Registration_Info_UClass_AAkReverbVolume.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkReverbVolume"),
				Z_Registration_Info_UClass_AAkReverbVolume.InnerSingleton,
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
		return Z_Registration_Info_UClass_AAkReverbVolume.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AAkReverbVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkReverbVolume.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AAkReverbVolume.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAkReverbVolume);
AAkReverbVolume::~AAkReverbVolume() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AAkReverbVolume)
// ********** End Class AAkReverbVolume ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAkReverbVolume, TEXT("AAkReverbVolume"), &Z_Registration_Info_UClass_AAkReverbVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkReverbVolume), 3189071611U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkReverbVolume_h__Script_AkAudio_0af515fb31a3219e6760a6fd60cde5d94f82456c{
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
