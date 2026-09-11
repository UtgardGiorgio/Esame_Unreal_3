// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudioInputComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAudioInputComponent() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkAudioInputComponent Function PostAssociatedAudioInputEvent ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics
struct UHT_STATICS
{
	struct AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkAudioInputComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Posts this component's AkAudioEvent to Wwise along with associated AudioSamples callback and AudioFormat callback, using this component as the game object source\n    *\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAudioInputComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts this component's AkAudioEvent to Wwise along with associated AudioSamples callback and AudioFormat callback, using this component as the game object source" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PostAssociatedAudioInputEvent constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAssociatedAudioInputEvent constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAssociatedAudioInputEvent Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostAssociatedAudioInputEvent Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkAudioInputComponent, nullptr, "PostAssociatedAudioInputEvent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkAudioInputComponent::execPostAssociatedAudioInputEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostAssociatedAudioInputEvent();
	P_NATIVE_END;
}
// ********** End Class UAkAudioInputComponent Function PostAssociatedAudioInputEvent **************

// ********** Begin Class UAkAudioInputComponent ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkAudioInputComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\nUAkAudioInputComponent\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkAudioInputComponent.h" },
		{ "ModuleRelativePath", "Classes/AkAudioInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAkAudioInputComponent" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAudioInputComponent constinit property declarations *******************
// ********** End Class UAkAudioInputComponent constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PostAssociatedAudioInputEvent"), .Pointer = &UAkAudioInputComponent::execPostAssociatedAudioInputEvent },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent, "PostAssociatedAudioInputEvent" }, // 1bf4fb1b4660a1f2046473d4daacac7a180816f8
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkAudioInputComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAkAudioInputComponent_StaticRegisterNativesUAkAudioInputComponent()
{
	UClass* Class = UAkAudioInputComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAudioInputComponent;
UClass* Z_Construct_UClass_UAkAudioInputComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkAudioInputComponent;
		if (!Z_Registration_Info_UClass_UAkAudioInputComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkAudioInputComponent"),
				Z_Registration_Info_UClass_UAkAudioInputComponent.InnerSingleton,
				UAkAudioInputComponent_StaticRegisterNativesUAkAudioInputComponent,
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
		return Z_Registration_Info_UClass_UAkAudioInputComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkAudioInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioInputComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioInputComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAudioInputComponent);
UAkAudioInputComponent::~UAkAudioInputComponent() {}
// ********** End Class UAkAudioInputComponent *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioInputComponent, TEXT("UAkAudioInputComponent"), &Z_Registration_Info_UClass_UAkAudioInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioInputComponent), 976293574U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioInputComponent_h__Script_AkAudio_ec68c0889226b981b168540033df91e2390f243a{
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
