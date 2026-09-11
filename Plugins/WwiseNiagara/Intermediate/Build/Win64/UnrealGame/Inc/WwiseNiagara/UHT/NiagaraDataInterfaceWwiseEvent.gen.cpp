// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Niagara/NiagaraDataInterfaceWwiseEvent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceWwiseEvent() {}

// ********** Begin Cross Module References ********************************************************
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseNiagara(ETypeConstructPhase);
WWISENIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceWwiseEvent(ETypeConstructPhase);
WWISENIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceWwiseEvent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UNiagaraDataInterfaceWwiseEvent ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UNiagaraDataInterfaceWwiseEvent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WwiseAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This Data Interface can be used to post Wwise events driven by particle data. */" },
#endif
		{ "DisplayName", "Niagara Wwise Event" },
		{ "IncludePath", "Wwise/Niagara/NiagaraDataInterfaceWwiseEvent.h" },
		{ "ModuleRelativePath", "Public/Wwise/Niagara/NiagaraDataInterfaceWwiseEvent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Data Interface can be used to post Wwise events driven by particle data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventToPost_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The AkAudioEvent asset to post. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Niagara/NiagaraDataInterfaceWwiseEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The AkAudioEvent asset to post." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameParameters_MetaData[] = {
		{ "Category", "Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A set of Game Parameters updated (via their index) in the Set Wwise Persistent Event Game Parameter module */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Niagara/NiagaraDataInterfaceWwiseEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A set of Game Parameters updated (via their index) in the Set Wwise Persistent Event Game Parameter module" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitPostsPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Wwise/Niagara/NiagaraDataInterfaceWwiseEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPostsPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This sets the max number of events posted on each tick.\n\x09 *  If more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest. */" },
#endif
		{ "EditCondition", "bLimitPostsPerTick" },
		{ "ModuleRelativePath", "Public/Wwise/Niagara/NiagaraDataInterfaceWwiseEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This sets the max number of events posted on each tick.\nIf more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenComponentIsDestroyed_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If false then the event keeps playing after the Niagara component was destroyed (particle death, or system is stopped/destroyed).\n\x09Looping sounds are always stopped when the component is destroyed. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Niagara/NiagaraDataInterfaceWwiseEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false then the event keeps playing after the Niagara component was destroyed (particle death, or system is stopped/destroyed).\n      Looping sounds are always stopped when the component is destroyed." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyActiveDuringGameplay_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this data interface only processes sounds during active gameplay, and not while using Realtime Rendering in the open viewport.\n\x09 * This is useful when you are working in the preview window and the sounds annoy you. */" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Niagara/NiagaraDataInterfaceWwiseEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this data interface only processes sounds during active gameplay, and not while using Realtime Rendering in the open viewport.\nThis is useful when you are working in the preview window and the sounds annoy you." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UNiagaraDataInterfaceWwiseEvent constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventToPost;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameParameters;
	static void NewProp_bLimitPostsPerTick_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceWwiseEvent*)Obj)->bLimitPostsPerTick = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitPostsPerTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPostsPerTick;
	static void NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceWwiseEvent*)Obj)->bStopWhenComponentIsDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenComponentIsDestroyed;
#if WITH_EDITORONLY_DATA
	static void NewProp_bOnlyActiveDuringGameplay_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceWwiseEvent*)Obj)->bOnlyActiveDuringGameplay = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyActiveDuringGameplay;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UNiagaraDataInterfaceWwiseEvent constinit property declarations ************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceWwiseEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UNiagaraDataInterfaceWwiseEvent Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EventToPost = { "EventToPost", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceWwiseEvent, EventToPost), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventToPost_MetaData), NewProp_EventToPost_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GameParameters_Inner = { "GameParameters", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkRtpc, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GameParameters = { "GameParameters", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceWwiseEvent, GameParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameParameters_MetaData), NewProp_GameParameters_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLimitPostsPerTick = { "bLimitPostsPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceWwiseEvent), &UHT_STATICS::NewProp_bLimitPostsPerTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitPostsPerTick_MetaData), NewProp_bLimitPostsPerTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxPostsPerTick = { "MaxPostsPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceWwiseEvent, MaxPostsPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPostsPerTick_MetaData), NewProp_MaxPostsPerTick_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStopWhenComponentIsDestroyed = { "bStopWhenComponentIsDestroyed", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceWwiseEvent), &UHT_STATICS::NewProp_bStopWhenComponentIsDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenComponentIsDestroyed_MetaData), NewProp_bStopWhenComponentIsDestroyed_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOnlyActiveDuringGameplay = { "bOnlyActiveDuringGameplay", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceWwiseEvent), &UHT_STATICS::NewProp_bOnlyActiveDuringGameplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyActiveDuringGameplay_MetaData), NewProp_bOnlyActiveDuringGameplay_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventToPost,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GameParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GameParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLimitPostsPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxPostsPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStopWhenComponentIsDestroyed,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOnlyActiveDuringGameplay,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UNiagaraDataInterfaceWwiseEvent Property Definitions ***********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UNiagaraDataInterface,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseNiagara,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UNiagaraDataInterfaceWwiseEvent,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UNiagaraDataInterfaceWwiseEvent;
UClass* Z_Construct_UClass_UNiagaraDataInterfaceWwiseEvent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UNiagaraDataInterfaceWwiseEvent;
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceWwiseEvent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("NiagaraDataInterfaceWwiseEvent"),
				Z_Registration_Info_UClass_UNiagaraDataInterfaceWwiseEvent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceWwiseEvent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceWwiseEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceWwiseEvent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceWwiseEvent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNiagaraDataInterfaceWwiseEvent);
UNiagaraDataInterfaceWwiseEvent::~UNiagaraDataInterfaceWwiseEvent() {}
// ********** End Class UNiagaraDataInterfaceWwiseEvent ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_WwiseNiagara_Source_WwiseNiagara_Public_Wwise_Niagara_NiagaraDataInterfaceWwiseEvent_h__Script_WwiseNiagara_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceWwiseEvent, TEXT("UNiagaraDataInterfaceWwiseEvent"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceWwiseEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceWwiseEvent), 3974349219U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_WwiseNiagara_Source_WwiseNiagara_Public_Wwise_Niagara_NiagaraDataInterfaceWwiseEvent_h__Script_WwiseNiagara_77ebbc9463471b29ee1537915c91587606b86015{
	TEXT("/Script/WwiseNiagara"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
