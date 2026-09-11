// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkReverbZone.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkReverbZone() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbZone(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbZone(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AAkReverbZone ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AAkReverbZone_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09""AAkSpatialAudioVolume\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Advanced Attachment Volume Advanced Attachment Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkReverbZone.h" },
		{ "ModuleRelativePath", "Classes/AkReverbZone.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAkSpatialAudioVolume" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentSpatialAudioVolume_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* In Wwise 2023.1.1, the Reverb Zone properties were moved to AkRoomComponent.\n\x09* AAkReverbZone.ParentSpatialAudioVolume is now called AkRoomComponent.ParentRoomActor\n\x09* The type has also been changed to Actor to allow any actor with Room components to be a parent Room.\n\x09* @warning Deprecated as of Wwise 2023.1.1.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In Wwise 2023.1.1, the Reverb Zone properties were moved to AkRoomComponent.\nAAkReverbZone.ParentSpatialAudioVolume is now called AkRoomComponent.ParentRoomActor\nThe type has also been changed to Actor to allow any actor with Room components to be a parent Room.\n@warning Deprecated as of Wwise 2023.1.1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRegionWidth_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* In Wwise 2023.1.1, the Reverb Zone properties were moved to AkRoomComponent.\n\x09* AAkReverbZone.TransitionRegionWidth is now AkRoomComponent.TransitionRegionWidth\n\x09* @warning Deprecated as of Wwise 2023.1.1.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In Wwise 2023.1.1, the Reverb Zone properties were moved to AkRoomComponent.\nAAkReverbZone.TransitionRegionWidth is now AkRoomComponent.TransitionRegionWidth\n@warning Deprecated as of Wwise 2023.1.1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresMigration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkReverbZone.h" },
	};
#endif
#endif // WITH_METADATA

// ********** Begin Class AAkReverbZone constinit property declarations ****************************
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentSpatialAudioVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionRegionWidth;
	static void NewProp_bRequiresMigration_SetBit(void* Obj)
	{
		((AAkReverbZone*)Obj)->bRequiresMigration = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresMigration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif
// ********** End Class AAkReverbZone constinit property declarations ******************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkReverbZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AAkReverbZone Property Definitions ***************************************
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParentSpatialAudioVolume = { "ParentSpatialAudioVolume", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbZone, ParentSpatialAudioVolume), Z_Construct_UClass_AAkSpatialAudioVolume, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentSpatialAudioVolume_MetaData), NewProp_ParentSpatialAudioVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TransitionRegionWidth = { "TransitionRegionWidth", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AAkReverbZone, TransitionRegionWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionRegionWidth_MetaData), NewProp_TransitionRegionWidth_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRequiresMigration = { "bRequiresMigration", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAkReverbZone), &UHT_STATICS::NewProp_bRequiresMigration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresMigration_MetaData), NewProp_bRequiresMigration_MetaData) };
#endif
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentSpatialAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransitionRegionWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRequiresMigration,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
#endif
// ********** End Class AAkReverbZone Property Definitions *****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AAkSpatialAudioVolume,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AAkReverbZone,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(UHT_STATICS::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(UHT_STATICS::PropPointers), 0),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_AAkReverbZone;
UClass* Z_Construct_UClass_AAkReverbZone(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AAkReverbZone;
		if (!Z_Registration_Info_UClass_AAkReverbZone.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkReverbZone"),
				Z_Registration_Info_UClass_AAkReverbZone.InnerSingleton,
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
		return Z_Registration_Info_UClass_AAkReverbZone.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AAkReverbZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkReverbZone.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AAkReverbZone.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAkReverbZone);
AAkReverbZone::~AAkReverbZone() {}
// ********** End Class AAkReverbZone **************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkReverbZone_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAkReverbZone, TEXT("AAkReverbZone"), &Z_Registration_Info_UClass_AAkReverbZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkReverbZone), 1971849378U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkReverbZone_h__Script_AkAudio_8867e67099624df1be679ea8f7ccd356ffd5e26a{
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
