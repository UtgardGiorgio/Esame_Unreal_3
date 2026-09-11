// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkSurfaceReflectorSetComponent.h"
#include "AkSurfaceReflectorSetUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkSurfaceReflectorSetComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkSurfaceReflectorSetComponent Function RemoveSurfaceReflectorSet *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove the geometry and the corresponding instance from Wwise. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove the geometry and the corresponding instance from Wwise." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveSurfaceReflectorSet constinit property declarations *************
// ********** End Function RemoveSurfaceReflectorSet constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "RemoveSurfaceReflectorSet", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveSurfaceReflectorSet();
	P_NATIVE_END;
}
// ********** End Class UAkSurfaceReflectorSetComponent Function RemoveSurfaceReflectorSet *********

// ********** Begin Class UAkSurfaceReflectorSetComponent Function SendSurfaceReflectorSet *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convert the brush to a geometry set consisting of vertices, triangles, surfaces, acoustic textures and transmission loss values.\n\x09* Send it to Wwise with the rest of the AkGeometryParams to add or update a geometry in Spatial Audio.\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateSurfaceReflectorSet(). */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert the brush to a geometry set consisting of vertices, triangles, surfaces, acoustic textures and transmission loss values.\nSend it to Wwise with the rest of the AkGeometryParams to add or update a geometry in Spatial Audio.\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateSurfaceReflectorSet()." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SendSurfaceReflectorSet constinit property declarations ***************
// ********** End Function SendSurfaceReflectorSet constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SendSurfaceReflectorSet", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendSurfaceReflectorSet();
	P_NATIVE_END;
}
// ********** End Class UAkSurfaceReflectorSetComponent Function SendSurfaceReflectorSet ***********

