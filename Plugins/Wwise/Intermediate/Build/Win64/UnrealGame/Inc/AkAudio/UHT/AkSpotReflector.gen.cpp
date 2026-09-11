// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkSpotReflector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkSpotReflector() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkSpotReflector(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkSpotReflector(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AAkSpotReflector *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AAkSpotReflector_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "AkSpotReflector.h" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBus_MetaData[] = {
		{ "Category", "AkSpotReflector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\n\x09*\x09Leave unassigned to use the Early Reflections Auxiliary Bus that is assigned in the Wwise Authoring Tool.\n\x09*\x09Setting a value here will apply only to sounds playing on AK Components with EnableSpotReflectors to true.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\nLeave unassigned to use the Early Reflections Auxiliary Bus that is assigned in the Wwise Authoring Tool.\nSetting a value here will apply only to sounds playing on AK Components with EnableSpotReflectors to true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBusName_MetaData[] = {
		{ "Category", "AkSpotReflector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\n\x09*\x09Leave unassigned to use the Early Reflections Auxiliary Bus that is assigned in the Wwise Authoring Tool.\n\x09*\x09Setting a value here will apply only to sounds playing on AK Components with EnableSpotReflectors to true.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\nLeave unassigned to use the Early Reflections Auxiliary Bus that is assigned in the Wwise Authoring Tool.\nSetting a value here will apply only to sounds playing on AK Components with EnableSpotReflectors to true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "AkSpotReflector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09The Acoustic Texture represents sound absorption. It is done by filtering the sound bouncing off the spot reflector.\n\x09*\x09If left to None, no filtering will be applied to the sound.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture represents sound absorption. It is done by filtering the sound bouncing off the spot reflector.\nIf left to None, no filtering will be applied to the sound." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceScalingFactor_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09This number scales the distance between the listener and the actual image source, preserving orientation.\n\x09*\x09Set to 1 to position the image source at the position of the spot reflector\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This number scales the distance between the listener and the actual image source, preserving orientation.\nSet to 1 to position the image source at the position of the spot reflector" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "AkSpotReflector" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Game-controlled level for the sound that will emit from the image source. Valid range: (0.0, 4.0)*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game-controlled level for the sound that will emit from the image source. Valid range: (0.0, 4.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SameRoomOnly_MetaData[] = {
		{ "Category", "AkSpotReflector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Make this spot reflector only reflect emitted sounds in the same Spatial Audio Room.*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make this spot reflector only reflect emitted sounds in the same Spatial Audio Room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableRoomOverride_MetaData[] = {
		{ "Category", "AkSpotReflector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the room this spot reflector is contained in. If disabled, a containment check will be done to find the room.*/" },
#endif
		{ "EditCondition", "SameRoomOnly" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the room this spot reflector is contained in. If disabled, a containment check will be done to find the room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomOverride_MetaData[] = {
		{ "Category", "AkSpotReflector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The room in which the spot reflector will be virtually placed in. If set to None, the default \"Outdoors\" room will be used.*/" },
#endif
		{ "EditCondition", "EnableRoomOverride" },
		{ "ModuleRelativePath", "Classes/AkSpotReflector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The room in which the spot reflector will be virtually placed in. If set to None, the default \"Outdoors\" room will be used." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AAkSpotReflector constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EarlyReflectionAuxBus;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EarlyReflectionAuxBusName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AcousticTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceScalingFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static void NewProp_SameRoomOnly_SetBit(void* Obj)
	{
		((AAkSpotReflector*)Obj)->SameRoomOnly = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SameRoomOnly;
	static void NewProp_EnableRoomOverride_SetBit(void* Obj)
	{
		((AAkSpotReflector*)Obj)->EnableRoomOverride = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableRoomOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAkSpotReflector constinit property declarations ***************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkSpotReflector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AAkSpotReflector Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EarlyReflectionAuxBus = { "EarlyReflectionAuxBus", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpotReflector, EarlyReflectionAuxBus), Z_Construct_UClass_UAkAuxBus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarlyReflectionAuxBus_MetaData), NewProp_EarlyReflectionAuxBus_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_EarlyReflectionAuxBusName = { "EarlyReflectionAuxBusName", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpotReflector, EarlyReflectionAuxBusName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarlyReflectionAuxBusName_MetaData), NewProp_EarlyReflectionAuxBusName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpotReflector, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticTexture_MetaData), NewProp_AcousticTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DistanceScalingFactor = { "DistanceScalingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpotReflector, DistanceScalingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceScalingFactor_MetaData), NewProp_DistanceScalingFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpotReflector, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_SameRoomOnly = { "SameRoomOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkSpotReflector), &UHT_STATICS::NewProp_SameRoomOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SameRoomOnly_MetaData), NewProp_SameRoomOnly_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_EnableRoomOverride = { "EnableRoomOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkSpotReflector), &UHT_STATICS::NewProp_EnableRoomOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableRoomOverride_MetaData), NewProp_EnableRoomOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoomOverride = { "RoomOverride", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AAkSpotReflector, RoomOverride), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomOverride_MetaData), NewProp_RoomOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EarlyReflectionAuxBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EarlyReflectionAuxBusName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AcousticTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceScalingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SameRoomOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnableRoomOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoomOverride,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AAkSpotReflector Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AAkSpotReflector,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_AAkSpotReflector;
UClass* Z_Construct_UClass_AAkSpotReflector(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AAkSpotReflector;
		if (!Z_Registration_Info_UClass_AAkSpotReflector.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkSpotReflector"),
				Z_Registration_Info_UClass_AAkSpotReflector.InnerSingleton,
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
		return Z_Registration_Info_UClass_AAkSpotReflector.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AAkSpotReflector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkSpotReflector.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AAkSpotReflector.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAkSpotReflector);
AAkSpotReflector::~AAkSpotReflector() {}
// ********** End Class AAkSpotReflector ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpotReflector_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAkSpotReflector, TEXT("AAkSpotReflector"), &Z_Registration_Info_UClass_AAkSpotReflector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkSpotReflector), 3388502477U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkSpotReflector_h__Script_AkAudio_9163b6036273afe08c60920f77f8db1824f94f11{
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
