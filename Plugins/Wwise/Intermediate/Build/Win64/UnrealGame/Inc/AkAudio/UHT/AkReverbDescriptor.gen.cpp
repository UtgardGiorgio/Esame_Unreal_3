// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkReverbDescriptor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkReverbDescriptor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkReverbDescriptor(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FAkReverbDescriptor ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkReverbDescriptor>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkReverbDescriptor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FAkReverbDescriptor is used to estimate the reverb parameters of a primitive component, by calculating its volume and surface area, and using the 'sabine equation' to estimate the reverb tail.\n * It also estimates the Time to First Reflection and the HFDamping.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FAkReverbDescriptor is used to estimate the reverb parameters of a primitive component, by calculating its volume and surface area, and using the 'sabine equation' to estimate the reverb tail.\nIt also estimates the Time to First Reflection and the HFDamping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkReverbDescriptor.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkReverbDescriptor constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Primitive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkReverbDescriptor constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkReverbDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkReverbDescriptor Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FAkReverbDescriptor, Primitive), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Primitive_MetaData), NewProp_Primitive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Primitive,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkReverbDescriptor Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkReverbDescriptor",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkReverbDescriptor>(),
	alignof(FAkReverbDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkReverbDescriptor;
UScriptStruct* Z_Construct_UScriptStruct_FAkReverbDescriptor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkReverbDescriptor.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkReverbDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkReverbDescriptor, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("AkReverbDescriptor"));
		}
		return Z_Registration_Info_UScriptStruct_FAkReverbDescriptor.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkReverbDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkReverbDescriptor.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkReverbDescriptor.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkReverbDescriptor *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkReverbDescriptor_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAkReverbDescriptor, Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewStructOps, TEXT("AkReverbDescriptor"),&Z_Registration_Info_UScriptStruct_FAkReverbDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkReverbDescriptor), 2315562761U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkReverbDescriptor_h__Script_AkAudio_730cc8386322db688ade795a7098b512f6170a3d{
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