// ********** Begin Class UAkSurfaceReflectorSetComponent Function SetAcousticTexture **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture_Statics
struct UHT_STATICS
{
	struct AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms
	{
		TArray<int32> InSurfaceIndexesToEdit;
		UAkAcousticTexture* InAcousticTexture;
		bool bInEnableSurface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Update the AcousticTexture (Texture) of some of the faces on the brush geometry.\n\x09 * @param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n\x09 * @param InAcousticTexture - New AcousticTexture assigned to each surface.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the AcousticTexture (Texture) of some of the faces on the brush geometry.\n@param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n@param InAcousticTexture - New AcousticTexture assigned to each surface." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetAcousticTexture constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSurfaceIndexesToEdit_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSurfaceIndexesToEdit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAcousticTexture;
	static void NewProp_bInEnableSurface_SetBit(void* Obj)
	{
		((AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms*)Obj)->bInEnableSurface = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAcousticTexture constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAcousticTexture Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InSurfaceIndexesToEdit_Inner = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_InSurfaceIndexesToEdit = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms, InSurfaceIndexesToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InAcousticTexture = { "InAcousticTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms, InAcousticTexture), Z_Construct_UClass_UAkAcousticTexture, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnableSurface = { "bInEnableSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms), &UHT_STATICS::NewProp_bInEnableSurface_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSurfaceIndexesToEdit_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSurfaceIndexesToEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InAcousticTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnableSurface,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAcousticTexture Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SetAcousticTexture", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkSurfaceReflectorSetComponent_eventSetAcousticTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSetAcousticTexture)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_InSurfaceIndexesToEdit);
	P_GET_OBJECT(UAkAcousticTexture,Z_Param_InAcousticTexture);
	P_GET_UBOOL(Z_Param_bInEnableSurface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAcousticTexture(Z_Param_Out_InSurfaceIndexesToEdit,Z_Param_InAcousticTexture,Z_Param_bInEnableSurface);
	P_NATIVE_END;
}
// ********** End Class UAkSurfaceReflectorSetComponent Function SetAcousticTexture ****************

// ********** Begin Class UAkSurfaceReflectorSetComponent Function SetEnable ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable_Statics
struct UHT_STATICS
{
	struct AkSurfaceReflectorSetComponent_eventSetEnable_Parms
	{
		bool bInEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetEnable constinit property declarations *****************************
	static void NewProp_bInEnable_SetBit(void* Obj)
	{
		((AkSurfaceReflectorSetComponent_eventSetEnable_Parms*)Obj)->bInEnable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEnable constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEnable Property Definitions ****************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnable = { "bInEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSurfaceReflectorSetComponent_eventSetEnable_Parms), &UHT_STATICS::NewProp_bInEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEnable Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SetEnable", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkSurfaceReflectorSetComponent_eventSetEnable_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkSurfaceReflectorSetComponent_eventSetEnable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSetEnable)
{
	P_GET_UBOOL(Z_Param_bInEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnable(Z_Param_bInEnable);
	P_NATIVE_END;
}
// ********** End Class UAkSurfaceReflectorSetComponent Function SetEnable *************************

// ********** Begin Class UAkSurfaceReflectorSetComponent Function SetEnableDiffraction ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction_Statics
struct UHT_STATICS
{
	struct AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms
	{
		bool bInEnableDiffraction;
		bool bInEnableDiffractionOnBoundaryEdges;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Enable or disable geometric diffraction for this mesh.\n\x09* @param bInEnableDiffraction - Set to true to have Wwise Spatial Audio generate diffraction edges on the geometry.\n\x09* @param bInEnableDiffractionOnBoundaryEdges - Set to true to enable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction for this mesh.\n@param bInEnableDiffraction - Set to true to have Wwise Spatial Audio generate diffraction edges on the geometry.\n@param bInEnableDiffractionOnBoundaryEdges - Set to true to enable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetEnableDiffraction constinit property declarations ******************
	static void NewProp_bInEnableDiffraction_SetBit(void* Obj)
	{
		((AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms*)Obj)->bInEnableDiffraction = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableDiffraction;
	static void NewProp_bInEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
	{
		((AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms*)Obj)->bInEnableDiffractionOnBoundaryEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableDiffractionOnBoundaryEdges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEnableDiffraction constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEnableDiffraction Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnableDiffraction = { "bInEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms), &UHT_STATICS::NewProp_bInEnableDiffraction_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnableDiffractionOnBoundaryEdges = { "bInEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms), &UHT_STATICS::NewProp_bInEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnableDiffraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnableDiffractionOnBoundaryEdges,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEnableDiffraction Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SetEnableDiffraction", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkSurfaceReflectorSetComponent_eventSetEnableDiffraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSetEnableDiffraction)
{
	P_GET_UBOOL(Z_Param_bInEnableDiffraction);
	P_GET_UBOOL(Z_Param_bInEnableDiffractionOnBoundaryEdges);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableDiffraction(Z_Param_bInEnableDiffraction,Z_Param_bInEnableDiffractionOnBoundaryEdges);
	P_NATIVE_END;
}
// ********** End Class UAkSurfaceReflectorSetComponent Function SetEnableDiffraction **************

// ********** Begin Class UAkSurfaceReflectorSetComponent Function SetEnableSurface ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface_Statics
struct UHT_STATICS
{
	struct AkSurfaceReflectorSetComponent_eventSetEnableSurface_Parms
	{
		TArray<int32> InSurfaceIndexesToEdit;
		bool bInEnableSurface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Enable or disable surfaces of this geometry.\n\x09 * @param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n\x09 * @param bInEnableSurface - Set to true to enable each surface.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable surfaces of this geometry.\n@param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n@param bInEnableSurface - Set to true to enable each surface." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetEnableSurface constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSurfaceIndexesToEdit_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSurfaceIndexesToEdit;
	static void NewProp_bInEnableSurface_SetBit(void* Obj)
	{
		((AkSurfaceReflectorSetComponent_eventSetEnableSurface_Parms*)Obj)->bInEnableSurface = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEnableSurface constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEnableSurface Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InSurfaceIndexesToEdit_Inner = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_InSurfaceIndexesToEdit = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetEnableSurface_Parms, InSurfaceIndexesToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnableSurface = { "bInEnableSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSurfaceReflectorSetComponent_eventSetEnableSurface_Parms), &UHT_STATICS::NewProp_bInEnableSurface_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSurfaceIndexesToEdit_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSurfaceIndexesToEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnableSurface,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEnableSurface Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SetEnableSurface", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkSurfaceReflectorSetComponent_eventSetEnableSurface_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkSurfaceReflectorSetComponent_eventSetEnableSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSetEnableSurface)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_InSurfaceIndexesToEdit);
	P_GET_UBOOL(Z_Param_bInEnableSurface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableSurface(Z_Param_Out_InSurfaceIndexesToEdit,Z_Param_bInEnableSurface);
	P_NATIVE_END;
}
// ********** End Class UAkSurfaceReflectorSetComponent Function SetEnableSurface ******************

// ********** Begin Class UAkSurfaceReflectorSetComponent Function SetSurfaceProperties ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties_Statics
struct UHT_STATICS
{
	struct AkSurfaceReflectorSetComponent_eventSetSurfaceProperties_Parms
	{
		TArray<int32> InSurfaceIndexesToEdit;
		FAkSurfacePoly InSurfaceProperties;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Set the surface properties of this geometry.\n\x09 * @param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n\x09 * @param InSurfaceProperties - A structure of FAkSurfacePoly specifying the acoustic texture, transmission loss value and enable flag to set on each surface.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the surface properties of this geometry.\n@param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n@param InSurfaceProperties - A structure of FAkSurfacePoly specifying the acoustic texture, transmission loss value and enable flag to set on each surface." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetSurfaceProperties constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSurfaceIndexesToEdit_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSurfaceIndexesToEdit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSurfaceProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSurfaceProperties constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSurfaceProperties Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InSurfaceIndexesToEdit_Inner = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_InSurfaceIndexesToEdit = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetSurfaceProperties_Parms, InSurfaceIndexesToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InSurfaceProperties = { "InSurfaceProperties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetSurfaceProperties_Parms, InSurfaceProperties), Z_Construct_UScriptStruct_FAkSurfacePoly, METADATA_PARAMS(0, nullptr) }; // 5047f407b413f03eeb96c9fdbb1d9e1c9f59ea07
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSurfaceIndexesToEdit_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSurfaceIndexesToEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSurfaceProperties,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSurfaceProperties Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SetSurfaceProperties", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkSurfaceReflectorSetComponent_eventSetSurfaceProperties_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkSurfaceReflectorSetComponent_eventSetSurfaceProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSetSurfaceProperties)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_InSurfaceIndexesToEdit);
	P_GET_STRUCT(FAkSurfacePoly,Z_Param_InSurfaceProperties);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSurfaceProperties(Z_Param_Out_InSurfaceIndexesToEdit,Z_Param_InSurfaceProperties);
	P_NATIVE_END;
}
// ********** End Class UAkSurfaceReflectorSetComponent Function SetSurfaceProperties **************

// ********** Begin Class UAkSurfaceReflectorSetComponent Function SetTransmissionLoss *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss_Statics
struct UHT_STATICS
{
	struct AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms
	{
		TArray<int32> InSurfaceIndexesToEdit;
		float InTransmissionLoss;
		bool bInEnableSurface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the transmission loss value of surfaces of this geometry.\n\x09 * @param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n\x09 * @param InTransmissionLoss - Transmission loss value to set on each surface. Valid range between 0 and 1.\n\x09 * @param bInEnableSurface - Set to true to enable each surface.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the transmission loss value of surfaces of this geometry.\n@param InSurfaceIndexesToEdit - Array containing the indexes of each surface to edit.\n@param InTransmissionLoss - Transmission loss value to set on each surface. Valid range between 0 and 1.\n@param bInEnableSurface - Set to true to enable each surface." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetTransmissionLoss constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSurfaceIndexesToEdit_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSurfaceIndexesToEdit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTransmissionLoss;
	static void NewProp_bInEnableSurface_SetBit(void* Obj)
	{
		((AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms*)Obj)->bInEnableSurface = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTransmissionLoss constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTransmissionLoss Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InSurfaceIndexesToEdit_Inner = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_InSurfaceIndexesToEdit = { "InSurfaceIndexesToEdit", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms, InSurfaceIndexesToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InTransmissionLoss = { "InTransmissionLoss", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms, InTransmissionLoss), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnableSurface = { "bInEnableSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms), &UHT_STATICS::NewProp_bInEnableSurface_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSurfaceIndexesToEdit_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSurfaceIndexesToEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTransmissionLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnableSurface,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTransmissionLoss Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SetTransmissionLoss", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkSurfaceReflectorSetComponent_eventSetTransmissionLoss_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSetTransmissionLoss)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_InSurfaceIndexesToEdit);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTransmissionLoss);
	P_GET_UBOOL(Z_Param_bInEnableSurface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTransmissionLoss(Z_Param_Out_InSurfaceIndexesToEdit,Z_Param_InTransmissionLoss,Z_Param_bInEnableSurface);
	P_NATIVE_END;
}
// ********** End Class UAkSurfaceReflectorSetComponent Function SetTransmissionLoss ***************

// ********** Begin Class UAkSurfaceReflectorSetComponent Function UpdateAcousticProperties ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics
struct UHT_STATICS
{
	struct AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms
	{
		TArray<FAkSurfacePoly> in_AcousticPolys;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set AcousticPolys with an input array, compute the surface areas of each poly and notify damping needs updating. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set AcousticPolys with an input array, compute the surface areas of each poly and notify damping needs updating." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateAcousticProperties constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_in_AcousticPolys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_in_AcousticPolys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateAcousticProperties constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateAcousticProperties Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_in_AcousticPolys_Inner = { "in_AcousticPolys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAkSurfacePoly, METADATA_PARAMS(0, nullptr) }; // 5047f407b413f03eeb96c9fdbb1d9e1c9f59ea07
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_in_AcousticPolys = { "in_AcousticPolys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms, in_AcousticPolys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 5047f407b413f03eeb96c9fdbb1d9e1c9f59ea07
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_in_AcousticPolys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_in_AcousticPolys,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateAcousticProperties Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "UpdateAcousticProperties", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execUpdateAcousticProperties)
{
	P_GET_TARRAY(FAkSurfacePoly,Z_Param_in_AcousticPolys);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAcousticProperties(Z_Param_in_AcousticPolys);
	P_NATIVE_END;
}
// ********** End Class UAkSurfaceReflectorSetComponent Function UpdateAcousticProperties **********

// ********** Begin Class UAkSurfaceReflectorSetComponent Function UpdateSurfaceReflectorSet *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add or update an instance of the geometry by sending the transform of this component to Wwise.\n\x09* A geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or update an instance of the geometry by sending the transform of this component to Wwise.\nA geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateSurfaceReflectorSet constinit property declarations *************
// ********** End Function UpdateSurfaceReflectorSet constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "UpdateSurfaceReflectorSet", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSurfaceReflectorSet();
	P_NATIVE_END;
}
// ********** End Class UAkSurfaceReflectorSetComponent Function UpdateSurfaceReflectorSet *********

// ********** Begin Class UAkSurfaceReflectorSetComponent ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
		{ "IncludePath", "AkSurfaceReflectorSetComponent.h" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSurfaceReflectors_MetaData[] = {
		{ "BlueprintSetter", "SetEnable" },
		{ "Category", "EnableComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable Surface Reflector Set to send the geometry for reflection and diffraction use. Additional properties are available in the Surface Reflector Set and Surface Properties categories.\n\x09* Disable Surface Reflector Set to send a geometry that is not used for reflection and diffraction. The complete Surface Reflector Set category and the Transmission Loss property of the Surface Properties category are removed from the details panel.\n\x09* When Surface Reflector Set is re-enabled after being disabled, the previously set values are restored. */" },
#endif
		{ "DisplayName", "Enable Surface Reflector Set" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable Surface Reflector Set to send the geometry for reflection and diffraction use. Additional properties are available in the Surface Reflector Set and Surface Properties categories.\nDisable Surface Reflector Set to send a geometry that is not used for reflection and diffraction. The complete Surface Reflector Set category and the Transmission Loss property of the Surface Properties category are removed from the details panel.\nWhen Surface Reflector Set is re-enabled after being disabled, the previously set values are restored." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticPolys_MetaData[] = {
		{ "BlueprintSetter", "UpdateAcousticProperties" },
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The surface properties of each face on the brush geometry. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The surface properties of each face on the brush geometry." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffraction_MetaData[] = {
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process.  */" },
#endif
		{ "EditCondition", "bEnableDiffraction" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypassPortalSubtraction_MetaData[] = {
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* When set to false (default), the intersection of the geometry instance with any portal bounding box is subtracted from the geometry.In effect, an opening is created at the portal location through which sound can pass.\n\x09* When set to true, portals cannot create openings in the geometry instance. Enable this to allow the geometry instance to be an obstacle to paths going into or through portal bounds.\n\x09*/" },
#endif
		{ "DisplayName", "Bypass Portal Subtraction [Experimental]" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When set to false (default), the intersection of the geometry instance with any portal bounding box is subtracted from the geometry.In effect, an opening is created at the portal location through which sound can pass.\nWhen set to true, portals cannot create openings in the geometry instance. Enable this to allow the geometry instance to be an obstacle to paths going into or through portal bounds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSolid_MetaData[] = {
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A solid geometry instance applies transmission loss once for each time a transmission path enters and exits its volume, using the max transmission loss between each hit surface. A non-solid geometry instance is one where each surface is infinitely thin, applying transmission loss at each surface. This option has no effect if the Transmission Operation is set to Max. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A solid geometry instance applies transmission loss once for each time a transmission path enters and exits its volume, using the max transmission loss between each hit surface. A non-solid geometry instance is one where each surface is infinitely thin, applying transmission loss at each surface. This option has no effect if the Transmission Operation is set to Max." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextVisualizers_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UAkSurfaceReflectorSetComponent constinit property declarations **********
	static void NewProp_bEnableSurfaceReflectors_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableSurfaceReflectors = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSurfaceReflectors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcousticPolys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AcousticPolys;
	static void NewProp_bEnableDiffraction_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffraction = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffraction;
	static void NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffractionOnBoundaryEdges;
	static void NewProp_bBypassPortalSubtraction_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bBypassPortalSubtraction = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypassPortalSubtraction;
	static void NewProp_bSolid_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bSolid = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolid;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextVisualizers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextVisualizers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeMap_ValueProp;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_EdgeMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EdgeMap;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkSurfaceReflectorSetComponent constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RemoveSurfaceReflectorSet"), .Pointer = &UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet },
		{ .NameUTF8 = UTF8TEXT("SendSurfaceReflectorSet"), .Pointer = &UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet },
		{ .NameUTF8 = UTF8TEXT("SetAcousticTexture"), .Pointer = &UAkSurfaceReflectorSetComponent::execSetAcousticTexture },
		{ .NameUTF8 = UTF8TEXT("SetEnable"), .Pointer = &UAkSurfaceReflectorSetComponent::execSetEnable },
		{ .NameUTF8 = UTF8TEXT("SetEnableDiffraction"), .Pointer = &UAkSurfaceReflectorSetComponent::execSetEnableDiffraction },
		{ .NameUTF8 = UTF8TEXT("SetEnableSurface"), .Pointer = &UAkSurfaceReflectorSetComponent::execSetEnableSurface },
		{ .NameUTF8 = UTF8TEXT("SetSurfaceProperties"), .Pointer = &UAkSurfaceReflectorSetComponent::execSetSurfaceProperties },
		{ .NameUTF8 = UTF8TEXT("SetTransmissionLoss"), .Pointer = &UAkSurfaceReflectorSetComponent::execSetTransmissionLoss },
		{ .NameUTF8 = UTF8TEXT("UpdateAcousticProperties"), .Pointer = &UAkSurfaceReflectorSetComponent::execUpdateAcousticProperties },
		{ .NameUTF8 = UTF8TEXT("UpdateSurfaceReflectorSet"), .Pointer = &UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet, "RemoveSurfaceReflectorSet" }, // 57a450b235dc02c07688afe988741c4275b6e052
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet, "SendSurfaceReflectorSet" }, // db171331902a74975575c8c29fa3ef75c26fba43
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetAcousticTexture, "SetAcousticTexture" }, // bf8a7ebdf5b1e0305d947e0f2ab1d9052416f886
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnable, "SetEnable" }, // 552e3e4001a6bccbdcc7299877624896e33e0f90
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableDiffraction, "SetEnableDiffraction" }, // 02a649348eb8d1a1b827840740edc213fc3371b4
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetEnableSurface, "SetEnableSurface" }, // 8c8c1f5c8d22fe461b103406bbfbeae827c231d7
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetSurfaceProperties, "SetSurfaceProperties" }, // f055b2e4ecad186ffaf29a9517e6db49fd1f692c
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SetTransmissionLoss, "SetTransmissionLoss" }, // 25a93732d1be04d0245ee97bcca188c3716ff05e
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties, "UpdateAcousticProperties" }, // 6eabc3ab211d18aa61a6917923eba88164750a8b
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet, "UpdateSurfaceReflectorSet" }, // 0723bf732e156e8a6691bfd4c2fd30da8cf9132c
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSurfaceReflectorSetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkSurfaceReflectorSetComponent Property Definitions *********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableSurfaceReflectors = { "bEnableSurfaceReflectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &UHT_STATICS::NewProp_bEnableSurfaceReflectors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSurfaceReflectors_MetaData), NewProp_bEnableSurfaceReflectors_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AcousticPolys_Inner = { "AcousticPolys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAkSurfacePoly, METADATA_PARAMS(0, nullptr) }; // 5047f407b413f03eeb96c9fdbb1d9e1c9f59ea07
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AcousticPolys = { "AcousticPolys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AcousticPolys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticPolys_MetaData), NewProp_AcousticPolys_MetaData) }; // 5047f407b413f03eeb96c9fdbb1d9e1c9f59ea07
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &UHT_STATICS::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiffraction_MetaData), NewProp_bEnableDiffraction_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &UHT_STATICS::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiffractionOnBoundaryEdges_MetaData), NewProp_bEnableDiffractionOnBoundaryEdges_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBypassPortalSubtraction = { "bBypassPortalSubtraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &UHT_STATICS::NewProp_bBypassPortalSubtraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypassPortalSubtraction_MetaData), NewProp_bBypassPortalSubtraction_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSolid = { "bSolid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &UHT_STATICS::NewProp_bSolid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSolid_MetaData), NewProp_bSolid_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TextVisualizers_Inner = { "TextVisualizers", nullptr, (EPropertyFlags)0x0104000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextRenderComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TextVisualizers = { "TextVisualizers", nullptr, (EPropertyFlags)0x0194008c00000008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, TextVisualizers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextVisualizers_MetaData), NewProp_TextVisualizers_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EdgeMap_ValueProp = { "EdgeMap", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo, METADATA_PARAMS(0, nullptr) }; // a5ee5dc21998bc9081a1060b40ef2303d27ed027
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_EdgeMap_Key_KeyProp = { "EdgeMap_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_EdgeMap = { "EdgeMap", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, EdgeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeMap_MetaData), NewProp_EdgeMap_MetaData) }; // a5ee5dc21998bc9081a1060b40ef2303d27ed027
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableSurfaceReflectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AcousticPolys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AcousticPolys,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableDiffraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableDiffractionOnBoundaryEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBypassPortalSubtraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSolid,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextVisualizers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextVisualizers,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeMap,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkSurfaceReflectorSetComponent Property Definitions ***********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkAcousticTextureSetComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkSurfaceReflectorSetComponent,
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
static void UAkSurfaceReflectorSetComponent_StaticRegisterNativesUAkSurfaceReflectorSetComponent()
{
	UClass* Class = UAkSurfaceReflectorSetComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent;
UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkSurfaceReflectorSetComponent;
		if (!Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkSurfaceReflectorSetComponent"),
				Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.InnerSingleton,
				UAkSurfaceReflectorSetComponent_StaticRegisterNativesUAkSurfaceReflectorSetComponent,
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
		return Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkSurfaceReflectorSetComponent);
UAkSurfaceReflectorSetComponent::~UAkSurfaceReflectorSetComponent() {}
// ********** End Class UAkSurfaceReflectorSetComponent ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkSurfaceReflectorSetComponent, TEXT("UAkSurfaceReflectorSetComponent"), &Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSurfaceReflectorSetComponent), 913105891U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h__Script_AkAudio_35061186ea2a8672d59076879aba0529fc3f6e21{
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
