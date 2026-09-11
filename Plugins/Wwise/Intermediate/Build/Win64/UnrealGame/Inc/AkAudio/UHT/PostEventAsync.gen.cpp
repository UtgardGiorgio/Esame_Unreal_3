// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintNodes/PostEventAsync.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodePostEventAsync() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAsync(ETypeConstructPhase);
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAsync(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FPostEventAsyncOutputPin **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AkAudio_eventPostEventAsyncOutputPin_Parms
	{
		int32 PlayingID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FPostEventAsyncOutputPin constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FPostEventAsyncOutputPin constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FPostEventAsyncOutputPin Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventPostEventAsyncOutputPin_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayingID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FPostEventAsyncOutputPin Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio, nullptr, "PostEventAsyncOutputPin__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AkAudio_eventPostEventAsyncOutputPin_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AkAudio_eventPostEventAsyncOutputPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FPostEventAsyncOutputPin ************************************************

// ********** Begin Class UPostEventAsync Function PollPostEventFuture *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PollPostEventFuture constinit property declarations *******************
// ********** End Function PollPostEventFuture constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UPostEventAsync, nullptr, "PollPostEventFuture", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UPostEventAsync::execPollPostEventFuture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PollPostEventFuture();
	P_NATIVE_END;
}
// ********** End Class UPostEventAsync Function PollPostEventFuture *******************************

// ********** Begin Class UPostEventAsync Function PostEventAsync **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics
struct UHT_STATICS
{
	struct PostEventAsync_eventPostEventAsync_Parms
	{
		const UObject* WorldContextObject;
		UAkAudioEvent* AkEvent;
		AActor* Actor;
		int32 CallbackMask;
		FScriptDelegate PostEventCallback;
		bool bStopWhenAttachedToDestroyed;
		UPostEventAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "3" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Audiokinetic|Actor" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "true" },
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostEventAsync constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
	static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((PostEventAsync_eventPostEventAsync_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostEventAsync constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostEventAsync Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostEventCallback_MetaData), NewProp_PostEventCallback_MetaData) }; // a64ff1f73967efbf5fd0efa1604b53d62ab0c3cb
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(PostEventAsync_eventPostEventAsync_Parms), &UHT_STATICS::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, ReturnValue), Z_Construct_UClass_UPostEventAsync, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PostEventCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStopWhenAttachedToDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostEventAsync Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UPostEventAsync, nullptr, "PostEventAsync", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::PostEventAsync_eventPostEventAsync_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::PostEventAsync_eventPostEventAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPostEventAsync_PostEventAsync(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UPostEventAsync::execPostEventAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
	P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPostEventAsync**)Z_Param__Result=UPostEventAsync::PostEventAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Actor,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_bStopWhenAttachedToDestroyed);
	P_NATIVE_END;
}
// ********** End Class UPostEventAsync Function PostEventAsync ************************************

// ********** Begin Class UPostEventAsync **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UPostEventAsync_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BlueprintNodes/PostEventAsync.h" },
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPostEventAsync constinit property declarations **************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPostEventAsync constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PollPostEventFuture"), .Pointer = &UPostEventAsync::execPollPostEventFuture },
		{ .NameUTF8 = UTF8TEXT("PostEventAsync"), .Pointer = &UPostEventAsync::execPostEventAsync },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture, "PollPostEventFuture" }, // 1fad29373d0f4277c70d3dad8f98dd76b165f755
		{ &Z_Construct_UFunction_UPostEventAsync_PostEventAsync, "PostEventAsync" }, // 43a097c542e92398f1ec791ec0b57e47595fba38
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostEventAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UPostEventAsync Property Definitions *************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UPostEventAsync, Completed), Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 00183d45ce45fd6c4374c44b233a08ac805534fa
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Completed,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UPostEventAsync Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UPostEventAsync,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UPostEventAsync_StaticRegisterNativesUPostEventAsync()
{
	UClass* Class = UPostEventAsync::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPostEventAsync;
UClass* Z_Construct_UClass_UPostEventAsync(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UPostEventAsync;
		if (!Z_Registration_Info_UClass_UPostEventAsync.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("PostEventAsync"),
				Z_Registration_Info_UClass_UPostEventAsync.InnerSingleton,
				UPostEventAsync_StaticRegisterNativesUPostEventAsync,
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
		return Z_Registration_Info_UClass_UPostEventAsync.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UPostEventAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostEventAsync.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UPostEventAsync.OuterSingleton;
}
#undef UHT_STATICS
UPostEventAsync::UPostEventAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPostEventAsync);
UPostEventAsync::~UPostEventAsync() {}
// ********** End Class UPostEventAsync ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPostEventAsync, TEXT("UPostEventAsync"), &Z_Registration_Info_UClass_UPostEventAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostEventAsync), 4055931079U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h__Script_AkAudio_1f88a50d53e9114a1b42cc9908e8577f93c1f510{
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
