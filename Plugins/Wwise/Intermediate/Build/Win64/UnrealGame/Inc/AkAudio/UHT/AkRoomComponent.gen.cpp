// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkRoomComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkRoomComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkRoomComponent Function GetPrimitiveParent *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics
struct UHT_STATICS
{
	struct AkRoomComponent_eventGetPrimitiveParent_Parms
	{
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkRoomComponent" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPrimitiveParent constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPrimitiveParent constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPrimitiveParent Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkRoomComponent_eventGetPrimitiveParent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPrimitiveParent Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkRoomComponent, nullptr, "GetPrimitiveParent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkRoomComponent_eventGetPrimitiveParent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkRoomComponent_eventGetPrimitiveParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkRoomComponent::execGetPrimitiveParent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetPrimitiveParent();
	P_NATIVE_END;
}
// ********** End Class UAkRoomComponent Function GetPrimitiveParent *******************************

// ********** Begin Class UAkRoomComponent Function RemoveReverbZone *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkRoomComponent_RemoveReverbZone_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkRoomComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Removes this Reverb Zone from its parent.\n\x09* Sound can no longer propagate between the two Rooms, unless they are explicitly connected with a Portal.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes this Reverb Zone from its parent.\nSound can no longer propagate between the two Rooms, unless they are explicitly connected with a Portal." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveReverbZone constinit property declarations **********************
// ********** End Function RemoveReverbZone constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkRoomComponent, nullptr, "RemoveReverbZone", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkRoomComponent_RemoveReverbZone(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkRoomComponent::execRemoveReverbZone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveReverbZone();
	P_NATIVE_END;
}
// ********** End Class UAkRoomComponent Function RemoveReverbZone *********************************

