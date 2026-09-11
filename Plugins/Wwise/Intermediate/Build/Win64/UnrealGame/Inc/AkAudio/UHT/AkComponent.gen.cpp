// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkComponent.h"
#include "Engine/LatentActionManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCollisionChannel(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EReflectionFilterBits *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EReflectionFilterBits>()
{
	return Z_Construct_UEnum_AkAudio_EReflectionFilterBits(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Bitflags", "" },
		{ "Ceiling.Name", "EReflectionFilterBits::Ceiling" },
		{ "Floor.Name", "EReflectionFilterBits::Floor" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "Wall.Name", "EReflectionFilterBits::Wall" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReflectionFilterBits::Wall", (int64)EReflectionFilterBits::Wall },
		{ "EReflectionFilterBits::Ceiling", (int64)EReflectionFilterBits::Ceiling },
		{ "EReflectionFilterBits::Floor", (int64)EReflectionFilterBits::Floor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EReflectionFilterBits",
	"EReflectionFilterBits",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EReflectionFilterBits;
UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EReflectionFilterBits.OuterSingleton)
		{
			ZRIE_EReflectionFilterBits.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EReflectionFilterBits, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EReflectionFilterBits"));
		}
		return ZRIE_EReflectionFilterBits.OuterSingleton;
	}
	if (!ZRIE_EReflectionFilterBits.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EReflectionFilterBits.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EReflectionFilterBits.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EReflectionFilterBits *******************************************************

// ********** Begin Class UAkComponent Function GetAttenuationRadius *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics
struct UHT_STATICS
{
	struct AkComponent_eventGetAttenuationRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return the real attenuation radius for this component (AttenuationScalingFactor * AkAudioEvent->MaxAttenuationRadius)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the real attenuation radius for this component (AttenuationScalingFactor * AkAudioEvent->MaxAttenuationRadius)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAttenuationRadius constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAttenuationRadius constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAttenuationRadius Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventGetAttenuationRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAttenuationRadius Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkComponent, nullptr, "GetAttenuationRadius", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkComponent_eventGetAttenuationRadius_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkComponent_eventGetAttenuationRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkComponent::execGetAttenuationRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttenuationRadius();
	P_NATIVE_END;
}
// ********** End Class UAkComponent Function GetAttenuationRadius *********************************

// ********** Begin Class UAkComponent Function GetOcclusionCollisionChannel ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel_Statics
struct UHT_STATICS
{
	struct AkComponent_eventGetOcclusionCollisionChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "AkComponent|Obstruction Occlusion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the collision channel used when doing line of sight traces for obstruction/occlusion calculations. */" },
#endif
		{ "DisplayName", "Get Collision Channel" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the collision channel used when doing line of sight traces for obstruction/occlusion calculations." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetOcclusionCollisionChannel constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOcclusionCollisionChannel constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOcclusionCollisionChannel Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventGetOcclusionCollisionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOcclusionCollisionChannel Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkComponent, nullptr, "GetOcclusionCollisionChannel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkComponent_eventGetOcclusionCollisionChannel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkComponent_eventGetOcclusionCollisionChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkComponent::execGetOcclusionCollisionChannel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetOcclusionCollisionChannel();
	P_NATIVE_END;
}
// ********** End Class UAkComponent Function GetOcclusionCollisionChannel *************************

// ********** Begin Class UAkComponent Function PostAkEventAndWaitForEnd ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics
struct UHT_STATICS
{
	struct AkComponent_eventPostAkEventAndWaitForEnd_Parms
	{
		UAkAudioEvent* AkEvent;
		FLatentActionInfo LatentInfo;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts an event to Wwise, using this component as the game object source, and wait until the event is\n\x09 * done playing to continue execution. Extra calls while the event is playing are ignored.\n\x09 *\n\x09 */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts an event to Wwise, using this component as the game object source, and wait until the event is\ndone playing to continue execution. Extra calls while the event is playing are ignored." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PostAkEventAndWaitForEnd constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAkEventAndWaitForEnd constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAkEventAndWaitForEnd Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 11bb40500dfc265650dc0f3ec8dbccc2dd509217
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostAkEventAndWaitForEnd Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkComponent, nullptr, "PostAkEventAndWaitForEnd", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkComponent_eventPostAkEventAndWaitForEnd_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkComponent_eventPostAkEventAndWaitForEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkComponent::execPostAkEventAndWaitForEnd)
{
	P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostAkEventAndWaitForEnd(Z_Param_AkEvent,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// ********** End Class UAkComponent Function PostAkEventAndWaitForEnd *****************************

// ********** Begin Class UAkComponent Function PostAssociatedAkEventAndWaitForEnd *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics
struct UHT_STATICS
{
	struct AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms
	{
		FLatentActionInfo LatentInfo;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "0" },
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts this component's AkAudioEvent to Wwise, using this component as the game object source, and wait until the event is \n\x09 * done playing to continue execution. Extra calls while the event is playing are ignored.\n\x09 */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts this component's AkAudioEvent to Wwise, using this component as the game object source, and wait until the event is\ndone playing to continue execution. Extra calls while the event is playing are ignored." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PostAssociatedAkEventAndWaitForEnd constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostAssociatedAkEventAndWaitForEnd constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostAssociatedAkEventAndWaitForEnd Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 11bb40500dfc265650dc0f3ec8dbccc2dd509217
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PostAssociatedAkEventAndWaitForEnd Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkComponent, nullptr, "PostAssociatedAkEventAndWaitForEnd", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkComponent::execPostAssociatedAkEventAndWaitForEnd)
{
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PostAssociatedAkEventAndWaitForEnd(Z_Param_LatentInfo);
	P_NATIVE_END;
}
// ********** End Class UAkComponent Function PostAssociatedAkEventAndWaitForEnd *******************

// ********** Begin Class UAkComponent Function SetEarlyReflectionsAuxBus **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics
struct UHT_STATICS
{
	struct AkComponent_eventSetEarlyReflectionsAuxBus_Parms
	{
		FString AuxBusName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Set the early reflections aux bus for this AK Component.\n\x09* Geometrical reflection calculation inside spatial audio is enabled for a game object if any sound playing on the game object has a valid early reflections aux bus specified in the authoring tool,\n\x09* or if an aux bus is specified via SetEarlyReflectionsAuxSend.\n\x09* The AuxBusName parameter of SetEarlyReflectionsAuxSend applies to sounds playing on the Wwise game object which have not specified an early reflection bus in the authoring tool -\n\x09* the parameter specified on individual sounds' reflection bus takes priority over the value passed in to SetEarlyReflectionsAuxSend.\n\x09* @param AuxBusName - Name of aux bus in the Wwise project.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the early reflections aux bus for this AK Component.\nGeometrical reflection calculation inside spatial audio is enabled for a game object if any sound playing on the game object has a valid early reflections aux bus specified in the authoring tool,\nor if an aux bus is specified via SetEarlyReflectionsAuxSend.\nThe AuxBusName parameter of SetEarlyReflectionsAuxSend applies to sounds playing on the Wwise game object which have not specified an early reflection bus in the authoring tool -\nthe parameter specified on individual sounds' reflection bus takes priority over the value passed in to SetEarlyReflectionsAuxSend.\n@param AuxBusName - Name of aux bus in the Wwise project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetEarlyReflectionsAuxBus constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEarlyReflectionsAuxBus constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEarlyReflectionsAuxBus Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventSetEarlyReflectionsAuxBus_Parms, AuxBusName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusName_MetaData), NewProp_AuxBusName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxBusName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEarlyReflectionsAuxBus Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkComponent, nullptr, "SetEarlyReflectionsAuxBus", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkComponent_eventSetEarlyReflectionsAuxBus_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkComponent_eventSetEarlyReflectionsAuxBus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkComponent::execSetEarlyReflectionsAuxBus)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AuxBusName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEarlyReflectionsAuxBus(Z_Param_AuxBusName);
	P_NATIVE_END;
}
// ********** End Class UAkComponent Function SetEarlyReflectionsAuxBus ****************************

// ********** Begin Class UAkComponent Function SetEarlyReflectionsVolume **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics
struct UHT_STATICS
{
	struct AkComponent_eventSetEarlyReflectionsVolume_Parms
	{
		float SendVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Set the early reflections volume for this AK Component. The SendVolume parameter is used to control the volume of the early reflections send. It is combined with the early reflections volume specified in the authoring tool,\n\x09* and is applied to all sounds playing on the Wwise game object.\n\x09* @param SendVolume - Send volume to the early reflections aux bus.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the early reflections volume for this AK Component. The SendVolume parameter is used to control the volume of the early reflections send. It is combined with the early reflections volume specified in the authoring tool,\nand is applied to all sounds playing on the Wwise game object.\n@param SendVolume - Send volume to the early reflections aux bus." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetEarlyReflectionsVolume constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SendVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEarlyReflectionsVolume constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEarlyReflectionsVolume Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SendVolume = { "SendVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventSetEarlyReflectionsVolume_Parms, SendVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SendVolume,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEarlyReflectionsVolume Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkComponent, nullptr, "SetEarlyReflectionsVolume", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkComponent_eventSetEarlyReflectionsVolume_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkComponent_eventSetEarlyReflectionsVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkComponent::execSetEarlyReflectionsVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SendVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEarlyReflectionsVolume(Z_Param_SendVolume);
	P_NATIVE_END;
}
// ********** End Class UAkComponent Function SetEarlyReflectionsVolume ****************************

// ********** Begin Class UAkComponent Function SetEnableSpotReflectors ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors_Statics
struct UHT_STATICS
{
	struct AkComponent_eventSetEnableSpotReflectors_Parms
	{
		bool in_enable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetEnableSpotReflectors constinit property declarations ***************
	static void NewProp_in_enable_SetBit(void* Obj)
	{
		((AkComponent_eventSetEnableSpotReflectors_Parms*)Obj)->in_enable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_in_enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEnableSpotReflectors constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEnableSpotReflectors Property Definitions **************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_in_enable = { "in_enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkComponent_eventSetEnableSpotReflectors_Parms), &UHT_STATICS::NewProp_in_enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_in_enable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEnableSpotReflectors Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkComponent, nullptr, "SetEnableSpotReflectors", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkComponent_eventSetEnableSpotReflectors_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkComponent_eventSetEnableSpotReflectors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkComponent::execSetEnableSpotReflectors)
{
	P_GET_UBOOL(Z_Param_in_enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableSpotReflectors(Z_Param_in_enable);
	P_NATIVE_END;
}
// ********** End Class UAkComponent Function SetEnableSpotReflectors ******************************

// ********** Begin Class UAkComponent Function SetGameObjectRadius ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkComponent_SetGameObjectRadius_Statics
struct UHT_STATICS
{
	struct AkComponent_eventSetGameObjectRadius_Parms
	{
		float in_outerRadius;
		float in_innerRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGameObjectRadius constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_in_outerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_in_innerRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGameObjectRadius constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGameObjectRadius Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_in_outerRadius = { "in_outerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventSetGameObjectRadius_Parms, in_outerRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_in_innerRadius = { "in_innerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventSetGameObjectRadius_Parms, in_innerRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_in_outerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_in_innerRadius,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetGameObjectRadius Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkComponent, nullptr, "SetGameObjectRadius", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkComponent_eventSetGameObjectRadius_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkComponent_eventSetGameObjectRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetGameObjectRadius(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkComponent::execSetGameObjectRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_in_outerRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_in_innerRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameObjectRadius(Z_Param_in_outerRadius,Z_Param_in_innerRadius);
	P_NATIVE_END;
}
// ********** End Class UAkComponent Function SetGameObjectRadius **********************************

// ********** Begin Class UAkComponent Function SetListeners ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkComponent_SetListeners_Statics
struct UHT_STATICS
{
	struct AkComponent_eventSetListeners_Parms
	{
		TArray<UAkComponent*> Listeners;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set a game object's listeners\n\x09 *\n\x09 * @param Listeners\x09The array of components that listen to this component\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a game object's listeners\n\n@param Listeners     The array of components that listen to this component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Listeners_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetListeners constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Listeners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Listeners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetListeners constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetListeners Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Listeners_Inner = { "Listeners", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Listeners = { "Listeners", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventSetListeners_Parms, Listeners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Listeners_MetaData), NewProp_Listeners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Listeners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Listeners,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetListeners Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkComponent, nullptr, "SetListeners", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkComponent_eventSetListeners_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkComponent_eventSetListeners_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetListeners(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkComponent::execSetListeners)
{
	P_GET_TARRAY_REF(UAkComponent*,Z_Param_Out_Listeners);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetListeners(Z_Param_Out_Listeners);
	P_NATIVE_END;
}
// ********** End Class UAkComponent Function SetListeners *****************************************

// ********** Begin Class UAkComponent Function SetOutputBusVolume *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics
struct UHT_STATICS
{
	struct AkComponent_eventSetOutputBusVolume_Parms
	{
		float BusVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the output bus volume (direct) to be used for the specified game object.\n\x09* The control value is a number ranging from 0.0f to 1.0f.\n\x09*\n\x09* @param BusVolume - Bus volume to set\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the output bus volume (direct) to be used for the specified game object.\nThe control value is a number ranging from 0.0f to 1.0f.\n\n@param BusVolume - Bus volume to set" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetOutputBusVolume constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BusVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOutputBusVolume constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOutputBusVolume Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BusVolume = { "BusVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkComponent_eventSetOutputBusVolume_Parms, BusVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BusVolume,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetOutputBusVolume Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkComponent, nullptr, "SetOutputBusVolume", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkComponent_eventSetOutputBusVolume_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkComponent_eventSetOutputBusVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkComponent::execSetOutputBusVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BusVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOutputBusVolume(Z_Param_BusVolume);
	P_NATIVE_END;
}
// ********** End Class UAkComponent Function SetOutputBusVolume ***********************************

// ********** Begin Class UAkComponent Function SetStopWhenOwnerDestroyed **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics
struct UHT_STATICS
{
	struct AkComponent_eventSetStopWhenOwnerDestroyed_Parms
	{
		bool bStopWhenOwnerDestroyed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether or not to stop sounds when the component's owner is destroyed\n\x09 *\n\x09 * @param bStopWhenOwnerDestroyed\x09Whether or not to stop sounds when the component's owner is destroyed\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether or not to stop sounds when the component's owner is destroyed\n\n@param bStopWhenOwnerDestroyed       Whether or not to stop sounds when the component's owner is destroyed" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetStopWhenOwnerDestroyed constinit property declarations *************
	static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((AkComponent_eventSetStopWhenOwnerDestroyed_Parms*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStopWhenOwnerDestroyed constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStopWhenOwnerDestroyed Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms), &UHT_STATICS::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStopWhenOwnerDestroyed,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetStopWhenOwnerDestroyed Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkComponent, nullptr, "SetStopWhenOwnerDestroyed", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkComponent_eventSetStopWhenOwnerDestroyed_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkComponent_eventSetStopWhenOwnerDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkComponent::execSetStopWhenOwnerDestroyed)
{
	P_GET_UBOOL(Z_Param_bStopWhenOwnerDestroyed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStopWhenOwnerDestroyed(Z_Param_bStopWhenOwnerDestroyed);
	P_NATIVE_END;
}
// ********** End Class UAkComponent Function SetStopWhenOwnerDestroyed ****************************

// ********** Begin Class UAkComponent *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09UAkComponent\n------------------------------------------------------------------------------------*/" },
#endif
		{ "DisplayName", "AkComponent" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAkComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpatialAudio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionCollisionChannel_MetaData[] = {
		{ "Category", "AkComponent|Obstruction Occlusion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The object collision channel to use when doing line of sight traces for obstruction/occlusion calculations.\n\x09* When set to 'Use Integration Settings Default', the value will be taken from the DefaultCollisionChannel in the Wwise Integration Settings.\n\x09*/" },
#endif
		{ "DisplayName", "Collision Channel" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object collision channel to use when doing line of sight traces for obstruction/occlusion calculations.\nWhen set to 'Use Integration Settings Default', the value will be taken from the DefaultCollisionChannel in the Wwise Integration Settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionRefreshInterval_MetaData[] = {
		{ "Category", "AkComponent|Obstruction Occlusion" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the time interval between obstruction/occlusion checks (direct line of sight between the listener and this game object). Valid range [0, [.\n\x09* Obstruction is used if Spatial Audio Rooms are present in the map. Otherwise, occlusion is used. Set to 0 to disable obstruction/occlusion on this component.\n\x09* The obstruction/occlusion value is directly applied with AK::SoundEngine::SetObjectObstructionAndOcclusion.\n\x09* When using Spatial Audio, obstruction checks are also done between portals in the same room and this game object.\n\x09* Only use this feature if you plan to obstruct this game object with geometry that is neither \\ref features_objects_aksurfacereflectorset nor \\ref features_objects_akgeometrycomponent.\n\x09* If not, we recommend that you disable obstruction/occlusion checks and exclusively use Spatial Audio Geometric Diffraction and Transmission.\n\x09*/" },
#endif
		{ "DisplayName", "Refresh Interval" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the time interval between obstruction/occlusion checks (direct line of sight between the listener and this game object). Valid range [0, [.\nObstruction is used if Spatial Audio Rooms are present in the map. Otherwise, occlusion is used. Set to 0 to disable obstruction/occlusion on this component.\nThe obstruction/occlusion value is directly applied with AK::SoundEngine::SetObjectObstructionAndOcclusion.\nWhen using Spatial Audio, obstruction checks are also done between portals in the same room and this game object.\nOnly use this feature if you plan to obstruct this game object with geometry that is neither \\ref features_objects_aksurfacereflectorset nor \\ref features_objects_akgeometrycomponent.\nIf not, we recommend that you disable obstruction/occlusion checks and exclusively use Spatial Audio Geometric Diffraction and Transmission." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableSpotReflectors_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Enable spot reflectors for this Ak Component **/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable spot reflectors for this Ak Component *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_outerRadius_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Radial Emitter" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Define an outer radius around each sound position to simulate a radial sound source.\n\x09*\x09If the listener is outside the outer radius, the spread is defined by the area that the sphere takes in the listener field of view.\n\x09*\x09When the listener intersects the outer radius, the spread is exactly 50%. When the listener is in between the inner and outer radius, the spread interpolates linearly from 50% to 100%.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define an outer radius around each sound position to simulate a radial sound source.\nIf the listener is outside the outer radius, the spread is defined by the area that the sphere takes in the listener field of view.\nWhen the listener intersects the outer radius, the spread is exactly 50%. When the listener is in between the inner and outer radius, the spread interpolates linearly from 50% to 100%." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_innerRadius_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Radial Emitter" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Define an inner radius around each sound position to simulate a radial sound source.\n\x09*\x09If the listener is inside the inner radius, the spread is 100%.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define an inner radius around each sound position to simulate a radial sound source.\nIf the listener is inside the inner radius, the spread is 100%." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBus_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09*\x09Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\n\x09*\x09Note that the Wwise Auxiliary Bus for early reflections can also be set per-sound in the Sound Property Editor in the Wwise Authoring tool. \n\x09*\x09Setting a value here will apply only to sounds playing on the AK Component that do not have an Auxiliary Bus set in the Wwise Authoring tool.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\nNote that the Wwise Auxiliary Bus for early reflections can also be set per-sound in the Sound Property Editor in the Wwise Authoring tool.\nSetting a value here will apply only to sounds playing on the AK Component that do not have an Auxiliary Bus set in the Wwise Authoring tool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBusName_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\n\x09*\x09Note that the Wwise Auxiliary Bus for early reflections can also be set per-sound in the Sound Property Editor in the Wwise Authoring tool.\n\x09*\x09Setting a value here will apply only to sounds playing on the AK Component that do not have an Auxiliary Bus set in the Wwise Authoring tool.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\nNote that the Wwise Auxiliary Bus for early reflections can also be set per-sound in the Sound Property Editor in the Wwise Authoring tool.\nSetting a value here will apply only to sounds playing on the AK Component that do not have an Auxiliary Bus set in the Wwise Authoring tool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionBusSendGain_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Set the send volume for the early reflections Auxiliary Bus.\n\x09*\x09The send volume applied to this AK Component will be applied additively to the Auxiliary Send volume defined per-sound in the Wwise Authoring tool.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the send volume for the early reflections Auxiliary Bus.\nThe send volume applied to this AK Component will be applied additively to the Auxiliary Send volume defined per-sound in the Wwise Authoring tool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawFirstOrderReflections_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawSecondOrderReflections_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawHigherOrderReflections_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDiffraction_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseReverbVolumes_MetaData[] = {
		{ "Category", "AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to use reverb volumes or not */" },
#endif
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use reverb volumes or not" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAkComponent constinit property declarations *****************************
	static void NewProp_bUseSpatialAudio_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->bUseSpatialAudio_DEPRECATED = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpatialAudio;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionCollisionChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionRefreshInterval;
	static void NewProp_EnableSpotReflectors_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->EnableSpotReflectors = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSpotReflectors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_outerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_innerRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EarlyReflectionAuxBus;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EarlyReflectionAuxBusName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionBusSendGain;
	static void NewProp_DrawFirstOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawFirstOrderReflections = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawFirstOrderReflections;
	static void NewProp_DrawSecondOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawSecondOrderReflections = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawSecondOrderReflections;
	static void NewProp_DrawHigherOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawHigherOrderReflections = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawHigherOrderReflections;
	static void NewProp_DrawDiffraction_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawDiffraction = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDiffraction;
	static void NewProp_bUseReverbVolumes_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->bUseReverbVolumes = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseReverbVolumes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkComponent constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAttenuationRadius"), .Pointer = &UAkComponent::execGetAttenuationRadius },
		{ .NameUTF8 = UTF8TEXT("GetOcclusionCollisionChannel"), .Pointer = &UAkComponent::execGetOcclusionCollisionChannel },
		{ .NameUTF8 = UTF8TEXT("PostAkEventAndWaitForEnd"), .Pointer = &UAkComponent::execPostAkEventAndWaitForEnd },
		{ .NameUTF8 = UTF8TEXT("PostAssociatedAkEventAndWaitForEnd"), .Pointer = &UAkComponent::execPostAssociatedAkEventAndWaitForEnd },
		{ .NameUTF8 = UTF8TEXT("SetEarlyReflectionsAuxBus"), .Pointer = &UAkComponent::execSetEarlyReflectionsAuxBus },
		{ .NameUTF8 = UTF8TEXT("SetEarlyReflectionsVolume"), .Pointer = &UAkComponent::execSetEarlyReflectionsVolume },
		{ .NameUTF8 = UTF8TEXT("SetEnableSpotReflectors"), .Pointer = &UAkComponent::execSetEnableSpotReflectors },
		{ .NameUTF8 = UTF8TEXT("SetGameObjectRadius"), .Pointer = &UAkComponent::execSetGameObjectRadius },
		{ .NameUTF8 = UTF8TEXT("SetListeners"), .Pointer = &UAkComponent::execSetListeners },
		{ .NameUTF8 = UTF8TEXT("SetOutputBusVolume"), .Pointer = &UAkComponent::execSetOutputBusVolume },
		{ .NameUTF8 = UTF8TEXT("SetStopWhenOwnerDestroyed"), .Pointer = &UAkComponent::execSetStopWhenOwnerDestroyed },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkComponent_GetAttenuationRadius, "GetAttenuationRadius" }, // 3f3830636694182d06487aec2b42c0eb7fa3d0f8
		{ &Z_Construct_UFunction_UAkComponent_GetOcclusionCollisionChannel, "GetOcclusionCollisionChannel" }, // 52ca5f1f31eb770beac71c57cc3160943f155c82
		{ &Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd, "PostAkEventAndWaitForEnd" }, // 663f35a1456da95e8cd2bc2699dc8a794e6b2905
		{ &Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd, "PostAssociatedAkEventAndWaitForEnd" }, // 41676f5ce7c423a230b9bffd3e42dac43889e72b
		{ &Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus, "SetEarlyReflectionsAuxBus" }, // 08fd629f067da051018c44061ab501914d51218e
		{ &Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume, "SetEarlyReflectionsVolume" }, // 56c8630b964dd85f27c29eaf42693611a303559c
		{ &Z_Construct_UFunction_UAkComponent_SetEnableSpotReflectors, "SetEnableSpotReflectors" }, // da8e50768bdceb2aef1b86be6c203440a5723320
		{ &Z_Construct_UFunction_UAkComponent_SetGameObjectRadius, "SetGameObjectRadius" }, // 9689e233a6c14408cc7ba546aab0273f888d301d
		{ &Z_Construct_UFunction_UAkComponent_SetListeners, "SetListeners" }, // 417100a712ff9aa864b7ebacafb10f2da5d52f5c
		{ &Z_Construct_UFunction_UAkComponent_SetOutputBusVolume, "SetOutputBusVolume" }, // 3729eddf9504454c3fc912d6b76eb2888dae5252
		{ &Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed, "SetStopWhenOwnerDestroyed" }, // 1fe1825ac9308ef06cf2e8d7c4ce9c6fbecf0381
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkComponent Property Definitions ****************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseSpatialAudio = { "bUseSpatialAudio", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &UHT_STATICS::NewProp_bUseSpatialAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpatialAudio_MetaData), NewProp_bUseSpatialAudio_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OcclusionCollisionChannel = { "OcclusionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, OcclusionCollisionChannel), Z_Construct_UEnum_AkAudio_EAkCollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionCollisionChannel_MetaData), NewProp_OcclusionCollisionChannel_MetaData) }; // 650ded9f922bca688f9a2912d930b7fea77a37e3
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OcclusionRefreshInterval = { "OcclusionRefreshInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, OcclusionRefreshInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionRefreshInterval_MetaData), NewProp_OcclusionRefreshInterval_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_EnableSpotReflectors = { "EnableSpotReflectors", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &UHT_STATICS::NewProp_EnableSpotReflectors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableSpotReflectors_MetaData), NewProp_EnableSpotReflectors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_outerRadius = { "outerRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, outerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_outerRadius_MetaData), NewProp_outerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_innerRadius = { "innerRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, innerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_innerRadius_MetaData), NewProp_innerRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EarlyReflectionAuxBus = { "EarlyReflectionAuxBus", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBus), Z_Construct_UClass_UAkAuxBus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarlyReflectionAuxBus_MetaData), NewProp_EarlyReflectionAuxBus_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_EarlyReflectionAuxBusName = { "EarlyReflectionAuxBusName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBusName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarlyReflectionAuxBusName_MetaData), NewProp_EarlyReflectionAuxBusName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EarlyReflectionBusSendGain = { "EarlyReflectionBusSendGain", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionBusSendGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarlyReflectionBusSendGain_MetaData), NewProp_EarlyReflectionBusSendGain_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DrawFirstOrderReflections = { "DrawFirstOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &UHT_STATICS::NewProp_DrawFirstOrderReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawFirstOrderReflections_MetaData), NewProp_DrawFirstOrderReflections_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DrawSecondOrderReflections = { "DrawSecondOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &UHT_STATICS::NewProp_DrawSecondOrderReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawSecondOrderReflections_MetaData), NewProp_DrawSecondOrderReflections_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DrawHigherOrderReflections = { "DrawHigherOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &UHT_STATICS::NewProp_DrawHigherOrderReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawHigherOrderReflections_MetaData), NewProp_DrawHigherOrderReflections_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DrawDiffraction = { "DrawDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &UHT_STATICS::NewProp_DrawDiffraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDiffraction_MetaData), NewProp_DrawDiffraction_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseReverbVolumes = { "bUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkComponent), &UHT_STATICS::NewProp_bUseReverbVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseReverbVolumes_MetaData), NewProp_bUseReverbVolumes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseSpatialAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OcclusionCollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OcclusionRefreshInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnableSpotReflectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_innerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EarlyReflectionAuxBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EarlyReflectionAuxBusName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EarlyReflectionBusSendGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrawFirstOrderReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrawSecondOrderReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrawHigherOrderReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrawDiffraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseReverbVolumes,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkComponent Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkGameObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkComponent,
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
static void UAkComponent_StaticRegisterNativesUAkComponent()
{
	UClass* Class = UAkComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkComponent;
UClass* Z_Construct_UClass_UAkComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkComponent;
		if (!Z_Registration_Info_UClass_UAkComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkComponent"),
				Z_Registration_Info_UClass_UAkComponent.InnerSingleton,
				UAkComponent_StaticRegisterNativesUAkComponent,
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
		return Z_Registration_Info_UClass_UAkComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkComponent);
UAkComponent::~UAkComponent() {}
// ********** End Class UAkComponent ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AkAudio_EReflectionFilterBits, TEXT("EReflectionFilterBits"), &ZRIE_EReflectionFilterBits, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3790100629U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkComponent, TEXT("UAkComponent"), &Z_Registration_Info_UClass_UAkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkComponent), 2326503279U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h__Script_AkAudio_ba7e8a53939cc69b637379b0c348dd41eda53a4f{
	TEXT("/Script/AkAudio"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
