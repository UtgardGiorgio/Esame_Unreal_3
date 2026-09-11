// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkGameObject.h"
#include "Engine/LatentActionManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkGameObject() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType(ETypeConstructPhase);
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkGameObject Function GetAttenuationScalingFactor ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor_Statics
struct UHT_STATICS
{
	struct AkGameObject_eventGetAttenuationScalingFactor_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Audiokinetic|AkEvent" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAttenuationScalingFactor constinit property declarations ***********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAttenuationScalingFactor constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAttenuationScalingFactor Property Definitions **********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetAttenuationScalingFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAttenuationScalingFactor Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameObject, nullptr, "GetAttenuationScalingFactor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameObject_eventGetAttenuationScalingFactor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameObject_eventGetAttenuationScalingFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameObject::execGetAttenuationScalingFactor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttenuationScalingFactor();
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function GetAttenuationScalingFactor *************************

// ********** Begin Class UAkGameObject Function GetRTPCValue **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics
struct UHT_STATICS
{
	struct AkGameObject_eventGetRTPCValue_Parms
	{
		UAkRtpc* RTPCValue;
		ERTPCValueType InputValueType;
		float Value;
		ERTPCValueType OutputValueType;
		FString RTPC;
		int32 PlayingID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "RTPC" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets an RTPC value that was set on this game object as the game object source\n\x09*\n\x09* @param RTPC\x09\x09\x09\x09The name of the RTPC to set\n\x09* @param InputValueType\x09\x09The input value type\n\x09* @param Value\x09\x09\x09\x09The value of the RTPC\n\x09* @param OutputValueType\x09The output value type\n\x09* @param PlayingID\x09\x09\x09The playing ID of the posted event (Set to zero to ignore)\n\x09*/" },
#endif
		{ "CPP_Default_PlayingID", "0" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets an RTPC value that was set on this game object as the game object source\n\n@param RTPC                           The name of the RTPC to set\n@param InputValueType         The input value type\n@param Value                          The value of the RTPC\n@param OutputValueType        The output value type\n@param PlayingID                      The playing ID of the posted event (Set to zero to ignore)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRTPCValue constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputValueType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputValueType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RTPC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRTPCValue constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRTPCValue Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTPCValue_MetaData), NewProp_RTPCValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InputValueType = { "InputValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, InputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(0, nullptr) }; // ad3019bd49c3d4a1111c727e6186247409b14e3e
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutputValueType = { "OutputValueType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, OutputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(0, nullptr) }; // ad3019bd49c3d4a1111c727e6186247409b14e3e
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, RTPC), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RTPCValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutputValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutputValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RTPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayingID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRTPCValue Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameObject, nullptr, "GetRTPCValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameObject_eventGetRTPCValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameObject_eventGetRTPCValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_GetRTPCValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameObject::execGetRTPCValue)
{
	P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
	P_GET_ENUM(ERTPCValueType,Z_Param_InputValueType);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_GET_ENUM_REF(ERTPCValueType,Z_Param_Out_OutputValueType);
	P_GET_PROPERTY(FStrProperty,Z_Param_RTPC);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayingID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRTPCValue(Z_Param_RTPCValue,ERTPCValueType(Z_Param_InputValueType),Z_Param_Out_Value,(ERTPCValueType&)(Z_Param_Out_OutputValueType),Z_Param_RTPC,Z_Param_PlayingID);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function GetRTPCValue ****************************************

// ********** Begin Class UAkGameObject Function PostAkEvent ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics
struct UHT_STATICS
{
	struct AkGameObject_eventPostAkEvent_Parms
	{
		UAkAudioEvent* AkEvent;
		int32 CallbackMask;
		FScriptDelegate PostEventCallback;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "1" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts an event to Wwise, using this as the game object source\n\x09 *\n\x09 * @param AkEvent\x09\x09\x09The event to post\n\x09 * @param CallbackMask\x09\x09Mask of desired callbacks\n\x09 * @param PostEventCallback\x09""Blueprint Event to execute on callback\n\x09 *\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts an event to Wwise, using this as the game object source\n\n@param AkEvent                       The event to post\n@param CallbackMask          Mask of desired callbacks\n@param PostEventCallback     Blueprint Event to execute on callback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostAkEvent constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAkEvent constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAkEvent Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostEventCallback_MetaData), NewProp_PostEventCallback_MetaData) }; // a64ff1f73967efbf5fd0efa1604b53d62ab0c3cb
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PostEventCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostAkEvent Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameObject, nullptr, "PostAkEvent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameObject_eventPostAkEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameObject_eventPostAkEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_PostAkEvent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameObject::execPostAkEvent)
{
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostAkEvent(Z_Param_AkEvent,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback));
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function PostAkEvent *****************************************

// ********** Begin Class UAkGameObject Function PostAkEventAsync **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics
struct UHT_STATICS
{
	struct AkGameObject_eventPostAkEventAsync_Parms
	{
		const UObject* WorldContextObject;
		UAkAudioEvent* AkEvent;
		int32 PlayingID;
		int32 CallbackMask;
		FScriptDelegate PostEventCallback;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "3" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts an event to Wwise, using this as the game object source\n\x09 *\n\x09 * @param AkEvent\x09\x09The event to post\n\x09 * @param CallbackMask\x09Mask of desired callbacks\n\x09 * @param PostEventCallback\x09""Blueprint Event to execute on callback\n\x09 *\n\x09 */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts an event to Wwise, using this as the game object source\n\n@param AkEvent               The event to post\n@param CallbackMask  Mask of desired callbacks\n@param PostEventCallback     Blueprint Event to execute on callback" },
#endif
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

// ********** Begin Function PostAkEventAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAkEventAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAkEventAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostEventCallback_MetaData), NewProp_PostEventCallback_MetaData) }; // a64ff1f73967efbf5fd0efa1604b53d62ab0c3cb
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 11bb40500dfc265650dc0f3ec8dbccc2dd509217
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PostEventCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostAkEventAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameObject, nullptr, "PostAkEventAsync", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameObject_eventPostAkEventAsync_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameObject_eventPostAkEventAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_PostAkEventAsync(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameObject::execPostAkEventAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayingID);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostAkEventAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Out_PlayingID,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_LatentInfo);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function PostAkEventAsync ************************************

// ********** Begin Class UAkGameObject Function PostAssociatedAkEvent *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics
struct UHT_STATICS
{
	struct AkGameObject_eventPostAssociatedAkEvent_Parms
	{
		int32 CallbackMask;
		FScriptDelegate PostEventCallback;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts this game object's AkAudioEvent to Wwise, using this as the game object source\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts this game object's AkAudioEvent to Wwise, using this as the game object source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostAssociatedAkEvent constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAssociatedAkEvent constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAssociatedAkEvent Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostEventCallback_MetaData), NewProp_PostEventCallback_MetaData) }; // a64ff1f73967efbf5fd0efa1604b53d62ab0c3cb
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PostEventCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostAssociatedAkEvent Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameObject, nullptr, "PostAssociatedAkEvent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameObject_eventPostAssociatedAkEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameObject_eventPostAssociatedAkEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameObject::execPostAssociatedAkEvent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostAssociatedAkEvent(Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback));
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function PostAssociatedAkEvent *******************************

// ********** Begin Class UAkGameObject Function PostAssociatedAkEventAsync ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics
struct UHT_STATICS
{
	struct AkGameObject_eventPostAssociatedAkEventAsync_Parms
	{
		const UObject* WorldContextObject;
		int32 CallbackMask;
		FScriptDelegate PostEventCallback;
		FLatentActionInfo LatentInfo;
		int32 PlayingID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
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

// ********** Begin Function PostAssociatedAkEventAsync constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAssociatedAkEventAsync constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAssociatedAkEventAsync Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostEventCallback_MetaData), NewProp_PostEventCallback_MetaData) }; // a64ff1f73967efbf5fd0efa1604b53d62ab0c3cb
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 11bb40500dfc265650dc0f3ec8dbccc2dd509217
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PostEventCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayingID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostAssociatedAkEventAsync Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameObject, nullptr, "PostAssociatedAkEventAsync", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameObject_eventPostAssociatedAkEventAsync_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameObject_eventPostAssociatedAkEventAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameObject::execPostAssociatedAkEventAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayingID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostAssociatedAkEventAsync(Z_Param_WorldContextObject,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_LatentInfo,Z_Param_Out_PlayingID);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function PostAssociatedAkEventAsync **************************

// ********** Begin Class UAkGameObject Function PostTrigger ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameObject_PostTrigger_Statics
struct UHT_STATICS
{
	struct AkGameObject_eventPostTrigger_Parms
	{
		UAkTrigger* TriggerValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Posts a trigger to wwise, using this component as the game object source\n\x09*\n\x09* @param Trigger\x09\x09The name of the trigger\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts a trigger to wwise, using this component as the game object source\n\n@param Trigger                The name of the trigger" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostTrigger constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostTrigger constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostTrigger Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TriggerValue = { "TriggerValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostTrigger_Parms, TriggerValue), Z_Construct_UClass_UAkTrigger, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerValue_MetaData), NewProp_TriggerValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TriggerValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostTrigger Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameObject, nullptr, "PostTrigger", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameObject_eventPostTrigger_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameObject_eventPostTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_PostTrigger(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameObject::execPostTrigger)
{
	P_GET_OBJECT(UAkTrigger,Z_Param_TriggerValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostTrigger(Z_Param_TriggerValue);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function PostTrigger *****************************************

// ********** Begin Class UAkGameObject Function SetAttenuationScalingFactor ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor_Statics
struct UHT_STATICS
{
	struct AkGameObject_eventSetAttenuationScalingFactor_Parms
	{
		float InAttenuationScalingFactor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the attenuation scaling factor, which modifies the attenuation computations of the emitter on this game object to simulate sounds with a larger or smaller area of effect. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the attenuation scaling factor, which modifies the attenuation computations of the emitter on this game object to simulate sounds with a larger or smaller area of effect." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetAttenuationScalingFactor constinit property declarations ***********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAttenuationScalingFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAttenuationScalingFactor constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAttenuationScalingFactor Property Definitions **********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InAttenuationScalingFactor = { "InAttenuationScalingFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetAttenuationScalingFactor_Parms, InAttenuationScalingFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InAttenuationScalingFactor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAttenuationScalingFactor Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameObject, nullptr, "SetAttenuationScalingFactor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameObject_eventSetAttenuationScalingFactor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameObject_eventSetAttenuationScalingFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameObject::execSetAttenuationScalingFactor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAttenuationScalingFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttenuationScalingFactor(Z_Param_InAttenuationScalingFactor);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function SetAttenuationScalingFactor *************************

// ********** Begin Class UAkGameObject Function SetRTPCValue **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics
struct UHT_STATICS
{
	struct AkGameObject_eventSetRTPCValue_Parms
	{
		UAkRtpc* RTPCValue;
		float Value;
		int32 InterpolationTimeMs;
		FString RTPC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets an RTPC value, using this game object as the game object source\n\x09*\n\x09* @param RTPC\x09\x09\x09The name of the RTPC to set\n\x09* @param Value\x09\x09\x09The value of the RTPC\n\x09* @param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an RTPC value, using this game object as the game object source\n\n@param RTPC                   The name of the RTPC to set\n@param Value                  The value of the RTPC\n@param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRTPCValue constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RTPC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRTPCValue constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRTPCValue Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTPCValue_MetaData), NewProp_RTPCValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InterpolationTimeMs = { "InterpolationTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, RTPC), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RTPCValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InterpolationTimeMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RTPC,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRTPCValue Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameObject, nullptr, "SetRTPCValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameObject_eventSetRTPCValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameObject_eventSetRTPCValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_SetRTPCValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameObject::execSetRTPCValue)
{
	P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_PROPERTY(FIntProperty,Z_Param_InterpolationTimeMs);
	P_GET_PROPERTY(FStrProperty,Z_Param_RTPC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRTPCValue(Z_Param_RTPCValue,Z_Param_Value,Z_Param_InterpolationTimeMs,Z_Param_RTPC);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function SetRTPCValue ****************************************

// ********** Begin Class UAkGameObject Function SetSwitch *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameObject_SetSwitch_Statics
struct UHT_STATICS
{
	struct AkGameObject_eventSetSwitch_Parms
	{
		UAkSwitchValue* SwitchValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets a switch group in wwise, using this component as the game object source\n\x09*\n\x09* @param SwitchGroup\x09The name of the switch group\n\x09* @param SwitchState\x09The new state of the switch\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a switch group in wwise, using this component as the game object source\n\n@param SwitchGroup    The name of the switch group\n@param SwitchState    The new state of the switch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSwitch constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSwitch constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSwitch Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SwitchValue = { "SwitchValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetSwitch_Parms, SwitchValue), Z_Construct_UClass_UAkSwitchValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchValue_MetaData), NewProp_SwitchValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSwitch Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameObject, nullptr, "SetSwitch", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameObject_eventSetSwitch_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameObject_eventSetSwitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameObject_SetSwitch(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameObject::execSetSwitch)
{
	P_GET_OBJECT(UAkSwitchValue,Z_Param_SwitchValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSwitch(Z_Param_SwitchValue);
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function SetSwitch *******************************************

// ********** Begin Class UAkGameObject Function Stop **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameObject_Stop_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops playback using this game object as the game object to stop\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops playback using this game object as the game object to stop" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameObject, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkGameObject_Stop(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameObject::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UAkGameObject Function Stop ************************************************

// ********** Begin Class UAkGameObject ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkGameObject_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkGameObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationScalingFactor_MetaData[] = {
		{ "BlueprintGetter", "GetAttenuationScalingFactor" },
		{ "BlueprintSetter", "SetAttenuationScalingFactor" },
		{ "Category", "AkEvent" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Modifies the attenuation computations of the emitter on this game object to simulate sounds with a larger or smaller area of effect. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifies the attenuation computations of the emitter on this game object to simulate sounds with a larger or smaller area of effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[] = {
		{ "Category", "AkEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Associated Wwise Event to be posted on this game object */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Associated Wwise Event to be posted on this game object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerDestroyed_MetaData[] = {
		{ "Category", "AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop sound when owner is destroyed? */" },
#endif
		{ "DisplayName", "Stop When Owner is Destroyed" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop sound when owner is destroyed?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopFadeoutTime_MetaData[] = {
		{ "Category", "AkGameObject" },
		{ "ClampMax", "1000000" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The time in ms by which a playing sound object fades out after it is destroyed*/" },
#endif
		{ "DisplayName", "Stop Fadeout Time (ms)" },
		{ "EditCondition", "StopWhenOwnerDestroyed" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time in ms by which a playing sound object fades out after it is destroyed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttenuationScalingMigrated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkGameObject constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationScalingFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent;
	static void NewProp_StopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UAkGameObject*)Obj)->StopWhenOwnerDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerDestroyed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StopFadeoutTime;
	static void NewProp_bAttenuationScalingMigrated_SetBit(void* Obj)
	{
		((UAkGameObject*)Obj)->bAttenuationScalingMigrated = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttenuationScalingMigrated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkGameObject constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAttenuationScalingFactor"), .Pointer = &UAkGameObject::execGetAttenuationScalingFactor },
		{ .NameUTF8 = UTF8TEXT("GetRTPCValue"), .Pointer = &UAkGameObject::execGetRTPCValue },
		{ .NameUTF8 = UTF8TEXT("PostAkEvent"), .Pointer = &UAkGameObject::execPostAkEvent },
		{ .NameUTF8 = UTF8TEXT("PostAkEventAsync"), .Pointer = &UAkGameObject::execPostAkEventAsync },
		{ .NameUTF8 = UTF8TEXT("PostAssociatedAkEvent"), .Pointer = &UAkGameObject::execPostAssociatedAkEvent },
		{ .NameUTF8 = UTF8TEXT("PostAssociatedAkEventAsync"), .Pointer = &UAkGameObject::execPostAssociatedAkEventAsync },
		{ .NameUTF8 = UTF8TEXT("PostTrigger"), .Pointer = &UAkGameObject::execPostTrigger },
		{ .NameUTF8 = UTF8TEXT("SetAttenuationScalingFactor"), .Pointer = &UAkGameObject::execSetAttenuationScalingFactor },
		{ .NameUTF8 = UTF8TEXT("SetRTPCValue"), .Pointer = &UAkGameObject::execSetRTPCValue },
		{ .NameUTF8 = UTF8TEXT("SetSwitch"), .Pointer = &UAkGameObject::execSetSwitch },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &UAkGameObject::execStop },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGameObject_GetAttenuationScalingFactor, "GetAttenuationScalingFactor" }, // a7739a17cc36aa6579c7b498f38b8980646f1042
		{ &Z_Construct_UFunction_UAkGameObject_GetRTPCValue, "GetRTPCValue" }, // bef77d0df878b47d39fbdd2943fa3533516d2f52
		{ &Z_Construct_UFunction_UAkGameObject_PostAkEvent, "PostAkEvent" }, // 03417ea40416ade803e750923d567e2bf1bd59c2
		{ &Z_Construct_UFunction_UAkGameObject_PostAkEventAsync, "PostAkEventAsync" }, // 4e126ce2ead30ebf2345f6934de2e0ddfb88c7ad
		{ &Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent, "PostAssociatedAkEvent" }, // f65cf9b22f18f8272d552e43116b213ef244342b
		{ &Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync, "PostAssociatedAkEventAsync" }, // d2ed54e90ea96574a057f90abeafd34b7fb0cb61
		{ &Z_Construct_UFunction_UAkGameObject_PostTrigger, "PostTrigger" }, // 029c7bfb2b2df7945db938faccd9530ddff568ae
		{ &Z_Construct_UFunction_UAkGameObject_SetAttenuationScalingFactor, "SetAttenuationScalingFactor" }, // 9136d124d515388396c23f0317ff9b8b8263dd13
		{ &Z_Construct_UFunction_UAkGameObject_SetRTPCValue, "SetRTPCValue" }, // 9652f2aeb7a8cf16b5c0938db25f55bb4af56714
		{ &Z_Construct_UFunction_UAkGameObject_SetSwitch, "SetSwitch" }, // e4392d9ba9bb90fff42c7302430eaed29c485bdf
		{ &Z_Construct_UFunction_UAkGameObject_Stop, "Stop" }, // 43167e0af79b11875443edc79fe056ff8987c104
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGameObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkGameObject Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AttenuationScalingFactor = { "AttenuationScalingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGameObject, AttenuationScalingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationScalingFactor_MetaData), NewProp_AttenuationScalingFactor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGameObject, AkAudioEvent), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AkAudioEvent_MetaData), NewProp_AkAudioEvent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_StopWhenOwnerDestroyed = { "StopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGameObject), &UHT_STATICS::NewProp_StopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopWhenOwnerDestroyed_MetaData), NewProp_StopWhenOwnerDestroyed_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StopFadeoutTime = { "StopFadeoutTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGameObject, StopFadeoutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopFadeoutTime_MetaData), NewProp_StopFadeoutTime_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAttenuationScalingMigrated = { "bAttenuationScalingMigrated", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGameObject), &UHT_STATICS::NewProp_bAttenuationScalingMigrated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttenuationScalingMigrated_MetaData), NewProp_bAttenuationScalingMigrated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AttenuationScalingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkAudioEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StopWhenOwnerDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StopFadeoutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAttenuationScalingMigrated,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkGameObject Property Definitions *****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USceneComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkGameObject,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAkGameObject_StaticRegisterNativesUAkGameObject()
{
	UClass* Class = UAkGameObject::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkGameObject;
UClass* Z_Construct_UClass_UAkGameObject(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkGameObject;
		if (!Z_Registration_Info_UClass_UAkGameObject.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkGameObject"),
				Z_Registration_Info_UClass_UAkGameObject.InnerSingleton,
				UAkGameObject_StaticRegisterNativesUAkGameObject,
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
		return Z_Registration_Info_UClass_UAkGameObject.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkGameObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGameObject.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkGameObject.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkGameObject);
UAkGameObject::~UAkGameObject() {}
// ********** End Class UAkGameObject **************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkGameObject, TEXT("UAkGameObject"), &Z_Registration_Info_UClass_UAkGameObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGameObject), 3314556411U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h__Script_AkAudio_c87a44b2958726d6ecf8509d946340cc5d625cbc{
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