// ********** Begin Class UAkRoomComponent Function SetAuxSendLevel ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkRoomComponent_SetAuxSendLevel_Statics
struct UHT_STATICS
{
	struct AkRoomComponent_eventSetAuxSendLevel_Parms
	{
		float InAuxSendLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkRoomComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the Send level. A value of 0 disables the aux send.\n\x09* @param InAuxSendLevel - The new value for the Send level. Valid range 0.0f-1.0f.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Send level. A value of 0 disables the aux send.\n@param InAuxSendLevel - The new value for the Send level. Valid range 0.0f-1.0f." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetAuxSendLevel constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAuxSendLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAuxSendLevel constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAuxSendLevel Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InAuxSendLevel = { "InAuxSendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkRoomComponent_eventSetAuxSendLevel_Parms, InAuxSendLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InAuxSendLevel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAuxSendLevel Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkRoomComponent, nullptr, "SetAuxSendLevel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkRoomComponent_eventSetAuxSendLevel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkRoomComponent_eventSetAuxSendLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkRoomComponent_SetAuxSendLevel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkRoomComponent::execSetAuxSendLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAuxSendLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAuxSendLevel(Z_Param_InAuxSendLevel);
	P_NATIVE_END;
}
// ********** End Class UAkRoomComponent Function SetAuxSendLevel **********************************

// ********** Begin Class UAkRoomComponent Function SetDynamic *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkRoomComponent_SetDynamic_Statics
struct UHT_STATICS
{
	struct AkRoomComponent_eventSetDynamic_Parms
	{
		bool bInDynamic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkRoomComponent" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDynamic constinit property declarations ****************************
	static void NewProp_bInDynamic_SetBit(void* Obj)
	{
		((AkRoomComponent_eventSetDynamic_Parms*)Obj)->bInDynamic = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInDynamic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDynamic constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDynamic Property Definitions ***************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInDynamic = { "bInDynamic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkRoomComponent_eventSetDynamic_Parms), &UHT_STATICS::NewProp_bInDynamic_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInDynamic,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDynamic Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkRoomComponent, nullptr, "SetDynamic", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkRoomComponent_eventSetDynamic_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkRoomComponent_eventSetDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkRoomComponent_SetDynamic(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkRoomComponent::execSetDynamic)
{
	P_GET_UBOOL(Z_Param_bInDynamic);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDynamic(Z_Param_bInDynamic);
	P_NATIVE_END;
}
// ********** End Class UAkRoomComponent Function SetDynamic ***************************************

// ********** Begin Class UAkRoomComponent Function SetEnable **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkRoomComponent_SetEnable_Statics
struct UHT_STATICS
{
	struct AkRoomComponent_eventSetEnable_Parms
	{
		bool bInEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkRoomComponent" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetEnable constinit property declarations *****************************
	static void NewProp_bInEnable_SetBit(void* Obj)
	{
		((AkRoomComponent_eventSetEnable_Parms*)Obj)->bInEnable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEnable constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEnable Property Definitions ****************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnable = { "bInEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkRoomComponent_eventSetEnable_Parms), &UHT_STATICS::NewProp_bInEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEnable Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkRoomComponent, nullptr, "SetEnable", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkRoomComponent_eventSetEnable_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkRoomComponent_eventSetEnable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkRoomComponent_SetEnable(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkRoomComponent::execSetEnable)
{
	P_GET_UBOOL(Z_Param_bInEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnable(Z_Param_bInEnable);
	P_NATIVE_END;
}
// ********** End Class UAkRoomComponent Function SetEnable ****************************************

// ********** Begin Class UAkRoomComponent Function SetEnableReverbZone ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkRoomComponent_SetEnableReverbZone_Statics
struct UHT_STATICS
{
	struct AkRoomComponent_eventSetEnableReverbZone_Parms
	{
		bool bInEnableReverbZone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkRoomComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set bEnableReverbZone to a new value and set or remove the Reverb Zone in Wwise. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set bEnableReverbZone to a new value and set or remove the Reverb Zone in Wwise." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetEnableReverbZone constinit property declarations *******************
	static void NewProp_bInEnableReverbZone_SetBit(void* Obj)
	{
		((AkRoomComponent_eventSetEnableReverbZone_Parms*)Obj)->bInEnableReverbZone = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableReverbZone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEnableReverbZone constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEnableReverbZone Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnableReverbZone = { "bInEnableReverbZone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkRoomComponent_eventSetEnableReverbZone_Parms), &UHT_STATICS::NewProp_bInEnableReverbZone_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnableReverbZone,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEnableReverbZone Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkRoomComponent, nullptr, "SetEnableReverbZone", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkRoomComponent_eventSetEnableReverbZone_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkRoomComponent_eventSetEnableReverbZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkRoomComponent_SetEnableReverbZone(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkRoomComponent::execSetEnableReverbZone)
{
	P_GET_UBOOL(Z_Param_bInEnableReverbZone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableReverbZone(Z_Param_bInEnableReverbZone);
	P_NATIVE_END;
}
// ********** End Class UAkRoomComponent Function SetEnableReverbZone ******************************

// ********** Begin Class UAkRoomComponent Function SetGeometryComponent ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics
struct UHT_STATICS
{
	struct AkRoomComponent_eventSetGeometryComponent_Parms
	{
		UAkAcousticTextureSetComponent* textureSetComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkRoomComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the geometry component used to send the geometry of the Room to Wwise. For example, in a Blueprint that has a static mesh component with an AkGeometry child component, this function can be called in BeginPlay to associate that AkGeometry component with this Room component.\n\x09 *  If this Room component has a sibling AkGeometry component (or AkSurfaceReflectorSet component), they are automatically associated and there is no need to call this function.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the geometry component used to send the geometry of the Room to Wwise. For example, in a Blueprint that has a static mesh component with an AkGeometry child component, this function can be called in BeginPlay to associate that AkGeometry component with this Room component.\nIf this Room component has a sibling AkGeometry component (or AkSurfaceReflectorSet component), they are automatically associated and there is no need to call this function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_textureSetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGeometryComponent constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_textureSetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGeometryComponent constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGeometryComponent Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_textureSetComponent = { "textureSetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkRoomComponent_eventSetGeometryComponent_Parms, textureSetComponent), Z_Construct_UClass_UAkAcousticTextureSetComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_textureSetComponent_MetaData), NewProp_textureSetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_textureSetComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetGeometryComponent Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkRoomComponent, nullptr, "SetGeometryComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkRoomComponent_eventSetGeometryComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkRoomComponent_eventSetGeometryComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkRoomComponent::execSetGeometryComponent)
{
	P_GET_OBJECT(UAkAcousticTextureSetComponent,Z_Param_textureSetComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGeometryComponent(Z_Param_textureSetComponent);
	P_NATIVE_END;
}
// ********** End Class UAkRoomComponent Function SetGeometryComponent *****************************

// ********** Begin Class UAkRoomComponent Function SetReverbZone **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkRoomComponent_SetReverbZone_Statics
struct UHT_STATICS
{
	struct AkRoomComponent_eventSetReverbZone_Parms
	{
		const UAkRoomComponent* InParentRoom;
		float InTransitionRegionWidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkRoomComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Establishes a parent-child relationship between this Room and a parent Room and allows for sound propagation between them as if they were the same Room, without the need for a connecting Portal.\n\x09* Setting a Room as a Reverb Zone is useful in situations where two or more acoustic environments are not easily modeled as closed Rooms connected by Portals.\n\x09* Possible uses for Reverb Zones include: a covered area with no walls, a forested area within an outdoor space, or any situation where multiple reverb effects are desired within a common space.\n\x09* Reverb Zones have many advantages compared to standard Game-Defined Auxiliary Sends (that is compared to the AkLateReverbComponent or the AkReverbVolume). They are part of the wet path, and form reverb chains with other Rooms;\n\x09* they are spatialized according to their 3D extent; they are also subject to other acoustic phenomena simulated in Wwise Spatial Audio, such as diffraction and transmission.\n\x09* A Reverb Zone needs to be a Room component with an associated geometry.\n\x09*\n\x09* @param InParentRoom - The parent Room component. A parent Room can have multiple Reverb Zones, but a Reverb Zone can only have a single Parent. If a Room is already assigned to a parent Room, it is first removed from the old parent (exactly as if RemoveReverbZone were called), and is then assigned to the new parent Room. A Reverb Zone can be the parent of another Reverb Zone. A Room cannot be its own parent. Defaults to the 'Outdoors' Room if left empty.\n\x09* @param InTransitionRegionWidth - Width of the transition region between the Reverb Zone and its parent. The transition region acts the same way as Portal depth, but is centered around the Reverb Zone geometry. Transition regions are only added on surfaces where transmission loss is set to 0. The value must be positive. Negative values are treated as 0.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Establishes a parent-child relationship between this Room and a parent Room and allows for sound propagation between them as if they were the same Room, without the need for a connecting Portal.\nSetting a Room as a Reverb Zone is useful in situations where two or more acoustic environments are not easily modeled as closed Rooms connected by Portals.\nPossible uses for Reverb Zones include: a covered area with no walls, a forested area within an outdoor space, or any situation where multiple reverb effects are desired within a common space.\nReverb Zones have many advantages compared to standard Game-Defined Auxiliary Sends (that is compared to the AkLateReverbComponent or the AkReverbVolume). They are part of the wet path, and form reverb chains with other Rooms;\nthey are spatialized according to their 3D extent; they are also subject to other acoustic phenomena simulated in Wwise Spatial Audio, such as diffraction and transmission.\nA Reverb Zone needs to be a Room component with an associated geometry.\n\n@param InParentRoom - The parent Room component. A parent Room can have multiple Reverb Zones, but a Reverb Zone can only have a single Parent. If a Room is already assigned to a parent Room, it is first removed from the old parent (exactly as if RemoveReverbZone were called), and is then assigned to the new parent Room. A Reverb Zone can be the parent of another Reverb Zone. A Room cannot be its own parent. Defaults to the 'Outdoors' Room if left empty.\n@param InTransitionRegionWidth - Width of the transition region between the Reverb Zone and its parent. The transition region acts the same way as Portal depth, but is centered around the Reverb Zone geometry. Transition regions are only added on surfaces where transmission loss is set to 0. The value must be positive. Negative values are treated as 0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParentRoom_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetReverbZone constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InParentRoom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTransitionRegionWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetReverbZone constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetReverbZone Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InParentRoom = { "InParentRoom", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkRoomComponent_eventSetReverbZone_Parms, InParentRoom), Z_Construct_UClass_UAkRoomComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParentRoom_MetaData), NewProp_InParentRoom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InTransitionRegionWidth = { "InTransitionRegionWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkRoomComponent_eventSetReverbZone_Parms, InTransitionRegionWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InParentRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTransitionRegionWidth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetReverbZone Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkRoomComponent, nullptr, "SetReverbZone", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkRoomComponent_eventSetReverbZone_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkRoomComponent_eventSetReverbZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkRoomComponent_SetReverbZone(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkRoomComponent::execSetReverbZone)
{
	P_GET_OBJECT(UAkRoomComponent,Z_Param_InParentRoom);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTransitionRegionWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReverbZone(Z_Param_InParentRoom,Z_Param_InTransitionRegionWidth);
	P_NATIVE_END;
}
// ********** End Class UAkRoomComponent Function SetReverbZone ************************************

// ********** Begin Class UAkRoomComponent Function SetTransmissionLoss ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkRoomComponent_SetTransmissionLoss_Statics
struct UHT_STATICS
{
	struct AkRoomComponent_eventSetTransmissionLoss_Parms
	{
		float InTransmissionLoss;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkRoomComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the transmission loss value.\n\x09* @param InTransmissionLoss - The new value for the transmission loss. Valid range 0.0f-1.0f.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the transmission loss value.\n@param InTransmissionLoss - The new value for the transmission loss. Valid range 0.0f-1.0f." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetTransmissionLoss constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTransmissionLoss;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTransmissionLoss constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTransmissionLoss Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InTransmissionLoss = { "InTransmissionLoss", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkRoomComponent_eventSetTransmissionLoss_Parms, InTransmissionLoss), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTransmissionLoss,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTransmissionLoss Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkRoomComponent, nullptr, "SetTransmissionLoss", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkRoomComponent_eventSetTransmissionLoss_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkRoomComponent_eventSetTransmissionLoss_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkRoomComponent_SetTransmissionLoss(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkRoomComponent::execSetTransmissionLoss)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTransmissionLoss);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTransmissionLoss(Z_Param_InTransmissionLoss);
	P_NATIVE_END;
}
// ********** End Class UAkRoomComponent Function SetTransmissionLoss ******************************

// ********** Begin Class UAkRoomComponent Function UpdateParentRoomActor **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkRoomComponent_UpdateParentRoomActor_Statics
struct UHT_STATICS
{
	struct AkRoomComponent_eventUpdateParentRoomActor_Parms
	{
		AActor* InParentRoomActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkRoomComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set ParentRoomActor with a new actor and update the Reverb Zone in Wwise asynchronously. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set ParentRoomActor with a new actor and update the Reverb Zone in Wwise asynchronously." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateParentRoomActor constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InParentRoomActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateParentRoomActor constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateParentRoomActor Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InParentRoomActor = { "InParentRoomActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkRoomComponent_eventUpdateParentRoomActor_Parms, InParentRoomActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InParentRoomActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateParentRoomActor Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkRoomComponent, nullptr, "UpdateParentRoomActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkRoomComponent_eventUpdateParentRoomActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkRoomComponent_eventUpdateParentRoomActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkRoomComponent_UpdateParentRoomActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkRoomComponent::execUpdateParentRoomActor)
{
	P_GET_OBJECT(AActor,Z_Param_InParentRoomActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateParentRoomActor(Z_Param_InParentRoomActor);
	P_NATIVE_END;
}
// ********** End Class UAkRoomComponent Function UpdateParentRoomActor ****************************

// ********** Begin Class UAkRoomComponent Function UpdateTransitionRegionWidth ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkRoomComponent_UpdateTransitionRegionWidth_Statics
struct UHT_STATICS
{
	struct AkRoomComponent_eventUpdateTransitionRegionWidth_Parms
	{
		float InTransitionRegionWidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkRoomComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set TransitionRegionWidth to a new value and updates the Reverb Zone in Wwise asynchronously. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set TransitionRegionWidth to a new value and updates the Reverb Zone in Wwise asynchronously." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateTransitionRegionWidth constinit property declarations ***********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTransitionRegionWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateTransitionRegionWidth constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateTransitionRegionWidth Property Definitions **********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InTransitionRegionWidth = { "InTransitionRegionWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkRoomComponent_eventUpdateTransitionRegionWidth_Parms, InTransitionRegionWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTransitionRegionWidth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateTransitionRegionWidth Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkRoomComponent, nullptr, "UpdateTransitionRegionWidth", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkRoomComponent_eventUpdateTransitionRegionWidth_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkRoomComponent_eventUpdateTransitionRegionWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkRoomComponent_UpdateTransitionRegionWidth(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkRoomComponent::execUpdateTransitionRegionWidth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTransitionRegionWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTransitionRegionWidth(Z_Param_InTransitionRegionWidth);
	P_NATIVE_END;
}
// ********** End Class UAkRoomComponent Function UpdateTransitionRegionWidth **********************

// ********** Begin Class UAkRoomComponent *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkRoomComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkRoomComponent.h" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "BlueprintSetter", "SetEnable" },
		{ "Category", "EnableComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Enable the Room Component to set this volume as a Spatial Audio Room. Additional properties are available in the Room and AkEvent categories.\n\x09*/" },
#endif
		{ "DisplayName", "Enable Room" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable the Room Component to set this volume as a Spatial Audio Room. Additional properties are available in the Room and AkEvent categories." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamic_MetaData[] = {
		{ "BlueprintSetter", "SetDynamic" },
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* If true, the Portal connections for this Room can change during runtime when this Room moves.\n\x09* For worlds containing many Portals, this can be expensive. Note that this Room's Portal connections \n\x09* may still change, even when Room Is Dynamic = false, when dynamic Portals are moved (that is when Portals\n\x09* move who have bDynamic = true).\n\x09*/" },
#endif
		{ "DisplayName", "Room Is Dynamic" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the Portal connections for this Room can change during runtime when this Room moves.\nFor worlds containing many Portals, this can be expensive. Note that this Room's Portal connections\nmay still change, even when Room Is Dynamic = false, when dynamic Portals are moved (that is when Portals\nmove who have bDynamic = true)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The precedence in which the Rooms is applied. In the case of overlapping Rooms, only the one\n\x09* with the highest priority is chosen. If two or more overlapping Rooms have the same\n\x09* priority, the chosen Room is unpredictable.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The precedence in which the Rooms is applied. In the case of overlapping Rooms, only the one\nwith the highest priority is chosen. If two or more overlapping Rooms have the same\npriority, the chosen Room is unpredictable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallOcclusion_MetaData[] = {
		{ "BlueprintSetter", "SetTransmissionLoss" },
		{ "Category", "Room" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Used to set the transmission loss value in wwise, on emitters in the Room, when no audio paths to the \n\x09* listener are found via sound propagation in Wwise Spatial Audio. This value can be thought of as \n\x09* 'thickness', as it relates to how much sound energy is transmitted through the wall. Valid range 0.0f-1.0f.\n\x09*/" },
#endif
		{ "DisplayName", "Transmission Loss" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to set the transmission loss value in wwise, on emitters in the Room, when no audio paths to the\nlistener are found via sound propagation in Wwise Spatial Audio. This value can be thought of as\n'thickness', as it relates to how much sound energy is transmitted through the wall. Valid range 0.0f-1.0f." },
#endif
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxSendLevel_MetaData[] = {
		{ "BlueprintSetter", "SetAuxSendLevel" },
		{ "Category", "AkEvent" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Send level for sounds that are posted on the room. Valid range: (0.f-1.f). A value of 0 disables the aux send.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send level for sounds that are posted on the room. Valid range: (0.f-1.f). A value of 0 disables the aux send." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoPost_MetaData[] = {
		{ "Category", "AkEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Automatically post the associated AkAudioEvent on BeginPlay */" },
#endif
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically post the associated AkAudioEvent on BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableReverbZone_MetaData[] = {
		{ "BlueprintSetter", "SetEnableReverbZone" },
		{ "Category", "ReverbZone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets this Room as a Reverb Zone.\n\x09* A Reverb Zone models a region that has a distinct reverb effect or ambience but does not require Portals to connect to neighboring Rooms.\n\x09* Use Reverb Zones instead of standard Rooms whenever there are no obvious walls,\n\x09* or generally when there is more negative space than positive space at the interface between the two regions.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets this Room as a Reverb Zone.\nA Reverb Zone models a region that has a distinct reverb effect or ambience but does not require Portals to connect to neighboring Rooms.\nUse Reverb Zones instead of standard Rooms whenever there are no obvious walls,\nor generally when there is more negative space than positive space at the interface between the two regions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentRoomActor_MetaData[] = {
		{ "BlueprintSetter", "UpdateParentRoomActor" },
		{ "Category", "ReverbZone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Establishes a parent-child relationship between two Rooms and allows for sound propagation between them\n\x09* as if they were the same Room, without the need for a connecting Portal.\n\x09* A parent Room can have multiple Reverb Zones, but a Reverb Zone can only have a single Parent.\n\x09* The Reverb Zone and its parent are both Rooms, and as such, must be specified using Enable Room.\n\x09* The automatically created 'outdoors' Room is commonly used as a parent Room for Reverb Zones, because they often model open spaces.\n\x09* When set to None (the default value), the Reverb Zone is automatically attached to the 'outdoors' Room.\n\x09*/" },
#endif
		{ "EditCondition", "bEnableReverbZone" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Establishes a parent-child relationship between two Rooms and allows for sound propagation between them\nas if they were the same Room, without the need for a connecting Portal.\nA parent Room can have multiple Reverb Zones, but a Reverb Zone can only have a single Parent.\nThe Reverb Zone and its parent are both Rooms, and as such, must be specified using Enable Room.\nThe automatically created 'outdoors' Room is commonly used as a parent Room for Reverb Zones, because they often model open spaces.\nWhen set to None (the default value), the Reverb Zone is automatically attached to the 'outdoors' Room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentRoomName_MetaData[] = {
		{ "Category", "ReverbZone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The name of the Parent Room of this Reverb Zone.\n\x09* If the Parent Room Actor is None, or if the Parent Room Actor is not valid, the 'outdoors' Room is chosen and printed here.\n\x09*/" },
#endif
		{ "EditCondition", "bEnableReverbZone" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the Parent Room of this Reverb Zone.\nIf the Parent Room Actor is None, or if the Parent Room Actor is not valid, the 'outdoors' Room is chosen and printed here." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRegionWidth_MetaData[] = {
		{ "BlueprintSetter", "UpdateTransitionRegionWidth" },
		{ "Category", "ReverbZone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Width of the transition region between the Reverb Zone and its parent.\n\x09* The transition region acts the same way as Portal depth, but is centered around the Reverb Zone geometry. Transition regions are only added on surfaces where transmission loss is set to 0.\n\x09* The value must be positive. Negative values are treated as 0.\n\x09*/" },
#endif
		{ "EditCondition", "bEnableReverbZone" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Width of the transition region between the Reverb Zone and its parent.\nThe transition region acts the same way as Portal depth, but is centered around the Reverb Zone geometry. Transition regions are only added on surfaces where transmission loss is set to 0.\nThe value must be positive. Negative values are treated as 0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenRooms_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentRoom_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkRoomComponent constinit property declarations *************************
	static void NewProp_bEnable_SetBit(void* Obj)
	{
		((UAkRoomComponent*)Obj)->bEnable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static void NewProp_bDynamic_SetBit(void* Obj)
	{
		((UAkRoomComponent*)Obj)->bDynamic = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallOcclusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AuxSendLevel;
	static void NewProp_AutoPost_SetBit(void* Obj)
	{
		((UAkRoomComponent*)Obj)->AutoPost = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoPost;
	static void NewProp_bEnableReverbZone_SetBit(void* Obj)
	{
		((UAkRoomComponent*)Obj)->bEnableReverbZone = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableReverbZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentRoomActor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentRoomName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionRegionWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ChildrenRooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildrenRooms;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentRoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkRoomComponent constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPrimitiveParent"), .Pointer = &UAkRoomComponent::execGetPrimitiveParent },
		{ .NameUTF8 = UTF8TEXT("RemoveReverbZone"), .Pointer = &UAkRoomComponent::execRemoveReverbZone },
		{ .NameUTF8 = UTF8TEXT("SetAuxSendLevel"), .Pointer = &UAkRoomComponent::execSetAuxSendLevel },
		{ .NameUTF8 = UTF8TEXT("SetDynamic"), .Pointer = &UAkRoomComponent::execSetDynamic },
		{ .NameUTF8 = UTF8TEXT("SetEnable"), .Pointer = &UAkRoomComponent::execSetEnable },
		{ .NameUTF8 = UTF8TEXT("SetEnableReverbZone"), .Pointer = &UAkRoomComponent::execSetEnableReverbZone },
		{ .NameUTF8 = UTF8TEXT("SetGeometryComponent"), .Pointer = &UAkRoomComponent::execSetGeometryComponent },
		{ .NameUTF8 = UTF8TEXT("SetReverbZone"), .Pointer = &UAkRoomComponent::execSetReverbZone },
		{ .NameUTF8 = UTF8TEXT("SetTransmissionLoss"), .Pointer = &UAkRoomComponent::execSetTransmissionLoss },
		{ .NameUTF8 = UTF8TEXT("UpdateParentRoomActor"), .Pointer = &UAkRoomComponent::execUpdateParentRoomActor },
		{ .NameUTF8 = UTF8TEXT("UpdateTransitionRegionWidth"), .Pointer = &UAkRoomComponent::execUpdateTransitionRegionWidth },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent, "GetPrimitiveParent" }, // 06e88050e8afbed36107a1396ccd9266a839a3a0
		{ &Z_Construct_UFunction_UAkRoomComponent_RemoveReverbZone, "RemoveReverbZone" }, // 6d25aabb5eb5295f8e2db45c21b360a86dd48a69
		{ &Z_Construct_UFunction_UAkRoomComponent_SetAuxSendLevel, "SetAuxSendLevel" }, // 662707c922041d546c898f95587e804d0c279d78
		{ &Z_Construct_UFunction_UAkRoomComponent_SetDynamic, "SetDynamic" }, // 75ff4f1428851eecaa8532b62712b8aab917fbd7
		{ &Z_Construct_UFunction_UAkRoomComponent_SetEnable, "SetEnable" }, // 37f199edea90473da4833a92fac7027856138158
		{ &Z_Construct_UFunction_UAkRoomComponent_SetEnableReverbZone, "SetEnableReverbZone" }, // dea481bf1b4e490d253e13fbd4290a711ae2d727
		{ &Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent, "SetGeometryComponent" }, // 22a389005f7598e178ff54c58679613c33842b73
		{ &Z_Construct_UFunction_UAkRoomComponent_SetReverbZone, "SetReverbZone" }, // fcfed3c8e54fab00e48d6380bb9c08d1db6ada37
		{ &Z_Construct_UFunction_UAkRoomComponent_SetTransmissionLoss, "SetTransmissionLoss" }, // 734312d2434c75e12f91845b2743475252e66e50
		{ &Z_Construct_UFunction_UAkRoomComponent_UpdateParentRoomActor, "UpdateParentRoomActor" }, // e227d1ef15bba66fe3c739a4743a3498b13551ba
		{ &Z_Construct_UFunction_UAkRoomComponent_UpdateTransitionRegionWidth, "UpdateTransitionRegionWidth" }, // 96c374561a4540dbbe5e093ba7e8e7751e5a673c
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkRoomComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkRoomComponent Property Definitions ************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkRoomComponent), &UHT_STATICS::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDynamic = { "bDynamic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkRoomComponent), &UHT_STATICS::NewProp_bDynamic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamic_MetaData), NewProp_bDynamic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkRoomComponent, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WallOcclusion = { "WallOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkRoomComponent, WallOcclusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallOcclusion_MetaData), NewProp_WallOcclusion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AuxSendLevel = { "AuxSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkRoomComponent, AuxSendLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxSendLevel_MetaData), NewProp_AuxSendLevel_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_AutoPost = { "AutoPost", nullptr, (EPropertyFlags)0x0010020000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkRoomComponent), &UHT_STATICS::NewProp_AutoPost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoPost_MetaData), NewProp_AutoPost_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableReverbZone = { "bEnableReverbZone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkRoomComponent), &UHT_STATICS::NewProp_bEnableReverbZone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableReverbZone_MetaData), NewProp_bEnableReverbZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParentRoomActor = { "ParentRoomActor", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkRoomComponent, ParentRoomActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentRoomActor_MetaData), NewProp_ParentRoomActor_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ParentRoomName = { "ParentRoomName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UAkRoomComponent, ParentRoomName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentRoomName_MetaData), NewProp_ParentRoomName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TransitionRegionWidth = { "TransitionRegionWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkRoomComponent, TransitionRegionWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionRegionWidth_MetaData), NewProp_TransitionRegionWidth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GeometryComponent = { "GeometryComponent", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkRoomComponent, GeometryComponent), Z_Construct_UClass_UAkAcousticTextureSetComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryComponent_MetaData), NewProp_GeometryComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_ChildrenRooms_Inner = { "ChildrenRooms", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkRoomComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ChildrenRooms = { "ChildrenRooms", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAkRoomComponent, ChildrenRooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildrenRooms_MetaData), NewProp_ChildrenRooms_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_ParentRoom = { "ParentRoom", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAkRoomComponent, ParentRoom), Z_Construct_UClass_UAkRoomComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentRoom_MetaData), NewProp_ParentRoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDynamic,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WallOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxSendLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutoPost,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableReverbZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentRoomActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentRoomName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransitionRegionWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeometryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChildrenRooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChildrenRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentRoom,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkRoomComponent Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkGameObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkRoomComponent,
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
static void UAkRoomComponent_StaticRegisterNativesUAkRoomComponent()
{
	UClass* Class = UAkRoomComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkRoomComponent;
UClass* Z_Construct_UClass_UAkRoomComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkRoomComponent;
		if (!Z_Registration_Info_UClass_UAkRoomComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkRoomComponent"),
				Z_Registration_Info_UClass_UAkRoomComponent.InnerSingleton,
				UAkRoomComponent_StaticRegisterNativesUAkRoomComponent,
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
		return Z_Registration_Info_UClass_UAkRoomComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkRoomComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkRoomComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkRoomComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkRoomComponent);
UAkRoomComponent::~UAkRoomComponent() {}
// ********** End Class UAkRoomComponent ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkRoomComponent, TEXT("UAkRoomComponent"), &Z_Registration_Info_UClass_UAkRoomComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkRoomComponent), 3270597568U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkRoomComponent_h__Script_AkAudio_e72b834e1fc041cc90958e7c0afcb147da31d1d1{
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
