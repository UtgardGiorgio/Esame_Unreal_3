// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkGroupValue.h"
#include "Wwise/CookedData/WwiseGroupValueCookedData.h"
#include "Wwise/Info/WwiseGroupValueInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkGroupValue() {}

// ********** Begin Cross Module References ********************************************************
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueInfo(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkGroupValue ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkGroupValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "AkGroupValue.h" },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupValueCookedData_MetaData[] = {
		{ "Category", "AkGroupValue" },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupValueInfo_MetaData[] = {
		{ "Category", "AkGroupValue" },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupShortID_MetaData[] = {
		{ "Deprecated", "" },
		{ "DeprecationMessage", "Use Group ID from Load Data. Used for migration from older versions." },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkGroupValue constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupValueCookedData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupValueInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GroupShortID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkGroupValue constinit property declarations ******************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGroupValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkGroupValue Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GroupValueCookedData = { "GroupValueCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGroupValue, GroupValueCookedData), Z_Construct_UScriptStruct_FWwiseGroupValueCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupValueCookedData_MetaData), NewProp_GroupValueCookedData_MetaData) }; // 8fb3596f777e55e972cf5e3a06645453788eceb2
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GroupValueInfo = { "GroupValueInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGroupValue, GroupValueInfo), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupValueInfo_MetaData), NewProp_GroupValueInfo_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_GroupShortID = { "GroupShortID", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGroupValue, GroupShortID_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupShortID_MetaData), NewProp_GroupShortID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroupValueCookedData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroupValueInfo,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroupShortID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkGroupValue Property Definitions *****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkAudioType,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkGroupValue,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkGroupValue;
UClass* Z_Construct_UClass_UAkGroupValue(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkGroupValue;
		if (!Z_Registration_Info_UClass_UAkGroupValue.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkGroupValue"),
				Z_Registration_Info_UClass_UAkGroupValue.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkGroupValue.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkGroupValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGroupValue.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkGroupValue.OuterSingleton;
}
#undef UHT_STATICS
UAkGroupValue::UAkGroupValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkGroupValue);
UAkGroupValue::~UAkGroupValue() {}
// ********** End Class UAkGroupValue **************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGroupValue_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkGroupValue, TEXT("UAkGroupValue"), &Z_Registration_Info_UClass_UAkGroupValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGroupValue), 3733690693U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGroupValue_h__Script_AkAudio_7595a9b05951232cf5b972ac94ca61965a81bab1{
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
