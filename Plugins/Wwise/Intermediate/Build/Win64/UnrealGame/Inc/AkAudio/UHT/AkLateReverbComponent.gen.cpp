// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkLateReverbComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkLateReverbComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkLateReverbComponent Function AssociateAkTextureSetComponent ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics
struct UHT_STATICS
{
	struct AkLateReverbComponent_eventAssociateAkTextureSetComponent_Parms
	{
		UAkAcousticTextureSetComponent* textureSetComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|LateReverb|ReverbParameterEstimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the component that will be used to estimate the HFDamping. For example, in a Blueprint that has a static mesh component with an AkGeometry child component, this function can be called in BeginPlay to associate that AkGeometry component with this reverb component.\n\x09 *  If this late reverb component has a sibling geometry component (or surface reflector set component), they will be associated automatically and there is no need to call this function.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the component that will be used to estimate the HFDamping. For example, in a Blueprint that has a static mesh component with an AkGeometry child component, this function can be called in BeginPlay to associate that AkGeometry component with this reverb component.\nIf this late reverb component has a sibling geometry component (or surface reflector set component), they will be associated automatically and there is no need to call this function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_textureSetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function AssociateAkTextureSetComponent constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_textureSetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AssociateAkTextureSetComponent constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AssociateAkTextureSetComponent Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_textureSetComponent = { "textureSetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AkLateReverbComponent_eventAssociateAkTextureSetComponent_Parms, textureSetComponent), Z_Construct_UClass_UAkAcousticTextureSetComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_textureSetComponent_MetaData), NewProp_textureSetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_textureSetComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AssociateAkTextureSetComponent Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkLateReverbComponent, nullptr, "AssociateAkTextureSetComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkLateReverbComponent_eventAssociateAkTextureSetComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkLateReverbComponent_eventAssociateAkTextureSetComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkLateReverbComponent::execAssociateAkTextureSetComponent)
{
	P_GET_OBJECT(UAkAcousticTextureSetComponent,Z_Param_textureSetComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssociateAkTextureSetComponent(Z_Param_textureSetComponent);
	P_NATIVE_END;
}
// ********** End Class UAkLateReverbComponent Function AssociateAkTextureSetComponent *************

// ********** Begin Class UAkLateReverbComponent Function SetAutoAssignAuxBus **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkLateReverbComponent_SetAutoAssignAuxBus_Statics
struct UHT_STATICS
{
	struct AkLateReverbComponent_eventSetAutoAssignAuxBus_Parms
	{
		bool bInEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Late Reverb" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAutoAssignAuxBus constinit property declarations *******************
	static void NewProp_bInEnable_SetBit(void* Obj)
	{
		((AkLateReverbComponent_eventSetAutoAssignAuxBus_Parms*)Obj)->bInEnable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAutoAssignAuxBus constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAutoAssignAuxBus Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInEnable = { "bInEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkLateReverbComponent_eventSetAutoAssignAuxBus_Parms), &UHT_STATICS::NewProp_bInEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInEnable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAutoAssignAuxBus Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkLateReverbComponent, nullptr, "SetAutoAssignAuxBus", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkLateReverbComponent_eventSetAutoAssignAuxBus_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkLateReverbComponent_eventSetAutoAssignAuxBus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkLateReverbComponent_SetAutoAssignAuxBus(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkLateReverbComponent::execSetAutoAssignAuxBus)
{
	P_GET_UBOOL(Z_Param_bInEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoAssignAuxBus(Z_Param_bInEnable);
	P_NATIVE_END;
}
// ********** End Class UAkLateReverbComponent Function SetAutoAssignAuxBus ************************

// ********** Begin Class UAkLateReverbComponent ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkLateReverbComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
		{ "IncludePath", "AkLateReverbComponent.h" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "Category", "EnableComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enable the Late Reverb Component to apply a late reverb to sounds emitted in this volume. Additional properties are available in the Late Reverb category.\n\x09 * The number of simultaneous reverb volumes is configurable in the Unreal Editor Project Settings under Plugins > Wwise\n\x09 * If this Late Reverb is applied to a Spatial Audio Room, it is active even if the maximum number of simultaneous reverb volumes is reached.\n\x09 */" },
#endif
		{ "DisplayName", "Enable Late Reverb" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable the Late Reverb Component to apply a late reverb to sounds emitted in this volume. Additional properties are available in the Late Reverb category.\nThe number of simultaneous reverb volumes is configurable in the Unreal Editor Project Settings under Plugins > Wwise\nIf this Late Reverb is applied to a Spatial Audio Room, it is active even if the maximum number of simultaneous reverb volumes is reached." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[] = {
		{ "Category", "Late Reverb" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum send level to the Wwise Auxiliary Bus associated to this AkReverbVolume */" },
#endif
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum send level to the Wwise Auxiliary Bus associated to this AkReverbVolume" },
#endif
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeRate_MetaData[] = {
		{ "Category", "Late Reverb" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rate at which to fade in/out the SendLevel of the current Reverb Volume when entering/exiting it, in percentage per second (0.2 will make the fade time 5 seconds) */" },
#endif
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate at which to fade in/out the SendLevel of the current Reverb Volume when entering/exiting it, in percentage per second (0.2 will make the fade time 5 seconds)" },
#endif
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Late Reverb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The precedence in which the AkReverbVolumes will be applied. In the case of overlapping volumes, only the ones \n\x09 * with the highest priority are chosen. If two or more overlapping AkReverbVolumes have the same \n\x09 * priority, the chosen AkReverbVolume is unpredictable. \n\x09 * If this Late Reverb is applied to a Spatial Audio room, the room's priority will be used instead.\n\x09 * Sound emitted by game objects in a room will always be sent to the room late reverb independently of other late reverbs in the scene.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The precedence in which the AkReverbVolumes will be applied. In the case of overlapping volumes, only the ones\nwith the highest priority are chosen. If two or more overlapping AkReverbVolumes have the same\npriority, the chosen AkReverbVolume is unpredictable.\nIf this Late Reverb is applied to a Spatial Audio room, the room's priority will be used instead.\nSound emitted by game objects in a room will always be sent to the room late reverb independently of other late reverbs in the scene." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoAssignAuxBus_MetaData[] = {
		{ "BlueprintSetter", "SetAutoAssignAuxBus" },
		{ "Category", "Late Reverb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When enabled, the aux bus for this reverb component will be assigned automatically. This is done by estimating the decay time of the reverb produced by the parent Primitive Component, given its volume and surface area.\n\x09 * This decay value is used to select an aux bus from the reverb aux bus assignment map in the integration settings.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, the aux bus for this reverb component will be assigned automatically. This is done by estimating the decay time of the reverb produced by the parent Primitive Component, given its volume and surface area.\nThis decay value is used to select an aux bus from the reverb aux bus assignment map in the integration settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[] = {
		{ "Category", "Late Reverb" },
		{ "EditCondition", "!AutoAssignAuxBus" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[] = {
		{ "Category", "Late Reverb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wwise Auxiliary Bus associated to this AkReverbVolume */" },
#endif
		{ "EditCondition", "!AutoAssignAuxBus" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wwise Auxiliary Bus associated to this AkReverbVolume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusManual_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Save the manually assigned aux bus so we can recall it if auto-assign is disabled. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save the manually assigned aux bus so we can recall it if auto-assign is disabled." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextVisualizerLabels_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The text visualizers display the values of the parameter estimations directly in the level (or blueprint editor).\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text visualizers display the values of the parameter estimations directly in the level (or blueprint editor)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextVisualizerValues_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentVolume_MetaData[] = {
		{ "Category", "Late Reverb|Reverb Parameter Estimation|Primitive Geometry" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[] = {
		{ "Category", "Late Reverb|Reverb Parameter Estimation|Primitive Geometry" },
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentDecayEstimate_MetaData[] = {
		{ "Category", "Late Reverb|Reverb Parameter Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An estimation of the T60 (the time taken for the sound pressure level to reduce by 60dB) for the reverb's environment, based on the primitive component to which the late reverb is attached.\n\x09 *  This T60 value can be used to automatically assign an aux bus using the Reverb Assignment Map in the integration settings, and/or to drive the Decay Estimate RTPC, also found in the integration settings.\n\x09 *  In order to use the global reverb RTPCs, the reverb component must have a sibling AkRoomComponent (in other words, a room component attached to the same Primitive parent).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An estimation of the T60 (the time taken for the sound pressure level to reduce by 60dB) for the reverb's environment, based on the primitive component to which the late reverb is attached.\nThis T60 value can be used to automatically assign an aux bus using the Reverb Assignment Map in the integration settings, and/or to drive the Decay Estimate RTPC, also found in the integration settings.\nIn order to use the global reverb RTPCs, the reverb component must have a sibling AkRoomComponent (in other words, a room component attached to the same Primitive parent)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HFDamping_MetaData[] = {
		{ "Category", "Late Reverb|Reverb Parameter Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This value is driven by the acoustic textures used in an associated AkGeometryComponent or AkSurfaceReflectorSetComponent. It measures the average frequency bias of the damping. In other words, whether there is more high-frequency damping, more low-frequency damping, or uniform damping across frequencies.\n\x09 *  A value of 0.0 indicates uniform damping across all frequencies. A value > 0.0 indicates more damping for higher frequencies than lower frequencies. A value < 0.0 indicates more damping for lower frequencies than high frequencies. Average absorption values are calculated using each of the textures in the collection, weighted by their corresponding surface area.\n\x09 *  This value can be used to drive the HFDamping RTPC, found in the integration settings.\n\x09 *  In order to use the global reverb RTPCs, the reverb component must have a sibling AkRoomComponent (in other words, a room component attached to the same Primitive parent).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This value is driven by the acoustic textures used in an associated AkGeometryComponent or AkSurfaceReflectorSetComponent. It measures the average frequency bias of the damping. In other words, whether there is more high-frequency damping, more low-frequency damping, or uniform damping across frequencies.\nA value of 0.0 indicates uniform damping across all frequencies. A value > 0.0 indicates more damping for higher frequencies than lower frequencies. A value < 0.0 indicates more damping for lower frequencies than high frequencies. Average absorption values are calculated using each of the textures in the collection, weighted by their corresponding surface area.\nThis value can be used to drive the HFDamping RTPC, found in the integration settings.\nIn order to use the global reverb RTPCs, the reverb component must have a sibling AkRoomComponent (in other words, a room component attached to the same Primitive parent)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToFirstReflection_MetaData[] = {
		{ "Category", "Late Reverb|Reverb Parameter Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An estimation of the time taken for the first reflection to reach the listener, based on the primitive component to which the late reverb is attached.\n\x09 *  This is estimated based on an emitter and listener being positioned at the centre of the parent primitive component. This value can be used to drive the Time To First Reflection RTPC, found in the integration settings.\n\x09 *  In order to use the global reverb RTPCs, the reverb component must have a sibling AkRoomComponent (in other words, a room component attached to the same Primitive parent).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkLateReverbComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An estimation of the time taken for the first reflection to reach the listener, based on the primitive component to which the late reverb is attached.\nThis is estimated based on an emitter and listener being positioned at the centre of the parent primitive component. This value can be used to drive the Time To First Reflection RTPC, found in the integration settings.\nIn order to use the global reverb RTPCs, the reverb component must have a sibling AkRoomComponent (in other words, a room component attached to the same Primitive parent)." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UAkLateReverbComponent constinit property declarations *******************
	static void NewProp_bEnable_SetBit(void* Obj)
	{
		((UAkLateReverbComponent*)Obj)->bEnable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static void NewProp_AutoAssignAuxBus_SetBit(void* Obj)
	{
		((UAkLateReverbComponent*)Obj)->AutoAssignAuxBus = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoAssignAuxBus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuxBusManual;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextVisualizerLabels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextVisualizerValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvironmentVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvironmentDecayEstimate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HFDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToFirstReflection;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkLateReverbComponent constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AssociateAkTextureSetComponent"), .Pointer = &UAkLateReverbComponent::execAssociateAkTextureSetComponent },
		{ .NameUTF8 = UTF8TEXT("SetAutoAssignAuxBus"), .Pointer = &UAkLateReverbComponent::execSetAutoAssignAuxBus },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent, "AssociateAkTextureSetComponent" }, // d5c9fcd0095eb0168015dcd7a1e6a9bd5d1bf59d
		{ &Z_Construct_UFunction_UAkLateReverbComponent_SetAutoAssignAuxBus, "SetAutoAssignAuxBus" }, // 7e4e128d6e03de1608963f335a56a0dfc4b23aef
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLateReverbComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkLateReverbComponent Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkLateReverbComponent), &UHT_STATICS::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLateReverbComponent, SendLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendLevel_MetaData), NewProp_SendLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FadeRate = { "FadeRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLateReverbComponent, FadeRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeRate_MetaData), NewProp_FadeRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLateReverbComponent, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_AutoAssignAuxBus = { "AutoAssignAuxBus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkLateReverbComponent), &UHT_STATICS::NewProp_AutoAssignAuxBus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoAssignAuxBus_MetaData), NewProp_AutoAssignAuxBus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLateReverbComponent, AuxBus), Z_Construct_UClass_UAkAuxBus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBus_MetaData), NewProp_AuxBus_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLateReverbComponent, AuxBusName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusName_MetaData), NewProp_AuxBusName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AuxBusManual = { "AuxBusManual", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLateReverbComponent, AuxBusManual), Z_Construct_UClass_UAkAuxBus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBusManual_MetaData), NewProp_AuxBusManual_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TextVisualizerLabels = { "TextVisualizerLabels", nullptr, (EPropertyFlags)0x01c4000c00080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLateReverbComponent, TextVisualizerLabels), Z_Construct_UClass_UTextRenderComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextVisualizerLabels_MetaData), NewProp_TextVisualizerLabels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TextVisualizerValues = { "TextVisualizerValues", nullptr, (EPropertyFlags)0x01c4000c00080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLateReverbComponent, TextVisualizerValues), Z_Construct_UClass_UTextRenderComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextVisualizerValues_MetaData), NewProp_TextVisualizerValues_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EnvironmentVolume = { "EnvironmentVolume", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLateReverbComponent, EnvironmentVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvironmentVolume_MetaData), NewProp_EnvironmentVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLateReverbComponent, SurfaceArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceArea_MetaData), NewProp_SurfaceArea_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EnvironmentDecayEstimate = { "EnvironmentDecayEstimate", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLateReverbComponent, EnvironmentDecayEstimate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvironmentDecayEstimate_MetaData), NewProp_EnvironmentDecayEstimate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HFDamping = { "HFDamping", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLateReverbComponent, HFDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HFDamping_MetaData), NewProp_HFDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TimeToFirstReflection = { "TimeToFirstReflection", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkLateReverbComponent, TimeToFirstReflection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToFirstReflection_MetaData), NewProp_TimeToFirstReflection_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SendLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FadeRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutoAssignAuxBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxBusName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxBusManual,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextVisualizerLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextVisualizerValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnvironmentVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SurfaceArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnvironmentDecayEstimate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HFDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TimeToFirstReflection,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkLateReverbComponent Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USceneComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkLateReverbComponent,
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
static void UAkLateReverbComponent_StaticRegisterNativesUAkLateReverbComponent()
{
	UClass* Class = UAkLateReverbComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkLateReverbComponent;
UClass* Z_Construct_UClass_UAkLateReverbComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkLateReverbComponent;
		if (!Z_Registration_Info_UClass_UAkLateReverbComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkLateReverbComponent"),
				Z_Registration_Info_UClass_UAkLateReverbComponent.InnerSingleton,
				UAkLateReverbComponent_StaticRegisterNativesUAkLateReverbComponent,
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
		return Z_Registration_Info_UClass_UAkLateReverbComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkLateReverbComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLateReverbComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkLateReverbComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkLateReverbComponent);
UAkLateReverbComponent::~UAkLateReverbComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkLateReverbComponent)
// ********** End Class UAkLateReverbComponent *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkLateReverbComponent, TEXT("UAkLateReverbComponent"), &Z_Registration_Info_UClass_UAkLateReverbComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLateReverbComponent), 4042819409U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h__Script_AkAudio_09832d8b3e0603d7282c4df4d91e969c377ce62f{
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
