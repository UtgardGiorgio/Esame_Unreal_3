// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkSettings.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDataTable(ETypeConstructPhase);
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticTextureParams(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCollisionChannel(ETypeConstructPhase);
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBank(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EAkCollisionChannel *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkCollisionChannel>()
{
	return Z_Construct_UEnum_AkAudio_EAkCollisionChannel(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom Collision Channel enum with an option to take the value from the Wwise Integration Settings (this follows a similar approach to that of EActorUpdateOverlapsMethod in Actor.h). */" },
#endif
		{ "EAKCC_Camera.DisplayName", "Camera" },
		{ "EAKCC_Camera.Name", "EAKCC_Camera" },
		{ "EAKCC_Camera.TraceQuery", "1" },
		{ "EAKCC_Destructible.DisplayName", "Destructible" },
		{ "EAKCC_Destructible.Name", "EAKCC_Destructible" },
		{ "EAKCC_Pawn.DisplayName", "Pawn" },
		{ "EAKCC_Pawn.Name", "EAKCC_Pawn" },
		{ "EAKCC_PhysicsBody.DisplayName", "PhysicsBody" },
		{ "EAKCC_PhysicsBody.Name", "EAKCC_PhysicsBody" },
		{ "EAKCC_UseIntegrationSettingsDefault.DisplayName", "Use Integration Settings Default" },
		{ "EAKCC_UseIntegrationSettingsDefault.Name", "EAKCC_UseIntegrationSettingsDefault" },
		{ "EAKCC_Vehicle.DisplayName", "Vehicle" },
		{ "EAKCC_Vehicle.Name", "EAKCC_Vehicle" },
		{ "EAKCC_Visibility.DisplayName", "Visibility" },
		{ "EAKCC_Visibility.Name", "EAKCC_Visibility" },
		{ "EAKCC_Visibility.TraceQuery", "1" },
		{ "EAKCC_WorldDynamic.DisplayName", "WorldDynamic" },
		{ "EAKCC_WorldDynamic.Name", "EAKCC_WorldDynamic" },
		{ "EAKCC_WorldStatic.DisplayName", "WorldStatic" },
		{ "EAKCC_WorldStatic.Name", "EAKCC_WorldStatic" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Collision Channel enum with an option to take the value from the Wwise Integration Settings (this follows a similar approach to that of EActorUpdateOverlapsMethod in Actor.h)." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAKCC_WorldStatic", (int64)EAKCC_WorldStatic },
		{ "EAKCC_WorldDynamic", (int64)EAKCC_WorldDynamic },
		{ "EAKCC_Pawn", (int64)EAKCC_Pawn },
		{ "EAKCC_Visibility", (int64)EAKCC_Visibility },
		{ "EAKCC_Camera", (int64)EAKCC_Camera },
		{ "EAKCC_PhysicsBody", (int64)EAKCC_PhysicsBody },
		{ "EAKCC_Vehicle", (int64)EAKCC_Vehicle },
		{ "EAKCC_Destructible", (int64)EAKCC_Destructible },
		{ "EAKCC_UseIntegrationSettingsDefault", (int64)EAKCC_UseIntegrationSettingsDefault },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkCollisionChannel",
	"EAkCollisionChannel",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkCollisionChannel;
UEnum* Z_Construct_UEnum_AkAudio_EAkCollisionChannel(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkCollisionChannel.OuterSingleton)
		{
			ZRIE_EAkCollisionChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCollisionChannel, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkCollisionChannel"));
		}
		return ZRIE_EAkCollisionChannel.OuterSingleton;
	}
	if (!ZRIE_EAkCollisionChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkCollisionChannel.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkCollisionChannel.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkCollisionChannel *********************************************************

// ********** Begin Enum EAkUnrealAudioRouting *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics
template<> AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EAkUnrealAudioRouting>()
{
	return Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AudioLink.DisplayName", "Route through AudioLink" },
		{ "AudioLink.Name", "EAkUnrealAudioRouting::AudioLink" },
		{ "AudioLink.ToolTip", "Use WwiseAudioLink to route all Unreal audio sources to Wwise SoundEngine Inputs" },
		{ "AudioMixer.DisplayName", "Route through AkAudioMixer" },
		{ "AudioMixer.Name", "EAkUnrealAudioRouting::AudioMixer" },
		{ "AudioMixer.ToolTip", "(DEPRECATED) Use AkAudioMixer to route Unreal submixes to a Wwise SoundEngine Input" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EAkUnrealAudioRouting::Custom" },
		{ "Custom.ToolTip", "Custom Unreal audio settings set up by the developer in config files" },
		{ "EnableUnrealOnly.DisplayName", "Enable Unreal Audio only" },
		{ "EnableUnrealOnly.Name", "EAkUnrealAudioRouting::EnableUnrealOnly" },
		{ "EnableUnrealOnly.ToolTip", "Only use Unreal audio, and disable Wwise SoundEngine" },
		{ "EnableWwiseOnly.DisplayName", "Enable Wwise SoundEngine only" },
		{ "EnableWwiseOnly.Name", "EAkUnrealAudioRouting::EnableWwiseOnly" },
		{ "EnableWwiseOnly.ToolTip", "Only use Wwise SoundEngine, and disable Unreal audio" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "Separate.DisplayName", "Both Wwise and Unreal audio" },
		{ "Separate.Name", "EAkUnrealAudioRouting::Separate" },
		{ "Separate.ToolTip", "Use default Unreal audio at the same time than Wwise SoundEngine (might be incompatible with some platforms)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAkUnrealAudioRouting::EnableWwiseOnly", (int64)EAkUnrealAudioRouting::EnableWwiseOnly },
		{ "EAkUnrealAudioRouting::Separate", (int64)EAkUnrealAudioRouting::Separate },
		{ "EAkUnrealAudioRouting::AudioLink", (int64)EAkUnrealAudioRouting::AudioLink },
		{ "EAkUnrealAudioRouting::AudioMixer", (int64)EAkUnrealAudioRouting::AudioMixer },
		{ "EAkUnrealAudioRouting::EnableUnrealOnly", (int64)EAkUnrealAudioRouting::EnableUnrealOnly },
		{ "EAkUnrealAudioRouting::Custom", (int64)EAkUnrealAudioRouting::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"EAkUnrealAudioRouting",
	"EAkUnrealAudioRouting",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAkUnrealAudioRouting;
UEnum* Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAkUnrealAudioRouting.OuterSingleton)
		{
			ZRIE_EAkUnrealAudioRouting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("EAkUnrealAudioRouting"));
		}
		return ZRIE_EAkUnrealAudioRouting.OuterSingleton;
	}
	if (!ZRIE_EAkUnrealAudioRouting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAkUnrealAudioRouting.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAkUnrealAudioRouting.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAkUnrealAudioRouting *******************************************************

// ********** Begin ScriptStruct FAkGeometrySurfacePropertiesToMap *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkGeometrySurfacePropertiesToMap>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkGeometrySurfacePropertiesToMap); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "AkGeometry Surface Properties Map" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionValue_MetaData[] = {
		{ "Category", "AkGeometry Surface Properties Map" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Transmission Loss" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkGeometrySurfacePropertiesToMap constinit property declarations *
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AcousticTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkGeometrySurfacePropertiesToMap constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometrySurfacePropertiesToMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkGeometrySurfacePropertiesToMap Property Definitions ************
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfacePropertiesToMap, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticTexture_MetaData), NewProp_AcousticTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfacePropertiesToMap, OcclusionValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionValue_MetaData), NewProp_OcclusionValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AcousticTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OcclusionValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkGeometrySurfacePropertiesToMap Property Definitions **************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkGeometrySurfacePropertiesToMap",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkGeometrySurfacePropertiesToMap>(),
	alignof(FAkGeometrySurfacePropertiesToMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkGeometrySurfacePropertiesToMap;
UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkGeometrySurfacePropertiesToMap.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkGeometrySurfacePropertiesToMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkGeometrySurfacePropertiesToMap"));
		}
		return Z_Registration_Info_UScriptStruct_FAkGeometrySurfacePropertiesToMap.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkGeometrySurfacePropertiesToMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkGeometrySurfacePropertiesToMap.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkGeometrySurfacePropertiesToMap.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkGeometrySurfacePropertiesToMap ***********************************

// ********** Begin ScriptStruct FWwiseGeometrySurfacePropertiesRow ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseGeometrySurfacePropertiesRow>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseGeometrySurfacePropertiesRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "Geometry Surface Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture associated with this row's Physical Material.\n// A sound reflected on a surface is filtered according to the acoustic texture's absorption values.\n// When estimating the Reverb of an environment, acoustic textures applied to the surfaces are used to estimate the environment's Decay and HF Damping.\n// The default value is set to None. A surface with no acoustic texture is considered completely reflective.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture associated with this row's Physical Material.\nA sound reflected on a surface is filtered according to the acoustic texture's absorption values.\nWhen estimating the Reverb of an environment, acoustic textures applied to the surfaces are used to estimate the environment's Decay and HF Damping.\nThe default value is set to None. A surface with no acoustic texture is considered completely reflective." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionLoss_MetaData[] = {
		{ "Category", "Geometry Surface Properties" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Transmission Loss value associated with this row's Physical Material.\n// A sound going through a surface is filtered according to the amount of transmission loss.\n// A surface with a transmission loss value of 0 is considered transparent and lets sound pass through without any filtering. Sound cannot reflect on such surfaces.\n// The default value is set to 1, which is also the maximum possible value.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Transmission Loss value associated with this row's Physical Material.\nA sound going through a surface is filtered according to the amount of transmission loss.\nA surface with a transmission loss value of 0 is considered transparent and lets sound pass through without any filtering. Sound cannot reflect on such surfaces.\nThe default value is set to 1, which is also the maximum possible value." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseGeometrySurfacePropertiesRow constinit property declarations 
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AcousticTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmissionLoss;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseGeometrySurfacePropertiesRow constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseGeometrySurfacePropertiesRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FWwiseGeometrySurfacePropertiesRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWwiseGeometrySurfacePropertiesRow cannot be polymorphic unless super FTableRowBase is polymorphic");

// ********** Begin ScriptStruct FWwiseGeometrySurfacePropertiesRow Property Definitions ***********
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGeometrySurfacePropertiesRow, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticTexture_MetaData), NewProp_AcousticTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TransmissionLoss = { "TransmissionLoss", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGeometrySurfacePropertiesRow, TransmissionLoss), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmissionLoss_MetaData), NewProp_TransmissionLoss_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AcousticTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransmissionLoss,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseGeometrySurfacePropertiesRow Property Definitions *************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WwiseGeometrySurfacePropertiesRow",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseGeometrySurfacePropertiesRow>(),
	alignof(FWwiseGeometrySurfacePropertiesRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseGeometrySurfacePropertiesRow;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseGeometrySurfacePropertiesRow.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseGeometrySurfacePropertiesRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("WwiseGeometrySurfacePropertiesRow"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseGeometrySurfacePropertiesRow.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseGeometrySurfacePropertiesRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseGeometrySurfacePropertiesRow.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseGeometrySurfacePropertiesRow.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseGeometrySurfacePropertiesRow **********************************

// ********** Begin ScriptStruct FWwiseDecayAuxBusRow **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FWwiseDecayAuxBusRow>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWwiseDecayAuxBusRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Decay_MetaData[] = {
		{ "Category", "Reverb Assignment" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of seconds it takes for the sound reverberation in an environment to decay by 60 dB.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of seconds it takes for the sound reverberation in an environment to decay by 60 dB." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[] = {
		{ "Category", "Reverb Assignment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Auxiliary Bus with a reverb effect to use for a chosen Decay value.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Auxiliary Bus with a reverb effect to use for a chosen Decay value." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWwiseDecayAuxBusRow constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Decay;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AuxBus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWwiseDecayAuxBusRow constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDecayAuxBusRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FWwiseDecayAuxBusRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWwiseDecayAuxBusRow cannot be polymorphic unless super FTableRowBase is polymorphic");

// ********** Begin ScriptStruct FWwiseDecayAuxBusRow Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Decay = { "Decay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDecayAuxBusRow, Decay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Decay_MetaData), NewProp_Decay_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDecayAuxBusRow, AuxBus), Z_Construct_UClass_UAkAuxBus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxBus_MetaData), NewProp_AuxBus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Decay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuxBus,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FWwiseDecayAuxBusRow Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WwiseDecayAuxBusRow",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FWwiseDecayAuxBusRow>(),
	alignof(FWwiseDecayAuxBusRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWwiseDecayAuxBusRow;
UScriptStruct* Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FWwiseDecayAuxBusRow.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FWwiseDecayAuxBusRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("WwiseDecayAuxBusRow"));
		}
		return Z_Registration_Info_UScriptStruct_FWwiseDecayAuxBusRow.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FWwiseDecayAuxBusRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWwiseDecayAuxBusRow.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWwiseDecayAuxBusRow.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FWwiseDecayAuxBusRow ************************************************

// ********** Begin ScriptStruct FAkAcousticTextureParams ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkAcousticTextureParams>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkAcousticTextureParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionValues_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkAcousticTextureParams constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbsorptionValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkAcousticTextureParams constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAcousticTextureParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkAcousticTextureParams Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AbsorptionValues = { "AbsorptionValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAcousticTextureParams, AbsorptionValues), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionValues_MetaData), NewProp_AbsorptionValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AbsorptionValues,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkAcousticTextureParams Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkAcousticTextureParams",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkAcousticTextureParams>(),
	alignof(FAkAcousticTextureParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkAcousticTextureParams;
UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticTextureParams(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkAcousticTextureParams.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkAcousticTextureParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAcousticTextureParams, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkAcousticTextureParams"));
		}
		return Z_Registration_Info_UScriptStruct_FAkAcousticTextureParams.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkAcousticTextureParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkAcousticTextureParams.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkAcousticTextureParams.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkAcousticTextureParams ********************************************

// ********** Begin Class UAkSettings **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "AkSettings.h" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousReverbVolumes_MetaData[] = {
		{ "Category", "Reverb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum number of reverb auxiliary sends that will be simultaneously applied to a sound source\n// Reverbs from a Spatial Audio room will be active even if this maximum is reached.\n" },
#endif
		{ "DisplayName", "Max Simultaneous Reverb" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of reverb auxiliary sends that will be simultaneously applied to a sound source\nReverbs from a Spatial Audio room will be active even if this maximum is reached." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseProjectPath_MetaData[] = {
		{ "AbsolutePath", "" },
		{ "Category", "Installation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wwise Project Path\n" },
#endif
		{ "FilePathFilter", "wproj" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wwise Project Path" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseSoundDataFolder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Where the Sound Data will be generated in the Content Folder\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Where the Sound Data will be generated in the Content Folder" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootOutputPath_MetaData[] = {
		{ "AbsolutePath", "" },
		{ "Category", "Installation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The location of the folder where Wwise project metadata will be generated. This should be the same as the Root Output Path in the Wwise Project Settings.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The location of the folder where Wwise project metadata will be generated. This should be the same as the Root Output Path in the Wwise Project Settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedSoundBanksFolder_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseStagingDirectory_MetaData[] = {
		{ "Category", "Cooking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Where wwise .bnk and .wem files will be copied to when staging files during cooking\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Where wwise .bnk and .wem files will be copied to when staging files during cooking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSoundBanksTransfered_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used to track whether SoundBanks have been transferred to Wwise after migration to 2022.1 (or later)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to track whether SoundBanks have been transferred to Wwise after migration to 2022.1 (or later)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAssetsMigrated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used after migration to track whether assets have been re-serialized after migration to 2022.1 (or later)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used after migration to track whether assets have been re-serialized after migration to 2022.1 (or later)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectMigrated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used after migration to track whether project settings have been updated after migration to 2022.1 (or later)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used after migration to track whether project settings have been updated after migration to 2022.1 (or later)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnectToWAAPI_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOcclusionCollisionChannel_MetaData[] = {
		{ "Category", "Obstruction Occlusion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default value for the Collision Channel when creating a new Ak Component.\n" },
#endif
		{ "DisplayName", "DefaultCollisionChannel" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default value for the Collision Channel when creating a new Ak Component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFitToGeometryCollisionChannel_MetaData[] = {
		{ "Category", "Fit To Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default value for Collision Channel when fitting Ak Acoustic Portals and Ak Spatial Audio Volumes to surrounding geometry.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default value for Collision Channel when fitting Ak Acoustic Portals and Ak Spatial Audio Volumes to surrounding geometry." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AkGeometryMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PhysicalMaterial to AcousticTexture and Occlusion Value Map\n// @deprecated Use GeometrySurfacePropertiesTable instead.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PhysicalMaterial to AcousticTexture and Occlusion Value Map\n@deprecated Use GeometrySurfacePropertiesTable instead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAcousticTexture_MetaData[] = {
		{ "Category", "Geometry Surface Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default Acoustic Texture set on a surface of a Spatial Audio Volume actor when Fit to Geometry is used and no geometry is hit.\n// Default value is None, which indicates a completely reflective surface.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default Acoustic Texture set on a surface of a Spatial Audio Volume actor when Fit to Geometry is used and no geometry is hit.\nDefault value is None, which indicates a completely reflective surface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTransmissionLoss_MetaData[] = {
		{ "Category", "Geometry Surface Properties" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default Transmission Loss value set on a surface of a Spatial Audio Volume actor when Fit to Geometry is used and no geometry is hit. The valid range is between 0 and 1.\n// The default value is 0, which indicates that sound can pass through the surface without any loss. A surface with 0 transmission loss is considered transparent. It disables any reflections and does not use the Acoustic Texture.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default Transmission Loss value set on a surface of a Spatial Audio Volume actor when Fit to Geometry is used and no geometry is hit. The valid range is between 0 and 1.\nThe default value is 0, which indicates that sound can pass through the surface without any loss. A surface with 0 transmission loss is considered transparent. It disables any reflections and does not use the Acoustic Texture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometrySurfacePropertiesTable_MetaData[] = {
		{ "Category", "Geometry Surface Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Table that associates Geometry Surface Properties (Acoustic Texture and Transmission Loss) with Physical Materials.\n// This table is used to retrieve the Geometry Surface Properties according to the Static Mesh's Physical Materials when using the AkGeometry component or when using Fit to Geometry with the AkSpatialAudioVolume.\n// Rows must be of type FWwiseGeometrySurfacePropertiesRow. We recommend that you do not add or remove rows.\n// Rows are updated when Physical Material assets are added to or removed from the project.\n// Rows are also updated when an Acoustic Texture with a name similar to a Physical Material is added to the project.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Table that associates Geometry Surface Properties (Acoustic Texture and Transmission Loss) with Physical Materials.\nThis table is used to retrieve the Geometry Surface Properties according to the Static Mesh's Physical Materials when using the AkGeometry component or when using Fit to Geometry with the AkSpatialAudioVolume.\nRows must be of type FWwiseGeometrySurfacePropertiesRow. We recommend that you do not add or remove rows.\nRows are updated when Physical Material assets are added to or removed from the project.\nRows are also updated when an Acoustic Texture with a name similar to a Physical Material is added to the project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDecayAbsorption_MetaData[] = {
		{ "Category", "Reverb Assignment" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.100000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default surface absorption value to use when estimating environment Decay value. It is used for the decay estimations of environments without Acoustic Texture information. The default value is 0.5.\n" },
#endif
		{ "DisplayName", "Default Surface Absorption" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default surface absorption value to use when estimating environment Decay value. It is used for the decay estimations of environments without Acoustic Texture information. The default value is 0.5." },
#endif
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReverbAuxBus_MetaData[] = {
		{ "Category", "Reverb Assignment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default Auxiliary Bus to choose for Automatic Reverb Assignment.\n// Automatic Reverb Assignment can be enabled on Late Reverb components. When their Decay values exceed the highest Decay value in the Reverb Assignment Table, or if the table is empty or nonexistant, the default Auxiliary Bus is chosen.\n// This Auxiliary Bus must have a reverb effect.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default Auxiliary Bus to choose for Automatic Reverb Assignment.\nAutomatic Reverb Assignment can be enabled on Late Reverb components. When their Decay values exceed the highest Decay value in the Reverb Assignment Table, or if the table is empty or nonexistant, the default Auxiliary Bus is chosen.\nThis Auxiliary Bus must have a reverb effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentDecayAuxBusMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RoomDecay to AuxBus Map.\n// @deprecated Use ReverbAssignmentTable instead.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RoomDecay to AuxBus Map.\n@deprecated Use ReverbAssignmentTable instead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbAssignmentTable_MetaData[] = {
		{ "Category", "Reverb Assignment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Table that associates Auxiliary Busses with Reverb Decay values. Rows must be of type FWwiseDecayAuxBusRow.\n// The Decay value represents the number of seconds it takes for the sound reverberation in an environment to decay by 60 dB.\n// The Auxiliary Busses are Auxiliary Busses in Wwise Authoring that have reverb effects.\n// If Automatic Reverb Assignment is enabled on a Late Reverb component, its Decay value is compared to the table's Decay values. The chosen Auxiliary Bus is the one associated with the closest and highest Decay value in the table.\n// If the given Decay value exceeds the highest Decay value in the table, or if the table is empty or nonexistant, the Default Reverb Aux Bus is chosen.\n// Decay values are represented with floating point numbers. We recommend that consecutive Decay values differ by at least 0.01 to ensure the correct Auxiliary Bus is chosen for a given Decay value.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Table that associates Auxiliary Busses with Reverb Decay values. Rows must be of type FWwiseDecayAuxBusRow.\nThe Decay value represents the number of seconds it takes for the sound reverberation in an environment to decay by 60 dB.\nThe Auxiliary Busses are Auxiliary Busses in Wwise Authoring that have reverb effects.\nIf Automatic Reverb Assignment is enabled on a Late Reverb component, its Decay value is compared to the table's Decay values. The chosen Auxiliary Bus is the one associated with the closest and highest Decay value in the table.\nIf the given Decay value exceeds the highest Decay value in the table, or if the table is empty or nonexistant, the Default Reverb Aux Bus is chosen.\nDecay values are represented with floating point numbers. We recommend that consecutive Decay values differ by at least 0.01 to ensure the correct Auxiliary Bus is chosen for a given Decay value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HFDampingName_MetaData[] = {
		{ "Category", "Reverb Assignment|RTPCs" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayEstimateName_MetaData[] = {
		{ "Category", "Reverb Assignment|RTPCs" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToFirstReflectionName_MetaData[] = {
		{ "Category", "Reverb Assignment|RTPCs" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HFDampingRTPC_MetaData[] = {
		{ "Category", "Reverb Assignment|RTPCs" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayEstimateRTPC_MetaData[] = {
		{ "Category", "Reverb Assignment|RTPCs" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToFirstReflectionRTPC_MetaData[] = {
		{ "Category", "Reverb Assignment|RTPCs" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioInputEvent_MetaData[] = {
		{ "Category", "Initialization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input event associated with the Wwise Audio Input\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input event associated with the Wwise Audio Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTextureParamsMap_MetaData[] = {
		{ "Deprecated", "" },
		{ "DeprecationMessage", "AcousticTextureParamsMap is now an internal map." },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitSwitchContainerMedia_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When generating the event data, the media contained in switch containers will be split by state/switch value\n// and only loaded if the state/switch value are currently loaded\n" },
#endif
		{ "Deprecated", "" },
		{ "DeprecationMessage", "Setting now exists for each AK Audio Event" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When generating the event data, the media contained in switch containers will be split by state/switch value\nand only loaded if the state/switch value are currently loaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitMediaPerFolder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Deprecated in 2022.1\n//Used in migration from previous versions\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated in 2022.1\nUsed in migration from previous versions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseEventBasedPackaging_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated in 2022.1\n//Used in migration from previous versions\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated in 2022.1\nUsed in migration from previous versions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandletCommitMessage_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Commit message that GenerateSoundBanksCommandlet will use\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Commit message that GenerateSoundBanksCommandlet will use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnrealCultureToWwiseCulture_MetaData[] = {
		{ "Category", "Localization" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAssetCreationPath_MetaData[] = {
		{ "Category", "Asset Creation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When an asset is dragged from the Wwise Browser, assets are created by default in this path.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When an asset is dragged from the Wwise Browser, assets are created by default in this path." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitBank_MetaData[] = {
		{ "Category", "Initialization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The unique Init Bank for the Wwise project. This contains the basic information necessary for properly setting up the SoundEngine.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique Init Bank for the Wwise project. This contains the basic information necessary for properly setting up the SoundEngine." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioRouting_MetaData[] = {
		{ "Category", "Initialization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Routing Audio from Unreal Audio to Wwise Sound Engine\n" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Unreal Audio Routing" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Routing Audio from Unreal Audio to Wwise Sound Engine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWwiseSoundEngineEnabled_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWwiseAudioLinkEnabled_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAkAudioMixerEnabled_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultListenerScalingFactor_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default value of the Scaling Factor when a Default Listener is created.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default value of the Scaling Factor when a Default Listener is created." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuspendAudioDuringFocusLoss_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Suspend the audio thread during focus loss" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderDuringFocusLoss_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only used when \"Suspend Audio During Focus Loss\" is enabled. Should the render happen during Audio suspension." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AskedToUseNewAssetManagement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiCoreRendering_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MigratedEnableMultiCoreRendering_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixupRedirectorsDuringMigration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseWindowsInstallationPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseMacInstallationPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometrySurfacePropertiesKeepAlive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkSettings constinit property declarations ******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxSimultaneousReverbVolumes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseProjectPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseSoundDataFolder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootOutputPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedSoundBanksFolder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseStagingDirectory;
	static void NewProp_bSoundBanksTransfered_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bSoundBanksTransfered = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoundBanksTransfered;
	static void NewProp_bAssetsMigrated_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bAssetsMigrated = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssetsMigrated;
	static void NewProp_bProjectMigrated_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bProjectMigrated = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectMigrated;
	static void NewProp_bAutoConnectToWAAPI_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bAutoConnectToWAAPI_DEPRECATED = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnectToWAAPI;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultOcclusionCollisionChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultFitToGeometryCollisionChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AkGeometryMap_ValueProp;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AkGeometryMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AkGeometryMap;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultAcousticTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultTransmissionLoss;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GeometrySurfacePropertiesTable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalDecayAbsorption;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultReverbAuxBus;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EnvironmentDecayAuxBusMap_ValueProp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvironmentDecayAuxBusMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EnvironmentDecayAuxBusMap;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReverbAssignmentTable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HFDampingName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DecayEstimateName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TimeToFirstReflectionName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HFDampingRTPC;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DecayEstimateRTPC;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TimeToFirstReflectionRTPC;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AudioInputEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcousticTextureParamsMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcousticTextureParamsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AcousticTextureParamsMap;
	static void NewProp_SplitSwitchContainerMedia_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->SplitSwitchContainerMedia = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SplitSwitchContainerMedia;
	static void NewProp_SplitMediaPerFolder_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->SplitMediaPerFolder = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SplitMediaPerFolder;
	static void NewProp_UseEventBasedPackaging_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->UseEventBasedPackaging = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseEventBasedPackaging;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommandletCommitMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealCultureToWwiseCulture_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealCultureToWwiseCulture_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UnrealCultureToWwiseCulture;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultAssetCreationPath;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InitBank;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioRouting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioRouting;
	static void NewProp_bWwiseSoundEngineEnabled_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bWwiseSoundEngineEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWwiseSoundEngineEnabled;
	static void NewProp_bWwiseAudioLinkEnabled_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bWwiseAudioLinkEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWwiseAudioLinkEnabled;
	static void NewProp_bAkAudioMixerEnabled_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bAkAudioMixerEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAkAudioMixerEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultListenerScalingFactor;
	static void NewProp_SuspendAudioDuringFocusLoss_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->SuspendAudioDuringFocusLoss = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SuspendAudioDuringFocusLoss;
	static void NewProp_RenderDuringFocusLoss_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->RenderDuringFocusLoss = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderDuringFocusLoss;
	static void NewProp_AskedToUseNewAssetManagement_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->AskedToUseNewAssetManagement_DEPRECATED = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AskedToUseNewAssetManagement;
	static void NewProp_bEnableMultiCoreRendering_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bEnableMultiCoreRendering_DEPRECATED = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiCoreRendering;
	static void NewProp_MigratedEnableMultiCoreRendering_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->MigratedEnableMultiCoreRendering = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MigratedEnableMultiCoreRendering;
	static void NewProp_FixupRedirectorsDuringMigration_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->FixupRedirectorsDuringMigration = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FixupRedirectorsDuringMigration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseWindowsInstallationPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseMacInstallationPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometrySurfacePropertiesKeepAlive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkSettings constinit property declarations ********************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkSettings Property Definitions *****************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MaxSimultaneousReverbVolumes = { "MaxSimultaneousReverbVolumes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, MaxSimultaneousReverbVolumes), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSimultaneousReverbVolumes_MetaData), NewProp_MaxSimultaneousReverbVolumes_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WwiseProjectPath = { "WwiseProjectPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, WwiseProjectPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseProjectPath_MetaData), NewProp_WwiseProjectPath_MetaData) }; // 0b92f70c4aaca653170512ccb353f3aa009da14a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WwiseSoundDataFolder = { "WwiseSoundDataFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, WwiseSoundDataFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseSoundDataFolder_MetaData), NewProp_WwiseSoundDataFolder_MetaData) }; // a9ea974572ee54d1b93cb49a6434fdbad40b6bf5
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RootOutputPath = { "RootOutputPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, RootOutputPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootOutputPath_MetaData), NewProp_RootOutputPath_MetaData) }; // a9ea974572ee54d1b93cb49a6434fdbad40b6bf5
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeneratedSoundBanksFolder = { "GeneratedSoundBanksFolder", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, GeneratedSoundBanksFolder_DEPRECATED), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedSoundBanksFolder_MetaData), NewProp_GeneratedSoundBanksFolder_MetaData) }; // a9ea974572ee54d1b93cb49a6434fdbad40b6bf5
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WwiseStagingDirectory = { "WwiseStagingDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, WwiseStagingDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseStagingDirectory_MetaData), NewProp_WwiseStagingDirectory_MetaData) }; // a9ea974572ee54d1b93cb49a6434fdbad40b6bf5
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSoundBanksTransfered = { "bSoundBanksTransfered", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_bSoundBanksTransfered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSoundBanksTransfered_MetaData), NewProp_bSoundBanksTransfered_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAssetsMigrated = { "bAssetsMigrated", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_bAssetsMigrated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAssetsMigrated_MetaData), NewProp_bAssetsMigrated_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bProjectMigrated = { "bProjectMigrated", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_bProjectMigrated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectMigrated_MetaData), NewProp_bProjectMigrated_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoConnectToWAAPI = { "bAutoConnectToWAAPI", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_bAutoConnectToWAAPI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoConnectToWAAPI_MetaData), NewProp_bAutoConnectToWAAPI_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DefaultOcclusionCollisionChannel = { "DefaultOcclusionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DefaultOcclusionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOcclusionCollisionChannel_MetaData), NewProp_DefaultOcclusionCollisionChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DefaultFitToGeometryCollisionChannel = { "DefaultFitToGeometryCollisionChannel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DefaultFitToGeometryCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFitToGeometryCollisionChannel_MetaData), NewProp_DefaultFitToGeometryCollisionChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AkGeometryMap_ValueProp = { "AkGeometryMap", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap, METADATA_PARAMS(0, nullptr) }; // 5754d0069400bf784c99d128cca7d07ae192b0b2
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_AkGeometryMap_Key_KeyProp = { "AkGeometryMap_Key", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_AkGeometryMap = { "AkGeometryMap", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, AkGeometryMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AkGeometryMap_MetaData), NewProp_AkGeometryMap_MetaData) }; // 5754d0069400bf784c99d128cca7d07ae192b0b2
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DefaultAcousticTexture = { "DefaultAcousticTexture", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DefaultAcousticTexture), Z_Construct_UClass_UAkAcousticTexture, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAcousticTexture_MetaData), NewProp_DefaultAcousticTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DefaultTransmissionLoss = { "DefaultTransmissionLoss", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DefaultTransmissionLoss), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTransmissionLoss_MetaData), NewProp_DefaultTransmissionLoss_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_GeometrySurfacePropertiesTable = { "GeometrySurfacePropertiesTable", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, GeometrySurfacePropertiesTable), Z_Construct_UClass_UDataTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometrySurfacePropertiesTable_MetaData), NewProp_GeometrySurfacePropertiesTable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GlobalDecayAbsorption = { "GlobalDecayAbsorption", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, GlobalDecayAbsorption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDecayAbsorption_MetaData), NewProp_GlobalDecayAbsorption_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DefaultReverbAuxBus = { "DefaultReverbAuxBus", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DefaultReverbAuxBus), Z_Construct_UClass_UAkAuxBus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultReverbAuxBus_MetaData), NewProp_DefaultReverbAuxBus_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_EnvironmentDecayAuxBusMap_ValueProp = { "EnvironmentDecayAuxBusMap", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAkAuxBus, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EnvironmentDecayAuxBusMap_Key_KeyProp = { "EnvironmentDecayAuxBusMap_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_EnvironmentDecayAuxBusMap = { "EnvironmentDecayAuxBusMap", nullptr, (EPropertyFlags)0x0014000000004000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, EnvironmentDecayAuxBusMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvironmentDecayAuxBusMap_MetaData), NewProp_EnvironmentDecayAuxBusMap_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_ReverbAssignmentTable = { "ReverbAssignmentTable", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, ReverbAssignmentTable), Z_Construct_UClass_UDataTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbAssignmentTable_MetaData), NewProp_ReverbAssignmentTable_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_HFDampingName = { "HFDampingName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, HFDampingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HFDampingName_MetaData), NewProp_HFDampingName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DecayEstimateName = { "DecayEstimateName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DecayEstimateName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayEstimateName_MetaData), NewProp_DecayEstimateName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TimeToFirstReflectionName = { "TimeToFirstReflectionName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, TimeToFirstReflectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToFirstReflectionName_MetaData), NewProp_TimeToFirstReflectionName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_HFDampingRTPC = { "HFDampingRTPC", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, HFDampingRTPC), Z_Construct_UClass_UAkRtpc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HFDampingRTPC_MetaData), NewProp_HFDampingRTPC_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DecayEstimateRTPC = { "DecayEstimateRTPC", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DecayEstimateRTPC), Z_Construct_UClass_UAkRtpc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayEstimateRTPC_MetaData), NewProp_DecayEstimateRTPC_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_TimeToFirstReflectionRTPC = { "TimeToFirstReflectionRTPC", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, TimeToFirstReflectionRTPC), Z_Construct_UClass_UAkRtpc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToFirstReflectionRTPC_MetaData), NewProp_TimeToFirstReflectionRTPC_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_AudioInputEvent = { "AudioInputEvent", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, AudioInputEvent), Z_Construct_UClass_UAkAudioEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioInputEvent_MetaData), NewProp_AudioInputEvent_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AcousticTextureParamsMap_ValueProp = { "AcousticTextureParamsMap", nullptr, (EPropertyFlags)0x0000000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAkAcousticTextureParams, METADATA_PARAMS(0, nullptr) }; // b46da8f243cff551207ff85a12b08fbdbf769241
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AcousticTextureParamsMap_Key_KeyProp = { "AcousticTextureParamsMap_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_AcousticTextureParamsMap = { "AcousticTextureParamsMap", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, AcousticTextureParamsMap_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticTextureParamsMap_MetaData), NewProp_AcousticTextureParamsMap_MetaData) }; // b46da8f243cff551207ff85a12b08fbdbf769241
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_SplitSwitchContainerMedia = { "SplitSwitchContainerMedia", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_SplitSwitchContainerMedia_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitSwitchContainerMedia_MetaData), NewProp_SplitSwitchContainerMedia_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_SplitMediaPerFolder = { "SplitMediaPerFolder", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_SplitMediaPerFolder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitMediaPerFolder_MetaData), NewProp_SplitMediaPerFolder_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_UseEventBasedPackaging = { "UseEventBasedPackaging", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_UseEventBasedPackaging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseEventBasedPackaging_MetaData), NewProp_UseEventBasedPackaging_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CommandletCommitMessage = { "CommandletCommitMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, CommandletCommitMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandletCommitMessage_MetaData), NewProp_CommandletCommitMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_UnrealCultureToWwiseCulture_ValueProp = { "UnrealCultureToWwiseCulture", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_UnrealCultureToWwiseCulture_Key_KeyProp = { "UnrealCultureToWwiseCulture_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_UnrealCultureToWwiseCulture = { "UnrealCultureToWwiseCulture", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, UnrealCultureToWwiseCulture), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnrealCultureToWwiseCulture_MetaData), NewProp_UnrealCultureToWwiseCulture_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DefaultAssetCreationPath = { "DefaultAssetCreationPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DefaultAssetCreationPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAssetCreationPath_MetaData), NewProp_DefaultAssetCreationPath_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_InitBank = { "InitBank", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, InitBank), Z_Construct_UClass_UAkInitBank, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitBank_MetaData), NewProp_InitBank_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AudioRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AudioRouting = { "AudioRouting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, AudioRouting), Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioRouting_MetaData), NewProp_AudioRouting_MetaData) }; // 34087d01cd072f1b98b85a237b12addb3743c371
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWwiseSoundEngineEnabled = { "bWwiseSoundEngineEnabled", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_bWwiseSoundEngineEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWwiseSoundEngineEnabled_MetaData), NewProp_bWwiseSoundEngineEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWwiseAudioLinkEnabled = { "bWwiseAudioLinkEnabled", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_bWwiseAudioLinkEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWwiseAudioLinkEnabled_MetaData), NewProp_bWwiseAudioLinkEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAkAudioMixerEnabled = { "bAkAudioMixerEnabled", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_bAkAudioMixerEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAkAudioMixerEnabled_MetaData), NewProp_bAkAudioMixerEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DefaultListenerScalingFactor = { "DefaultListenerScalingFactor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DefaultListenerScalingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultListenerScalingFactor_MetaData), NewProp_DefaultListenerScalingFactor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_SuspendAudioDuringFocusLoss = { "SuspendAudioDuringFocusLoss", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_SuspendAudioDuringFocusLoss_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuspendAudioDuringFocusLoss_MetaData), NewProp_SuspendAudioDuringFocusLoss_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_RenderDuringFocusLoss = { "RenderDuringFocusLoss", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_RenderDuringFocusLoss_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderDuringFocusLoss_MetaData), NewProp_RenderDuringFocusLoss_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_AskedToUseNewAssetManagement = { "AskedToUseNewAssetManagement", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_AskedToUseNewAssetManagement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AskedToUseNewAssetManagement_MetaData), NewProp_AskedToUseNewAssetManagement_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableMultiCoreRendering = { "bEnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_bEnableMultiCoreRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMultiCoreRendering_MetaData), NewProp_bEnableMultiCoreRendering_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_MigratedEnableMultiCoreRendering = { "MigratedEnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_MigratedEnableMultiCoreRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MigratedEnableMultiCoreRendering_MetaData), NewProp_MigratedEnableMultiCoreRendering_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_FixupRedirectorsDuringMigration = { "FixupRedirectorsDuringMigration", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &UHT_STATICS::NewProp_FixupRedirectorsDuringMigration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixupRedirectorsDuringMigration_MetaData), NewProp_FixupRedirectorsDuringMigration_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WwiseWindowsInstallationPath = { "WwiseWindowsInstallationPath", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, WwiseWindowsInstallationPath_DEPRECATED), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseWindowsInstallationPath_MetaData), NewProp_WwiseWindowsInstallationPath_MetaData) }; // a9ea974572ee54d1b93cb49a6434fdbad40b6bf5
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WwiseMacInstallationPath = { "WwiseMacInstallationPath", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, WwiseMacInstallationPath_DEPRECATED), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseMacInstallationPath_MetaData), NewProp_WwiseMacInstallationPath_MetaData) }; // 0b92f70c4aaca653170512ccb353f3aa009da14a
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GeometrySurfacePropertiesKeepAlive = { "GeometrySurfacePropertiesKeepAlive", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, GeometrySurfacePropertiesKeepAlive), Z_Construct_UClass_UDataTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometrySurfacePropertiesKeepAlive_MetaData), NewProp_GeometrySurfacePropertiesKeepAlive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxSimultaneousReverbVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseProjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseSoundDataFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RootOutputPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedSoundBanksFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseStagingDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSoundBanksTransfered,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAssetsMigrated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bProjectMigrated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoConnectToWAAPI,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultOcclusionCollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultFitToGeometryCollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkGeometryMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkGeometryMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AkGeometryMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultAcousticTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultTransmissionLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeometrySurfacePropertiesTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GlobalDecayAbsorption,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultReverbAuxBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnvironmentDecayAuxBusMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnvironmentDecayAuxBusMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnvironmentDecayAuxBusMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReverbAssignmentTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HFDampingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DecayEstimateName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TimeToFirstReflectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HFDampingRTPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DecayEstimateRTPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TimeToFirstReflectionRTPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioInputEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AcousticTextureParamsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AcousticTextureParamsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AcousticTextureParamsMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplitSwitchContainerMedia,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplitMediaPerFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UseEventBasedPackaging,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommandletCommitMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnrealCultureToWwiseCulture_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnrealCultureToWwiseCulture_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnrealCultureToWwiseCulture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultAssetCreationPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitBank,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioRouting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioRouting,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWwiseSoundEngineEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWwiseAudioLinkEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAkAudioMixerEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultListenerScalingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SuspendAudioDuringFocusLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RenderDuringFocusLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AskedToUseNewAssetManagement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableMultiCoreRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MigratedEnableMultiCoreRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FixupRedirectorsDuringMigration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseWindowsInstallationPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseMacInstallationPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeometrySurfacePropertiesKeepAlive,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkSettings Property Definitions *******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkSettings,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkSettings;
UClass* Z_Construct_UClass_UAkSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkSettings;
		if (!Z_Registration_Info_UClass_UAkSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkSettings"),
				Z_Registration_Info_UClass_UAkSettings.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UAkSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkSettings);
// ********** End Class UAkSettings ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AkAudio_EAkCollisionChannel, TEXT("EAkCollisionChannel"), &ZRIE_EAkCollisionChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1695411615U) },
		{ Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting, TEXT("EAkUnrealAudioRouting"), &ZRIE_EAkUnrealAudioRouting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 872971521U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap, Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewStructOps, TEXT("AkGeometrySurfacePropertiesToMap"),&Z_Registration_Info_UScriptStruct_FAkGeometrySurfacePropertiesToMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkGeometrySurfacePropertiesToMap), 1465176070U) },
		{ Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow, Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::NewStructOps, TEXT("WwiseGeometrySurfacePropertiesRow"),&Z_Registration_Info_UScriptStruct_FWwiseGeometrySurfacePropertiesRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseGeometrySurfacePropertiesRow), 306526225U) },
		{ Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow, Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::NewStructOps, TEXT("WwiseDecayAuxBusRow"),&Z_Registration_Info_UScriptStruct_FWwiseDecayAuxBusRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDecayAuxBusRow), 834940254U) },
		{ Z_Construct_UScriptStruct_FAkAcousticTextureParams, Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewStructOps, TEXT("AkAcousticTextureParams"),&Z_Registration_Info_UScriptStruct_FAkAcousticTextureParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAcousticTextureParams), 3027085554U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkSettings, TEXT("UAkSettings"), &Z_Registration_Info_UClass_UAkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSettings), 195795882U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h__Script_AkAudio_41e76ac23f89b1feae23d85fdb053401cd54af42{
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
