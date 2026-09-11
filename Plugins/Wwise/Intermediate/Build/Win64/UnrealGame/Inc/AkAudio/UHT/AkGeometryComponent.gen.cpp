// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkGeometryComponent.h"
#include "AkGeometryData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkGeometryComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMeshType(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum AkMeshType ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_AkMeshType_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<AkMeshType>()
{
	return Z_Construct_UEnum_AkAudio_AkMeshType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CollisionMesh.DisplayName", "Simple Collision" },
		{ "CollisionMesh.Name", "AkMeshType::CollisionMesh" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ScriptName", "EAkMeshType" },
		{ "StaticMesh.Name", "AkMeshType::StaticMesh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AkMeshType::StaticMesh", (int64)AkMeshType::StaticMesh },
		{ "AkMeshType::CollisionMesh", (int64)AkMeshType::CollisionMesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"AkMeshType",
	"AkMeshType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_AkMeshType;
UEnum* Z_Construct_UEnum_AkAudio_AkMeshType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_AkMeshType.OuterSingleton)
		{
			ZRIE_AkMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkMeshType, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkMeshType"));
		}
		return ZRIE_AkMeshType.OuterSingleton;
	}
	if (!ZRIE_AkMeshType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_AkMeshType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_AkMeshType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum AkMeshType ******************************************************************

// ********** Begin ScriptStruct FAkGeometrySurfaceOverride ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkGeometrySurfaceOverride>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkGeometrySurfaceOverride); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Acoustic Texture represents the sound absorption on the surface of the geometry when a sound bounces off of it.\n\x09* If left to None, the mesh's physical material will be used to fetch an acoustic texture.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture represents the sound absorption on the surface of the geometry when a sound bounces off of it.\nIf left to None, the mesh's physical material will be used to fetch an acoustic texture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusionOverride_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable Transmission Loss Override */" },
#endif
		{ "DisplayName", "Enable Transmission Loss Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable Transmission Loss Override" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionValue_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Transmission loss value to set when modeling sound transmission through geometry. Transmission is modeled only when there is no direct line of sight from the emitter to the listener.\n\x09* If there is more than one surface between the emitter and the listener, the maximum of each surface's transmission loss value is used. If the emitter and listener are in different rooms, the room's transmission loss value is taken into account.\n\x09* Valid range : (0.0, 1.0)\n\x09*/" },
#endif
		{ "DisplayName", "Transmission Loss" },
		{ "EditCondition", "bEnableOcclusionOverride" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transmission loss value to set when modeling sound transmission through geometry. Transmission is modeled only when there is no direct line of sight from the emitter to the listener.\nIf there is more than one surface between the emitter and the listener, the maximum of each surface's transmission loss value is used. If the emitter and listener are in different rooms, the room's transmission loss value is taken into account.\nValid range : (0.0, 1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkGeometrySurfaceOverride constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AcousticTexture;
	static void NewProp_bEnableOcclusionOverride_SetBit(void* Obj)
	{
		((FAkGeometrySurfaceOverride*)Obj)->bEnableOcclusionOverride = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusionOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkGeometrySurfaceOverride constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometrySurfaceOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkGeometrySurfaceOverride Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticTexture_MetaData), NewProp_AcousticTexture_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableOcclusionOverride = { "bEnableOcclusionOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkGeometrySurfaceOverride), &UHT_STATICS::NewProp_bEnableOcclusionOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOcclusionOverride_MetaData), NewProp_bEnableOcclusionOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, OcclusionValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionValue_MetaData), NewProp_OcclusionValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, SurfaceArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceArea_MetaData), NewProp_SurfaceArea_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AcousticTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableOcclusionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OcclusionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SurfaceArea,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkGeometrySurfaceOverride Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkGeometrySurfaceOverride",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkGeometrySurfaceOverride>(),
	alignof(FAkGeometrySurfaceOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkGeometrySurfaceOverride;
UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkGeometrySurfaceOverride.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkGeometrySurfaceOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkGeometrySurfaceOverride"));
		}
		return Z_Registration_Info_UScriptStruct_FAkGeometrySurfaceOverride.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkGeometrySurfaceOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkGeometrySurfaceOverride.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkGeometrySurfaceOverride.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkGeometrySurfaceOverride ******************************************

// ********** Begin Class UAkGeometryComponent Function ConvertMesh ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convert the mesh into a local representation suited for Wwise:\n\x09* a set of vertices, triangles, surfaces, acoustic textures and transmission loss values. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert the mesh into a local representation suited for Wwise:\na set of vertices, triangles, surfaces, acoustic textures and transmission loss values." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertMesh constinit property declarations ***************************
// ********** End Function ConvertMesh constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGeometryComponent, nullptr, "ConvertMesh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGeometryComponent::execConvertMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConvertMesh();
	P_NATIVE_END;
}
// ********** End Class UAkGeometryComponent Function ConvertMesh **********************************

// ********** Begin Class UAkGeometryComponent Function GetAcousticPropertiesOverride **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride_Statics
struct UHT_STATICS
{
	struct AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms
	{
		UMaterialInterface* InMaterialInterface;
		FAkGeometrySurfaceOverride OutAcousticPropertiesOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the Acoustic Properties overriding this Geometry.\n\x09 * @param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface that the requested Acoustic Properties override. Leave empty if the Mesh Type is set to Simple Collision.\n\x09 * @param OutAcousticPropertiesOverride - The requested Acoustic Properties Override.\n\x09 * @return True if OutAcousticPropertiesOverride is valid.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Acoustic Properties overriding this Geometry.\n@param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface that the requested Acoustic Properties override. Leave empty if the Mesh Type is set to Simple Collision.\n@param OutAcousticPropertiesOverride - The requested Acoustic Properties Override.\n@return True if OutAcousticPropertiesOverride is valid." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAcousticPropertiesOverride constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterialInterface;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAcousticPropertiesOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAcousticPropertiesOverride constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAcousticPropertiesOverride Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InMaterialInterface = { "InMaterialInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms, InMaterialInterface), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutAcousticPropertiesOverride = { "OutAcousticPropertiesOverride", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms, OutAcousticPropertiesOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 58943b4fb9a476d1e01ec903dacb50ce48ab945a
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutAcousticPropertiesOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAcousticPropertiesOverride Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGeometryComponent, nullptr, "GetAcousticPropertiesOverride", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGeometryComponent_eventGetAcousticPropertiesOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGeometryComponent::execGetAcousticPropertiesOverride)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterialInterface);
	P_GET_STRUCT_REF(FAkGeometrySurfaceOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAcousticPropertiesOverride(Z_Param_InMaterialInterface,Z_Param_Out_OutAcousticPropertiesOverride);
	P_NATIVE_END;
}
// ********** End Class UAkGeometryComponent Function GetAcousticPropertiesOverride ****************

// ********** Begin Class UAkGeometryComponent Function RemoveGeometry *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove the geometry and the corresponding instance from Wwise. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove the geometry and the corresponding instance from Wwise." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveGeometry constinit property declarations ************************
// ********** End Function RemoveGeometry constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGeometryComponent, nullptr, "RemoveGeometry", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGeometryComponent::execRemoveGeometry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGeometry();
	P_NATIVE_END;
}
// ********** End Class UAkGeometryComponent Function RemoveGeometry *******************************

// ********** Begin Class UAkGeometryComponent Function SendGeometry *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add or update a geometry in Spatial Audio by sending the converted mesh, as well as the rest of the AkGeometryParams to Wwise.\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateGeometry(). */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or update a geometry in Spatial Audio by sending the converted mesh, as well as the rest of the AkGeometryParams to Wwise.\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateGeometry()." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SendGeometry constinit property declarations **************************
// ********** End Function SendGeometry constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGeometryComponent, nullptr, "SendGeometry", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkGeometryComponent_SendGeometry(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGeometryComponent::execSendGeometry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendGeometry();
	P_NATIVE_END;
}
// ********** End Class UAkGeometryComponent Function SendGeometry *********************************

// ********** Begin Class UAkGeometryComponent Function SetAcousticPropertiesOverride **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride_Statics
struct UHT_STATICS
{
	struct AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms
	{
		UMaterialInterface* InMaterialInterface;
		FAkGeometrySurfaceOverride InAcousticPropertiesOverride;
		FAkGeometrySurfaceOverride OutAcousticPropertiesOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the Acoustic Properties overriding this Geometry.\n\x09 * @param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n\x09 * @param InAcousticPropertiesOverride - Structure of Acoustic Properties Override to set with.\n\x09 * @param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n\x09 * @return True if OutAcousticPropertiesOverride is valid.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Acoustic Properties overriding this Geometry.\n@param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n@param InAcousticPropertiesOverride - Structure of Acoustic Properties Override to set with.\n@param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n@return True if OutAcousticPropertiesOverride is valid." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetAcousticPropertiesOverride constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterialInterface;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAcousticPropertiesOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAcousticPropertiesOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAcousticPropertiesOverride constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAcousticPropertiesOverride Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InMaterialInterface = { "InMaterialInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms, InMaterialInterface), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InAcousticPropertiesOverride = { "InAcousticPropertiesOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms, InAcousticPropertiesOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 58943b4fb9a476d1e01ec903dacb50ce48ab945a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutAcousticPropertiesOverride = { "OutAcousticPropertiesOverride", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms, OutAcousticPropertiesOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 58943b4fb9a476d1e01ec903dacb50ce48ab945a
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InAcousticPropertiesOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutAcousticPropertiesOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAcousticPropertiesOverride Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGeometryComponent, nullptr, "SetAcousticPropertiesOverride", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGeometryComponent_eventSetAcousticPropertiesOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGeometryComponent::execSetAcousticPropertiesOverride)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterialInterface);
	P_GET_STRUCT(FAkGeometrySurfaceOverride,Z_Param_InAcousticPropertiesOverride);
	P_GET_STRUCT_REF(FAkGeometrySurfaceOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAcousticPropertiesOverride(Z_Param_InMaterialInterface,Z_Param_InAcousticPropertiesOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_NATIVE_END;
}
// ********** End Class UAkGeometryComponent Function SetAcousticPropertiesOverride ****************

// ********** Begin Class UAkGeometryComponent Function SetAcousticTextureOverride *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride_Statics
struct UHT_STATICS
{
	struct AkGeometryComponent_eventSetAcousticTextureOverride_Parms
	{
		UMaterialInterface* InMaterialInterface;
		UAkAcousticTexture* InAcousticTexture;
		FAkGeometrySurfaceOverride OutAcousticPropertiesOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the Acoustic Texture overriding this Geometry.\n\x09 * @param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n\x09 * @param InAcousticTexture - Acoustic Texture to set with.\n\x09 * @param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n\x09 * @return True if OutAcousticPropertiesOverride is valid.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Acoustic Texture overriding this Geometry.\n@param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n@param InAcousticTexture - Acoustic Texture to set with.\n@param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n@return True if OutAcousticPropertiesOverride is valid." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetAcousticTextureOverride constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterialInterface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAcousticTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAcousticPropertiesOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGeometryComponent_eventSetAcousticTextureOverride_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAcousticTextureOverride constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAcousticTextureOverride Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InMaterialInterface = { "InMaterialInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetAcousticTextureOverride_Parms, InMaterialInterface), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InAcousticTexture = { "InAcousticTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetAcousticTextureOverride_Parms, InAcousticTexture), Z_Construct_UClass_UAkAcousticTexture, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutAcousticPropertiesOverride = { "OutAcousticPropertiesOverride", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetAcousticTextureOverride_Parms, OutAcousticPropertiesOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 58943b4fb9a476d1e01ec903dacb50ce48ab945a
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetAcousticTextureOverride_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InAcousticTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutAcousticPropertiesOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAcousticTextureOverride Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGeometryComponent, nullptr, "SetAcousticTextureOverride", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGeometryComponent_eventSetAcousticTextureOverride_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGeometryComponent_eventSetAcousticTextureOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGeometryComponent::execSetAcousticTextureOverride)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterialInterface);
	P_GET_OBJECT(UAkAcousticTexture,Z_Param_InAcousticTexture);
	P_GET_STRUCT_REF(FAkGeometrySurfaceOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAcousticTextureOverride(Z_Param_InMaterialInterface,Z_Param_InAcousticTexture,Z_Param_Out_OutAcousticPropertiesOverride);
	P_NATIVE_END;
}
// ********** End Class UAkGeometryComponent Function SetAcousticTextureOverride *******************

// ********** Begin Class UAkGeometryComponent Function SetEnableDiffraction ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction_Statics
struct UHT_STATICS
{
	struct AkGeometryComponent_eventSetEnableDiffraction_Parms
	{
		bool bInEnableDiffraction;
		bool bInEnableDiffractionOnBoundaryEdges;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Enable or disable geometric diffraction for this mesh.\n\x09* @param bInEnableDiffraction - Set to true to have Wwise Spatial Audio generate diffraction edges on the geometry.\n\x09* @param bInEnableDiffractionOnBoundaryEdges - Set to true to enable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction for this mesh.\n@param bInEnableDiffraction - Set to true to have Wwise Spatial Audio generate diffraction edges on the geometry.\n@param bInEnableDiffractionOnBoundaryEdges - Set to true to enable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetEnableDiffraction constinit property declarations ******************
	static void NewProp_bInEnableDiffraction_SetBit(void* Obj)
	{
		((AkGeometryComponent_eventSetEnableDiffraction_Parms*)Obj)->bInEnableDiffraction = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableDiffraction;
	static void NewProp_bInEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
	{
		((AkGeometryComponent_eventSetEnableDiffraction_Parms*)Obj)->bInEnableDiffractionOnBoundaryEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableDiffractionOnBoundaryEdges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEnableDiffraction constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEnableDiffraction Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnableDiffraction = { "bInEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetEnableDiffraction_Parms), &UHT_STATICS::NewProp_bInEnableDiffraction_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnableDiffractionOnBoundaryEdges = { "bInEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetEnableDiffraction_Parms), &UHT_STATICS::NewProp_bInEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnableDiffraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnableDiffractionOnBoundaryEdges,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEnableDiffraction Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGeometryComponent, nullptr, "SetEnableDiffraction", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGeometryComponent_eventSetEnableDiffraction_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGeometryComponent_eventSetEnableDiffraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGeometryComponent::execSetEnableDiffraction)
{
	P_GET_UBOOL(Z_Param_bInEnableDiffraction);
	P_GET_UBOOL(Z_Param_bInEnableDiffractionOnBoundaryEdges);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableDiffraction(Z_Param_bInEnableDiffraction,Z_Param_bInEnableDiffractionOnBoundaryEdges);
	P_NATIVE_END;
}
// ********** End Class UAkGeometryComponent Function SetEnableDiffraction *************************

// ********** Begin Class UAkGeometryComponent Function SetEnableTransmissionLossOverride **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride_Statics
struct UHT_STATICS
{
	struct AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms
	{
		UMaterialInterface* InMaterialInterface;
		bool bInEnableTransmissionLossOverride;
		FAkGeometrySurfaceOverride OutAcousticPropertiesOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enable or disable the transmission loss of this Geometry to be overriden.\n\x09 * @param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n\x09 * @param bInEnableTransmissionLossOverride - Set to true to enable Transmission Loss override.\n\x09 * @param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n\x09 * @return True if OutAcousticPropertiesOverride is valid.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable the transmission loss of this Geometry to be overriden.\n@param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n@param bInEnableTransmissionLossOverride - Set to true to enable Transmission Loss override.\n@param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n@return True if OutAcousticPropertiesOverride is valid." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetEnableTransmissionLossOverride constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterialInterface;
	static void NewProp_bInEnableTransmissionLossOverride_SetBit(void* Obj)
	{
		((AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms*)Obj)->bInEnableTransmissionLossOverride = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableTransmissionLossOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAcousticPropertiesOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEnableTransmissionLossOverride constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEnableTransmissionLossOverride Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InMaterialInterface = { "InMaterialInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms, InMaterialInterface), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnableTransmissionLossOverride = { "bInEnableTransmissionLossOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms), &UHT_STATICS::NewProp_bInEnableTransmissionLossOverride_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutAcousticPropertiesOverride = { "OutAcousticPropertiesOverride", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms, OutAcousticPropertiesOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 58943b4fb9a476d1e01ec903dacb50ce48ab945a
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnableTransmissionLossOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutAcousticPropertiesOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEnableTransmissionLossOverride Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGeometryComponent, nullptr, "SetEnableTransmissionLossOverride", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGeometryComponent_eventSetEnableTransmissionLossOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGeometryComponent::execSetEnableTransmissionLossOverride)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterialInterface);
	P_GET_UBOOL(Z_Param_bInEnableTransmissionLossOverride);
	P_GET_STRUCT_REF(FAkGeometrySurfaceOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetEnableTransmissionLossOverride(Z_Param_InMaterialInterface,Z_Param_bInEnableTransmissionLossOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_NATIVE_END;
}
// ********** End Class UAkGeometryComponent Function SetEnableTransmissionLossOverride ************

// ********** Begin Class UAkGeometryComponent Function SetTransmissionLossOverride ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride_Statics
struct UHT_STATICS
{
	struct AkGeometryComponent_eventSetTransmissionLossOverride_Parms
	{
		UMaterialInterface* InMaterialInterface;
		float InTransmissionLoss;
		bool bInEnableTransmissionLossOverride;
		FAkGeometrySurfaceOverride OutAcousticPropertiesOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the Transmission Loss overriding this Geometry.\n\x09 * @param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n\x09 * @param InTransmissionLoss - Transmission Loss value to set with.\n\x09 * @param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n\x09 * @return True if OutAcousticPropertiesOverride is valid.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Transmission Loss overriding this Geometry.\n@param InMaterialInterface - If this Geometry's Mesh Type is set to Static Mesh, provide the Material Interface to override. Leave empty if the Mesh Type is set to Simple Collision.\n@param InTransmissionLoss - Transmission Loss value to set with.\n@param OutAcousticPropertiesOverride - Reference to the modified Acoustic Properties Override.\n@return True if OutAcousticPropertiesOverride is valid." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetTransmissionLossOverride constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterialInterface;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTransmissionLoss;
	static void NewProp_bInEnableTransmissionLossOverride_SetBit(void* Obj)
	{
		((AkGeometryComponent_eventSetTransmissionLossOverride_Parms*)Obj)->bInEnableTransmissionLossOverride = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableTransmissionLossOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAcousticPropertiesOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGeometryComponent_eventSetTransmissionLossOverride_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTransmissionLossOverride constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTransmissionLossOverride Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InMaterialInterface = { "InMaterialInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetTransmissionLossOverride_Parms, InMaterialInterface), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InTransmissionLoss = { "InTransmissionLoss", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetTransmissionLossOverride_Parms, InTransmissionLoss), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnableTransmissionLossOverride = { "bInEnableTransmissionLossOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetTransmissionLossOverride_Parms), &UHT_STATICS::NewProp_bInEnableTransmissionLossOverride_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutAcousticPropertiesOverride = { "OutAcousticPropertiesOverride", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AkGeometryComponent_eventSetTransmissionLossOverride_Parms, OutAcousticPropertiesOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 58943b4fb9a476d1e01ec903dacb50ce48ab945a
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGeometryComponent_eventSetTransmissionLossOverride_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTransmissionLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnableTransmissionLossOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutAcousticPropertiesOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTransmissionLossOverride Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGeometryComponent, nullptr, "SetTransmissionLossOverride", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkGeometryComponent_eventSetTransmissionLossOverride_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkGeometryComponent_eventSetTransmissionLossOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGeometryComponent::execSetTransmissionLossOverride)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterialInterface);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTransmissionLoss);
	P_GET_UBOOL(Z_Param_bInEnableTransmissionLossOverride);
	P_GET_STRUCT_REF(FAkGeometrySurfaceOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTransmissionLossOverride(Z_Param_InMaterialInterface,Z_Param_InTransmissionLoss,Z_Param_bInEnableTransmissionLossOverride,Z_Param_Out_OutAcousticPropertiesOverride);
	P_NATIVE_END;
}
// ********** End Class UAkGeometryComponent Function SetTransmissionLossOverride ******************

// ********** Begin Class UAkGeometryComponent Function UpdateGeometry *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add or update an instance of the geometry by sending the transform of this component to Wwise.\n\x09* A geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or update an instance of the geometry by sending the transform of this component to Wwise.\nA geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateGeometry constinit property declarations ************************
// ********** End Function UpdateGeometry constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkGeometryComponent, nullptr, "UpdateGeometry", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkGeometryComponent::execUpdateGeometry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGeometry();
	P_NATIVE_END;
}
// ********** End Class UAkGeometryComponent Function UpdateGeometry *******************************

// ********** Begin Class UAkGeometryComponent *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkGeometryComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
		{ "IncludePath", "AkGeometryComponent.h" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Static Mesh's LOD to use */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Static Mesh's LOD to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The local distance in Unreal units between two vertices to be welded together.\n\x09* Any two vertices closer than this threshold will be treated as the same unique vertex and assigned the same position.\n\x09* Increasing this threshold decreases the number of gaps between triangles, resulting in a more continuous mesh and less sound leaking though, as well as eliminating triangles that are too small to be significant.\n\x09* Increasing this threshold also helps Spatial Audio's edge-finding algorithm to find more valid diffraction edges.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The local distance in Unreal units between two vertices to be welded together.\nAny two vertices closer than this threshold will be treated as the same unique vertex and assigned the same position.\nIncreasing this threshold decreases the number of gaps between triangles, resulting in a more continuous mesh and less sound leaking though, as well as eliminating triangles that are too small to be significant.\nIncreasing this threshold also helps Spatial Audio's edge-finding algorithm to find more valid diffraction edges." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshSurfaceOverride_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the acoustic properties of this mesh per material.*/" },
#endif
		{ "DisplayName", "Acoustic Properties Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the acoustic properties of this mesh per material." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMeshSurfaceOverride_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the acoustic properties of the collision mesh.*/" },
#endif
		{ "DisplayName", "Acoustic Properties Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the acoustic properties of the collision mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffraction_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process.  */" },
#endif
		{ "EditCondition", "bEnableDiffraction" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypassPortalSubtraction_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* When set to false (default), the intersection of the geometry instance with any portal bounding box is subtracted from the geometry.In effect, an opening is created at the portal location through which sound can pass.\n\x09* When set to true, portals cannot create openings in the geometry instance. Enable this to allow the geometry instance to be an obstacle to paths going into or through portal bounds.\n\x09*/" },
#endif
		{ "DisplayName", "Bypass Portal Subtraction [Experimental]" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When set to false (default), the intersection of the geometry instance with any portal bounding box is subtracted from the geometry.In effect, an opening is created at the portal location through which sound can pass.\nWhen set to true, portals cannot create openings in the geometry instance. Enable this to allow the geometry instance to be an obstacle to paths going into or through portal bounds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSolid_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A solid geometry instance applies transmission loss once for each time a transmission path enters and exits its volume, using the max transmission loss between each hit surface. A non-solid geometry instance is one where each surface is infinitely thin, applying transmission loss at each surface. This option has no effect if the Transmission Operation is set to Max. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A solid geometry instance applies transmission loss once for each time a transmission path enters and exits its volume, using the max transmission loss between each hit surface. A non-solid geometry instance is one where each surface is infinitely thin, applying transmission loss at each surface. This option has no effect if the Transmission Operation is set to Max." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceAreas_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkGeometryComponent constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshSurfaceOverride_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshSurfaceOverride_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StaticMeshSurfaceOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionMeshSurfaceOverride;
	static void NewProp_bEnableDiffraction_SetBit(void* Obj)
	{
		((UAkGeometryComponent*)Obj)->bEnableDiffraction = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffraction;
	static void NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
	{
		((UAkGeometryComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffractionOnBoundaryEdges;
	static void NewProp_bBypassPortalSubtraction_SetBit(void* Obj)
	{
		((UAkGeometryComponent*)Obj)->bBypassPortalSubtraction = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypassPortalSubtraction;
	static void NewProp_bSolid_SetBit(void* Obj)
	{
		((UAkGeometryComponent*)Obj)->bSolid = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryData;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SurfaceAreas_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SurfaceAreas_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SurfaceAreas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkGeometryComponent constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConvertMesh"), .Pointer = &UAkGeometryComponent::execConvertMesh },
		{ .NameUTF8 = UTF8TEXT("GetAcousticPropertiesOverride"), .Pointer = &UAkGeometryComponent::execGetAcousticPropertiesOverride },
		{ .NameUTF8 = UTF8TEXT("RemoveGeometry"), .Pointer = &UAkGeometryComponent::execRemoveGeometry },
		{ .NameUTF8 = UTF8TEXT("SendGeometry"), .Pointer = &UAkGeometryComponent::execSendGeometry },
		{ .NameUTF8 = UTF8TEXT("SetAcousticPropertiesOverride"), .Pointer = &UAkGeometryComponent::execSetAcousticPropertiesOverride },
		{ .NameUTF8 = UTF8TEXT("SetAcousticTextureOverride"), .Pointer = &UAkGeometryComponent::execSetAcousticTextureOverride },
		{ .NameUTF8 = UTF8TEXT("SetEnableDiffraction"), .Pointer = &UAkGeometryComponent::execSetEnableDiffraction },
		{ .NameUTF8 = UTF8TEXT("SetEnableTransmissionLossOverride"), .Pointer = &UAkGeometryComponent::execSetEnableTransmissionLossOverride },
		{ .NameUTF8 = UTF8TEXT("SetTransmissionLossOverride"), .Pointer = &UAkGeometryComponent::execSetTransmissionLossOverride },
		{ .NameUTF8 = UTF8TEXT("UpdateGeometry"), .Pointer = &UAkGeometryComponent::execUpdateGeometry },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh, "ConvertMesh" }, // 6491614693649f30de4b9588d0fbb3a13154806c
		{ &Z_Construct_UFunction_UAkGeometryComponent_GetAcousticPropertiesOverride, "GetAcousticPropertiesOverride" }, // d1dfd43540bd2256f11e5b4d3a4030774c170561
		{ &Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry, "RemoveGeometry" }, // 19f91a71f22ab3aba633ee8e6192906c60229a92
		{ &Z_Construct_UFunction_UAkGeometryComponent_SendGeometry, "SendGeometry" }, // b5eb2417781dd275fb16e8ff461f9e03226401e9
		{ &Z_Construct_UFunction_UAkGeometryComponent_SetAcousticPropertiesOverride, "SetAcousticPropertiesOverride" }, // 52b5b2f4c432a1b5c93c84d4abc8a24fcb4519ad
		{ &Z_Construct_UFunction_UAkGeometryComponent_SetAcousticTextureOverride, "SetAcousticTextureOverride" }, // b2a84a8b908e6a2b857b95fece0f1b5d581990e8
		{ &Z_Construct_UFunction_UAkGeometryComponent_SetEnableDiffraction, "SetEnableDiffraction" }, // 9148296e5cd14109f473a576c7f02ed40e90859e
		{ &Z_Construct_UFunction_UAkGeometryComponent_SetEnableTransmissionLossOverride, "SetEnableTransmissionLossOverride" }, // bb0c38428d93b3ef7a786704047d8bba75a65465
		{ &Z_Construct_UFunction_UAkGeometryComponent_SetTransmissionLossOverride, "SetTransmissionLossOverride" }, // 8ef60abb892460ea2b5fb8d2a33165b0796bfbec
		{ &Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry, "UpdateGeometry" }, // 6355e94f50d929a96fb6a6822f18d8a6e31f0702
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGeometryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkGeometryComponent Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, MeshType), Z_Construct_UEnum_AkAudio_AkMeshType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshType_MetaData), NewProp_MeshType_MetaData) }; // f14340f2849da50fdf6f0b270d7ab92654e2f975
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, LOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD_MetaData), NewProp_LOD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, WeldingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeldingThreshold_MetaData), NewProp_WeldingThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StaticMeshSurfaceOverride_ValueProp = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 58943b4fb9a476d1e01ec903dacb50ce48ab945a
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StaticMeshSurfaceOverride_Key_KeyProp = { "StaticMeshSurfaceOverride_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_StaticMeshSurfaceOverride = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, StaticMeshSurfaceOverride), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshSurfaceOverride_MetaData), NewProp_StaticMeshSurfaceOverride_MetaData) }; // 58943b4fb9a476d1e01ec903dacb50ce48ab945a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CollisionMeshSurfaceOverride = { "CollisionMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, CollisionMeshSurfaceOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMeshSurfaceOverride_MetaData), NewProp_CollisionMeshSurfaceOverride_MetaData) }; // 58943b4fb9a476d1e01ec903dacb50ce48ab945a
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGeometryComponent), &UHT_STATICS::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiffraction_MetaData), NewProp_bEnableDiffraction_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGeometryComponent), &UHT_STATICS::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiffractionOnBoundaryEdges_MetaData), NewProp_bEnableDiffractionOnBoundaryEdges_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBypassPortalSubtraction = { "bBypassPortalSubtraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGeometryComponent), &UHT_STATICS::NewProp_bBypassPortalSubtraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypassPortalSubtraction_MetaData), NewProp_bBypassPortalSubtraction_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSolid = { "bSolid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGeometryComponent), &UHT_STATICS::NewProp_bSolid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSolid_MetaData), NewProp_bSolid_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeometryData = { "GeometryData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, GeometryData), Z_Construct_UScriptStruct_FAkGeometryData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryData_MetaData), NewProp_GeometryData_MetaData) }; // ba0b954eec1a246cf680c177b16ef922a53a5617
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SurfaceAreas_ValueProp = { "SurfaceAreas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SurfaceAreas_Key_KeyProp = { "SurfaceAreas_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_SurfaceAreas = { "SurfaceAreas", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, SurfaceAreas), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceAreas_MetaData), NewProp_SurfaceAreas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeldingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMeshSurfaceOverride_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMeshSurfaceOverride_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMeshSurfaceOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CollisionMeshSurfaceOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableDiffraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableDiffractionOnBoundaryEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBypassPortalSubtraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSolid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeometryData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SurfaceAreas_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SurfaceAreas_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SurfaceAreas,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkGeometryComponent Property Definitions **********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkAcousticTextureSetComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkGeometryComponent,
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
static void UAkGeometryComponent_StaticRegisterNativesUAkGeometryComponent()
{
	UClass* Class = UAkGeometryComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkGeometryComponent;
UClass* Z_Construct_UClass_UAkGeometryComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkGeometryComponent;
		if (!Z_Registration_Info_UClass_UAkGeometryComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkGeometryComponent"),
				Z_Registration_Info_UClass_UAkGeometryComponent.InnerSingleton,
				UAkGeometryComponent_StaticRegisterNativesUAkGeometryComponent,
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
		return Z_Registration_Info_UClass_UAkGeometryComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkGeometryComponent);
UAkGeometryComponent::~UAkGeometryComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkGeometryComponent)
// ********** End Class UAkGeometryComponent *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AkAudio_AkMeshType, TEXT("AkMeshType"), &ZRIE_AkMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4047716594U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewStructOps, TEXT("AkGeometrySurfaceOverride"),&Z_Registration_Info_UScriptStruct_FAkGeometrySurfaceOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkGeometrySurfaceOverride), 1486109519U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkGeometryComponent, TEXT("UAkGeometryComponent"), &Z_Registration_Info_UClass_UAkGeometryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGeometryComponent), 2305010248U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h__Script_AkAudio_dce46151079c89a6ec03ce2de3c3d9d8e0257b19{
	TEXT("/Script/AkAudio"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
