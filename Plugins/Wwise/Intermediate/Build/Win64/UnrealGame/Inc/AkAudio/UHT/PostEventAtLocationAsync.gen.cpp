// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintNodes/PostEventAtLocationAsync.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodePostEventAtLocationAsync() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAtLocationAsync(ETypeConstructPhase);
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAtLocationAsync(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FPostEventAtLocationAsyncOutputPin ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms
	{
		int32 PlayingID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAtLocationAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FPostEventAtLocationAsyncOutputPin constinit property declarations ****
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FPostEventAtLocationAsyncOutputPin constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FPostEventAtLocationAsyncOutputPin Property Definitions ***************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayingID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FPostEventAtLocationAsyncOutputPin Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio, nullptr, "PostEventAtLocationAsyncOutputPin__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FPostEventAtLocationAsyncOutputPin **************************************

// ********** Begin Class UPostEventAtLocationAsync Function PollPostEventFuture *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAtLocationAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PollPostEventFuture constinit property declarations *******************
// ********** End Function PollPostEventFuture constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UPostEventAtLocationAsync, nullptr, "PollPostEventFuture", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UPostEventAtLocationAsync::execPollPostEventFuture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PollPostEventFuture();
	P_NATIVE_END;
}
// ********** End Class UPostEventAtLocationAsync Function PollPostEventFuture *********************

// ********** Begin Class UPostEventAtLocationAsync Function PostEventAtLocationAsync **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics
struct UHT_STATICS
{
	struct PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms
	{
		const UObject* WorldContextObject;
		UAkAudioEvent* AkEvent;
		FVector Location;
		FRotator Orientation;
		UPostEventAtLocationAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Audiokinetic" },
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAtLocationAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostEventAtLocationAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostEventAtLocationAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostEventAtLocationAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, ReturnValue), Z_Construct_UClass_UPostEventAtLocationAsync, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostEventAtLocationAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UPostEventAtLocationAsync, nullptr, "PostEventAtLocationAsync", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UPostEventAtLocationAsync::execPostEventAtLocationAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Orientation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPostEventAtLocationAsync**)Z_Param__Result=UPostEventAtLocationAsync::PostEventAtLocationAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation);
	P_NATIVE_END;
}
// ********** End Class UPostEventAtLocationAsync Function PostEventAtLocationAsync ****************

// ********** Begin Class UPostEventAtLocationAsync ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UPostEventAtLocationAsync_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BlueprintNodes/PostEventAtLocationAsync.h" },
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAtLocationAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintNodes/PostEventAtLocationAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPostEventAtLocationAsync constinit property declarations ****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPostEventAtLocationAsync constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PollPostEventFuture"), .Pointer = &UPostEventAtLocationAsync::execPollPostEventFuture },
		{ .NameUTF8 = UTF8TEXT("PostEventAtLocationAsync"), .Pointer = &UPostEventAtLocationAsync::execPostEventAtLocationAsync },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture, "PollPostEventFuture" }, // 978acd5918308af5c63bb12ca085cf106df79b2d
		{ &Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync, "PostEventAtLocationAsync" }, // 3c423116454b8c3d93f485dba50f932f5c8f583c
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostEventAtLocationAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UPostEventAtLocationAsync Property Definitions ***************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UPostEventAtLocationAsync, Completed), Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 5ee0e16edb6b3dfdb77cdf5f965137de00cf472e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Completed,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UPostEventAtLocationAsync Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UPostEventAtLocationAsync,
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
static void UPostEventAtLocationAsync_StaticRegisterNativesUPostEventAtLocationAsync()
{
	UClass* Class = UPostEventAtLocationAsync::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPostEventAtLocationAsync;
UClass* Z_Construct_UClass_UPostEventAtLocationAsync(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UPostEventAtLocationAsync;
		if (!Z_Registration_Info_UClass_UPostEventAtLocationAsync.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("PostEventAtLocationAsync"),
				Z_Registration_Info_UClass_UPostEventAtLocationAsync.InnerSingleton,
				UPostEventAtLocationAsync_StaticRegisterNativesUPostEventAtLocationAsync,
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
		return Z_Registration_Info_UClass_UPostEventAtLocationAsync.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UPostEventAtLocationAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostEventAtLocationAsync.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UPostEventAtLocationAsync.OuterSingleton;
}
#undef UHT_STATICS
UPostEventAtLocationAsync::UPostEventAtLocationAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPostEventAtLocationAsync);
UPostEventAtLocationAsync::~UPostEventAtLocationAsync() {}
// ********** End Class UPostEventAtLocationAsync **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPostEventAtLocationAsync, TEXT("UPostEventAtLocationAsync"), &Z_Registration_Info_UClass_UPostEventAtLocationAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostEventAtLocationAsync), 2469399411U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h__Script_AkAudio_083a51399adc0b73bda5f363529f31cdcf1bbc38{
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
