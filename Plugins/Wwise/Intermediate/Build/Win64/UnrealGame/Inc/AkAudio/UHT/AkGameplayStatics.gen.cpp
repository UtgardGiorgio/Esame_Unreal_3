// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkGameplayStatics.h"
#include "AkGameplayTypes.h"
#include "Engine/LatentActionManager.h"
#include "UObject/Class.h"
#include "WwiseUnrealObjectHelper.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkGameplayStatics() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo(ETypeConstructPhase);
WWISEOBJECTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputDeviceID(ETypeConstructPhase);
WWISEOBJECTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAkUniqueID(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkChannelMask(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutdoorsRoomParameters(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputSettings(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType(ETypeConstructPhase);
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature(ETypeConstructPhase);
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_PanningRule(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkEffectShareSet(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkPortalComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkStateValue(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FAkOutdoorsRoomParameters *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkOutdoorsRoomParameters_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkOutdoorsRoomParameters>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkOutdoorsRoomParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbAuxBus_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wwise Auxiliary Bus associated with the Outdoors Room. Default is null. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wwise Auxiliary Bus associated with the Outdoors Room. Default is null." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbLevel_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum send level to the Wwise Auxiliary Bus associated with the Outdoors Room. Valid range is 0.0f-1.0f. Default value is 1. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum send level to the Wwise Auxiliary Bus associated with the Outdoors Room. Valid range is 0.0f-1.0f. Default value is 1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionLoss_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The transmission loss value in Wwise, on emitters in the Outdoors Room, when no audio paths to the\n\x09* listener are found via sound propagation in Wwise Spatial Audio. Valid range 0.0f-1.0f. Default value is 0.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The transmission loss value in Wwise, on emitters in the Outdoors Room, when no audio paths to the\nlistener are found via sound propagation in Wwise Spatial Audio. Valid range 0.0f-1.0f. Default value is 0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxSendLevel_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Send level for sounds that are posted on the room. Valid range is 0.f-1.f.\n\x09* A value of 0 disables the aux send. Default value is 0.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send level for sounds that are posted on the room. Valid range is 0.f-1.f.\nA value of 0 disables the aux send. Default value is 0." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkOutdoorsRoomParameters constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReverbAuxBus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmissionLoss;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AuxSendLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkOutdoorsRoomParameters constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkOutdoorsRoomParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkOutdoorsRoomParameters Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReverbAuxBus = { "ReverbAuxBus", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FAkOutdoorsRoomParameters, ReverbAuxBus), Z_Construct_UClass_UAkAuxBus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbAuxBus_MetaData), NewProp_ReverbAuxBus_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReverbLevel = { "ReverbLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkOutdoorsRoomParameters, ReverbLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbLevel_MetaData), NewProp_ReverbLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TransmissionLoss = { "TransmissionLoss", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkOutdoorsRoomParameters, TransmissionLoss), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmissionLoss_MetaData), NewProp_TransmissionLoss_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AuxSendLevel = { "AuxSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkOutdoorsRoomParameters, AuxSendLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxSendLevel_MetaData), NewProp_AuxSendLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReverbAuxBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReverbLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransmissionLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxSendLevel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkOutdoorsRoomParameters Property Definitions **********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkOutdoorsRoomParameters",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkOutdoorsRoomParameters>(),
	alignof(FAkOutdoorsRoomParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkOutdoorsRoomParameters;
UScriptStruct* Z_Construct_UScriptStruct_FAkOutdoorsRoomParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkOutdoorsRoomParameters.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkOutdoorsRoomParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkOutdoorsRoomParameters, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkOutdoorsRoomParameters"));
		}
		return Z_Registration_Info_UScriptStruct_FAkOutdoorsRoomParameters.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkOutdoorsRoomParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkOutdoorsRoomParameters.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkOutdoorsRoomParameters.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkOutdoorsRoomParameters *******************************************

// ********** Begin Class UAkGameplayStatics Function AddOutput ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventAddOutput_Parms
	{
		FAkOutputSettings in_Settings;
		FAkOutputDeviceID out_DeviceID;
		TArray<UAkComponent*> in_ListenerIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoCreateRefTerm", "in_ListenerIDs" },
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Adds an output to the sound engine. Use this to add controller-attached headphones, controller speakers, DVR output, etc.\n\x09* The in_Settings parameter contains an Audio Device ShareSet to specify the output plugin to use and a device ID to specify the instance, if necessary (e.g. which game controller).\n\x09*\n\x09* Like most functions of AK::SoundEngine, AddOutput is asynchronous.\n\x09* A successful return code merely indicates that the request is properly queued. Error codes returned by this function indicate various invalid parameters.\n\x09* To know if this function succeeds or not, and the failure code, register an AkDeviceStatusCallbackFunc callback with RegisterAudioDeviceStatusCallback.\n\x09*\n\x09* @param in_Settings Creation parameters for this output.\n\x09* @param out_pDeviceID (Optional) Output ID to use with all other Output management functions. Leave to NULL if not required.\n\x09* @param in_pListenerIDs Specific listener(s) to attach to this device. If specified, only the sounds routed to game objects linked to those listeners will play in this device. It is necessary to have separate listeners if multiple devices of the same type can coexist (e.g. controller speakers) If not specified, sound routing simply obey the associations between Master Busses and Audio Devices setup in the Wwise Project.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an output to the sound engine. Use this to add controller-attached headphones, controller speakers, DVR output, etc.\nThe in_Settings parameter contains an Audio Device ShareSet to specify the output plugin to use and a device ID to specify the instance, if necessary (e.g. which game controller).\n\nLike most functions of AK::SoundEngine, AddOutput is asynchronous.\nA successful return code merely indicates that the request is properly queued. Error codes returned by this function indicate various invalid parameters.\nTo know if this function succeeds or not, and the failure code, register an AkDeviceStatusCallbackFunc callback with RegisterAudioDeviceStatusCallback.\n\n@param in_Settings Creation parameters for this output.\n@param out_pDeviceID (Optional) Output ID to use with all other Output management functions. Leave to NULL if not required.\n@param in_pListenerIDs Specific listener(s) to attach to this device. If specified, only the sounds routed to game objects linked to those listeners will play in this device. It is necessary to have separate listeners if multiple devices of the same type can coexist (e.g. controller speakers) If not specified, sound routing simply obey the associations between Master Busses and Audio Devices setup in the Wwise Project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_in_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_in_ListenerIDs_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddOutput constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_in_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_out_DeviceID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_in_ListenerIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_in_ListenerIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddOutput constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddOutput Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_in_Settings = { "in_Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventAddOutput_Parms, in_Settings), Z_Construct_UScriptStruct_FAkOutputSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_in_Settings_MetaData), NewProp_in_Settings_MetaData) }; // cadd5d704f28e46311b8a0c9a94a0652d7d1654d
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_out_DeviceID = { "out_DeviceID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventAddOutput_Parms, out_DeviceID), Z_Construct_UScriptStruct_FAkOutputDeviceID, METADATA_PARAMS(0, nullptr) }; // 365e20fe238e67831e413d81ebf809f304338b1f
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_in_ListenerIDs_Inner = { "in_ListenerIDs", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_in_ListenerIDs = { "in_ListenerIDs", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventAddOutput_Parms, in_ListenerIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_in_ListenerIDs_MetaData), NewProp_in_ListenerIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_in_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_out_DeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_in_ListenerIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_in_ListenerIDs,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddOutput Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "AddOutput", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventAddOutput_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventAddOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_AddOutput(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execAddOutput)
{
	P_GET_STRUCT_REF(FAkOutputSettings,Z_Param_Out_in_Settings);
	P_GET_STRUCT_REF(FAkOutputDeviceID,Z_Param_Out_out_DeviceID);
	P_GET_TARRAY_REF(UAkComponent*,Z_Param_Out_in_ListenerIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::AddOutput(Z_Param_Out_in_Settings,Z_Param_Out_out_DeviceID,Z_Param_Out_in_ListenerIDs);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function AddOutput **************************************

// ********** Begin Class UAkGameplayStatics Function AddOutputCaptureMarker ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventAddOutputCaptureMarker_Parms
	{
		FString MarkerText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Add text marker in output capture file.\n\x09 * @param MarkerText - The name text to put in the marker.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add text marker in output capture file.\n@param MarkerText - The name text to put in the marker." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddOutputCaptureMarker constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddOutputCaptureMarker constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddOutputCaptureMarker Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_MarkerText = { "MarkerText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventAddOutputCaptureMarker_Parms, MarkerText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerText_MetaData), NewProp_MarkerText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkerText,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddOutputCaptureMarker Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "AddOutputCaptureMarker", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventAddOutputCaptureMarker_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventAddOutputCaptureMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execAddOutputCaptureMarker)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MarkerText);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::AddOutputCaptureMarker(Z_Param_MarkerText);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function AddOutputCaptureMarker *************************

// ********** Begin Class UAkGameplayStatics Function CancelEventCallback **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventCancelEventCallback_Parms
	{
		FScriptDelegate PostEventCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancels an Event callback\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancels an Event callback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelEventCallback constinit property declarations *******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelEventCallback constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelEventCallback Property Definitions ******************************
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventCancelEventCallback_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostEventCallback_MetaData), NewProp_PostEventCallback_MetaData) }; // a64ff1f73967efbf5fd0efa1604b53d62ab0c3cb
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PostEventCallback,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CancelEventCallback Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "CancelEventCallback", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventCancelEventCallback_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventCancelEventCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execCancelEventCallback)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::CancelEventCallback(FOnAkPostEventCallback(Z_Param_Out_PostEventCallback));
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function CancelEventCallback ****************************

// ********** Begin Class UAkGameplayStatics Function ClearSoundBanksAndMedia **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|SoundBanks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clear all loaded banks\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all loaded banks" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearSoundBanksAndMedia constinit property declarations ***************
// ********** End Function ClearSoundBanksAndMedia constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "ClearSoundBanksAndMedia", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execClearSoundBanksAndMedia)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::ClearSoundBanksAndMedia();
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function ClearSoundBanksAndMedia ************************

// ********** Begin Class UAkGameplayStatics Function GetAkAudioTypeUserData ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventGetAkAudioTypeUserData_Parms
	{
		const UAkAudioType* Instance;
		const UClass* Type;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAkAudioTypeUserData constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAkAudioTypeUserData constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAkAudioTypeUserData Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkAudioTypeUserData_Parms, Instance), Z_Construct_UClass_UAkAudioType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkAudioTypeUserData_Parms, Type), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkAudioTypeUserData_Parms, ReturnValue), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Instance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAkAudioTypeUserData Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAkAudioTypeUserData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventGetAkAudioTypeUserData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventGetAkAudioTypeUserData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execGetAkAudioTypeUserData)
{
	P_GET_OBJECT(UAkAudioType,Z_Param_Instance);
	P_GET_OBJECT(UClass,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UAkGameplayStatics::GetAkAudioTypeUserData(Z_Param_Instance,Z_Param_Type);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function GetAkAudioTypeUserData *************************

// ********** Begin Class UAkGameplayStatics Function GetAkComponent *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventGetAkComponent_Parms
	{
		USceneComponent* AttachToComponent;
		bool ComponentCreated;
		FName AttachPointName;
		FVector Location;
		TEnumAsByte<EAttachLocation::Type> LocationType;
		UAkComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get an AkComponent attached to and following the specified component. \n\x09 * @param AttachToComponent - The parent component to search\n\x09 * @param ComponentCreated - True if a new component was created\n\x09 * @param AttachPointName - Optional named point within the AttachComponent to play the sound at.\n\x09 * @param Location Position the Component is situated at\n\x09 * @param LocationType KeepRelativeOffset for position relative to AttachToComponent, KeepWorldPosition for global\n\x09 */" },
#endif
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetOrCreateAkComponent instead." },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an AkComponent attached to and following the specified component.\n@param AttachToComponent - The parent component to search\n@param ComponentCreated - True if a new component was created\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at.\n@param Location Position the Component is situated at\n@param LocationType KeepRelativeOffset for position relative to AttachToComponent, KeepWorldPosition for global" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAkComponent constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
	static void NewProp_ComponentCreated_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventGetAkComponent_Parms*)Obj)->ComponentCreated = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ComponentCreated;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAkComponent constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAkComponent Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToComponent_MetaData), NewProp_AttachToComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ComponentCreated = { "ComponentCreated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventGetAkComponent_Parms), &UHT_STATICS::NewProp_ComponentCreated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, AttachPointName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(0, nullptr) }; // 0dbf58a470be3b10c2316128df97ec977606044b
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, ReturnValue), Z_Construct_UClass_UAkComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AttachToComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AttachPointName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAkComponent Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAkComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventGetAkComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventGetAkComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execGetAkComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
	P_GET_UBOOL_REF(Z_Param_Out_ComponentCreated);
	P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkComponent**)Z_Param__Result=UAkGameplayStatics::GetAkComponent(Z_Param_AttachToComponent,Z_Param_Out_ComponentCreated,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType));
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function GetAkComponent *********************************

// ********** Begin Class UAkGameplayStatics Function GetAvailableAudioCultures ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventGetAvailableAudioCultures_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Culture" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAvailableAudioCultures constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAvailableAudioCultures constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAvailableAudioCultures Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAvailableAudioCultures_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAvailableAudioCultures Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAvailableAudioCultures", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventGetAvailableAudioCultures_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventGetAvailableAudioCultures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execGetAvailableAudioCultures)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UAkGameplayStatics::GetAvailableAudioCultures();
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function GetAvailableAudioCultures **********************

// ********** Begin Class UAkGameplayStatics Function GetCurrentAudioCulture ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventGetCurrentAudioCulture_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Culture" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentAudioCulture constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentAudioCulture constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentAudioCulture Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetCurrentAudioCulture_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentAudioCulture Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetCurrentAudioCulture", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventGetCurrentAudioCulture_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventGetCurrentAudioCulture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execGetCurrentAudioCulture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAkGameplayStatics::GetCurrentAudioCulture();
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function GetCurrentAudioCulture *************************

// ********** Begin Class UAkGameplayStatics Function GetCurrentOutdoorsRoomParameters *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_GetCurrentOutdoorsRoomParameters_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventGetCurrentOutdoorsRoomParameters_Parms
	{
		FAkOutdoorsRoomParameters ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get the current Outdoors Room parameters.\n\x09*\n\x09* @return FAkOutdoorsRoomParameters - Structure containing the current parameters of the Outdoors Room.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current Outdoors Room parameters.\n\n@return FAkOutdoorsRoomParameters - Structure containing the current parameters of the Outdoors Room." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentOutdoorsRoomParameters constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentOutdoorsRoomParameters constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentOutdoorsRoomParameters Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetCurrentOutdoorsRoomParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FAkOutdoorsRoomParameters, METADATA_PARAMS(0, nullptr) }; // e2c1be5d2640df0ede9b731265391eed89c448e6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentOutdoorsRoomParameters Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetCurrentOutdoorsRoomParameters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventGetCurrentOutdoorsRoomParameters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventGetCurrentOutdoorsRoomParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetCurrentOutdoorsRoomParameters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execGetCurrentOutdoorsRoomParameters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAkOutdoorsRoomParameters*)Z_Param__Result=UAkGameplayStatics::GetCurrentOutdoorsRoomParameters();
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function GetCurrentOutdoorsRoomParameters ***************

// ********** Begin Class UAkGameplayStatics Function GetOrCreateAkComponent ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_GetOrCreateAkComponent_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventGetOrCreateAkComponent_Parms
	{
		USceneComponent* AttachToComponent;
		bool ComponentCreated;
		FName AttachPointName;
		UAkComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get an AkComponent attached to and following the specified component. \n\x09 * @param AttachToComponent - The parent component to search\n\x09 * @param ComponentCreated - True if a new component was created\n\x09 * @param AttachPointName - Optional named point within the AttachComponent to play the sound at.\n\x09 */" },
#endif
		{ "CPP_Default_AttachPointName", "None" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an AkComponent attached to and following the specified component.\n@param AttachToComponent - The parent component to search\n@param ComponentCreated - True if a new component was created\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOrCreateAkComponent constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
	static void NewProp_ComponentCreated_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventGetOrCreateAkComponent_Parms*)Obj)->ComponentCreated = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ComponentCreated;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOrCreateAkComponent constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOrCreateAkComponent Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetOrCreateAkComponent_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToComponent_MetaData), NewProp_AttachToComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ComponentCreated = { "ComponentCreated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventGetOrCreateAkComponent_Parms), &UHT_STATICS::NewProp_ComponentCreated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetOrCreateAkComponent_Parms, AttachPointName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetOrCreateAkComponent_Parms, ReturnValue), Z_Construct_UClass_UAkComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AttachToComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ComponentCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AttachPointName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOrCreateAkComponent Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetOrCreateAkComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventGetOrCreateAkComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventGetOrCreateAkComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetOrCreateAkComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execGetOrCreateAkComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
	P_GET_UBOOL_REF(Z_Param_Out_ComponentCreated);
	P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkComponent**)Z_Param__Result=UAkGameplayStatics::GetOrCreateAkComponent(Z_Param_AttachToComponent,Z_Param_Out_ComponentCreated,Z_Param_AttachPointName);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function GetOrCreateAkComponent *************************

// ********** Begin Class UAkGameplayStatics Function GetRTPCValue *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventGetRTPCValue_Parms
	{
		UAkRtpc* RTPCValue;
		int32 PlayingID;
		ERTPCValueType InputValueType;
		float Value;
		ERTPCValueType OutputValueType;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "7" },
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the value of a Game Parameter, optionally targeting the root component of a specified actor.\n\x09* @param RTPC - The name of the Game Parameter to set\n\x09* @param Value - The value of the Game Parameter\n\x09* @param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n\x09* @param Actor - (Optional) Actor on which to set the Game Parameter value\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the value of a Game Parameter, optionally targeting the root component of a specified actor.\n@param RTPC - The name of the Game Parameter to set\n@param Value - The value of the Game Parameter\n@param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n@param Actor - (Optional) Actor on which to set the Game Parameter value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRTPCValue constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputValueType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputValueType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRTPCValue constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRTPCValue Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTPCValue_MetaData), NewProp_RTPCValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InputValueType = { "InputValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, InputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(0, nullptr) }; // ad3019bd49c3d4a1111c727e6186247409b14e3e
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutputValueType = { "OutputValueType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, OutputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(0, nullptr) }; // ad3019bd49c3d4a1111c727e6186247409b14e3e
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RTPCValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutputValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutputValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRTPCValue Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetRTPCValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventGetRTPCValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventGetRTPCValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execGetRTPCValue)
{
	P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayingID);
	P_GET_ENUM(ERTPCValueType,Z_Param_InputValueType);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_GET_ENUM_REF(ERTPCValueType,Z_Param_Out_OutputValueType);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::GetRTPCValue(Z_Param_RTPCValue,Z_Param_PlayingID,ERTPCValueType(Z_Param_InputValueType),Z_Param_Out_Value,(ERTPCValueType&)(Z_Param_Out_OutputValueType),Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function GetRTPCValue ***********************************

// ********** Begin Class UAkGameplayStatics Function GetSpeakerAngles *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventGetSpeakerAngles_Parms
	{
		TArray<float> SpeakerAngles;
		float HeightAngle;
		FString DeviceShareSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets speaker angles of the specified device. Speaker angles are used for 3D positioning of sounds over standard configurations.\n\x09 * Note that the current version of Wwise only supports positioning on the plane.\n\x09 * The speaker angles are expressed as an array of loudspeaker pairs, in degrees, relative to azimuth ]0,180].\n\x09 * Supported loudspeaker setups are always symmetric; the center speaker is always in the middle and thus not specified by angles.\n\x09 * Angles must be set in ascending order.\n\x09 *\n\x09 * @param SpeakerAngles Returned array of loudspeaker pair angles, in degrees relative to azimuth [0,180].\n\x09 * @param HeightAngle Elevation of the height layer, in degrees relative to the plane [-90,90].\n\x09 * @param DeviceShareSet ShareSet for which to get the angles.\n\x09 *\n\x09 */" },
#endif
		{ "CPP_Default_DeviceShareSet", "" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets speaker angles of the specified device. Speaker angles are used for 3D positioning of sounds over standard configurations.\nNote that the current version of Wwise only supports positioning on the plane.\nThe speaker angles are expressed as an array of loudspeaker pairs, in degrees, relative to azimuth ]0,180].\nSupported loudspeaker setups are always symmetric; the center speaker is always in the middle and thus not specified by angles.\nAngles must be set in ascending order.\n\n@param SpeakerAngles Returned array of loudspeaker pair angles, in degrees relative to azimuth [0,180].\n@param HeightAngle Elevation of the height layer, in degrees relative to the plane [-90,90].\n@param DeviceShareSet ShareSet for which to get the angles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSpeakerAngles constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeakerAngles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeakerAngles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightAngle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceShareSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSpeakerAngles constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSpeakerAngles Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SpeakerAngles_Inner = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SpeakerAngles = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetSpeakerAngles_Parms, SpeakerAngles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HeightAngle = { "HeightAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetSpeakerAngles_Parms, HeightAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DeviceShareSet = { "DeviceShareSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetSpeakerAngles_Parms, DeviceShareSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceShareSet_MetaData), NewProp_DeviceShareSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeakerAngles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeakerAngles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceShareSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSpeakerAngles Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetSpeakerAngles", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventGetSpeakerAngles_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventGetSpeakerAngles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execGetSpeakerAngles)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_SpeakerAngles);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HeightAngle);
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceShareSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::GetSpeakerAngles(Z_Param_Out_SpeakerAngles,Z_Param_Out_HeightAngle,Z_Param_DeviceShareSet);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function GetSpeakerAngles *******************************

// ********** Begin Class UAkGameplayStatics Function IsEditor *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventIsEditor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsEditor constinit property declarations ******************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventIsEditor_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsEditor constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsEditor Property Definitions *****************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventIsEditor_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsEditor Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "IsEditor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventIsEditor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventIsEditor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_IsEditor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execIsEditor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAkGameplayStatics::IsEditor();
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function IsEditor ***************************************

// ********** Begin Class UAkGameplayStatics Function IsGame ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventIsGame_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsGame constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventIsGame_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsGame constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsGame Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventIsGame_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventIsGame_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsGame Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "IsGame", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventIsGame_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventIsGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_IsGame(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execIsGame)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAkGameplayStatics::IsGame(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function IsGame *****************************************

// ********** Begin Class UAkGameplayStatics Function LoadInitBank *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|SoundBanks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Loads the Init SoundBank\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads the Init SoundBank" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function LoadInitBank constinit property declarations **************************
// ********** End Function LoadInitBank constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "LoadInitBank", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execLoadInitBank)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::LoadInitBank();
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function LoadInitBank ***********************************

// ********** Begin Class UAkGameplayStatics Function PostAndWaitForEndOfEvent *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms
	{
		UAkAudioEvent* AkEvent;
		AActor* Actor;
		FLatentActionInfo LatentInfo;
		bool bStopWhenAttachedToDestroyed;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts a Wwise Event attached to and following the root component of the specified actor, and waits for the end of the event to continue execution.\n\x09 * Additional calls made while an event is active are ignored.\n\x09 *\n\x09 * @param AkEvent - Event to play.\n\x09 * @param Actor - actor on which to play the event.\n\x09 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09 */" },
#endif
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "true" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts a Wwise Event attached to and following the root component of the specified actor, and waits for the end of the event to continue execution.\nAdditional calls made while an event is active are ignored.\n\n@param AkEvent - Event to play.\n@param Actor - actor on which to play the event.\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PostAndWaitForEndOfEvent constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAndWaitForEndOfEvent constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAndWaitForEndOfEvent Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 11bb40500dfc265650dc0f3ec8dbccc2dd509217
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms), &UHT_STATICS::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStopWhenAttachedToDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostAndWaitForEndOfEvent Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostAndWaitForEndOfEvent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execPostAndWaitForEndOfEvent)
{
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAkGameplayStatics::PostAndWaitForEndOfEvent(Z_Param_AkEvent,Z_Param_Actor,Z_Param_LatentInfo,Z_Param_bStopWhenAttachedToDestroyed);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function PostAndWaitForEndOfEvent ***********************

// ********** Begin Class UAkGameplayStatics Function PostEvent ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventPostEvent_Parms
	{
		UAkAudioEvent* AkEvent;
		AActor* Actor;
		int32 CallbackMask;
		FScriptDelegate PostEventCallback;
		bool bStopWhenAttachedToDestroyed;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "PostEventCallback" },
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Posts a Wwise Event attached to and following the root component of the specified actor.\n\x09 *\n\x09 * @param AkEvent - Event to play.\n\x09 * @param Actor - Actor on which to play the event. If the Actor is left empty, the Event will be played as an Ambient sound.\n\x09 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09 */" },
#endif
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts a Wwise Event attached to and following the root component of the specified actor.\n\n@param AkEvent - Event to play.\n@param Actor - Actor on which to play the event. If the Actor is left empty, the Event will be played as an Ambient sound.\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed." },
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

// ********** Begin Function PostEvent constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
	static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventPostEvent_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostEvent constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostEvent Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostEventCallback_MetaData), NewProp_PostEventCallback_MetaData) }; // a64ff1f73967efbf5fd0efa1604b53d62ab0c3cb
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventPostEvent_Parms), &UHT_STATICS::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PostEventCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStopWhenAttachedToDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostEvent Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEvent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventPostEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventPostEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEvent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execPostEvent)
{
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
	P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAkGameplayStatics::PostEvent(Z_Param_AkEvent,Z_Param_Actor,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_bStopWhenAttachedToDestroyed);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function PostEvent **************************************

// ********** Begin Class UAkGameplayStatics Function PostEventAtLocation **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventPostEventAtLocation_Parms
	{
		UAkAudioEvent* AkEvent;
		FVector Location;
		FRotator Orientation;
		UObject* WorldContextObject;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Posts a Wwise Event at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n\x09 *\n\x09 * @param AkEvent - Wwise Event to post.\n\x09 * @param Location - Location from which to post the Wwise Event.\n\x09 * @param Orientation - Orientation of the event\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts a Wwise Event at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n\n@param AkEvent - Wwise Event to post.\n@param Location - Location from which to post the Wwise Event.\n@param Orientation - Orientation of the event" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostEventAtLocation constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostEventAtLocation constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostEventAtLocation Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostEventAtLocation Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEventAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventPostEventAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventPostEventAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execPostEventAtLocation)
{
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Orientation);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAkGameplayStatics::PostEventAtLocation(Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function PostEventAtLocation ****************************

// ********** Begin Class UAkGameplayStatics Function PostEventOutdoors ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_PostEventOutdoors_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventPostEventOutdoors_Parms
	{
		UAkAudioEvent* AkEvent;
		int32 CallbackMask;
		FScriptDelegate PostEventCallback;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "PostEventCallback" },
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Posts an Event on the Outdoors Room.\n\x09 *\n\x09 * @param AkEvent - Event to play.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts an Event on the Outdoors Room.\n\n@param AkEvent - Event to play." },
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

// ********** Begin Function PostEventOutdoors constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostEventOutdoors constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostEventOutdoors Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventOutdoors_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventOutdoors_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackMask_MetaData), NewProp_CallbackMask_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventOutdoors_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostEventCallback_MetaData), NewProp_PostEventCallback_MetaData) }; // a64ff1f73967efbf5fd0efa1604b53d62ab0c3cb
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventOutdoors_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PostEventCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostEventOutdoors Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEventOutdoors", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventPostEventOutdoors_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventPostEventOutdoors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventOutdoors(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execPostEventOutdoors)
{
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAkGameplayStatics::PostEventOutdoors(Z_Param_AkEvent,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback));
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function PostEventOutdoors ******************************

// ********** Begin Class UAkGameplayStatics Function PostTrigger **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventPostTrigger_Parms
	{
		UAkTrigger* TriggerValue;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts a Trigger, targeting the root component of a specified actor.\n\x09 * @param Trigger - Name of the Trigger\n\x09 * @param Actor - Actor on which to post the Trigger\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts a Trigger, targeting the root component of a specified actor.\n@param Trigger - Name of the Trigger\n@param Actor - Actor on which to post the Trigger" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostTrigger constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostTrigger constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostTrigger Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TriggerValue = { "TriggerValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostTrigger_Parms, TriggerValue), Z_Construct_UClass_UAkTrigger, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerValue_MetaData), NewProp_TriggerValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostTrigger_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TriggerValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostTrigger Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostTrigger", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventPostTrigger_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventPostTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostTrigger(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execPostTrigger)
{
	P_GET_OBJECT(UAkTrigger,Z_Param_TriggerValue);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::PostTrigger(Z_Param_TriggerValue,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function PostTrigger ************************************

// ********** Begin Class UAkGameplayStatics Function RemoveOutput *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventRemoveOutput_Parms
	{
		FAkOutputDeviceID in_OutputDeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Removes one output added through AK::SoundEngine::AddOutput If a listener was associated with the device, you should consider unregistering the listener prior to call RemoveOutput so that Game Object/Listener routing is properly updated according to your game scenario.\n\x09*\n\x09* @param in_OutputDeviceId ID of the output to remove. Use the returned ID from AddOutput, GetOutputID, or ReplaceOutput.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes one output added through AK::SoundEngine::AddOutput If a listener was associated with the device, you should consider unregistering the listener prior to call RemoveOutput so that Game Object/Listener routing is properly updated according to your game scenario.\n\n@param in_OutputDeviceId ID of the output to remove. Use the returned ID from AddOutput, GetOutputID, or ReplaceOutput." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveOutput constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_in_OutputDeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveOutput constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveOutput Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_in_OutputDeviceId = { "in_OutputDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventRemoveOutput_Parms, in_OutputDeviceId), Z_Construct_UScriptStruct_FAkOutputDeviceID, METADATA_PARAMS(0, nullptr) }; // 365e20fe238e67831e413d81ebf809f304338b1f
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_in_OutputDeviceId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveOutput Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "RemoveOutput", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventRemoveOutput_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventRemoveOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execRemoveOutput)
{
	P_GET_STRUCT(FAkOutputDeviceID,Z_Param_in_OutputDeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::RemoveOutput(Z_Param_in_OutputDeviceId);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function RemoveOutput ***********************************

// ********** Begin Class UAkGameplayStatics Function ReplaceMainOutput ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventReplaceMainOutput_Parms
	{
		FAkOutputSettings MainOutputSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Replaces the main output device previously created during engine initialization with a new output device.\n\x09 * In addition to simply removing one output device and adding a new one, the new output device will also be used on all of the master busses\n\x09 * that the old output device was associated with, and preserve all listeners that were attached to the old output device.\n\x09 *\n\x09 * @param MainOutputSettings\x09""Creation parameters for this output\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replaces the main output device previously created during engine initialization with a new output device.\nIn addition to simply removing one output device and adding a new one, the new output device will also be used on all of the master busses\nthat the old output device was associated with, and preserve all listeners that were attached to the old output device.\n\n@param MainOutputSettings    Creation parameters for this output" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainOutputSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReplaceMainOutput constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_MainOutputSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReplaceMainOutput constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReplaceMainOutput Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MainOutputSettings = { "MainOutputSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventReplaceMainOutput_Parms, MainOutputSettings), Z_Construct_UScriptStruct_FAkOutputSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainOutputSettings_MetaData), NewProp_MainOutputSettings_MetaData) }; // cadd5d704f28e46311b8a0c9a94a0652d7d1654d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MainOutputSettings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ReplaceMainOutput Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "ReplaceMainOutput", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventReplaceMainOutput_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventReplaceMainOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execReplaceMainOutput)
{
	P_GET_STRUCT_REF(FAkOutputSettings,Z_Param_Out_MainOutputSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::ReplaceMainOutput(Z_Param_Out_MainOutputSettings);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function ReplaceMainOutput ******************************

// ********** Begin Class UAkGameplayStatics Function ResetOutdoorsRoomParams **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_ResetOutdoorsRoomParams_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets the Outdoors Room parameters to their default values.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the Outdoors Room parameters to their default values." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResetOutdoorsRoomParams constinit property declarations ***************
// ********** End Function ResetOutdoorsRoomParams constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "ResetOutdoorsRoomParams", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkGameplayStatics_ResetOutdoorsRoomParams(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execResetOutdoorsRoomParams)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::ResetOutdoorsRoomParams();
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function ResetOutdoorsRoomParams ************************

// ********** Begin Class UAkGameplayStatics Function ResetRTPCValue *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventResetRTPCValue_Parms
	{
		UAkRtpc* RTPCValue;
		int32 InterpolationTimeMs;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "8" },
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Resets the value of a Game Parameter to its default value, optionally targeting the root component of a specified actor.\n\x09* @param RTPCValue - The name of the Game Parameter to reset\n\x09* @param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards its default value (in ms)\n\x09* @param Actor - (Optional) Actor on which to reset the Game Parameter value\n\x09* @param RTPC - The name of the Game Parameter to reset\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the value of a Game Parameter to its default value, optionally targeting the root component of a specified actor.\n@param RTPCValue - The name of the Game Parameter to reset\n@param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards its default value (in ms)\n@param Actor - (Optional) Actor on which to reset the Game Parameter value\n@param RTPC - The name of the Game Parameter to reset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetRTPCValue constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResetRTPCValue constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResetRTPCValue Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventResetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTPCValue_MetaData), NewProp_RTPCValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InterpolationTimeMs = { "InterpolationTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventResetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventResetRTPCValue_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RTPCValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InterpolationTimeMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ResetRTPCValue Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "ResetRTPCValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventResetRTPCValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventResetRTPCValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execResetRTPCValue)
{
	P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_InterpolationTimeMs);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::ResetRTPCValue(Z_Param_RTPCValue,Z_Param_InterpolationTimeMs,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function ResetRTPCValue *********************************

// ********** Begin Class UAkGameplayStatics Function SetActorMixerEffect **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetActorMixerEffect_Parms
	{
		FAkUniqueID InAudioNodeID;
		int32 InEffectIndex;
		const UAkEffectShareSet* InEffectShareSet;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets an Effect ShareSet at the specified audio node and Effect slot index.\n\x09*\n\x09* @param InAudioNodeID Can be a member of the Actor-Mixer or Interactive Music Hierarchy (not a bus).\n\x09* @param InEffectIndex Effect slot index (0-3)\n\x09* @param InEffectShareSet Effect ShareSet asset\n\x09* @return Always returns True.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an Effect ShareSet at the specified audio node and Effect slot index.\n\n@param InAudioNodeID Can be a member of the Actor-Mixer or Interactive Music Hierarchy (not a bus).\n@param InEffectIndex Effect slot index (0-3)\n@param InEffectShareSet Effect ShareSet asset\n@return Always returns True." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAudioNodeID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetActorMixerEffect constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAudioNodeID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetActorMixerEffect_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetActorMixerEffect constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetActorMixerEffect Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InAudioNodeID = { "InAudioNodeID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetActorMixerEffect_Parms, InAudioNodeID), Z_Construct_UScriptStruct_FAkUniqueID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAudioNodeID_MetaData), NewProp_InAudioNodeID_MetaData) }; // 8166b25a889aa61e66d22d2a13cea61039e305d6
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetActorMixerEffect_Parms, InEffectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffectIndex_MetaData), NewProp_InEffectIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetActorMixerEffect_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffectShareSet_MetaData), NewProp_InEffectShareSet_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetActorMixerEffect_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InAudioNodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffectIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffectShareSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetActorMixerEffect Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetActorMixerEffect", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetActorMixerEffect_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetActorMixerEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetActorMixerEffect)
{
	P_GET_STRUCT(FAkUniqueID,Z_Param_InAudioNodeID);
	P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
	P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAkGameplayStatics::SetActorMixerEffect(Z_Param_InAudioNodeID,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetActorMixerEffect ****************************

// ********** Begin Class UAkGameplayStatics Function SetAuxBusEffect ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetAuxBusEffect_Parms
	{
		const UAkAuxBus* InAuxBus;
		int32 InEffectIndex;
		const UAkEffectShareSet* InEffectShareSet;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets an Effect ShareSet at the specified Bus and Effect slot index.\n\x09* \n\x09*  @param InAuxBus Aux Bus Asset.\n\x09*  @param InEffectIndex Effect slot index (0-3)\n\x09*  @param InEffectShareSet  Effect ShareSet asset\n\x09*  @return True when successfully posted, False otherwise.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an Effect ShareSet at the specified Bus and Effect slot index.\n\n@param InAuxBus Aux Bus Asset.\n@param InEffectIndex Effect slot index (0-3)\n@param InEffectShareSet  Effect ShareSet asset\n@return True when successfully posted, False otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAuxBus_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAuxBusEffect constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAuxBus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetAuxBusEffect_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAuxBusEffect constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAuxBusEffect Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InAuxBus = { "InAuxBus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetAuxBusEffect_Parms, InAuxBus), Z_Construct_UClass_UAkAuxBus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAuxBus_MetaData), NewProp_InAuxBus_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetAuxBusEffect_Parms, InEffectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffectIndex_MetaData), NewProp_InEffectIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetAuxBusEffect_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffectShareSet_MetaData), NewProp_InEffectShareSet_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetAuxBusEffect_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InAuxBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffectIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffectShareSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAuxBusEffect Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetAuxBusEffect", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetAuxBusEffect_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetAuxBusEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetAuxBusEffect)
{
	P_GET_OBJECT(UAkAuxBus,Z_Param_InAuxBus);
	P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
	P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAkGameplayStatics::SetAuxBusEffect(Z_Param_InAuxBus,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetAuxBusEffect ********************************

// ********** Begin Class UAkGameplayStatics Function SetBusConfig *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetBusConfig_Parms
	{
		FString BusName;
		AkChannelConfiguration ChannelConfiguration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Force channel configuration for the specified bus.\n\x09* This function has unspecified behavior when changing the configuration of a bus that\n\x09* is currently playing.\n\x09* You cannot change the configuration of the master bus.\n\x09*\n\x09* @param BusName\x09\x09\x09\x09""Bus Name\n\x09* @param ChannelConfiguration\x09""Desired channel configuration.\n\x09* @return Always returns AK_Success\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force channel configuration for the specified bus.\nThis function has unspecified behavior when changing the configuration of a bus that\nis currently playing.\nYou cannot change the configuration of the master bus.\n\n@param BusName                                Bus Name\n@param ChannelConfiguration   Desired channel configuration.\n@return Always returns AK_Success" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBusConfig constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_BusName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelConfiguration_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelConfiguration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBusConfig constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBusConfig Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusConfig_Parms, BusName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BusName_MetaData), NewProp_BusName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ChannelConfiguration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ChannelConfiguration = { "ChannelConfiguration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusConfig_Parms, ChannelConfiguration), Z_Construct_UEnum_AkAudio_AkChannelConfiguration, METADATA_PARAMS(0, nullptr) }; // d371a70396260dc6799b413ab2087893f74ea43e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BusName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChannelConfiguration_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChannelConfiguration,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBusConfig Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetBusConfig", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetBusConfig_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetBusConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetBusConfig)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BusName);
	P_GET_ENUM(AkChannelConfiguration,Z_Param_ChannelConfiguration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetBusConfig(Z_Param_BusName,AkChannelConfiguration(Z_Param_ChannelConfiguration));
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetBusConfig ***********************************

// ********** Begin Class UAkGameplayStatics Function SetBusEffectByID *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetBusEffectByID_Parms
	{
		FAkUniqueID InBusID;
		int32 InEffectIndex;
		const UAkEffectShareSet* InEffectShareSet;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets an Effect ShareSet at the specified Bus and Effect slot index.\n\x09* \n\x09*  @param InBusID Bus Short ID.\n\x09*  @param InEffectIndex Effect slot index (0-3)\n\x09*  @param InEffectShareSet  Effect ShareSet asset\n\x09*  @return True when successfully posted, False otherwise.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an Effect ShareSet at the specified Bus and Effect slot index.\n\n@param InBusID Bus Short ID.\n@param InEffectIndex Effect slot index (0-3)\n@param InEffectShareSet  Effect ShareSet asset\n@return True when successfully posted, False otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBusID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBusEffectByID constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBusID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetBusEffectByID_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBusEffectByID constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBusEffectByID Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InBusID = { "InBusID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByID_Parms, InBusID), Z_Construct_UScriptStruct_FAkUniqueID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBusID_MetaData), NewProp_InBusID_MetaData) }; // 8166b25a889aa61e66d22d2a13cea61039e305d6
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByID_Parms, InEffectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffectIndex_MetaData), NewProp_InEffectIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByID_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffectShareSet_MetaData), NewProp_InEffectShareSet_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetBusEffectByID_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InBusID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffectIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffectShareSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBusEffectByID Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetBusEffectByID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetBusEffectByID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetBusEffectByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetBusEffectByID)
{
	P_GET_STRUCT(FAkUniqueID,Z_Param_InBusID);
	P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
	P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAkGameplayStatics::SetBusEffectByID(Z_Param_InBusID,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetBusEffectByID *******************************

// ********** Begin Class UAkGameplayStatics Function SetBusEffectByName ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetBusEffectByName_Parms
	{
		FString InBusName;
		int32 InEffectIndex;
		const UAkEffectShareSet* InEffectShareSet;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets an Effect ShareSet at the specified Bus and Effect slot index.\x09\n\x09*\n\x09*  @param InBusName Bus name\n\x09*  @param InEffectIndex Effect slot index (0-3)\n\x09*  @param InEffectShareSet  Effect ShareSet asset\n\x09*  @return True when successfully posted,  False otherwise.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an Effect ShareSet at the specified Bus and Effect slot index.\n\n@param InBusName Bus name\n@param InEffectIndex Effect slot index (0-3)\n@param InEffectShareSet  Effect ShareSet asset\n@return True when successfully posted,  False otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBusEffectByName constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InBusName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetBusEffectByName_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBusEffectByName constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBusEffectByName Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InBusName = { "InBusName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByName_Parms, InBusName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBusName_MetaData), NewProp_InBusName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByName_Parms, InEffectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffectIndex_MetaData), NewProp_InEffectIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByName_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffectShareSet_MetaData), NewProp_InEffectShareSet_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetBusEffectByName_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InBusName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffectIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffectShareSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBusEffectByName Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetBusEffectByName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetBusEffectByName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetBusEffectByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetBusEffectByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InBusName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
	P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAkGameplayStatics::SetBusEffectByName(Z_Param_InBusName,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetBusEffectByName *****************************

// ********** Begin Class UAkGameplayStatics Function SetCurrentAudioCulture ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetCurrentAudioCulture_Parms
	{
		FString AudioCulture;
		FLatentActionInfo LatentInfo;
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Culture" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioCulture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCurrentAudioCulture constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AudioCulture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCurrentAudioCulture constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCurrentAudioCulture Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AudioCulture = { "AudioCulture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCulture_Parms, AudioCulture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioCulture_MetaData), NewProp_AudioCulture_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCulture_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 11bb40500dfc265650dc0f3ec8dbccc2dd509217
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCulture_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioCulture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetCurrentAudioCulture Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetCurrentAudioCulture", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetCurrentAudioCulture_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetCurrentAudioCulture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetCurrentAudioCulture)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AudioCulture);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetCurrentAudioCulture(Z_Param_AudioCulture,Z_Param_LatentInfo,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetCurrentAudioCulture *************************

// ********** Begin Class UAkGameplayStatics Function SetCurrentAudioCultureAsync ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms
	{
		FString AudioCulture;
		FScriptDelegate Completed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Culture" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioCulture_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCurrentAudioCultureAsync constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_AudioCulture;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCurrentAudioCultureAsync constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCurrentAudioCultureAsync Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AudioCulture = { "AudioCulture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms, AudioCulture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioCulture_MetaData), NewProp_AudioCulture_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms, Completed), Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 63b9329d346bcd6f2907061cec2cd021786eaf6d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioCulture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Completed,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetCurrentAudioCultureAsync Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetCurrentAudioCultureAsync", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetCurrentAudioCultureAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AudioCulture);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Completed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetCurrentAudioCultureAsync(Z_Param_AudioCulture,FOnSetCurrentAudioCultureCallback(Z_Param_Out_Completed));
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetCurrentAudioCultureAsync ********************

// ********** Begin Class UAkGameplayStatics Function SetDiffractionOrder **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetDiffractionOrder_Parms
	{
		int32 InDiffractionOrder;
		bool bInUpdatePaths;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the diffraction order for geometric path calculation. The diffraction order indicates the number of edges a sound can diffract around.\n\x09* A high diffraction order accommodates more complex geometry at the expense of higher CPU usage. Set to 0 to disable diffraction on all geometry.\n\x09* Diffraction must be enabled on the geometry to find diffraction paths.\n\x09* This parameter limits the recursion depth of diffraction rays cast from the listener to scan the environment and also the depth of the diffraction search to find paths between emitter and listener.\n\x09* To optimize CPU usage, set it to the maximum number of edges you expect the obstructing geometry to traverse.\n\x09*\n\x09* @param InDiffractionOrder - Number of diffraction edges to consider in path calculations. Valid range [0,8].\n\x09* @param bInUpdatePaths - Set to true to clear existing diffraction paths and to force the re-computation of new paths. If false, existing paths will remain and new paths will be computed when the emitter or listener moves.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the diffraction order for geometric path calculation. The diffraction order indicates the number of edges a sound can diffract around.\nA high diffraction order accommodates more complex geometry at the expense of higher CPU usage. Set to 0 to disable diffraction on all geometry.\nDiffraction must be enabled on the geometry to find diffraction paths.\nThis parameter limits the recursion depth of diffraction rays cast from the listener to scan the environment and also the depth of the diffraction search to find paths between emitter and listener.\nTo optimize CPU usage, set it to the maximum number of edges you expect the obstructing geometry to traverse.\n\n@param InDiffractionOrder - Number of diffraction edges to consider in path calculations. Valid range [0,8].\n@param bInUpdatePaths - Set to true to clear existing diffraction paths and to force the re-computation of new paths. If false, existing paths will remain and new paths will be computed when the emitter or listener moves." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetDiffractionOrder constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InDiffractionOrder;
	static void NewProp_bInUpdatePaths_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetDiffractionOrder_Parms*)Obj)->bInUpdatePaths = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUpdatePaths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDiffractionOrder constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDiffractionOrder Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InDiffractionOrder = { "InDiffractionOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetDiffractionOrder_Parms, InDiffractionOrder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInUpdatePaths = { "bInUpdatePaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetDiffractionOrder_Parms), &UHT_STATICS::NewProp_bInUpdatePaths_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InDiffractionOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInUpdatePaths,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDiffractionOrder Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetDiffractionOrder", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetDiffractionOrder_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetDiffractionOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetDiffractionOrder)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InDiffractionOrder);
	P_GET_UBOOL(Z_Param_bInUpdatePaths);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetDiffractionOrder(Z_Param_InDiffractionOrder,Z_Param_bInUpdatePaths);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetDiffractionOrder ****************************

// ********** Begin Class UAkGameplayStatics Function SetDistanceProbe *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetDistanceProbe_Parms
	{
		AActor* Listener;
		AActor* DistanceProbe;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Use the position of a separate Actor for distance calculations for a specified listener.\n\x09 * When called, Wwise calculates distance attenuation and filtering\n\x09 * based on the distance between the AkComponent on the distance probe Actor and the sound source.\n\x09 * Useful for third-person perspective applications, the distance probe may be set to the player character's position,\n\x09 * and the listener position to that of the camera. In this scenario, attenuation is based on\n\x09 * the distance between the character and the sound, whereas panning, spatialization, and spread and focus calculations are base on the camera.\n\x09 * @param Listener - The listener that is being affected. By default, the listener is attached to the Player Camera Manager.\n\x09 * @param DistanceProbe - An actor to assign as the distance probe. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the position of a separate Actor for distance calculations for a specified listener.\nWhen called, Wwise calculates distance attenuation and filtering\nbased on the distance between the AkComponent on the distance probe Actor and the sound source.\nUseful for third-person perspective applications, the distance probe may be set to the player character's position,\nand the listener position to that of the camera. In this scenario, attenuation is based on\nthe distance between the character and the sound, whereas panning, spatialization, and spread and focus calculations are base on the camera.\n@param Listener - The listener that is being affected. By default, the listener is attached to the Player Camera Manager.\n@param DistanceProbe - An actor to assign as the distance probe." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetDistanceProbe constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Listener;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceProbe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDistanceProbe constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDistanceProbe Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetDistanceProbe_Parms, Listener), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DistanceProbe = { "DistanceProbe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetDistanceProbe_Parms, DistanceProbe), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Listener,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceProbe,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDistanceProbe Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetDistanceProbe", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetDistanceProbe_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetDistanceProbe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetDistanceProbe)
{
	P_GET_OBJECT(AActor,Z_Param_Listener);
	P_GET_OBJECT(AActor,Z_Param_DistanceProbe);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetDistanceProbe(Z_Param_Listener,Z_Param_DistanceProbe);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetDistanceProbe *******************************

// ********** Begin Class UAkGameplayStatics Function SetGameObjectToPortalObstruction *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms
	{
		UAkComponent* GameObjectAkComponent;
		UAkPortalComponent* PortalComponent;
		float ObstructionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the obstruction value of sounds going from this game object through this portal.\n\x09*\n\x09* @param GameObjectAkComponent - The game object emitting the sound that we want to obstruct.\n\x09* @param PortalComponent - The portal through which the sound from the game object can go.\n\x09* @param ObstructionValue - The obstruction value. Can be 0 to 1.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the obstruction value of sounds going from this game object through this portal.\n\n@param GameObjectAkComponent - The game object emitting the sound that we want to obstruct.\n@param PortalComponent - The portal through which the sound from the game object can go.\n@param ObstructionValue - The obstruction value. Can be 0 to 1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGameObjectToPortalObstruction constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstructionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGameObjectToPortalObstruction constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGameObjectToPortalObstruction Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameObjectAkComponent_MetaData), NewProp_GameObjectAkComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PortalComponent = { "PortalComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms, PortalComponent), Z_Construct_UClass_UAkPortalComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalComponent_MetaData), NewProp_PortalComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ObstructionValue = { "ObstructionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms, ObstructionValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GameObjectAkComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PortalComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObstructionValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetGameObjectToPortalObstruction Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetGameObjectToPortalObstruction", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetGameObjectToPortalObstruction)
{
	P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
	P_GET_OBJECT(UAkPortalComponent,Z_Param_PortalComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ObstructionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetGameObjectToPortalObstruction(Z_Param_GameObjectAkComponent,Z_Param_PortalComponent,Z_Param_ObstructionValue);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetGameObjectToPortalObstruction ***************

// ********** Begin Class UAkGameplayStatics Function SetLoadBalancingSpread ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetLoadBalancingSpread_Parms
	{
		int32 InNbFrames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The computation of spatial audio paths is spread on LoadBalancingSpread frames.\n\x09* Spreading the computation of paths over several frames can prevent CPU peaks.\n\x09* The spread introduces a delay in path computation. A value of 1 indicates no spread at all.\n\x09*\n\x09* @param InNbFrames - Number of spread frames. Value between [1..[\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The computation of spatial audio paths is spread on LoadBalancingSpread frames.\nSpreading the computation of paths over several frames can prevent CPU peaks.\nThe spread introduces a delay in path computation. A value of 1 indicates no spread at all.\n\n@param InNbFrames - Number of spread frames. Value between [1..[" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetLoadBalancingSpread constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNbFrames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLoadBalancingSpread constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLoadBalancingSpread Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InNbFrames = { "InNbFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetLoadBalancingSpread_Parms, InNbFrames), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNbFrames,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetLoadBalancingSpread Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetLoadBalancingSpread", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetLoadBalancingSpread_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetLoadBalancingSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetLoadBalancingSpread)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InNbFrames);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetLoadBalancingSpread(Z_Param_InNbFrames);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetLoadBalancingSpread *************************

// ********** Begin Class UAkGameplayStatics Function SetMaxDiffractionPaths ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetMaxDiffractionPaths_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetMaxDiffractionPaths_Parms
	{
		int32 InMaxDiffractionPaths;
		UAkGameObject* InGameObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the maximum number of computed diffraction paths per UAkGameObject.\n\x09*\n\x09* @param InMaxDiffractionPaths - The maximum number of computed diffraction paths. Valid range [0-32].\n\x09* @param InGameObject - UAkGameObject to apply the maximum value to, or pass nullptr to apply to all UAkGameObject (that have not previously been passed to SetMaxDiffractionPaths).\n\x09*/" },
#endif
		{ "CPP_Default_InGameObject", "None" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the maximum number of computed diffraction paths per UAkGameObject.\n\n@param InMaxDiffractionPaths - The maximum number of computed diffraction paths. Valid range [0-32].\n@param InGameObject - UAkGameObject to apply the maximum value to, or pass nullptr to apply to all UAkGameObject (that have not previously been passed to SetMaxDiffractionPaths)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGameObject_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMaxDiffractionPaths constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMaxDiffractionPaths;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMaxDiffractionPaths constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMaxDiffractionPaths Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InMaxDiffractionPaths = { "InMaxDiffractionPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMaxDiffractionPaths_Parms, InMaxDiffractionPaths), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InGameObject = { "InGameObject", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMaxDiffractionPaths_Parms, InGameObject), Z_Construct_UClass_UAkGameObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGameObject_MetaData), NewProp_InGameObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMaxDiffractionPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InGameObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetMaxDiffractionPaths Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMaxDiffractionPaths", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetMaxDiffractionPaths_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetMaxDiffractionPaths_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMaxDiffractionPaths(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetMaxDiffractionPaths)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InMaxDiffractionPaths);
	P_GET_OBJECT(UAkGameObject,Z_Param_InGameObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetMaxDiffractionPaths(Z_Param_InMaxDiffractionPaths,Z_Param_InGameObject);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetMaxDiffractionPaths *************************

// ********** Begin Class UAkGameplayStatics Function SetMaxEmitterRoomAuxSends ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetMaxEmitterRoomAuxSends_Parms
	{
		int32 InMaxEmitterRoomAuxSends;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the maximum number of game-defined auxiliary sends that can originate from a single emitter.\n\x09* An emitter can send to its own room and to all adjacent rooms if the emitter and listener are in the same room.\n\x09* If a limit is set, the most prominent sends are kept, based on spread to the adjacent portal from the emitter's perspective.\n\x09* Set to 1 to only allow emitters to send directly to their current room, and to the room a listener is transitioning to if inside a portal. Set to 0 to disable the limit.\n\x09*\n\x09* @param InMaxEmitterRoomAuxSends - The maximum number of room aux send connections. Valid range [0, [.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the maximum number of game-defined auxiliary sends that can originate from a single emitter.\nAn emitter can send to its own room and to all adjacent rooms if the emitter and listener are in the same room.\nIf a limit is set, the most prominent sends are kept, based on spread to the adjacent portal from the emitter's perspective.\nSet to 1 to only allow emitters to send directly to their current room, and to the room a listener is transitioning to if inside a portal. Set to 0 to disable the limit.\n\n@param InMaxEmitterRoomAuxSends - The maximum number of room aux send connections. Valid range [0, [." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetMaxEmitterRoomAuxSends constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMaxEmitterRoomAuxSends;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMaxEmitterRoomAuxSends constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMaxEmitterRoomAuxSends Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InMaxEmitterRoomAuxSends = { "InMaxEmitterRoomAuxSends", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMaxEmitterRoomAuxSends_Parms, InMaxEmitterRoomAuxSends), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMaxEmitterRoomAuxSends,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetMaxEmitterRoomAuxSends Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMaxEmitterRoomAuxSends", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetMaxEmitterRoomAuxSends_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetMaxEmitterRoomAuxSends_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetMaxEmitterRoomAuxSends)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InMaxEmitterRoomAuxSends);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetMaxEmitterRoomAuxSends(Z_Param_InMaxEmitterRoomAuxSends);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetMaxEmitterRoomAuxSends **********************

// ********** Begin Class UAkGameplayStatics Function SetMaxGlobalReflectionPaths ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetMaxGlobalReflectionPaths_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetMaxGlobalReflectionPaths_Parms
	{
		int32 InMaxReflectionPaths;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the maximum number of validated reflection paths.\n\x09*\n\x09* @param InMaxReflectionPaths - The maximum number of validated reflection paths.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the maximum number of validated reflection paths.\n\n@param InMaxReflectionPaths - The maximum number of validated reflection paths." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetMaxGlobalReflectionPaths constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMaxReflectionPaths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMaxGlobalReflectionPaths constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMaxGlobalReflectionPaths Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InMaxReflectionPaths = { "InMaxReflectionPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMaxGlobalReflectionPaths_Parms, InMaxReflectionPaths), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMaxReflectionPaths,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetMaxGlobalReflectionPaths Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMaxGlobalReflectionPaths", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetMaxGlobalReflectionPaths_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetMaxGlobalReflectionPaths_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMaxGlobalReflectionPaths(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetMaxGlobalReflectionPaths)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InMaxReflectionPaths);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetMaxGlobalReflectionPaths(Z_Param_InMaxReflectionPaths);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetMaxGlobalReflectionPaths ********************

// ********** Begin Class UAkGameplayStatics Function SetMultipleChannelEmitterPositions ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms
	{
		UAkComponent* GameObjectAkComponent;
		TArray<AkChannelConfiguration> ChannelMasks;
		TArray<FTransform> Positions;
		AkMultiPositionType MultiPositionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets multiple positions to a single game object, with flexible assignment of input channels.\n    *  Setting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\n    *  This can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\n    *  Note: Calling AK::SoundEngine::SetMultiplePositions() with only one position is the same as calling AK::SoundEngine::SetPosition()\n    *  @param GameObjectAkComponent AkComponent of the game object on which to set positions.\n    *  @param ChannelMasks Array of channel configuration to apply for each position.\n    *  @param Positions Array of transforms to apply.\n    *  @param MultiPositionType Position type\n    *  @return AK_Success when successful, AK_InvalidParameter if parameters are not valid.\n    */" },
#endif
		{ "CPP_Default_MultiPositionType", "MultiDirections" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets multiple positions to a single game object, with flexible assignment of input channels.\nSetting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\nThis can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\nNote: Calling AK::SoundEngine::SetMultiplePositions() with only one position is the same as calling AK::SoundEngine::SetPosition()\n@param GameObjectAkComponent AkComponent of the game object on which to set positions.\n@param ChannelMasks Array of channel configuration to apply for each position.\n@param Positions Array of transforms to apply.\n@param MultiPositionType Position type\n@return AK_Success when successful, AK_InvalidParameter if parameters are not valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMultipleChannelEmitterPositions constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelMasks_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelMasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelMasks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MultiPositionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiPositionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMultipleChannelEmitterPositions constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMultipleChannelEmitterPositions Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameObjectAkComponent_MetaData), NewProp_GameObjectAkComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ChannelMasks_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ChannelMasks_Inner = { "ChannelMasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AkAudio_AkChannelConfiguration, METADATA_PARAMS(0, nullptr) }; // d371a70396260dc6799b413ab2087893f74ea43e
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ChannelMasks = { "ChannelMasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, ChannelMasks), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // d371a70396260dc6799b413ab2087893f74ea43e
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, MultiPositionType), Z_Construct_UEnum_AkAudio_AkMultiPositionType, METADATA_PARAMS(0, nullptr) }; // cb42376ce8df8e5356b92ab91ea0c5d87b4fa579
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GameObjectAkComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChannelMasks_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChannelMasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChannelMasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MultiPositionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MultiPositionType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetMultipleChannelEmitterPositions Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMultipleChannelEmitterPositions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetMultipleChannelEmitterPositions)
{
	P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
	P_GET_TARRAY(AkChannelConfiguration,Z_Param_ChannelMasks);
	P_GET_TARRAY(FTransform,Z_Param_Positions);
	P_GET_ENUM(AkMultiPositionType,Z_Param_MultiPositionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetMultipleChannelEmitterPositions(Z_Param_GameObjectAkComponent,Z_Param_ChannelMasks,Z_Param_Positions,AkMultiPositionType(Z_Param_MultiPositionType));
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetMultipleChannelEmitterPositions *************

// ********** Begin Class UAkGameplayStatics Function SetMultipleChannelMaskEmitterPositions *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms
	{
		UAkComponent* GameObjectAkComponent;
		TArray<FAkChannelMask> ChannelMasks;
		TArray<FTransform> Positions;
		AkMultiPositionType MultiPositionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets multiple positions to a single game object, with flexible assignment of input channels.\n\x09*  Setting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\n\x09*  This can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\n\x09*  Note: Calling AK::SoundEngine::SetMultiplePositions() with only one position is the same as calling AK::SoundEngine::SetPosition()\n\x09*  @param GameObjectAkComponent AkComponent of the game object on which to set positions.\n\x09*  @param ChannelMasks Array of channel mask to apply for each position.\n\x09*  @param Positions Array of transforms to apply.\n\x09*  @param MultiPositionType Position type\n\x09*  @return AK_Success when successful, AK_InvalidParameter if parameters are not valid.\n\x09*/" },
#endif
		{ "CPP_Default_MultiPositionType", "MultiDirections" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets multiple positions to a single game object, with flexible assignment of input channels.\nSetting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\nThis can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\nNote: Calling AK::SoundEngine::SetMultiplePositions() with only one position is the same as calling AK::SoundEngine::SetPosition()\n@param GameObjectAkComponent AkComponent of the game object on which to set positions.\n@param ChannelMasks Array of channel mask to apply for each position.\n@param Positions Array of transforms to apply.\n@param MultiPositionType Position type\n@return AK_Success when successful, AK_InvalidParameter if parameters are not valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMultipleChannelMaskEmitterPositions constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelMasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelMasks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MultiPositionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiPositionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMultipleChannelMaskEmitterPositions constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMultipleChannelMaskEmitterPositions Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameObjectAkComponent_MetaData), NewProp_GameObjectAkComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ChannelMasks_Inner = { "ChannelMasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAkChannelMask, METADATA_PARAMS(0, nullptr) }; // 6e8183c1e7cd10d321be1517eb12776137e13442
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ChannelMasks = { "ChannelMasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, ChannelMasks), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 6e8183c1e7cd10d321be1517eb12776137e13442
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, MultiPositionType), Z_Construct_UEnum_AkAudio_AkMultiPositionType, METADATA_PARAMS(0, nullptr) }; // cb42376ce8df8e5356b92ab91ea0c5d87b4fa579
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GameObjectAkComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChannelMasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChannelMasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MultiPositionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MultiPositionType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetMultipleChannelMaskEmitterPositions Property Definitions *************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMultipleChannelMaskEmitterPositions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetMultipleChannelMaskEmitterPositions)
{
	P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
	P_GET_TARRAY(FAkChannelMask,Z_Param_ChannelMasks);
	P_GET_TARRAY(FTransform,Z_Param_Positions);
	P_GET_ENUM(AkMultiPositionType,Z_Param_MultiPositionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(Z_Param_GameObjectAkComponent,Z_Param_ChannelMasks,Z_Param_Positions,AkMultiPositionType(Z_Param_MultiPositionType));
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetMultipleChannelMaskEmitterPositions *********

// ********** Begin Class UAkGameplayStatics Function SetMultiplePositions *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetMultiplePositions_Parms
	{
		UAkComponent* GameObjectAkComponent;
		TArray<FTransform> Positions;
		AkMultiPositionType MultiPositionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets multiple positions to a single game object.\n    *  Setting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\n    *  This can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\n    *  Note: Calling SetMultiplePositions() with only one position is the same as calling SetPosition()\n    *  @param GameObjectAkComponent AkComponent of the game object on which to set positions.\n    *  @param Positions Array of transforms to apply.\n    *  @param MultiPositionType Position type\n    *  @return AK_Success when successful, AK_InvalidParameter if parameters are not valid.\n    *\n    */" },
#endif
		{ "CPP_Default_MultiPositionType", "MultiDirections" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets multiple positions to a single game object.\nSetting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\nThis can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\nNote: Calling SetMultiplePositions() with only one position is the same as calling SetPosition()\n@param GameObjectAkComponent AkComponent of the game object on which to set positions.\n@param Positions Array of transforms to apply.\n@param MultiPositionType Position type\n@return AK_Success when successful, AK_InvalidParameter if parameters are not valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMultiplePositions constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MultiPositionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiPositionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMultiplePositions constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMultiplePositions Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultiplePositions_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameObjectAkComponent_MetaData), NewProp_GameObjectAkComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultiplePositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultiplePositions_Parms, MultiPositionType), Z_Construct_UEnum_AkAudio_AkMultiPositionType, METADATA_PARAMS(0, nullptr) }; // cb42376ce8df8e5356b92ab91ea0c5d87b4fa579
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GameObjectAkComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MultiPositionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MultiPositionType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetMultiplePositions Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMultiplePositions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetMultiplePositions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetMultiplePositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetMultiplePositions)
{
	P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
	P_GET_TARRAY(FTransform,Z_Param_Positions);
	P_GET_ENUM(AkMultiPositionType,Z_Param_MultiPositionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetMultiplePositions(Z_Param_GameObjectAkComponent,Z_Param_Positions,AkMultiPositionType(Z_Param_MultiPositionType));
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetMultiplePositions ***************************

// ********** Begin Class UAkGameplayStatics Function SetNumberOfPrimaryRays ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetNumberOfPrimaryRays_Parms
	{
		int32 InNbPrimaryRays;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the number of primary rays used in the ray tracing engine.\n\x09* A larger value increases the chances of finding reflection and diffraction paths but results in higher CPU usage.\n\x09* When the CPU limit is active (see the CPU Limit Percentage Spatial Audio Setting), this setting represents the maximum allowed number of primary rays.\n\x09*\n\x09* @param InNbPrimaryRays - Number of rays cast from the listener. Valid range [0, [.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the number of primary rays used in the ray tracing engine.\nA larger value increases the chances of finding reflection and diffraction paths but results in higher CPU usage.\nWhen the CPU limit is active (see the CPU Limit Percentage Spatial Audio Setting), this setting represents the maximum allowed number of primary rays.\n\n@param InNbPrimaryRays - Number of rays cast from the listener. Valid range [0, [." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetNumberOfPrimaryRays constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNbPrimaryRays;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNumberOfPrimaryRays constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNumberOfPrimaryRays Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InNbPrimaryRays = { "InNbPrimaryRays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetNumberOfPrimaryRays_Parms, InNbPrimaryRays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNbPrimaryRays,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetNumberOfPrimaryRays Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetNumberOfPrimaryRays", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetNumberOfPrimaryRays_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetNumberOfPrimaryRays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetNumberOfPrimaryRays)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InNbPrimaryRays);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetNumberOfPrimaryRays(Z_Param_InNbPrimaryRays);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetNumberOfPrimaryRays *************************

// ********** Begin Class UAkGameplayStatics Function SetOcclusionRefreshInterval ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms
	{
		float RefreshInterval;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the obstruction/occlusion calculation refresh interval, targeting the root component of a specified actor.\n\x09 * @param RefreshInterval - Value of the wanted refresh interval. Valid range [0, [.\n\x09 * @param Actor - Actor on which to set the refresh interval\n\x09 */" },
#endif
		{ "DisplayName", "Set Obstruction Occlusion Refresh Interval" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the obstruction/occlusion calculation refresh interval, targeting the root component of a specified actor.\n@param RefreshInterval - Value of the wanted refresh interval. Valid range [0, [.\n@param Actor - Actor on which to set the refresh interval" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetOcclusionRefreshInterval constinit property declarations ***********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefreshInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOcclusionRefreshInterval constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOcclusionRefreshInterval Property Definitions **********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RefreshInterval = { "RefreshInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms, RefreshInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RefreshInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetOcclusionRefreshInterval Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetOcclusionRefreshInterval", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetOcclusionRefreshInterval)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RefreshInterval);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetOcclusionRefreshInterval(Z_Param_RefreshInterval,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetOcclusionRefreshInterval ********************

// ********** Begin Class UAkGameplayStatics Function SetOutdoorsRoomParameters ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetOutdoorsRoomParameters_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetOutdoorsRoomParameters_Parms
	{
		FAkOutdoorsRoomParameters InOutdoorsRoomParameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the parameters of the defaut Outdoors Room.\n\x09*\n\x09* @param InOutdoorsRoomParameters - Structure containing the new parameters of the Outdoors Room.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the parameters of the defaut Outdoors Room.\n\n@param InOutdoorsRoomParameters - Structure containing the new parameters of the Outdoors Room." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetOutdoorsRoomParameters constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOutdoorsRoomParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOutdoorsRoomParameters constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOutdoorsRoomParameters Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InOutdoorsRoomParameters = { "InOutdoorsRoomParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOutdoorsRoomParameters_Parms, InOutdoorsRoomParameters), Z_Construct_UScriptStruct_FAkOutdoorsRoomParameters, METADATA_PARAMS(0, nullptr) }; // e2c1be5d2640df0ede9b731265391eed89c448e6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOutdoorsRoomParameters,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetOutdoorsRoomParameters Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetOutdoorsRoomParameters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetOutdoorsRoomParameters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetOutdoorsRoomParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutdoorsRoomParameters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetOutdoorsRoomParameters)
{
	P_GET_STRUCT(FAkOutdoorsRoomParameters,Z_Param_InOutdoorsRoomParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetOutdoorsRoomParameters(Z_Param_InOutdoorsRoomParameters);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetOutdoorsRoomParameters **********************

// ********** Begin Class UAkGameplayStatics Function SetOutputBusVolume ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetOutputBusVolume_Parms
	{
		float BusVolume;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the output bus volume (direct) to be used for the specified game object.\n\x09* The control value is a number ranging from 0.0f to 1.0f.\n\x09*\n\x09* @param BusVolume - Bus volume to set\n\x09* @param Actor - Actor on which to set the flag\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the output bus volume (direct) to be used for the specified game object.\nThe control value is a number ranging from 0.0f to 1.0f.\n\n@param BusVolume - Bus volume to set\n@param Actor - Actor on which to set the flag" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetOutputBusVolume constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BusVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOutputBusVolume constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOutputBusVolume Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BusVolume = { "BusVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputBusVolume_Parms, BusVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputBusVolume_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BusVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetOutputBusVolume Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetOutputBusVolume", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetOutputBusVolume_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetOutputBusVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetOutputBusVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BusVolume);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetOutputBusVolume(Z_Param_BusVolume,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetOutputBusVolume *****************************

// ********** Begin Class UAkGameplayStatics Function SetOutputDeviceEffect ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetOutputDeviceEffect_Parms
	{
		FAkOutputDeviceID InDeviceID;
		int32 InEffectIndex;
		const UAkEffectShareSet* InEffectShareSet;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets an effect ShareSet on an output device\n\x09*\n\x09*  @param InDeviceID Output ID, as returned from AddOutput or GetOutputID. You can pass 0 for the main (default) output\n\x09*  @param InEffectIndex Effect slot index (0-3)\n\x09*  @param InEffectShareSet  Effect ShareSet asset\n\x09*  @return Always returns True\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an effect ShareSet on an output device\n\n@param InDeviceID Output ID, as returned from AddOutput or GetOutputID. You can pass 0 for the main (default) output\n@param InEffectIndex Effect slot index (0-3)\n@param InEffectShareSet  Effect ShareSet asset\n@return Always returns True" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOutputDeviceEffect constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDeviceID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetOutputDeviceEffect_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOutputDeviceEffect constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOutputDeviceEffect Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InDeviceID = { "InDeviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputDeviceEffect_Parms, InDeviceID), Z_Construct_UScriptStruct_FAkOutputDeviceID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDeviceID_MetaData), NewProp_InDeviceID_MetaData) }; // 365e20fe238e67831e413d81ebf809f304338b1f
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputDeviceEffect_Parms, InEffectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffectIndex_MetaData), NewProp_InEffectIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputDeviceEffect_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffectShareSet_MetaData), NewProp_InEffectShareSet_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetOutputDeviceEffect_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InDeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffectIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffectShareSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetOutputDeviceEffect Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetOutputDeviceEffect", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetOutputDeviceEffect_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetOutputDeviceEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetOutputDeviceEffect)
{
	P_GET_STRUCT(FAkOutputDeviceID,Z_Param_InDeviceID);
	P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
	P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAkGameplayStatics::SetOutputDeviceEffect(Z_Param_InDeviceID,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetOutputDeviceEffect **************************

// ********** Begin Class UAkGameplayStatics Function SetPanningRule *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetPanningRule_Parms
	{
		PanningRule PanRule;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*  Set the panning rule of the specified output.\n\x09*  This may be changed anytime once the sound engine is initialized.\n\x09*  @warning This function posts a message through the sound engine's internal message queue, whereas GetPanningRule() queries the current panning rule directly.\n\x09*\n\x09* @param PanRule\x09Panning rule.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the panning rule of the specified output.\nThis may be changed anytime once the sound engine is initialized.\n@warning This function posts a message through the sound engine's internal message queue, whereas GetPanningRule() queries the current panning rule directly.\n\n@param PanRule        Panning rule." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetPanningRule constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_PanRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PanRule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPanningRule constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPanningRule Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PanRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PanRule = { "PanRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPanningRule_Parms, PanRule), Z_Construct_UEnum_AkAudio_PanningRule, METADATA_PARAMS(0, nullptr) }; // 22bdd3afeae9e2c13cb749cbbe3983e15f602588
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PanRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PanRule,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPanningRule Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetPanningRule", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetPanningRule_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetPanningRule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetPanningRule)
{
	P_GET_ENUM(PanningRule,Z_Param_PanRule);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetPanningRule(PanningRule(Z_Param_PanRule));
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetPanningRule *********************************

// ********** Begin Class UAkGameplayStatics Function SetPortalObstructionAndOcclusion *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms
	{
		UAkPortalComponent* PortalComponent;
		float ObstructionValue;
		float OcclusionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the obstruction and occlusion value of sounds going through this portal with a call to AK::SpatialAudio::SetPortalObstructionAndOcclusion.\n\x09* Use this function if you want to manually override the portal's obstruction and occlusion values.\n\x09* If you only need to adjust occlusion, to modulate sound in response to a door opening or closing for example, we recommend using SetPortalOcclusion.\n\x09* For results based on blocking objects in the environment, we recommend using the Portal Obstruction service instead of this function.\n\x09*\n\x09* @param PortalComponent - The portal through which sound path need to pass to get obstructed and occluded.\n\x09* @param ObstructionValue - The obstruction value. Can be 0 to 1.\n\x09* @param OcclusionValue - The occlusion value. Can be 0 to 1.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the obstruction and occlusion value of sounds going through this portal with a call to AK::SpatialAudio::SetPortalObstructionAndOcclusion.\nUse this function if you want to manually override the portal's obstruction and occlusion values.\nIf you only need to adjust occlusion, to modulate sound in response to a door opening or closing for example, we recommend using SetPortalOcclusion.\nFor results based on blocking objects in the environment, we recommend using the Portal Obstruction service instead of this function.\n\n@param PortalComponent - The portal through which sound path need to pass to get obstructed and occluded.\n@param ObstructionValue - The obstruction value. Can be 0 to 1.\n@param OcclusionValue - The occlusion value. Can be 0 to 1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPortalObstructionAndOcclusion constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstructionValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPortalObstructionAndOcclusion constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPortalObstructionAndOcclusion Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PortalComponent = { "PortalComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms, PortalComponent), Z_Construct_UClass_UAkPortalComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalComponent_MetaData), NewProp_PortalComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ObstructionValue = { "ObstructionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms, ObstructionValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms, OcclusionValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PortalComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObstructionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OcclusionValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPortalObstructionAndOcclusion Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetPortalObstructionAndOcclusion", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetPortalObstructionAndOcclusion)
{
	P_GET_OBJECT(UAkPortalComponent,Z_Param_PortalComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ObstructionValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OcclusionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetPortalObstructionAndOcclusion(Z_Param_PortalComponent,Z_Param_ObstructionValue,Z_Param_OcclusionValue);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetPortalObstructionAndOcclusion ***************

// ********** Begin Class UAkGameplayStatics Function SetPortalToPortalObstruction *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetPortalToPortalObstruction_Parms
	{
		UAkPortalComponent* PortalComponent0;
		UAkPortalComponent* PortalComponent1;
		float ObstructionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the obstruction value of sounds going from a first portal through the next portal.\n\x09*\n\x09* @param PortalComponent0 - The first portal through which a sound path goes.\n\x09* @param PortalComponent1 - The next portal through which the sound path goes from the first portal.\n\x09* @param ObstructionValue - The obstruction value. Can be 0 to 1.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the obstruction value of sounds going from a first portal through the next portal.\n\n@param PortalComponent0 - The first portal through which a sound path goes.\n@param PortalComponent1 - The next portal through which the sound path goes from the first portal.\n@param ObstructionValue - The obstruction value. Can be 0 to 1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalComponent0_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalComponent1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPortalToPortalObstruction constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalComponent0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalComponent1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstructionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPortalToPortalObstruction constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPortalToPortalObstruction Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PortalComponent0 = { "PortalComponent0", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalToPortalObstruction_Parms, PortalComponent0), Z_Construct_UClass_UAkPortalComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalComponent0_MetaData), NewProp_PortalComponent0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PortalComponent1 = { "PortalComponent1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalToPortalObstruction_Parms, PortalComponent1), Z_Construct_UClass_UAkPortalComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalComponent1_MetaData), NewProp_PortalComponent1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ObstructionValue = { "ObstructionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalToPortalObstruction_Parms, ObstructionValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PortalComponent0,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PortalComponent1,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObstructionValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPortalToPortalObstruction Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetPortalToPortalObstruction", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetPortalToPortalObstruction_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetPortalToPortalObstruction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetPortalToPortalObstruction)
{
	P_GET_OBJECT(UAkPortalComponent,Z_Param_PortalComponent0);
	P_GET_OBJECT(UAkPortalComponent,Z_Param_PortalComponent1);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ObstructionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetPortalToPortalObstruction(Z_Param_PortalComponent0,Z_Param_PortalComponent1,Z_Param_ObstructionValue);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetPortalToPortalObstruction *******************

// ********** Begin Class UAkGameplayStatics Function SetReflectionsOrder **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetReflectionsOrder_Parms
	{
		int32 Order;
		bool RefreshPaths;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the Reflections Order for Spatial Audio Reflect.\n\x09* The reflection order indicates the number of \"bounces\" in a reflection path. A higher reflection order renders more detail at the expense of higher CPU usage.\n\x09*\n\x09* @param Order - The order of Reflection. Can be 0 to 4.\n\x09* @param RefreshPaths - whether the paths should be refreshed immediately.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Reflections Order for Spatial Audio Reflect.\nThe reflection order indicates the number of \"bounces\" in a reflection path. A higher reflection order renders more detail at the expense of higher CPU usage.\n\n@param Order - The order of Reflection. Can be 0 to 4.\n@param RefreshPaths - whether the paths should be refreshed immediately." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetReflectionsOrder constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Order;
	static void NewProp_RefreshPaths_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetReflectionsOrder_Parms*)Obj)->RefreshPaths = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RefreshPaths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetReflectionsOrder constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetReflectionsOrder Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetReflectionsOrder_Parms, Order), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_RefreshPaths = { "RefreshPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetReflectionsOrder_Parms), &UHT_STATICS::NewProp_RefreshPaths_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Order,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RefreshPaths,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetReflectionsOrder Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetReflectionsOrder", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetReflectionsOrder_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetReflectionsOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetReflectionsOrder)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Order);
	P_GET_UBOOL(Z_Param_RefreshPaths);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetReflectionsOrder(Z_Param_Order,Z_Param_RefreshPaths);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetReflectionsOrder ****************************

// ********** Begin Class UAkGameplayStatics Function SetRTPCValue *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetRTPCValue_Parms
	{
		UAkRtpc* RTPCValue;
		float Value;
		int32 InterpolationTimeMs;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the value of a Game Parameter, optionally targeting the root component of a specified actor.\n\x09* @param RTPC - The name of the Game Parameter to set\n\x09* @param Value - The value of the Game Parameter\n\x09* @param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n\x09* @param Actor - (Optional) Actor on which to set the Game Parameter value\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the value of a Game Parameter, optionally targeting the root component of a specified actor.\n@param RTPC - The name of the Game Parameter to set\n@param Value - The value of the Game Parameter\n@param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n@param Actor - (Optional) Actor on which to set the Game Parameter value" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRTPCValue constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRTPCValue Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTPCValue_MetaData), NewProp_RTPCValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InterpolationTimeMs = { "InterpolationTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RTPCValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InterpolationTimeMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRTPCValue Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetRTPCValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetRTPCValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetRTPCValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetRTPCValue)
{
	P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_PROPERTY(FIntProperty,Z_Param_InterpolationTimeMs);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetRTPCValue(Z_Param_RTPCValue,Z_Param_Value,Z_Param_InterpolationTimeMs,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetRTPCValue ***********************************

// ********** Begin Class UAkGameplayStatics Function SetSmoothingConstant *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetSmoothingConstant_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetSmoothingConstant_Parms
	{
		float InSmoothingConstantMs;
		UAkGameObject* InGameObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*  [Experimental] Enable parameter smoothing on the diffraction paths generated by the Acoustics Engine, either globally or for a specific UAkGameObject.\n\x09*  Set 'Smoothing Constant (ms)' to a value greater than 0 to define the time constant (in milliseconds) for parameter smoothing. \n\x09*  The time constant of an exponential moving average is the amount of time for the smoothed response of a unit step function to reach 1 - 1/e ~= 63.2% of the original signal.\n\x09*  A large value (eg. 500-1000 ms) results in less variance but introduces lag, which is a good choice when using conservative values for uNumberOfPrimaryRays (eg. 5-10), uMaxDiffractionPaths (eg. 1-3) or fMovementThreshold ( > 1m ), in order to reduce overall CPU cost. \n\x09*  A small value (eg. 10-100 ms) results in greater accuracy and faster convergence of rendering parameters. Set to 0 to disable path smoothing.\n\x09*\n\x09* @param InSmoothingConstantMs -  Smoothing constant (ms)\n\x09* @param InGameObject - Affected UAkGameObject, or nullptr to set the global smoothing constant, affecting all Spatial Audio Emitters and Rooms.\n\x09*/" },
#endif
		{ "CPP_Default_InGameObject", "None" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[Experimental] Enable parameter smoothing on the diffraction paths generated by the Acoustics Engine, either globally or for a specific UAkGameObject.\nSet 'Smoothing Constant (ms)' to a value greater than 0 to define the time constant (in milliseconds) for parameter smoothing.\nThe time constant of an exponential moving average is the amount of time for the smoothed response of a unit step function to reach 1 - 1/e ~= 63.2% of the original signal.\nA large value (eg. 500-1000 ms) results in less variance but introduces lag, which is a good choice when using conservative values for uNumberOfPrimaryRays (eg. 5-10), uMaxDiffractionPaths (eg. 1-3) or fMovementThreshold ( > 1m ), in order to reduce overall CPU cost.\nA small value (eg. 10-100 ms) results in greater accuracy and faster convergence of rendering parameters. Set to 0 to disable path smoothing.\n\n@param InSmoothingConstantMs -  Smoothing constant (ms)\n@param InGameObject - Affected UAkGameObject, or nullptr to set the global smoothing constant, affecting all Spatial Audio Emitters and Rooms." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGameObject_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSmoothingConstant constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSmoothingConstantMs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSmoothingConstant constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSmoothingConstant Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InSmoothingConstantMs = { "InSmoothingConstantMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSmoothingConstant_Parms, InSmoothingConstantMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InGameObject = { "InGameObject", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSmoothingConstant_Parms, InGameObject), Z_Construct_UClass_UAkGameObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGameObject_MetaData), NewProp_InGameObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSmoothingConstantMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InGameObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSmoothingConstant Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetSmoothingConstant", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetSmoothingConstant_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetSmoothingConstant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSmoothingConstant(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetSmoothingConstant)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSmoothingConstantMs);
	P_GET_OBJECT(UAkGameObject,Z_Param_InGameObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetSmoothingConstant(Z_Param_InSmoothingConstantMs,Z_Param_InGameObject);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetSmoothingConstant ***************************

// ********** Begin Class UAkGameplayStatics Function SetSpeakerAngles *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetSpeakerAngles_Parms
	{
		TArray<float> SpeakerAngles;
		float HeightAngle;
		FString DeviceShareSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets speaker angles of the specified device. Speaker angles are used for 3D positioning of sounds over standard configurations.\n\x09 * Note that the current version of Wwise only supports positioning on the plane.\n\x09 * The speaker angles are expressed as an array of loudspeaker pairs, in degrees, relative to azimuth ]0,180].\n\x09 * Supported loudspeaker setups are always symmetric; the center speaker is always in the middle and thus not specified by angles.\n\x09 * Angles must be set in ascending order.\n\x09 *\n\x09 * @param SpeakerAngles Array of loudspeaker pair angles, in degrees relative to azimuth [0,180]\n\x09 * @param HeightAngle Elevation of the height layer, in degrees relative to the plane [-90,90]\n\x09 * @param DeviceShareSet ShareSet for which to set the angles on.\n\x09 */" },
#endif
		{ "CPP_Default_DeviceShareSet", "" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets speaker angles of the specified device. Speaker angles are used for 3D positioning of sounds over standard configurations.\nNote that the current version of Wwise only supports positioning on the plane.\nThe speaker angles are expressed as an array of loudspeaker pairs, in degrees, relative to azimuth ]0,180].\nSupported loudspeaker setups are always symmetric; the center speaker is always in the middle and thus not specified by angles.\nAngles must be set in ascending order.\n\n@param SpeakerAngles Array of loudspeaker pair angles, in degrees relative to azimuth [0,180]\n@param HeightAngle Elevation of the height layer, in degrees relative to the plane [-90,90]\n@param DeviceShareSet ShareSet for which to set the angles on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerAngles_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSpeakerAngles constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeakerAngles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeakerAngles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightAngle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceShareSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSpeakerAngles constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSpeakerAngles Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SpeakerAngles_Inner = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SpeakerAngles = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSpeakerAngles_Parms, SpeakerAngles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerAngles_MetaData), NewProp_SpeakerAngles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HeightAngle = { "HeightAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSpeakerAngles_Parms, HeightAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DeviceShareSet = { "DeviceShareSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSpeakerAngles_Parms, DeviceShareSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceShareSet_MetaData), NewProp_DeviceShareSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeakerAngles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeakerAngles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeviceShareSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSpeakerAngles Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetSpeakerAngles", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetSpeakerAngles_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetSpeakerAngles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetSpeakerAngles)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_SpeakerAngles);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HeightAngle);
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceShareSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetSpeakerAngles(Z_Param_Out_SpeakerAngles,Z_Param_HeightAngle,Z_Param_DeviceShareSet);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetSpeakerAngles *******************************

// ********** Begin Class UAkGameplayStatics Function SetState *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetState_Parms
	{
		UAkStateValue* StateValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the active State for a given State Group.\n\x09 * @param StateGroup - Name of the State Group to be modified\n\x09 * @param State - Name of the State to be made active\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the active State for a given State Group.\n@param StateGroup - Name of the State Group to be modified\n@param State - Name of the State to be made active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetState constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetState constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetState Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StateValue = { "StateValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetState_Parms, StateValue), Z_Construct_UClass_UAkStateValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateValue_MetaData), NewProp_StateValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StateValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetState Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetState)
{
	P_GET_OBJECT(UAkStateValue,Z_Param_StateValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetState(Z_Param_StateValue);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetState ***************************************

// ********** Begin Class UAkGameplayStatics Function SetSwitch ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSetSwitch_Parms
	{
		UAkSwitchValue* SwitchValue;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the active Switch for a given Switch Group, targeting the root component of a specified actor.\n\x09 * @param SwitchGroup - Name of the Switch Group to be modified\n\x09 * @param SwitchState - Name of the Switch to be made active\n\x09 * @param Actor - Actor on which to set the switch\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the active Switch for a given Switch Group, targeting the root component of a specified actor.\n@param SwitchGroup - Name of the Switch Group to be modified\n@param SwitchState - Name of the Switch to be made active\n@param Actor - Actor on which to set the switch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSwitch constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSwitch constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSwitch Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SwitchValue = { "SwitchValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, SwitchValue), Z_Construct_UClass_UAkSwitchValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchValue_MetaData), NewProp_SwitchValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSwitch Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetSwitch", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSetSwitch_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSetSwitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSwitch(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSetSwitch)
{
	P_GET_OBJECT(UAkSwitchValue,Z_Param_SwitchValue);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::SetSwitch(Z_Param_SwitchValue,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SetSwitch **************************************

// ********** Begin Class UAkGameplayStatics Function SpawnAkComponentAtLocation *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms
	{
		UObject* WorldContextObject;
		UAkAudioEvent* AkEvent;
		FVector Location;
		FRotator Orientation;
		bool AutoPost;
		bool AutoDestroy;
		UAkComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "6" },
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawn an AkComponent at a location. Allows, for example, to set a switch on a fire and forget sound.\n\x09 * @param AkEvent - Wwise Event to post.\n\x09 * @param Location - Location from which to post the Wwise Event.\n\x09 * @param Orientation - Orientation of the event.\n\x09 * @param AutoPost - Automatically post the event once the AkComponent is created.\n\x09 * @param AutoDestroy - Automatically destroy the AkComponent once the event is finished.\n\x09 */" },
#endif
		{ "CPP_Default_AutoDestroy", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn an AkComponent at a location. Allows, for example, to set a switch on a fire and forget sound.\n@param AkEvent - Wwise Event to post.\n@param Location - Location from which to post the Wwise Event.\n@param Orientation - Orientation of the event.\n@param AutoPost - Automatically post the event once the AkComponent is created.\n@param AutoDestroy - Automatically destroy the AkComponent once the event is finished." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnAkComponentAtLocation constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static void NewProp_AutoPost_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms*)Obj)->AutoPost = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoPost;
	static void NewProp_AutoDestroy_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms*)Obj)->AutoDestroy = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoDestroy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnAkComponentAtLocation constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnAkComponentAtLocation Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_AutoPost = { "AutoPost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), &UHT_STATICS::NewProp_AutoPost_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_AutoDestroy = { "AutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), &UHT_STATICS::NewProp_AutoDestroy_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAkComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutoPost,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutoDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnAkComponentAtLocation Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "SpawnAkComponentAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execSpawnAkComponentAtLocation)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Orientation);
	P_GET_UBOOL(Z_Param_AutoPost);
	P_GET_UBOOL(Z_Param_AutoDestroy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAkComponent**)Z_Param__Result=UAkGameplayStatics::SpawnAkComponentAtLocation(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation,Z_Param_AutoPost,Z_Param_AutoDestroy);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function SpawnAkComponentAtLocation *********************

// ********** Begin Class UAkGameplayStatics Function StartAllAmbientSounds ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventStartAllAmbientSounds_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Start all Ak ambient sounds.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start all Ak ambient sounds." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartAllAmbientSounds constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartAllAmbientSounds constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartAllAmbientSounds Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventStartAllAmbientSounds_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartAllAmbientSounds Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "StartAllAmbientSounds", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventStartAllAmbientSounds_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventStartAllAmbientSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execStartAllAmbientSounds)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::StartAllAmbientSounds(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function StartAllAmbientSounds **************************

// ********** Begin Class UAkGameplayStatics Function StartOutputCapture ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventStartOutputCapture_Parms
	{
		FString Filename;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts a Wwise output capture. The output file will be located in the same folder as the SoundBanks.\n\x09 * @param Filename - The name to give to the output file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts a Wwise output capture. The output file will be located in the same folder as the SoundBanks.\n@param Filename - The name to give to the output file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartOutputCapture constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartOutputCapture constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartOutputCapture Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventStartOutputCapture_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Filename,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartOutputCapture Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "StartOutputCapture", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventStartOutputCapture_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventStartOutputCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execStartOutputCapture)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::StartOutputCapture(Z_Param_Filename);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function StartOutputCapture *****************************

// ********** Begin Class UAkGameplayStatics Function StartProfilerCapture *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventStartProfilerCapture_Parms
	{
		FString Filename;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.\n\x09 * @param Filename - The name to give to the output file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.\n@param Filename - The name to give to the output file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartProfilerCapture constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartProfilerCapture constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartProfilerCapture Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventStartProfilerCapture_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Filename,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartProfilerCapture Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "StartProfilerCapture", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventStartProfilerCapture_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventStartProfilerCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execStartProfilerCapture)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::StartProfilerCapture(Z_Param_Filename);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function StartProfilerCapture ***************************

// ********** Begin Class UAkGameplayStatics Function StopActor ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventStopActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop all sounds for an actor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop all sounds for an actor." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopActor constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopActor constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopActor Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventStopActor_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StopActor Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventStopActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventStopActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execStopActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::StopActor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function StopActor **************************************

// ********** Begin Class UAkGameplayStatics Function StopAll **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop all sounds.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop all sounds." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopAll constinit property declarations *******************************
// ********** End Function StopAll constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopAll", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAll(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execStopAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::StopAll();
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function StopAll ****************************************

// ********** Begin Class UAkGameplayStatics Function StopAllAmbientSounds *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventStopAllAmbientSounds_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop all Ak ambient sounds.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop all Ak ambient sounds." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopAllAmbientSounds constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopAllAmbientSounds constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopAllAmbientSounds Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventStopAllAmbientSounds_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StopAllAmbientSounds Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopAllAmbientSounds", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventStopAllAmbientSounds_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventStopAllAmbientSounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execStopAllAmbientSounds)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::StopAllAmbientSounds(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function StopAllAmbientSounds ***************************

// ********** Begin Class UAkGameplayStatics Function StopOutdoors *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_StopOutdoors_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops all sounds for the Outdoors Room.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops all sounds for the Outdoors Room." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopOutdoors constinit property declarations **************************
// ********** End Function StopOutdoors constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopOutdoors", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopOutdoors(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execStopOutdoors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::StopOutdoors();
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function StopOutdoors ***********************************

// ********** Begin Class UAkGameplayStatics Function StopOutputCapture ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops a Wwise output capture. The output file will be located in the same folder as the SoundBanks.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops a Wwise output capture. The output file will be located in the same folder as the SoundBanks." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopOutputCapture constinit property declarations *********************
// ********** End Function StopOutputCapture constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopOutputCapture", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execStopOutputCapture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::StopOutputCapture();
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function StopOutputCapture ******************************

// ********** Begin Class UAkGameplayStatics Function StopProfilerCapture **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopProfilerCapture constinit property declarations *******************
// ********** End Function StopProfilerCapture constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopProfilerCapture", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execStopProfilerCapture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::StopProfilerCapture();
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function StopProfilerCapture ****************************

// ********** Begin Class UAkGameplayStatics Function UnloadInitBank *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|SoundBanks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Unloads the Init SoundBank\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unloads the Init SoundBank" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UnloadInitBank constinit property declarations ************************
// ********** End Function UnloadInitBank constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "UnloadInitBank", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execUnloadInitBank)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::UnloadInitBank();
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function UnloadInitBank *********************************

// ********** Begin Class UAkGameplayStatics Function UseReverbVolumes *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics
struct UHT_STATICS
{
	struct AkGameplayStatics_eventUseReverbVolumes_Parms
	{
		bool inUseReverbVolumes;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets UseReverbVolumes flag on a specified actor. Set value to true to use reverb volumes on this component.\n\x09*\n\x09* @param inUseReverbVolumes - Whether to use reverb volumes or not.\n\x09* @param Actor - Actor on which to set the flag\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets UseReverbVolumes flag on a specified actor. Set value to true to use reverb volumes on this component.\n\n@param inUseReverbVolumes - Whether to use reverb volumes or not.\n@param Actor - Actor on which to set the flag" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UseReverbVolumes constinit property declarations **********************
	static void NewProp_inUseReverbVolumes_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventUseReverbVolumes_Parms*)Obj)->inUseReverbVolumes = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_inUseReverbVolumes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UseReverbVolumes constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UseReverbVolumes Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_inUseReverbVolumes = { "inUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventUseReverbVolumes_Parms), &UHT_STATICS::NewProp_inUseReverbVolumes_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventUseReverbVolumes_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_inUseReverbVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UseReverbVolumes Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGameplayStatics, nullptr, "UseReverbVolumes", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGameplayStatics_eventUseReverbVolumes_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGameplayStatics_eventUseReverbVolumes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGameplayStatics::execUseReverbVolumes)
{
	P_GET_UBOOL(Z_Param_inUseReverbVolumes);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAkGameplayStatics::UseReverbVolumes(Z_Param_inUseReverbVolumes,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UAkGameplayStatics Function UseReverbVolumes *******************************

// ********** Begin Class UAkGameplayStatics *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkGameplayStatics_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "AkGameplayStatics.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkGameplayStatics constinit property declarations ***********************
// ********** End Class UAkGameplayStatics constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddOutput"), .Pointer = &UAkGameplayStatics::execAddOutput },
		{ .NameUTF8 = UTF8TEXT("AddOutputCaptureMarker"), .Pointer = &UAkGameplayStatics::execAddOutputCaptureMarker },
		{ .NameUTF8 = UTF8TEXT("CancelEventCallback"), .Pointer = &UAkGameplayStatics::execCancelEventCallback },
		{ .NameUTF8 = UTF8TEXT("ClearSoundBanksAndMedia"), .Pointer = &UAkGameplayStatics::execClearSoundBanksAndMedia },
		{ .NameUTF8 = UTF8TEXT("GetAkAudioTypeUserData"), .Pointer = &UAkGameplayStatics::execGetAkAudioTypeUserData },
		{ .NameUTF8 = UTF8TEXT("GetAkComponent"), .Pointer = &UAkGameplayStatics::execGetAkComponent },
		{ .NameUTF8 = UTF8TEXT("GetAvailableAudioCultures"), .Pointer = &UAkGameplayStatics::execGetAvailableAudioCultures },
		{ .NameUTF8 = UTF8TEXT("GetCurrentAudioCulture"), .Pointer = &UAkGameplayStatics::execGetCurrentAudioCulture },
		{ .NameUTF8 = UTF8TEXT("GetCurrentOutdoorsRoomParameters"), .Pointer = &UAkGameplayStatics::execGetCurrentOutdoorsRoomParameters },
		{ .NameUTF8 = UTF8TEXT("GetOrCreateAkComponent"), .Pointer = &UAkGameplayStatics::execGetOrCreateAkComponent },
		{ .NameUTF8 = UTF8TEXT("GetRTPCValue"), .Pointer = &UAkGameplayStatics::execGetRTPCValue },
		{ .NameUTF8 = UTF8TEXT("GetSpeakerAngles"), .Pointer = &UAkGameplayStatics::execGetSpeakerAngles },
		{ .NameUTF8 = UTF8TEXT("IsEditor"), .Pointer = &UAkGameplayStatics::execIsEditor },
		{ .NameUTF8 = UTF8TEXT("IsGame"), .Pointer = &UAkGameplayStatics::execIsGame },
		{ .NameUTF8 = UTF8TEXT("LoadInitBank"), .Pointer = &UAkGameplayStatics::execLoadInitBank },
		{ .NameUTF8 = UTF8TEXT("PostAndWaitForEndOfEvent"), .Pointer = &UAkGameplayStatics::execPostAndWaitForEndOfEvent },
		{ .NameUTF8 = UTF8TEXT("PostEvent"), .Pointer = &UAkGameplayStatics::execPostEvent },
		{ .NameUTF8 = UTF8TEXT("PostEventAtLocation"), .Pointer = &UAkGameplayStatics::execPostEventAtLocation },
		{ .NameUTF8 = UTF8TEXT("PostEventOutdoors"), .Pointer = &UAkGameplayStatics::execPostEventOutdoors },
		{ .NameUTF8 = UTF8TEXT("PostTrigger"), .Pointer = &UAkGameplayStatics::execPostTrigger },
		{ .NameUTF8 = UTF8TEXT("RemoveOutput"), .Pointer = &UAkGameplayStatics::execRemoveOutput },
		{ .NameUTF8 = UTF8TEXT("ReplaceMainOutput"), .Pointer = &UAkGameplayStatics::execReplaceMainOutput },
		{ .NameUTF8 = UTF8TEXT("ResetOutdoorsRoomParams"), .Pointer = &UAkGameplayStatics::execResetOutdoorsRoomParams },
		{ .NameUTF8 = UTF8TEXT("ResetRTPCValue"), .Pointer = &UAkGameplayStatics::execResetRTPCValue },
		{ .NameUTF8 = UTF8TEXT("SetActorMixerEffect"), .Pointer = &UAkGameplayStatics::execSetActorMixerEffect },
		{ .NameUTF8 = UTF8TEXT("SetAuxBusEffect"), .Pointer = &UAkGameplayStatics::execSetAuxBusEffect },
		{ .NameUTF8 = UTF8TEXT("SetBusConfig"), .Pointer = &UAkGameplayStatics::execSetBusConfig },
		{ .NameUTF8 = UTF8TEXT("SetBusEffectByID"), .Pointer = &UAkGameplayStatics::execSetBusEffectByID },
		{ .NameUTF8 = UTF8TEXT("SetBusEffectByName"), .Pointer = &UAkGameplayStatics::execSetBusEffectByName },
		{ .NameUTF8 = UTF8TEXT("SetCurrentAudioCulture"), .Pointer = &UAkGameplayStatics::execSetCurrentAudioCulture },
		{ .NameUTF8 = UTF8TEXT("SetCurrentAudioCultureAsync"), .Pointer = &UAkGameplayStatics::execSetCurrentAudioCultureAsync },
		{ .NameUTF8 = UTF8TEXT("SetDiffractionOrder"), .Pointer = &UAkGameplayStatics::execSetDiffractionOrder },
		{ .NameUTF8 = UTF8TEXT("SetDistanceProbe"), .Pointer = &UAkGameplayStatics::execSetDistanceProbe },
		{ .NameUTF8 = UTF8TEXT("SetGameObjectToPortalObstruction"), .Pointer = &UAkGameplayStatics::execSetGameObjectToPortalObstruction },
		{ .NameUTF8 = UTF8TEXT("SetLoadBalancingSpread"), .Pointer = &UAkGameplayStatics::execSetLoadBalancingSpread },
		{ .NameUTF8 = UTF8TEXT("SetMaxDiffractionPaths"), .Pointer = &UAkGameplayStatics::execSetMaxDiffractionPaths },
		{ .NameUTF8 = UTF8TEXT("SetMaxEmitterRoomAuxSends"), .Pointer = &UAkGameplayStatics::execSetMaxEmitterRoomAuxSends },
		{ .NameUTF8 = UTF8TEXT("SetMaxGlobalReflectionPaths"), .Pointer = &UAkGameplayStatics::execSetMaxGlobalReflectionPaths },
		{ .NameUTF8 = UTF8TEXT("SetMultipleChannelEmitterPositions"), .Pointer = &UAkGameplayStatics::execSetMultipleChannelEmitterPositions },
		{ .NameUTF8 = UTF8TEXT("SetMultipleChannelMaskEmitterPositions"), .Pointer = &UAkGameplayStatics::execSetMultipleChannelMaskEmitterPositions },
		{ .NameUTF8 = UTF8TEXT("SetMultiplePositions"), .Pointer = &UAkGameplayStatics::execSetMultiplePositions },
		{ .NameUTF8 = UTF8TEXT("SetNumberOfPrimaryRays"), .Pointer = &UAkGameplayStatics::execSetNumberOfPrimaryRays },
		{ .NameUTF8 = UTF8TEXT("SetOcclusionRefreshInterval"), .Pointer = &UAkGameplayStatics::execSetOcclusionRefreshInterval },
		{ .NameUTF8 = UTF8TEXT("SetOutdoorsRoomParameters"), .Pointer = &UAkGameplayStatics::execSetOutdoorsRoomParameters },
		{ .NameUTF8 = UTF8TEXT("SetOutputBusVolume"), .Pointer = &UAkGameplayStatics::execSetOutputBusVolume },
		{ .NameUTF8 = UTF8TEXT("SetOutputDeviceEffect"), .Pointer = &UAkGameplayStatics::execSetOutputDeviceEffect },
		{ .NameUTF8 = UTF8TEXT("SetPanningRule"), .Pointer = &UAkGameplayStatics::execSetPanningRule },
		{ .NameUTF8 = UTF8TEXT("SetPortalObstructionAndOcclusion"), .Pointer = &UAkGameplayStatics::execSetPortalObstructionAndOcclusion },
		{ .NameUTF8 = UTF8TEXT("SetPortalToPortalObstruction"), .Pointer = &UAkGameplayStatics::execSetPortalToPortalObstruction },
		{ .NameUTF8 = UTF8TEXT("SetReflectionsOrder"), .Pointer = &UAkGameplayStatics::execSetReflectionsOrder },
		{ .NameUTF8 = UTF8TEXT("SetRTPCValue"), .Pointer = &UAkGameplayStatics::execSetRTPCValue },
		{ .NameUTF8 = UTF8TEXT("SetSmoothingConstant"), .Pointer = &UAkGameplayStatics::execSetSmoothingConstant },
		{ .NameUTF8 = UTF8TEXT("SetSpeakerAngles"), .Pointer = &UAkGameplayStatics::execSetSpeakerAngles },
		{ .NameUTF8 = UTF8TEXT("SetState"), .Pointer = &UAkGameplayStatics::execSetState },
		{ .NameUTF8 = UTF8TEXT("SetSwitch"), .Pointer = &UAkGameplayStatics::execSetSwitch },
		{ .NameUTF8 = UTF8TEXT("SpawnAkComponentAtLocation"), .Pointer = &UAkGameplayStatics::execSpawnAkComponentAtLocation },
		{ .NameUTF8 = UTF8TEXT("StartAllAmbientSounds"), .Pointer = &UAkGameplayStatics::execStartAllAmbientSounds },
		{ .NameUTF8 = UTF8TEXT("StartOutputCapture"), .Pointer = &UAkGameplayStatics::execStartOutputCapture },
		{ .NameUTF8 = UTF8TEXT("StartProfilerCapture"), .Pointer = &UAkGameplayStatics::execStartProfilerCapture },
		{ .NameUTF8 = UTF8TEXT("StopActor"), .Pointer = &UAkGameplayStatics::execStopActor },
		{ .NameUTF8 = UTF8TEXT("StopAll"), .Pointer = &UAkGameplayStatics::execStopAll },
		{ .NameUTF8 = UTF8TEXT("StopAllAmbientSounds"), .Pointer = &UAkGameplayStatics::execStopAllAmbientSounds },
		{ .NameUTF8 = UTF8TEXT("StopOutdoors"), .Pointer = &UAkGameplayStatics::execStopOutdoors },
		{ .NameUTF8 = UTF8TEXT("StopOutputCapture"), .Pointer = &UAkGameplayStatics::execStopOutputCapture },
		{ .NameUTF8 = UTF8TEXT("StopProfilerCapture"), .Pointer = &UAkGameplayStatics::execStopProfilerCapture },
		{ .NameUTF8 = UTF8TEXT("UnloadInitBank"), .Pointer = &UAkGameplayStatics::execUnloadInitBank },
		{ .NameUTF8 = UTF8TEXT("UseReverbVolumes"), .Pointer = &UAkGameplayStatics::execUseReverbVolumes },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGameplayStatics_AddOutput, "AddOutput" }, // cf03f1b2a3650b748045d2a7ca5486dfc1bf6f27
		{ &Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker, "AddOutputCaptureMarker" }, // e8cf268cfc4489373cff965226bfa7798c660655
		{ &Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback, "CancelEventCallback" }, // 4a8ca8a595176b889e4dbe5c280c373bdd3dfece
		{ &Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia, "ClearSoundBanksAndMedia" }, // 8b677fda83ace27b6b014deef05c8593c74ad4a3
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData, "GetAkAudioTypeUserData" }, // a8fe4e797d7f58977060ce4e626cd91f5a310d26
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent, "GetAkComponent" }, // 011f8e670f3dc618af64bb5558cc2a37c5c3c365
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures, "GetAvailableAudioCultures" }, // 4307a70cddc372b4f8518287c8edf9a0109e4e26
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture, "GetCurrentAudioCulture" }, // 00d16cfc10e6e1b62c718be1d73e933d28c36b56
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetCurrentOutdoorsRoomParameters, "GetCurrentOutdoorsRoomParameters" }, // 5b66f22ff24205c3cb97d11c5a91066dadf357b1
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetOrCreateAkComponent, "GetOrCreateAkComponent" }, // eb818a07b76f92d7be6a729a9a808cf14b84749f
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue, "GetRTPCValue" }, // 96bad0ce5b3bb979030675a3825d4a3ae7867cb3
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles, "GetSpeakerAngles" }, // 3d1070b710657925411b8f551f8425d11a751f5d
		{ &Z_Construct_UFunction_UAkGameplayStatics_IsEditor, "IsEditor" }, // cf6af5c951740bd0d3a2340cbdafeb3b4b787bc8
		{ &Z_Construct_UFunction_UAkGameplayStatics_IsGame, "IsGame" }, // 58c4608982af8579c9555c86920814eb5e62066f
		{ &Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank, "LoadInitBank" }, // cb57681109823ef31df1bba462d528b816907175
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent, "PostAndWaitForEndOfEvent" }, // 310c3ee3312f4ffae28f64c3e7108e506320adfb
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEvent, "PostEvent" }, // 8aef4e83086e79ecf9242a437d77d606f684b28a
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation, "PostEventAtLocation" }, // 555a6a181b9d0b4aca1fe6fbf213168d6b86177a
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventOutdoors, "PostEventOutdoors" }, // fe9a0d23c01abc839327425059de515b8fd33cb2
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostTrigger, "PostTrigger" }, // 7c6c16b73239111ce9f4902bdcbaf93c4f8b8205
		{ &Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput, "RemoveOutput" }, // 942608fb835d410c6659ab7571e3888f784878e5
		{ &Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput, "ReplaceMainOutput" }, // 8b4c31efaa559a05c05c717a70267b01608395a6
		{ &Z_Construct_UFunction_UAkGameplayStatics_ResetOutdoorsRoomParams, "ResetOutdoorsRoomParams" }, // 3ada2ddb040efd51cae55fdd113bc89db07e4318
		{ &Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue, "ResetRTPCValue" }, // e6cac8e6bcce390062006035ae5a412076e189e1
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect, "SetActorMixerEffect" }, // 0d290f158312151c44b2d036296126361dddb1e6
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect, "SetAuxBusEffect" }, // 5fb09d5246945e09cf0bcaacb2ac7d8906cb7ba8
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig, "SetBusConfig" }, // e7fca720da0fdc9509bbc635f6e761243f39a3ef
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID, "SetBusEffectByID" }, // 880d482441cc0442a9e76616d6c92fb2c4d290b3
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName, "SetBusEffectByName" }, // 10b6e43d1694c17a217944f01300a5ed48c7b8ad
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture, "SetCurrentAudioCulture" }, // c99d928efaedeee17683720edc9558d91bd086ed
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync, "SetCurrentAudioCultureAsync" }, // 8b675ff96b35edb679ed563c4199804f56d29b46
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder, "SetDiffractionOrder" }, // bd6184df2479adc6d761bf8a99dd63f0c2c48ec3
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe, "SetDistanceProbe" }, // 523980cf924225a387c029240a028403d3e3c3e7
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction, "SetGameObjectToPortalObstruction" }, // 56f1a185c35efde36e8d0b442528767991bed247
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread, "SetLoadBalancingSpread" }, // 61f0bb1cdf191b36f57f79f6382ebe181d79f721
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMaxDiffractionPaths, "SetMaxDiffractionPaths" }, // d365764974c8a3dcd710679f475aec18a099e442
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends, "SetMaxEmitterRoomAuxSends" }, // 73bf26dfd99e814af7645854a0ac5fde2f1b8d17
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMaxGlobalReflectionPaths, "SetMaxGlobalReflectionPaths" }, // c3aaea4ef4c0d99d8331a7331c6d74cf45bb609a
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions, "SetMultipleChannelEmitterPositions" }, // 3fe642e25f80d6d3a00fd7082fac30e036d455a0
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions, "SetMultipleChannelMaskEmitterPositions" }, // 21599320b9148febce5367569ef1ab05cf515406
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions, "SetMultiplePositions" }, // 7561a08fa1403917cc289e3a9162eeeb9e475636
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays, "SetNumberOfPrimaryRays" }, // 545fa624f42da2eacdf024806279046219022651
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval, "SetOcclusionRefreshInterval" }, // 723f5ff4e55af982bfe5e2d2f8d76c4064cb12d2
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetOutdoorsRoomParameters, "SetOutdoorsRoomParameters" }, // eefce31f3842c4640fe0e6b33c20c47c71101525
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume, "SetOutputBusVolume" }, // d4abec546d5eaf9cb3a0b313140d3283381dafb0
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect, "SetOutputDeviceEffect" }, // d46f888a9713f20dbf09c264a2f1a58fbc2d54b9
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule, "SetPanningRule" }, // 629682848cdbae3e7107e9f4b65de7ee8e11eed6
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion, "SetPortalObstructionAndOcclusion" }, // 315f55e610fe58acafc724a5f989efbfaee9142d
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction, "SetPortalToPortalObstruction" }, // 5613284c006019016de7615fc2014c045db5d820
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder, "SetReflectionsOrder" }, // fd83943e3599beb1231160f26122aba7e47d9fba
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue, "SetRTPCValue" }, // 1faddbd176fdc281c0225385db7af5c96e81d126
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetSmoothingConstant, "SetSmoothingConstant" }, // f42a1cdfe158afa549448906f1e12cc974837050
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles, "SetSpeakerAngles" }, // c5e6b361537c31f7a3cb7ee910cc45234a4edfe7
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetState, "SetState" }, // 431b451a6d5469b9a2e78680cf5380922dda3db5
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetSwitch, "SetSwitch" }, // 94771ef5b1d3d21c9bf5048976c2c384a1454a5e
		{ &Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation, "SpawnAkComponentAtLocation" }, // c26033762cdbf0a45032596a3c8adb0696ba6e47
		{ &Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds, "StartAllAmbientSounds" }, // f04974fc537c6da04e18c2d4590425833379454d
		{ &Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture, "StartOutputCapture" }, // 0b15ac6ce53555dd653febaff3e5c1d1213bfd55
		{ &Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture, "StartProfilerCapture" }, // a838a40affeb1e52f8e2f480e7963921d1b9ae16
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopActor, "StopActor" }, // 05e936bef26886ffbd1174737185e00d44a743c8
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopAll, "StopAll" }, // 711e4e64b4f2d001d5103e7367723dfa952f98e1
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds, "StopAllAmbientSounds" }, // 0eb86180e116986cc7a5883db885fe2baa9d2d0b
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopOutdoors, "StopOutdoors" }, // c99f3077c97dd5f82496632e5a9d562facd79d25
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture, "StopOutputCapture" }, // 7dbae6ae7e932d6038f868a63a47c691ad5350ec
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture, "StopProfilerCapture" }, // 173c480dad4f4f45c4121a49ed719914bc2b10f1
		{ &Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank, "UnloadInitBank" }, // fb44d3f843b05d4a6407e413dab63597949755c0
		{ &Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes, "UseReverbVolumes" }, // 9689fad3ac0448ab5f4b73759cd13523fc6556f6
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGameplayStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkGameplayStatics,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAkGameplayStatics_StaticRegisterNativesUAkGameplayStatics()
{
	UClass* Class = UAkGameplayStatics::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkGameplayStatics;
UClass* Z_Construct_UClass_UAkGameplayStatics(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkGameplayStatics;
		if (!Z_Registration_Info_UClass_UAkGameplayStatics.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkGameplayStatics"),
				Z_Registration_Info_UClass_UAkGameplayStatics.InnerSingleton,
				UAkGameplayStatics_StaticRegisterNativesUAkGameplayStatics,
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
		return Z_Registration_Info_UClass_UAkGameplayStatics.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkGameplayStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGameplayStatics.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkGameplayStatics.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkGameplayStatics);
UAkGameplayStatics::~UAkGameplayStatics() {}
// ********** End Class UAkGameplayStatics *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAkOutdoorsRoomParameters, Z_Construct_UScriptStruct_FAkOutdoorsRoomParameters_Statics::NewStructOps, TEXT("AkOutdoorsRoomParameters"),&Z_Registration_Info_UScriptStruct_FAkOutdoorsRoomParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkOutdoorsRoomParameters), 3804347997U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkGameplayStatics, TEXT("UAkGameplayStatics"), &Z_Registration_Info_UClass_UAkGameplayStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGameplayStatics), 1925899037U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h__Script_AkAudio_8395766009fd83ab69a2fad20e1b37af6c5435df{
	TEXT("/Script/AkAudio"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
