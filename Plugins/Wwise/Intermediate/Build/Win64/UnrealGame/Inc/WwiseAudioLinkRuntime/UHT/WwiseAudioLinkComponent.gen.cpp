// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/AudioLink/WwiseAudioLinkComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAudioLinkComponent() {}

// ********** Begin Cross Module References ********************************************************
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent(ETypeConstructPhase);
AUDIOLINKENGINE_API UClass* Z_Construct_UClass_IAudioLinkBlueprintInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseAudioLinkRuntime(ETypeConstructPhase);
WWISEAUDIOLINKRUNTIME_API UClass* Z_Construct_UClass_UWwiseAudioLinkComponent(ETypeConstructPhase);
WWISEAUDIOLINKRUNTIME_API UClass* Z_Construct_UClass_UWwiseAudioLinkComponent(ETypeConstructPhase);
WWISEAUDIOLINKRUNTIME_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UWwiseAudioLinkComponent *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWwiseAudioLinkComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio Common" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation PhysicsVolume" },
		{ "IncludePath", "Wwise/AudioLink/WwiseAudioLinkComponent.h" },
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "AudioLink" },
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The sound to be played */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The sound to be played" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "AudioLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether or not to play the Link on start*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to play the Link on start" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseAudioLinkComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static void NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((UWwiseAudioLinkComponent*)Obj)->bAutoPlay = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWwiseAudioLinkComponent constinit property declarations *******************
	static FTypeConstructFunc* DependentSingletons[];
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAudioLinkComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UWwiseAudioLinkComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkComponent, Settings), Z_Construct_UClass_UWwiseAudioLinkSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkComponent, Sound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAudioLinkComponent), &UHT_STATICS::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoPlay_MetaData), NewProp_bAutoPlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkComponent, AudioComponent), Z_Construct_UClass_UAudioComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UWwiseAudioLinkComponent Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseAudioLinkRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_UAudioLinkBlueprintInterface, (int32)VTABLE_OFFSET(UWwiseAudioLinkComponent, IAudioLinkBlueprintInterface), false },  // 6a2e0c33b0d12d58ac5e8951677bdcba1127bc09
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWwiseAudioLinkComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseAudioLinkComponent;
UClass* Z_Construct_UClass_UWwiseAudioLinkComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWwiseAudioLinkComponent;
		if (!Z_Registration_Info_UClass_UWwiseAudioLinkComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WwiseAudioLinkComponent"),
				Z_Registration_Info_UClass_UWwiseAudioLinkComponent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UWwiseAudioLinkComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWwiseAudioLinkComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAudioLinkComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAudioLinkComponent.OuterSingleton;
}
#undef UHT_STATICS
UWwiseAudioLinkComponent::UWwiseAudioLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseAudioLinkComponent);
UWwiseAudioLinkComponent::~UWwiseAudioLinkComponent() {}
// ********** End Class UWwiseAudioLinkComponent ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h__Script_WwiseAudioLinkRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAudioLinkComponent, TEXT("UWwiseAudioLinkComponent"), &Z_Registration_Info_UClass_UWwiseAudioLinkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAudioLinkComponent), 3115438439U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h__Script_WwiseAudioLinkRuntime_bb00abcf612c1e38dc353df6092d0955da9f570d{
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
