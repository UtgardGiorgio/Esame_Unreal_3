// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkSurfaceReflectorSetUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkSurfaceReflectorSetUtils() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FAkSurfaceEdgeVerts ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkSurfaceEdgeVerts>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkSurfaceEdgeVerts); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An edge between two vertices */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An edge between two vertices" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkSurfaceEdgeVerts constinit property declarations ***************
// ********** End ScriptStruct FAkSurfaceEdgeVerts constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfaceEdgeVerts>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkSurfaceEdgeVerts",
	nullptr,
	0,
	DataSizeOf<FAkSurfaceEdgeVerts>(),
	alignof(FAkSurfaceEdgeVerts),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeVerts;
UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeVerts.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeVerts.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkSurfaceEdgeVerts"));
		}
		return Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeVerts.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeVerts.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeVerts.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeVerts.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkSurfaceEdgeVerts *************************************************

// ********** Begin ScriptStruct FAkSurfaceEdgeInfo ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkSurfaceEdgeInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkSurfaceEdgeInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Information about an edge */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about an edge" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkSurfaceEdgeInfo constinit property declarations ****************
// ********** End ScriptStruct FAkSurfaceEdgeInfo constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfaceEdgeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkSurfaceEdgeInfo",
	nullptr,
	0,
	DataSizeOf<FAkSurfaceEdgeInfo>(),
	alignof(FAkSurfaceEdgeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeInfo;
UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkSurfaceEdgeInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkSurfaceEdgeInfo **************************************************

// ********** Begin ScriptStruct FAkSurfacePoly ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkSurfacePoly_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkSurfacePoly>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkSurfacePoly); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Contains the properties of a face from the ParentBrush of a UAkSurfaceReflectorSetComponent. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains the properties of a face from the ParentBrush of a UAkSurfaceReflectorSetComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "Surface Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The Acoustic Texture associated with the selected surfaces.\n\x09* When set to None, the texture is completely reflective.\n\x09* If the Surface Reflector component is disabled, the geometry is not used for reflections or diffractions.\n\x09* In this case, Acoustic Textures are used exclusively to measure Environment Decay and HFDamping as part of the Reverb Estimation process.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture associated with the selected surfaces.\nWhen set to None, the texture is completely reflective.\nIf the Surface Reflector component is disabled, the geometry is not used for reflections or diffractions.\nIn this case, Acoustic Textures are used exclusively to measure Environment Decay and HFDamping as part of the Reverb Estimation process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Occlusion_MetaData[] = {
		{ "Category", "Surface Properties" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Indicates how much sound is transmitted through the selected surfaces. Valid range is 0 to 1.\n\x09* With a Transmission Loss value of 0, all sounds pass through the surface, and the Acoustic Texture has no effect.\n\x09* With a value of 1, 100% Transmission Loss is applied to sounds that pass through the selected surfaces.\n\x09*/" },
#endif
		{ "DisplayName", "Transmission Loss" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates how much sound is transmitted through the selected surfaces. Valid range is 0 to 1.\nWith a Transmission Loss value of 0, all sounds pass through the surface, and the Acoustic Texture has no effect.\nWith a value of 1, 100% Transmission Loss is applied to sounds that pass through the selected surfaces." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableSurface_MetaData[] = {
		{ "Category", "Surface Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* An enabled surface is associated with the selected Acoustic Texture and Transmission Loss value above.\n\x09* A disabled surface is not associated with an Acoustic Texture, and has a Transmission Loss value of 0 (sound passes through the surface).\n\x09* If Surface Reflector Set is disabled, there is no Transmission Loss property to customize.\n\x09* In this case, enabled surfaces do not let sound pass through (equivalent to a Transmission Loss value of 1) and\n\x09* disabled surfaces let sound pass through (equivalent to a Transmission Loss value of 0).\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An enabled surface is associated with the selected Acoustic Texture and Transmission Loss value above.\nA disabled surface is not associated with an Acoustic Texture, and has a Transmission Loss value of 0 (sound passes through the surface).\nIf Surface Reflector Set is disabled, there is no Transmission Loss property to customize.\nIn this case, enabled surfaces do not let sound pass through (equivalent to a Transmission Loss value of 1) and\ndisabled surfaces let sound pass through (equivalent to a Transmission Loss value of 0)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkSurfacePoly constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Occlusion;
	static void NewProp_EnableSurface_SetBit(void* Obj)
	{
		((FAkSurfacePoly*)Obj)->EnableSurface = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSurface;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkSurfacePoly constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfacePoly>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkSurfacePoly Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSurfacePoly, Texture), Z_Construct_UClass_UAkAcousticTexture, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Occlusion = { "Occlusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSurfacePoly, Occlusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Occlusion_MetaData), NewProp_Occlusion_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_EnableSurface = { "EnableSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkSurfacePoly), &UHT_STATICS::NewProp_EnableSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableSurface_MetaData), NewProp_EnableSurface_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSurfacePoly, SurfaceArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceArea_MetaData), NewProp_SurfaceArea_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Occlusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnableSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SurfaceArea,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkSurfacePoly Property Definitions *********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkSurfacePoly",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkSurfacePoly>(),
	alignof(FAkSurfacePoly),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkSurfacePoly;
UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkSurfacePoly.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkSurfacePoly.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfacePoly, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkSurfacePoly"));
		}
		return Z_Registration_Info_UScriptStruct_FAkSurfacePoly.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkSurfacePoly.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkSurfacePoly.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkSurfacePoly.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkSurfacePoly ******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts, Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::NewStructOps, TEXT("AkSurfaceEdgeVerts"),&Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeVerts, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfaceEdgeVerts), 4110248909U) },
		{ Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo, Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::NewStructOps, TEXT("AkSurfaceEdgeInfo"),&Z_Registration_Info_UScriptStruct_FAkSurfaceEdgeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfaceEdgeInfo), 2783862210U) },
		{ Z_Construct_UScriptStruct_FAkSurfacePoly, Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewStructOps, TEXT("AkSurfacePoly"),&Z_Registration_Info_UScriptStruct_FAkSurfacePoly, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfacePoly), 1346892807U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h__Script_AkAudio_0409eb18f918178a9af7345b0e662e5ff02ae675{
	TEXT("/Script/AkAudio"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
