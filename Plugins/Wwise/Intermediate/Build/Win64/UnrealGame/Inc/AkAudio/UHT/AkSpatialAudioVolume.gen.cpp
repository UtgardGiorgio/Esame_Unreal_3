// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkSpatialAudioVolume.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkSpatialAudioVolume() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AVolume(ETypeConstructPhase);
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCollisionChannel(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EAkFitToGeometryMode ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkFitToGeometryMode>()
{
	return Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AlignedBox.Comment", "/**\n\x09""Aligned Box: The Ak Spatial Audio Volume is fit to the surrounding geometry using an aligned bounding box, aligned to the local axes of the Actor. \n\x09Use for shoe box shaped rooms with an arbitrary extent, but with the rotation supplied by the user.\n\x09The actor is rotated manually in the editor to achieve desired alignment.\n\x09*/" },
		{ "AlignedBox.Name", "EAkFitToGeometryMode::AlignedBox" },
		{ "AlignedBox.ToolTip", "Aligned Box: The Ak Spatial Audio Volume is fit to the surrounding geometry using an aligned bounding box, aligned to the local axes of the Actor.\nUse for shoe box shaped rooms with an arbitrary extent, but with the rotation supplied by the user.\nThe actor is rotated manually in the editor to achieve desired alignment." },
		{ "ConvexPolyhedron.Comment", "/**\n\x09""Convex Polyhedron: The Ak Spatial Audio Volume is fit to the surrounding geometry using a convex polyhedron. Use for arbitrary-shaped convex rooms. \n\x09Will likely result in a more complex (higher poly-count) shape, and will possibly resulting in greater CPU and memory usage than oriented or aligned box shapes.\n\x09When using convex polyhedron, a room must be fully enclosed; open ceilings or walls are not permitted and will cause a failure to fit to geometry.\n\x09*/" },
		{ "ConvexPolyhedron.Name", "EAkFitToGeometryMode::ConvexPolyhedron" },
		{ "ConvexPolyhedron.ToolTip", "Convex Polyhedron: The Ak Spatial Audio Volume is fit to the surrounding geometry using a convex polyhedron. Use for arbitrary-shaped convex rooms.\nWill likely result in a more complex (higher poly-count) shape, and will possibly resulting in greater CPU and memory usage than oriented or aligned box shapes.\nWhen using convex polyhedron, a room must be fully enclosed; open ceilings or walls are not permitted and will cause a failure to fit to geometry." },
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
		{ "OrientedBox.Comment", "/**\n\x09Oriented Box: The Ak Spatial Audio Volume is fit to the surrounding geometry using a minimum volume oriented bounding box. \n\x09Use for shoe box shaped rooms with and arbitrary extent and rotation.\n\x09*/" },
		{ "OrientedBox.Name", "EAkFitToGeometryMode::OrientedBox" },
		{ "OrientedBox.ToolTip", "Oriented Box: The Ak Spatial Audio Volume is fit to the surrounding geometry using a minimum volume oriented bounding box.\nUse for shoe box shaped rooms with and arbitrary extent and rotation." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkFitToGeometryMode::OrientedBox", (int64)EAkFitToGeometryMode::OrientedBox },
		{ "EAkFitToGeometryMode::AlignedBox", (int64)EAkFitToGeometryMode::AlignedBox },
		{ "EAkFitToGeometryMode::ConvexPolyhedron", (int64)EAkFitToGeometryMode::ConvexPolyhedron },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkFitToGeometryMode",
	"EAkFitToGeometryMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkFitToGeometryMode;
UEnum* Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkFitToGeometryMode.OuterSingleton)
		{
			ZRIE_EAkFitToGeometryMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkFitToGeometryMode"));
		}
		return ZRIE_EAkFitToGeometryMode.OuterSingleton;
	}
	if (!ZRIE_EAkFitToGeometryMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkFitToGeometryMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkFitToGeometryMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkFitToGeometryMode ********************************************************

// ********** Begin Class AAkSpatialAudioVolume Function GetCollisionChannel ***********************
#if WITH_EDITOR
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel_Statics
struct UHT_STATICS
{
	struct AkSpatialAudioVolume_eventGetCollisionChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Fit to Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""Converts between EAkCollisionChannel and ECollisionChannel. Returns Wwise Integration Settings default if CollisionChannel == UseIntegrationSettingsDefault. Otherwise, casts CollisionChannel to ECollisionChannel.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
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
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(AkSpatialAudioVolume_eventGetCollisionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCollisionChannel Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAkSpatialAudioVolume, nullptr, "GetCollisionChannel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkSpatialAudioVolume_eventGetCollisionChannel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkSpatialAudioVolume_eventGetCollisionChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAkSpatialAudioVolume::execGetCollisionChannel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetCollisionChannel();
	P_NATIVE_END;
}
#endif
// ********** End Class AAkSpatialAudioVolume Function GetCollisionChannel *************************

// ********** Begin Class AAkSpatialAudioVolume ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AAkSpatialAudioVolume_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09""AAkSpatialAudioVolume\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Advanced Attachment Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkSpatialAudioVolume.h" },
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAkSpatialAudioVolume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceReflectorSet_MetaData[] = {
		{ "Category", "SpatialAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateReverb_MetaData[] = {
		{ "Category", "SpatialAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[] = {
		{ "Category", "SpatialAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitToGeometry_MetaData[] = {
		{ "Category", "Fit to Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""Automatically fit the Ak Spatial Audio Volume to the surrounding geometry. The fitting operation is performed after this property is enabled. It is performed again when the actor is moved to a new location.\n\x09The fitting operation casts rays emanating spherically outwards from the origin of the actor. The points where the rays hit the surrounding geometry (drawn in the editor as green dots) are fit to a shape (box or convex polyhedron), and the actor is then resized appropriately.\n\x09This operation modifies properties in the Surface Properties category. The Physical Materials of the surfaces hit are used to choose a corresponding Acoustic Texture and Transmission Loss value, as determined by the DefaultGeometrySurfacePropertiesTable in the Integration Settings.\n\x09When this property is disabled, the fitting operation is not performed but the shape and surface properties of the Spatial Audio Volume are retained.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically fit the Ak Spatial Audio Volume to the surrounding geometry. The fitting operation is performed after this property is enabled. It is performed again when the actor is moved to a new location.\nThe fitting operation casts rays emanating spherically outwards from the origin of the actor. The points where the rays hit the surrounding geometry (drawn in the editor as green dots) are fit to a shape (box or convex polyhedron), and the actor is then resized appropriately.\nThis operation modifies properties in the Surface Properties category. The Physical Materials of the surfaces hit are used to choose a corresponding Acoustic Texture and Transmission Loss value, as determined by the DefaultGeometrySurfacePropertiesTable in the Integration Settings.\nWhen this property is disabled, the fitting operation is not performed but the shape and surface properties of the Spatial Audio Volume are retained." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Fit to Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Sets the collision channel for the ray traces performed to fit the spatial audio volume to the surrounding geometry. When set to 'Use Integration Settings Default', the value will be taken from the DefaultFitToGeometryCollisionChannel in the Wwise Integration Settings.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the collision channel for the ray traces performed to fit the spatial audio volume to the surrounding geometry. When set to 'Use Integration Settings Default', the value will be taken from the DefaultFitToGeometryCollisionChannel in the Wwise Integration Settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "Fit to Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09""Choose the shape with which to fit to the surrounding geometry. \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Choose the shape with which to fit to the surrounding geometry." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterHitPoints_MetaData[] = {
		{ "Category", "Fit to Geometry" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.187500" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Set to a value less then 1.0 to filter out a percentage of the ray cast hits for use in fitting to surrounding geometry. \n\x09Points that have been rejected by the filter are drawn in red, and points accepted drawn in green. \n\x09Particularly useful when rays happen to escape through windows or other openings, resulting in undesirable points.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to a value less then 1.0 to filter out a percentage of the ray cast hits for use in fitting to surrounding geometry.\nPoints that have been rejected by the filter are drawn in red, and points accepted drawn in green.\nParticularly useful when rays happen to escape through windows or other openings, resulting in undesirable points." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitPoints_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitNormals_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitFailed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSpatialAudioVolume.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class AAkSpatialAudioVolume constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SurfaceReflectorSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LateReverb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
#if WITH_EDITORONLY_DATA
	static void NewProp_FitToGeometry_SetBit(void* Obj)
	{
		((AAkSpatialAudioVolume*)Obj)->FitToGeometry = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FitToGeometry;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterHitPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FitPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FitPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FitNormals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FitNormals;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_FitMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FitMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedRotation;
	static void NewProp_FitFailed_SetBit(void* Obj)
	{
		((AAkSpatialAudioVolume*)Obj)->FitFailed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FitFailed;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAkSpatialAudioVolume constinit property declarations **********************
#if WITH_EDITOR
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCollisionChannel"), .Pointer = &AAkSpatialAudioVolume::execGetCollisionChannel },
	};
#endif
	static FTypeConstructFunc* DependentSingletons[];
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAkSpatialAudioVolume_GetCollisionChannel, "GetCollisionChannel" }, // 119c3ae9d07868969172692018d0ec8dfd94855c
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkSpatialAudioVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AAkSpatialAudioVolume Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SurfaceReflectorSet = { "SurfaceReflectorSet", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, SurfaceReflectorSet), Z_Construct_UClass_UAkSurfaceReflectorSetComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceReflectorSet_MetaData), NewProp_SurfaceReflectorSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LateReverb = { "LateReverb", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, LateReverb), Z_Construct_UClass_UAkLateReverbComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateReverb_MetaData), NewProp_LateReverb_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, Room), Z_Construct_UClass_UAkRoomComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Room_MetaData), NewProp_Room_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_FitToGeometry = { "FitToGeometry", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkSpatialAudioVolume), &UHT_STATICS::NewProp_FitToGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitToGeometry_MetaData), NewProp_FitToGeometry_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, CollisionChannel), Z_Construct_UEnum_AkAudio_EAkCollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 650ded9f922bca688f9a2912d930b7fea77a37e3
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, Shape), Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) }; // 23102a472a6f33794405417d46133a54c93a2a9f
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FilterHitPoints = { "FilterHitPoints", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, FilterHitPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterHitPoints_MetaData), NewProp_FilterHitPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FitPoints_Inner = { "FitPoints", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FitPoints = { "FitPoints", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, FitPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitPoints_MetaData), NewProp_FitPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FitNormals_Inner = { "FitNormals", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FitNormals = { "FitNormals", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, FitNormals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitNormals_MetaData), NewProp_FitNormals_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_FitMaterials_Inner = { "FitMaterials", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FitMaterials = { "FitMaterials", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, FitMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitMaterials_MetaData), NewProp_FitMaterials_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SavedRotation = { "SavedRotation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpatialAudioVolume, SavedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedRotation_MetaData), NewProp_SavedRotation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_FitFailed = { "FitFailed", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkSpatialAudioVolume), &UHT_STATICS::NewProp_FitFailed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitFailed_MetaData), NewProp_FitFailed_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SurfaceReflectorSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LateReverb,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Room,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FitToGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FilterHitPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FitPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FitPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FitNormals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FitNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FitMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FitMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SavedRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FitFailed,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AAkSpatialAudioVolume Property Definitions *********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AVolume,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AAkSpatialAudioVolume,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void AAkSpatialAudioVolume_StaticRegisterNativesAAkSpatialAudioVolume()
{
	UClass* Class = AAkSpatialAudioVolume::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		IF_WITH_EDITOR(MakeConstArrayView(UHT_STATICS::Funcs), {}));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAkSpatialAudioVolume;
UClass* Z_Construct_UClass_AAkSpatialAudioVolume(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AAkSpatialAudioVolume;
		if (!Z_Registration_Info_UClass_AAkSpatialAudioVolume.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkSpatialAudioVolume"),
				Z_Registration_Info_UClass_AAkSpatialAudioVolume.InnerSingleton,
				AAkSpatialAudioVolume_StaticRegisterNativesAAkSpatialAudioVolume,
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
		return Z_Registration_Info_UClass_AAkSpatialAudioVolume.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AAkSpatialAudioVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkSpatialAudioVolume.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AAkSpatialAudioVolume.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAkSpatialAudioVolume);
AAkSpatialAudioVolume::~AAkSpatialAudioVolume() {}
// ********** End Class AAkSpatialAudioVolume ******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode, TEXT("EAkFitToGeometryMode"), &ZRIE_EAkFitToGeometryMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 588261959U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAkSpatialAudioVolume, TEXT("AAkSpatialAudioVolume"), &Z_Registration_Info_UClass_AAkSpatialAudioVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkSpatialAudioVolume), 1591493279U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpatialAudioVolume_h__Script_AkAudio_807510c5d08e57887a0b3fb13d878d843f28d188{
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
