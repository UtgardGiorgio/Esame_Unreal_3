// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAcousticPortal.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAcousticPortal() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AVolume(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkPortalComponent(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCollisionChannel(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkPortalComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkPortalComponent Function DisablePortal ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkPortalComponent_DisablePortal_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkPortalComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Disables the portal. Emitters positioned in the AkRoomComponent in front of and behind the portal do not emit through it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disables the portal. Emitters positioned in the AkRoomComponent in front of and behind the portal do not emit through it." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DisablePortal constinit property declarations *************************
// ********** End Function DisablePortal constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkPortalComponent, nullptr, "DisablePortal", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkPortalComponent_DisablePortal(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkPortalComponent::execDisablePortal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisablePortal();
	P_NATIVE_END;
}
// ********** End Class UAkPortalComponent Function DisablePortal **********************************

// ********** Begin Class UAkPortalComponent Function EnablePortal *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkPortalComponent_EnablePortal_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkPortalComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enables the portal. Emitters positioned in the AkRoomComponent in front of and behind the portal emit through it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the portal. Emitters positioned in the AkRoomComponent in front of and behind the portal emit through it." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnablePortal constinit property declarations **************************
// ********** End Function EnablePortal constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkPortalComponent, nullptr, "EnablePortal", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkPortalComponent_EnablePortal(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkPortalComponent::execEnablePortal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePortal();
	P_NATIVE_END;
}
// ********** End Class UAkPortalComponent Function EnablePortal ***********************************

