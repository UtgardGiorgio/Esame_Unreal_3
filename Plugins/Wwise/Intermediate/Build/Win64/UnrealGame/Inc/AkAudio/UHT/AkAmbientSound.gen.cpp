// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAmbientSound.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAmbientSound() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AAkAmbientSound Function StartAmbientSound *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Start an Ak ambient sound.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start an Ak ambient sound." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StartAmbientSound constinit property declarations *********************
// ********** End Function StartAmbientSound constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAkAmbientSound, nullptr, "StartAmbientSound", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAkAmbientSound::execStartAmbientSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAmbientSound();
	P_NATIVE_END;
}
// ********** End Class AAkAmbientSound Function StartAmbientSound *********************************

// ********** Begin Class AAkAmbientSound Function StopAmbientSound ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Stop an Ak ambient sound.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop an Ak ambient sound." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopAmbientSound constinit property declarations **********************
// ********** End Function StopAmbientSound constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAkAmbientSound, nullptr, "StopAmbientSound", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAkAmbientSound::execStopAmbientSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAmbientSound();
	P_NATIVE_END;
}
// ********** End Class AAkAmbientSound Function StopAmbientSound **********************************

// ********** Begin Class AAkAmbientSound **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AAkAmbientSound_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "AkAmbientSound" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09""AAkAmbientSound\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Audio" },
		{ "IncludePath", "AkAmbientSound.h" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAkAmbientSound" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AkAudioEvent to play. Deprecated as UE4.7 integration: Use AkComponent->AkAudioEvent instead */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AkAudioEvent to play. Deprecated as UE4.7 integration: Use AkComponent->AkAudioEvent instead" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[] = {
		{ "Category", "AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AkComponent to handle playback */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AkComponent to handle playback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerIsDestroyed_MetaData[] = {
		{ "Category", "AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop playback if the owner is destroyed */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop playback if the owner is destroyed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoPost_MetaData[] = {
		{ "Category", "AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Automatically post the associated AkAudioEvent on BeginPlay */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically post the associated AkAudioEvent on BeginPlay" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AAkAmbientSound constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
	static void NewProp_StopWhenOwnerIsDestroyed_SetBit(void* Obj)
	{
		((AAkAmbientSound*)Obj)->StopWhenOwnerIsDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerIsDestroyed;
	static void NewProp_AutoPost_SetBit(void* Obj)
	{
		((AAkAmbientSound*)Obj)->AutoPost = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoPost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAkAmbientSound constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("StartAmbientSound"), .Pointer = &AAkAmbientSound::execStartAmbientSound },
		{ .NameUTF8 = UTF8TEXT("StopAmbientSound"), .Pointer = &AAkAmbientSound::execStopAmbientSound },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound, "StartAmbientSound" }, // 1504699f69f71557b152f374fbb79559020b9d2b
		{ &Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound, "StopAmbientSound" }, // 728dbb7e7ec500b0f3121c2d4192a3fc627e3a87
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkAmbientSound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AAkAmbientSound Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AAkAmbientSound, AkAudioEvent_DEPRECATED), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AkAudioEvent_MetaData), NewProp_AkAudioEvent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AAkAmbientSound, AkComponent), Z_Construct_UClass_UAkComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AkComponent_MetaData), NewProp_AkComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_StopWhenOwnerIsDestroyed = { "StopWhenOwnerIsDestroyed", nullptr, (EPropertyFlags)0x0010020000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkAmbientSound), &UHT_STATICS::NewProp_StopWhenOwnerIsDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopWhenOwnerIsDestroyed_MetaData), NewProp_StopWhenOwnerIsDestroyed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_AutoPost = { "AutoPost", nullptr, (EPropertyFlags)0x0010020000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkAmbientSound), &UHT_STATICS::NewProp_AutoPost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoPost_MetaData), NewProp_AutoPost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkAudioEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StopWhenOwnerIsDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutoPost,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AAkAmbientSound Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AAkAmbientSound,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void AAkAmbientSound_StaticRegisterNativesAAkAmbientSound()
{
	UClass* Class = AAkAmbientSound::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAkAmbientSound;
UClass* Z_Construct_UClass_AAkAmbientSound(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AAkAmbientSound;
		if (!Z_Registration_Info_UClass_AAkAmbientSound.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkAmbientSound"),
				Z_Registration_Info_UClass_AAkAmbientSound.InnerSingleton,
				AAkAmbientSound_StaticRegisterNativesAAkAmbientSound,
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
		return Z_Registration_Info_UClass_AAkAmbientSound.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AAkAmbientSound.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkAmbientSound.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AAkAmbientSound.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAkAmbientSound);
AAkAmbientSound::~AAkAmbientSound() {}
// ********** End Class AAkAmbientSound ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAkAmbientSound, TEXT("AAkAmbientSound"), &Z_Registration_Info_UClass_AAkAmbientSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkAmbientSound), 902972271U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h__Script_AkAudio_2d52fb7c55f10690aa789466e42f2ad7a92c09dc{
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