// ********** Begin Class UAkPortalComponent Function GetCurrentState ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics
struct UHT_STATICS
{
	struct AkPortalComponent_eventGetCurrentState_Parms
	{
		AkAcousticPortalState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkPortalComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns an AkAcousticPortalState, which represents current the state of the portal: Enabled or Disabled.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an AkAcousticPortalState, which represents current the state of the portal: Enabled or Disabled." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentState constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentState constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentState Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AkPortalComponent_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(0, nullptr) }; // eccfa5b59bad72c00e03f3babdc182ac9c96cf35
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentState Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkPortalComponent, nullptr, "GetCurrentState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkPortalComponent_eventGetCurrentState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkPortalComponent_eventGetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkPortalComponent_GetCurrentState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkPortalComponent::execGetCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AkAcousticPortalState*)Z_Param__Result=P_THIS->GetCurrentState();
	P_NATIVE_END;
}
// ********** End Class UAkPortalComponent Function GetCurrentState ********************************

// ********** Begin Class UAkPortalComponent Function GetPortalOcclusion ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkPortalComponent_GetPortalOcclusion_Statics
struct UHT_STATICS
{
	struct AkPortalComponent_eventGetPortalOcclusion_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkPortalComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns a floating point number between 0 and 1 that represents the occlusion value applied to the portal. A value of 0 indicates that the portal is not occluded and a value of 1 indicates that it is completely occluded.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a floating point number between 0 and 1 that represents the occlusion value applied to the portal. A value of 0 indicates that the portal is not occluded and a value of 1 indicates that it is completely occluded." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPortalOcclusion constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPortalOcclusion constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPortalOcclusion Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkPortalComponent_eventGetPortalOcclusion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPortalOcclusion Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkPortalComponent, nullptr, "GetPortalOcclusion", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkPortalComponent_eventGetPortalOcclusion_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkPortalComponent_eventGetPortalOcclusion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkPortalComponent_GetPortalOcclusion(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkPortalComponent::execGetPortalOcclusion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPortalOcclusion();
	P_NATIVE_END;
}
// ********** End Class UAkPortalComponent Function GetPortalOcclusion *****************************

// ********** Begin Class UAkPortalComponent Function GetPrimitiveParent ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics
struct UHT_STATICS
{
	struct AkPortalComponent_eventGetPrimitiveParent_Parms
	{
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkPortalComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the UPrimitiveComponent to which this Ak Portal Component is attached.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the UPrimitiveComponent to which this Ak Portal Component is attached." },
#endif
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkPortalComponent_eventGetPrimitiveParent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPrimitiveParent Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkPortalComponent, nullptr, "GetPrimitiveParent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkPortalComponent_eventGetPrimitiveParent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkPortalComponent_eventGetPrimitiveParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkPortalComponent::execGetPrimitiveParent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetPrimitiveParent();
	P_NATIVE_END;
}
// ********** End Class UAkPortalComponent Function GetPrimitiveParent *****************************

// ********** Begin Class UAkPortalComponent Function PortalPlacementValid *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics
struct UHT_STATICS
{
	struct AkPortalComponent_eventPortalPlacementValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkPortalComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns true if the portal position and orientation are valid.\n\x09 * Portals have a front and a back room. They must have at least one connected room,\n\x09 * the front room must be different than the back room\n\x09 * and both Rooms cannot be part of the same Reverb Zone hierarchy.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the portal position and orientation are valid.\nPortals have a front and a back room. They must have at least one connected room,\nthe front room must be different than the back room\nand both Rooms cannot be part of the same Reverb Zone hierarchy." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PortalPlacementValid constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkPortalComponent_eventPortalPlacementValid_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PortalPlacementValid constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PortalPlacementValid Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkPortalComponent_eventPortalPlacementValid_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PortalPlacementValid Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkPortalComponent, nullptr, "PortalPlacementValid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkPortalComponent_eventPortalPlacementValid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkPortalComponent_eventPortalPlacementValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkPortalComponent::execPortalPlacementValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PortalPlacementValid();
	P_NATIVE_END;
}
// ********** End Class UAkPortalComponent Function PortalPlacementValid ***************************

// ********** Begin Class UAkPortalComponent Function SetDynamic ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkPortalComponent_SetDynamic_Statics
struct UHT_STATICS
{
	struct AkPortalComponent_eventSetDynamic_Parms
	{
		bool bInDynamic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "AkPortalComponent" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDynamic constinit property declarations ****************************
	static void NewProp_bInDynamic_SetBit(void* Obj)
	{
		((AkPortalComponent_eventSetDynamic_Parms*)Obj)->bInDynamic = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInDynamic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDynamic constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDynamic Property Definitions ***************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInDynamic = { "bInDynamic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkPortalComponent_eventSetDynamic_Parms), &UHT_STATICS::NewProp_bInDynamic_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInDynamic,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDynamic Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkPortalComponent, nullptr, "SetDynamic", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkPortalComponent_eventSetDynamic_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkPortalComponent_eventSetDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkPortalComponent_SetDynamic(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkPortalComponent::execSetDynamic)
{
	P_GET_UBOOL(Z_Param_bInDynamic);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDynamic(Z_Param_bInDynamic);
	P_NATIVE_END;
}
// ********** End Class UAkPortalComponent Function SetDynamic *************************************

// ********** Begin Class UAkPortalComponent Function SetPortalOcclusion ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkPortalComponent_SetPortalOcclusion_Statics
struct UHT_STATICS
{
	struct AkPortalComponent_eventSetPortalOcclusion_Parms
	{
		float InPortalOcclusion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkPortalComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a new portal occlusion value. A value of 0 indicates that the portal is not occluded and a value of 1 indicates that it is completely occluded.\n\x09 * The occlusion value is applied to the portal with AK::SpatialAudio::SetPortalObstructionAndOcclusion.\n\x09 * Portal occlusion can be used to modulate sound in response to a door opening or closing.\n\x09 *\n\x09 * @param InPortalOcclusion\x09The new portal occlusion value.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a new portal occlusion value. A value of 0 indicates that the portal is not occluded and a value of 1 indicates that it is completely occluded.\nThe occlusion value is applied to the portal with AK::SpatialAudio::SetPortalObstructionAndOcclusion.\nPortal occlusion can be used to modulate sound in response to a door opening or closing.\n\n@param InPortalOcclusion     The new portal occlusion value." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetPortalOcclusion constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPortalOcclusion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPortalOcclusion constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPortalOcclusion Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InPortalOcclusion = { "InPortalOcclusion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkPortalComponent_eventSetPortalOcclusion_Parms, InPortalOcclusion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InPortalOcclusion,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPortalOcclusion Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkPortalComponent, nullptr, "SetPortalOcclusion", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkPortalComponent_eventSetPortalOcclusion_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkPortalComponent_eventSetPortalOcclusion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkPortalComponent_SetPortalOcclusion(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkPortalComponent::execSetPortalOcclusion)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPortalOcclusion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPortalOcclusion(Z_Param_InPortalOcclusion);
	P_NATIVE_END;
}
// ********** End Class UAkPortalComponent Function SetPortalOcclusion *****************************

// ********** Begin Class UAkPortalComponent *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkPortalComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Advanced Attachment Volume Trigger PhysicsVolume" },
		{ "IncludePath", "AkAcousticPortal.h" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamic_MetaData[] = {
		{ "BlueprintSetter", "SetDynamic" },
		{ "Category", "AkPortalComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* If true, the room connections for this portal can change during runtime when this portal moves.\n\x09* For worlds containing many rooms, this can be expensive.\n\x09* Note that this portal's room connections may still change, even when bDynamic = false,\n\x09* when dynamic rooms are moved (i.e. when rooms move who have bDynamic = true),\n\x09* or rooms are enabled or disabled.\n\x09*/" },
#endif
		{ "DisplayName", "Is Dynamic" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the room connections for this portal can change during runtime when this portal moves.\nFor worlds containing many rooms, this can be expensive.\nNote that this portal's room connections may still change, even when bDynamic = false,\nwhen dynamic rooms are moved (i.e. when rooms move who have bDynamic = true),\nor rooms are enabled or disabled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[] = {
		{ "Category", "AkPortalComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Initially enables or disables the portal. When the portal is enabled, emitters positioned in the AkRoomComponent in front of and behind the portal emit through it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initially enables or disables the portal. When the portal is enabled, emitters positioned in the AkRoomComponent in front of and behind the portal emit through it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialOcclusion_MetaData[] = {
		{ "Category", "AkPortalComponent|Obstruction Occlusion" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The initial occlusion value applied to the portal. When the occlusion value is set to 0, the portal is not occluded, and when it is set to 1, the portal is completely occluded.\n\x09* Portal occlusion can be used to modulate sound in response to a door opening or closing.\n\x09* The initial occlusion value is directly applied to the portal with AK::SpatialAudio::SetPortalObstructionAndOcclusion at begin play with an obstruction value of 0.\n\x09* See the ObstructionRefreshInterval property for portal obstruction.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The initial occlusion value applied to the portal. When the occlusion value is set to 0, the portal is not occluded, and when it is set to 1, the portal is completely occluded.\nPortal occlusion can be used to modulate sound in response to a door opening or closing.\nThe initial occlusion value is directly applied to the portal with AK::SpatialAudio::SetPortalObstructionAndOcclusion at begin play with an obstruction value of 0.\nSee the ObstructionRefreshInterval property for portal obstruction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstructionRefreshInterval_MetaData[] = {
		{ "Category", "AkPortalComponent|Obstruction Occlusion" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time interval between obstruction checks; a direct line of sight between the current portal and an emitter, a listener, or another portal. Set to 0 to disable obstruction checks. Valid range [0, [.*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time interval between obstruction checks; a direct line of sight between the current portal and an emitter, a listener, or another portal. Set to 0 to disable obstruction checks. Valid range [0, [." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstructionCollisionChannel_MetaData[] = {
		{ "Category", "AkPortalComponent|Obstruction Occlusion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision channel for obstruction checks; a direct line of sight between the current portal and an emitter, a listener, or another portal. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision channel for obstruction checks; a direct line of sight between the current portal and an emitter, a listener, or another portal." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontRoomText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackRoomText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UAkPortalComponent constinit property declarations ***********************
	static void NewProp_bDynamic_SetBit(void* Obj)
	{
		((UAkPortalComponent*)Obj)->bDynamic = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamic;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitialState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialOcclusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstructionRefreshInterval;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObstructionCollisionChannel;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontRoomText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackRoomText;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkPortalComponent constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisablePortal"), .Pointer = &UAkPortalComponent::execDisablePortal },
		{ .NameUTF8 = UTF8TEXT("EnablePortal"), .Pointer = &UAkPortalComponent::execEnablePortal },
		{ .NameUTF8 = UTF8TEXT("GetCurrentState"), .Pointer = &UAkPortalComponent::execGetCurrentState },
		{ .NameUTF8 = UTF8TEXT("GetPortalOcclusion"), .Pointer = &UAkPortalComponent::execGetPortalOcclusion },
		{ .NameUTF8 = UTF8TEXT("GetPrimitiveParent"), .Pointer = &UAkPortalComponent::execGetPrimitiveParent },
		{ .NameUTF8 = UTF8TEXT("PortalPlacementValid"), .Pointer = &UAkPortalComponent::execPortalPlacementValid },
		{ .NameUTF8 = UTF8TEXT("SetDynamic"), .Pointer = &UAkPortalComponent::execSetDynamic },
		{ .NameUTF8 = UTF8TEXT("SetPortalOcclusion"), .Pointer = &UAkPortalComponent::execSetPortalOcclusion },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkPortalComponent_DisablePortal, "DisablePortal" }, // f9daeb3ad3a6f98cf0c647fed03a70319517c3ae
		{ &Z_Construct_UFunction_UAkPortalComponent_EnablePortal, "EnablePortal" }, // 4cb1cb8deff1eb8f9d89c1ed0797a16bcc662f1f
		{ &Z_Construct_UFunction_UAkPortalComponent_GetCurrentState, "GetCurrentState" }, // b68ad41a9cff9382b5b9abab04f83253ce21ab46
		{ &Z_Construct_UFunction_UAkPortalComponent_GetPortalOcclusion, "GetPortalOcclusion" }, // 1985f5b5c46f9e7f68eed1f0e8a013c1e956ab6e
		{ &Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent, "GetPrimitiveParent" }, // 08095c173b9eb6c483aca578b1e0dc9a3e5efd52
		{ &Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid, "PortalPlacementValid" }, // 5ef47cedcda61eee43b2ab26d228a05f165d1177
		{ &Z_Construct_UFunction_UAkPortalComponent_SetDynamic, "SetDynamic" }, // 6ef3ae9929c676da80fc4da1f31fb8ae866d9a52
		{ &Z_Construct_UFunction_UAkPortalComponent_SetPortalOcclusion, "SetPortalOcclusion" }, // fb385f18430394213ddc281f13e6908ee04fdcf7
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPortalComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkPortalComponent Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDynamic = { "bDynamic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkPortalComponent), &UHT_STATICS::NewProp_bDynamic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamic_MetaData), NewProp_bDynamic_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InitialState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAkPortalComponent, InitialState), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialState_MetaData), NewProp_InitialState_MetaData) }; // eccfa5b59bad72c00e03f3babdc182ac9c96cf35
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InitialOcclusion = { "InitialOcclusion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkPortalComponent, InitialOcclusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialOcclusion_MetaData), NewProp_InitialOcclusion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ObstructionRefreshInterval = { "ObstructionRefreshInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkPortalComponent, ObstructionRefreshInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstructionRefreshInterval_MetaData), NewProp_ObstructionRefreshInterval_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ObstructionCollisionChannel = { "ObstructionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UAkPortalComponent, ObstructionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstructionCollisionChannel_MetaData), NewProp_ObstructionCollisionChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FrontRoomText = { "FrontRoomText", nullptr, (EPropertyFlags)0x01c4000c00080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkPortalComponent, FrontRoomText), Z_Construct_UClass_UTextRenderComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontRoomText_MetaData), NewProp_FrontRoomText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BackRoomText = { "BackRoomText", nullptr, (EPropertyFlags)0x01c4000c00080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkPortalComponent, BackRoomText), Z_Construct_UClass_UTextRenderComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackRoomText_MetaData), NewProp_BackRoomText_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDynamic,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObstructionRefreshInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObstructionCollisionChannel,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrontRoomText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BackRoomText,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkPortalComponent Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USceneComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkPortalComponent,
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
static void UAkPortalComponent_StaticRegisterNativesUAkPortalComponent()
{
	UClass* Class = UAkPortalComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkPortalComponent;
UClass* Z_Construct_UClass_UAkPortalComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkPortalComponent;
		if (!Z_Registration_Info_UClass_UAkPortalComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkPortalComponent"),
				Z_Registration_Info_UClass_UAkPortalComponent.InnerSingleton,
				UAkPortalComponent_StaticRegisterNativesUAkPortalComponent,
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
		return Z_Registration_Info_UClass_UAkPortalComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkPortalComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkPortalComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkPortalComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkPortalComponent);
UAkPortalComponent::~UAkPortalComponent() {}
// ********** End Class UAkPortalComponent *********************************************************

// ********** Begin Class AAkAcousticPortal Function DisablePortal *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAkAcousticPortal_DisablePortal_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkAcousticPortal" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisablePortal constinit property declarations *************************
// ********** End Function DisablePortal constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAkAcousticPortal, nullptr, "DisablePortal", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AAkAcousticPortal_DisablePortal(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAkAcousticPortal::execDisablePortal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisablePortal();
	P_NATIVE_END;
}
// ********** End Class AAkAcousticPortal Function DisablePortal ***********************************

// ********** Begin Class AAkAcousticPortal Function EnablePortal **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAkAcousticPortal_EnablePortal_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkAcousticPortal" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnablePortal constinit property declarations **************************
// ********** End Function EnablePortal constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAkAcousticPortal, nullptr, "EnablePortal", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AAkAcousticPortal_EnablePortal(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAkAcousticPortal::execEnablePortal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePortal();
	P_NATIVE_END;
}
// ********** End Class AAkAcousticPortal Function EnablePortal ************************************

// ********** Begin Class AAkAcousticPortal Function GetCollisionChannel ***************************
#if WITH_EDITOR
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAkAcousticPortal_GetCollisionChannel_Statics
struct UHT_STATICS
{
	struct AkAcousticPortal_eventGetCollisionChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Fit to Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""Converts between EAkCollisionChannel and ECollisionChannel. Returns Wwise Integration Settings default if CollisionChannel == UseIntegrationSettingsDefault. Otherwise, casts CollisionChannel to ECollisionChannel.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts between EAkCollisionChannel and ECollisionChannel. Returns Wwise Integration Settings default if CollisionChannel == UseIntegrationSettingsDefault. Otherwise, casts CollisionChannel to ECollisionChannel." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCollisionChannel constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCollisionChannel constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCollisionChannel Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(AkAcousticPortal_eventGetCollisionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCollisionChannel Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAkAcousticPortal, nullptr, "GetCollisionChannel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkAcousticPortal_eventGetCollisionChannel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkAcousticPortal_eventGetCollisionChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAkAcousticPortal_GetCollisionChannel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAkAcousticPortal::execGetCollisionChannel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetCollisionChannel();
	P_NATIVE_END;
}
#endif
// ********** End Class AAkAcousticPortal Function GetCollisionChannel *****************************

// ********** Begin Class AAkAcousticPortal Function GetCurrentState *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics
struct UHT_STATICS
{
	struct AkAcousticPortal_eventGetCurrentState_Parms
	{
		AkAcousticPortalState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkAcousticPortal" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentState constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentState constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentState Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AkAcousticPortal_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(0, nullptr) }; // eccfa5b59bad72c00e03f3babdc182ac9c96cf35
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentState Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAkAcousticPortal, nullptr, "GetCurrentState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkAcousticPortal_eventGetCurrentState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkAcousticPortal_eventGetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAkAcousticPortal::execGetCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AkAcousticPortalState*)Z_Param__Result=P_THIS->GetCurrentState();
	P_NATIVE_END;
}
// ********** End Class AAkAcousticPortal Function GetCurrentState *********************************

// ********** Begin Class AAkAcousticPortal ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AAkAcousticPortal_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Advanced Attachment Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkAcousticPortal.h" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Portal_MetaData[] = {
		{ "Category", "AcousticPortal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitToGeometry_MetaData[] = {
		{ "Category", "Fit to Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""Automatically fit the Ak Acoustic Portal to surrounding geometry. The fitting operation is performed after enabling this property, or after moving the actor to a new location.\n\x09To find portals in surrounding geometry, rays emanating spherically outwards are cast from the origin of the actor in an attempt to detect sets of parallel surfaces.\n\x09The \"best\" detected parallel surfaces are indicated with yellow outline when dragging the actor to a new location.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically fit the Ak Acoustic Portal to surrounding geometry. The fitting operation is performed after enabling this property, or after moving the actor to a new location.\nTo find portals in surrounding geometry, rays emanating spherically outwards are cast from the origin of the actor in an attempt to detect sets of parallel surfaces.\nThe \"best\" detected parallel surfaces are indicated with yellow outline when dragging the actor to a new location." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Fit to Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Sets the collision channel for the ray traces performed to fit the portal to the surrounding geometry. When set to 'Use Integration Settings Default', the value will be taken from the DefaultFitToGeometryCollisionChannel in the Wwise Integration Settings.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the collision channel for the ray traces performed to fit the portal to the surrounding geometry. When set to 'Use Integration Settings Default', the value will be taken from the DefaultFitToGeometryCollisionChannel in the Wwise Integration Settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRadius_MetaData[] = {
		{ "Category", "Fit to Geometry" },
		{ "ClampMax", "100000.000000" },
		{ "ClampMin", "1.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Limits the effective portal opening size that can be detected when fitting the portal to surrounding geometry.\n\x09Increase this value to find larger openings; decrease it if large portals are erroneously detected, for example ones that span whole rooms.\n\x09The slider range can be expanded by entering a text value into this field.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Limits the effective portal opening size that can be detected when fitting the portal to surrounding geometry.\nIncrease this value to find larger openings; decrease it if large portals are erroneously detected, for example ones that span whole rooms.\nThe slider range can be expanded by entering a text value into this field." },
#endif
		{ "UIMax", "5000.000000" },
		{ "UIMin", "100.000000" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** As of Wwise 2020.1, the InitialState is contained in the AkPortalComponent */" },
#endif
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "As of Wwise 2020.1, the InitialState is contained in the AkPortalComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresStateMigration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkAcousticPortal.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAkAcousticPortal constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Portal;
#if WITH_EDITORONLY_DATA
	static void NewProp_FitToGeometry_SetBit(void* Obj)
	{
		((AAkAcousticPortal*)Obj)->FitToGeometry = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FitToGeometry;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionRadius;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitialState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialState;
	static void NewProp_bRequiresStateMigration_SetBit(void* Obj)
	{
		((AAkAcousticPortal*)Obj)->bRequiresStateMigration = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresStateMigration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAkAcousticPortal constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisablePortal"), .Pointer = &AAkAcousticPortal::execDisablePortal },
		{ .NameUTF8 = UTF8TEXT("EnablePortal"), .Pointer = &AAkAcousticPortal::execEnablePortal },
#if WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("GetCollisionChannel"), .Pointer = &AAkAcousticPortal::execGetCollisionChannel },
#endif // WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("GetCurrentState"), .Pointer = &AAkAcousticPortal::execGetCurrentState },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAkAcousticPortal_DisablePortal, "DisablePortal" }, // 6201c628adcad430fb375921c320e495365a4164
		{ &Z_Construct_UFunction_AAkAcousticPortal_EnablePortal, "EnablePortal" }, // 5852143661d70a95a0b82afddce8016406636e18
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AAkAcousticPortal_GetCollisionChannel, "GetCollisionChannel" }, // d9c0316714c768463c6432933b992d10e0ce9175
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState, "GetCurrentState" }, // 806daf2e352dfa49f7d8505c4cf435697a5f12cb
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkAcousticPortal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AAkAcousticPortal Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Portal = { "Portal", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AAkAcousticPortal, Portal), Z_Construct_UClass_UAkPortalComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Portal_MetaData), NewProp_Portal_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_FitToGeometry = { "FitToGeometry", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkAcousticPortal), &UHT_STATICS::NewProp_FitToGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitToGeometry_MetaData), NewProp_FitToGeometry_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(AAkAcousticPortal, CollisionChannel), Z_Construct_UEnum_AkAudio_EAkCollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 650ded9f922bca688f9a2912d930b7fea77a37e3
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DetectionRadius = { "DetectionRadius", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAkAcousticPortal, DetectionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionRadius_MetaData), NewProp_DetectionRadius_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InitialState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AAkAcousticPortal, InitialState), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialState_MetaData), NewProp_InitialState_MetaData) }; // eccfa5b59bad72c00e03f3babdc182ac9c96cf35
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRequiresStateMigration = { "bRequiresStateMigration", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkAcousticPortal), &UHT_STATICS::NewProp_bRequiresStateMigration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresStateMigration_MetaData), NewProp_bRequiresStateMigration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Portal,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FitToGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DetectionRadius,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRequiresStateMigration,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AAkAcousticPortal Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AVolume,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AAkAcousticPortal,
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
static void AAkAcousticPortal_StaticRegisterNativesAAkAcousticPortal()
{
	UClass* Class = AAkAcousticPortal::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAkAcousticPortal;
UClass* Z_Construct_UClass_AAkAcousticPortal(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AAkAcousticPortal;
		if (!Z_Registration_Info_UClass_AAkAcousticPortal.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkAcousticPortal"),
				Z_Registration_Info_UClass_AAkAcousticPortal.InnerSingleton,
				AAkAcousticPortal_StaticRegisterNativesAAkAcousticPortal,
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
		return Z_Registration_Info_UClass_AAkAcousticPortal.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AAkAcousticPortal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkAcousticPortal.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AAkAcousticPortal.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAkAcousticPortal);
AAkAcousticPortal::~AAkAcousticPortal() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AAkAcousticPortal)
// ********** End Class AAkAcousticPortal **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkPortalComponent, TEXT("UAkPortalComponent"), &Z_Registration_Info_UClass_UAkPortalComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkPortalComponent), 3373517556U) },
		{ Z_Construct_UClass_AAkAcousticPortal, TEXT("AAkAcousticPortal"), &Z_Registration_Info_UClass_AAkAcousticPortal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkAcousticPortal), 1118026668U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h__Script_AkAudio_1199ce21c842d40ec8daa22e1396c6a792528d61{
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
