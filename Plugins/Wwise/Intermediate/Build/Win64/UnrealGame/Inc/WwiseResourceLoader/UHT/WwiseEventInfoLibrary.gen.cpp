// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Info/WwiseEventInfoLibrary.h"
#include "Wwise/Info/WwiseEventInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseEventInfoLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions(ETypeConstructPhase);
WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseEventInfo(ETypeConstructPhase);
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseEventInfoLibrary(ETypeConstructPhase);
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseEventInfoLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UWwiseEventInfoLibrary Function BreakStruct ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventBreakStruct_Parms
	{
		FWwiseEventInfo Ref;
		FGuid OutWwiseGuid;
		int32 OutWwiseShortId;
		FString OutWwiseName;
		EWwiseEventSwitchContainerLoading OutSwitchContainerLoading;
		EWwiseEventDestroyOptions OutDestroyOptions;
		int32 OutHardCodedSoundBankShortId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "OutDestroyOptions, OutHardCodedSoundBankShortId" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|EventInfo" },
		{ "DisplayName", "Break EventInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakStruct constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutWwiseGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutWwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutWwiseName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutSwitchContainerLoading_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutSwitchContainerLoading;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutDestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutDestroyOptions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutHardCodedSoundBankShortId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakStruct constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakStruct Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutWwiseGuid = { "OutWwiseGuid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutWwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutWwiseShortId = { "OutWwiseShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutWwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutWwiseName = { "OutWwiseName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutWwiseName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutSwitchContainerLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutSwitchContainerLoading = { "OutSwitchContainerLoading", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutSwitchContainerLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(0, nullptr) }; // 9933948363039c8233d429f57725b5030c278ef2
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutDestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutDestroyOptions = { "OutDestroyOptions", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutDestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, METADATA_PARAMS(0, nullptr) }; // 31f999005d7e6bdd726d3bf20fd86c9d30fde542
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutHardCodedSoundBankShortId = { "OutHardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventBreakStruct_Parms, OutHardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutWwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutWwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutWwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSwitchContainerLoading_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSwitchContainerLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutDestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutDestroyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutHardCodedSoundBankShortId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BreakStruct Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "BreakStruct", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventBreakStruct_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventBreakStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execBreakStruct)
{
	P_GET_STRUCT(FWwiseEventInfo,Z_Param_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutWwiseGuid);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWwiseShortId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutWwiseName);
	P_GET_ENUM_REF(EWwiseEventSwitchContainerLoading,Z_Param_Out_OutSwitchContainerLoading);
	P_GET_ENUM_REF(EWwiseEventDestroyOptions,Z_Param_Out_OutDestroyOptions);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutHardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWwiseEventInfoLibrary::BreakStruct(Z_Param_Ref,Z_Param_Out_OutWwiseGuid,Z_Param_Out_OutWwiseShortId,Z_Param_Out_OutWwiseName,(EWwiseEventSwitchContainerLoading&)(Z_Param_Out_OutSwitchContainerLoading),(EWwiseEventDestroyOptions&)(Z_Param_Out_OutDestroyOptions),Z_Param_Out_OutHardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function BreakStruct ********************************

// ********** Begin Class UWwiseEventInfoLibrary Function GetDestroyOptions ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventGetDestroyOptions_Parms
	{
		FWwiseEventInfo Ref;
		EWwiseEventDestroyOptions ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Destroy Options" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDestroyOptions constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDestroyOptions constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDestroyOptions Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetDestroyOptions_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetDestroyOptions_Parms, ReturnValue), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 31f999005d7e6bdd726d3bf20fd86c9d30fde542
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDestroyOptions Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetDestroyOptions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventGetDestroyOptions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventGetDestroyOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetDestroyOptions)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EWwiseEventDestroyOptions*)Z_Param__Result=UWwiseEventInfoLibrary::GetDestroyOptions(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function GetDestroyOptions **************************

// ********** Begin Class UWwiseEventInfoLibrary Function GetHardCodedSoundBankShortId *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms
	{
		FWwiseEventInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Short Id" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHardCodedSoundBankShortId constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHardCodedSoundBankShortId constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHardCodedSoundBankShortId Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetHardCodedSoundBankShortId Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetHardCodedSoundBankShortId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventGetHardCodedSoundBankShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetHardCodedSoundBankShortId)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseEventInfoLibrary::GetHardCodedSoundBankShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function GetHardCodedSoundBankShortId ***************

// ********** Begin Class UWwiseEventInfoLibrary Function GetSwitchContainerLoading ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms
	{
		FWwiseEventInfo Ref;
		EWwiseEventSwitchContainerLoading ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Switch Container Loading" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSwitchContainerLoading constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSwitchContainerLoading constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSwitchContainerLoading Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms, ReturnValue), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 9933948363039c8233d429f57725b5030c278ef2
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSwitchContainerLoading Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetSwitchContainerLoading", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventGetSwitchContainerLoading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetSwitchContainerLoading)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EWwiseEventSwitchContainerLoading*)Z_Param__Result=UWwiseEventInfoLibrary::GetSwitchContainerLoading(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function GetSwitchContainerLoading ******************

// ********** Begin Class UWwiseEventInfoLibrary Function GetWwiseGuid *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventGetWwiseGuid_Parms
	{
		FWwiseEventInfo Ref;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "GUID" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWwiseGuid constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWwiseGuid constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWwiseGuid Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWwiseGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetWwiseGuid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventGetWwiseGuid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventGetWwiseGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetWwiseGuid)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=UWwiseEventInfoLibrary::GetWwiseGuid(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function GetWwiseGuid *******************************

// ********** Begin Class UWwiseEventInfoLibrary Function GetWwiseName *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventGetWwiseName_Parms
	{
		FWwiseEventInfo Ref;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Name" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWwiseName constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWwiseName constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWwiseName Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetWwiseName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventGetWwiseName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventGetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWwiseEventInfoLibrary::GetWwiseName(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function GetWwiseName *******************************

// ********** Begin Class UWwiseEventInfoLibrary Function GetWwiseShortId **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventGetWwiseShortId_Parms
	{
		FWwiseEventInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Short Id" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWwiseShortId constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWwiseShortId constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWwiseShortId Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventGetWwiseShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "GetWwiseShortId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventGetWwiseShortId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventGetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execGetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseEventInfoLibrary::GetWwiseShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function GetWwiseShortId ****************************

// ********** Begin Class UWwiseEventInfoLibrary Function MakeStruct *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventMakeStruct_Parms
	{
		FGuid WwiseGuid;
		int32 WwiseShortId;
		FString WwiseName;
		EWwiseEventSwitchContainerLoading SwitchContainerLoading;
		EWwiseEventDestroyOptions DestroyOptions;
		int32 HardCodedSoundBankShortId;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "DestroyOptions, HardCodedSoundBankShortId" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|EventInfo" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "DisplayName", "Make EventInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Event Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeStruct constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SwitchContainerLoading_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SwitchContainerLoading;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HardCodedSoundBankShortId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeStruct constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeStruct Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseGuid_MetaData), NewProp_WwiseGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SwitchContainerLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SwitchContainerLoading = { "SwitchContainerLoading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, SwitchContainerLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(0, nullptr) }; // 9933948363039c8233d429f57725b5030c278ef2
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, METADATA_PARAMS(0, nullptr) }; // 31f999005d7e6bdd726d3bf20fd86c9d30fde542
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventMakeStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchContainerLoading_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchContainerLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HardCodedSoundBankShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MakeStruct Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "MakeStruct", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventMakeStruct_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventMakeStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execMakeStruct)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_GET_ENUM(EWwiseEventSwitchContainerLoading,Z_Param_SwitchContainerLoading);
	P_GET_ENUM(EWwiseEventDestroyOptions,Z_Param_DestroyOptions);
	P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::MakeStruct(Z_Param_Out_WwiseGuid,Z_Param_WwiseShortId,Z_Param_WwiseName,EWwiseEventSwitchContainerLoading(Z_Param_SwitchContainerLoading),EWwiseEventDestroyOptions(Z_Param_DestroyOptions),Z_Param_HardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function MakeStruct *********************************

// ********** Begin Class UWwiseEventInfoLibrary Function SetDestroyOptions ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventSetDestroyOptions_Parms
	{
		FWwiseEventInfo Ref;
		EWwiseEventDestroyOptions DestroyOptions;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDestroyOptions constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestroyOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestroyOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDestroyOptions constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDestroyOptions Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetDestroyOptions_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DestroyOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DestroyOptions = { "DestroyOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetDestroyOptions_Parms, DestroyOptions), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventDestroyOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyOptions_MetaData), NewProp_DestroyOptions_MetaData) }; // 31f999005d7e6bdd726d3bf20fd86c9d30fde542
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetDestroyOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestroyOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDestroyOptions Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetDestroyOptions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventSetDestroyOptions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventSetDestroyOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetDestroyOptions)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_GET_ENUM_REF(EWwiseEventDestroyOptions,Z_Param_Out_DestroyOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetDestroyOptions(Z_Param_Out_Ref,(EWwiseEventDestroyOptions&)(Z_Param_Out_DestroyOptions));
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function SetDestroyOptions **************************

// ********** Begin Class UWwiseEventInfoLibrary Function SetHardCodedSoundBankShortId *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms
	{
		FWwiseEventInfo Ref;
		int32 HardCodedSoundBankShortId;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHardCodedSoundBankShortId constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HardCodedSoundBankShortId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHardCodedSoundBankShortId constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHardCodedSoundBankShortId Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HardCodedSoundBankShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetHardCodedSoundBankShortId Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetHardCodedSoundBankShortId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventSetHardCodedSoundBankShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetHardCodedSoundBankShortId)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetHardCodedSoundBankShortId(Z_Param_Out_Ref,Z_Param_HardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function SetHardCodedSoundBankShortId ***************

// ********** Begin Class UWwiseEventInfoLibrary Function SetSwitchContainerLoading ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms
	{
		FWwiseEventInfo Ref;
		EWwiseEventSwitchContainerLoading SwitchContainerLoading;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchContainerLoading_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSwitchContainerLoading constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SwitchContainerLoading_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SwitchContainerLoading;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSwitchContainerLoading constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSwitchContainerLoading Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SwitchContainerLoading_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SwitchContainerLoading = { "SwitchContainerLoading", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms, SwitchContainerLoading), Z_Construct_UEnum_WwiseResourceLoader_EWwiseEventSwitchContainerLoading, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchContainerLoading_MetaData), NewProp_SwitchContainerLoading_MetaData) }; // 9933948363039c8233d429f57725b5030c278ef2
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchContainerLoading_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchContainerLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSwitchContainerLoading Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetSwitchContainerLoading", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventSetSwitchContainerLoading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetSwitchContainerLoading)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_GET_ENUM_REF(EWwiseEventSwitchContainerLoading,Z_Param_Out_SwitchContainerLoading);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetSwitchContainerLoading(Z_Param_Out_Ref,(EWwiseEventSwitchContainerLoading&)(Z_Param_Out_SwitchContainerLoading));
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function SetSwitchContainerLoading ******************

// ********** Begin Class UWwiseEventInfoLibrary Function SetWwiseGuid *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventSetWwiseGuid_Parms
	{
		FWwiseEventInfo Ref;
		FGuid WwiseGuid;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWwiseGuid constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWwiseGuid constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWwiseGuid Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseGuid_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseGuid_MetaData), NewProp_WwiseGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWwiseGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetWwiseGuid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventSetWwiseGuid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventSetWwiseGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetWwiseGuid)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetWwiseGuid(Z_Param_Out_Ref,Z_Param_Out_WwiseGuid);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function SetWwiseGuid *******************************

// ********** Begin Class UWwiseEventInfoLibrary Function SetWwiseName *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventSetWwiseName_Parms
	{
		FWwiseEventInfo Ref;
		FString WwiseName;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWwiseName constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWwiseName constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWwiseName Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseName_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseName_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetWwiseName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventSetWwiseName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventSetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetWwiseName(Z_Param_Out_Ref,Z_Param_WwiseName);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function SetWwiseName *******************************

// ********** Begin Class UWwiseEventInfoLibrary Function SetWwiseShortId **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId_Statics
struct UHT_STATICS
{
	struct WwiseEventInfoLibrary_eventSetWwiseShortId_Parms
	{
		FWwiseEventInfo Ref;
		int32 WwiseShortId;
		FWwiseEventInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Event Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Event Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWwiseShortId constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWwiseShortId constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWwiseShortId Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseShortId_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseEventInfoLibrary_eventSetWwiseShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseEventInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 8397068b5a27847867c9f36d069883f5fa91fc77
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseEventInfoLibrary, nullptr, "SetWwiseShortId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseEventInfoLibrary_eventSetWwiseShortId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseEventInfoLibrary_eventSetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseEventInfoLibrary::execSetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseEventInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseEventInfo*)Z_Param__Result=UWwiseEventInfoLibrary::SetWwiseShortId(Z_Param_Out_Ref,Z_Param_WwiseShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseEventInfoLibrary Function SetWwiseShortId ****************************

// ********** Begin Class UWwiseEventInfoLibrary ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWwiseEventInfoLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Wwise/Info/WwiseEventInfoLibrary.h" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseEventInfoLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseEventInfoLibrary constinit property declarations *******************
// ********** End Class UWwiseEventInfoLibrary constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BreakStruct"), .Pointer = &UWwiseEventInfoLibrary::execBreakStruct },
		{ .NameUTF8 = UTF8TEXT("GetDestroyOptions"), .Pointer = &UWwiseEventInfoLibrary::execGetDestroyOptions },
		{ .NameUTF8 = UTF8TEXT("GetHardCodedSoundBankShortId"), .Pointer = &UWwiseEventInfoLibrary::execGetHardCodedSoundBankShortId },
		{ .NameUTF8 = UTF8TEXT("GetSwitchContainerLoading"), .Pointer = &UWwiseEventInfoLibrary::execGetSwitchContainerLoading },
		{ .NameUTF8 = UTF8TEXT("GetWwiseGuid"), .Pointer = &UWwiseEventInfoLibrary::execGetWwiseGuid },
		{ .NameUTF8 = UTF8TEXT("GetWwiseName"), .Pointer = &UWwiseEventInfoLibrary::execGetWwiseName },
		{ .NameUTF8 = UTF8TEXT("GetWwiseShortId"), .Pointer = &UWwiseEventInfoLibrary::execGetWwiseShortId },
		{ .NameUTF8 = UTF8TEXT("MakeStruct"), .Pointer = &UWwiseEventInfoLibrary::execMakeStruct },
		{ .NameUTF8 = UTF8TEXT("SetDestroyOptions"), .Pointer = &UWwiseEventInfoLibrary::execSetDestroyOptions },
		{ .NameUTF8 = UTF8TEXT("SetHardCodedSoundBankShortId"), .Pointer = &UWwiseEventInfoLibrary::execSetHardCodedSoundBankShortId },
		{ .NameUTF8 = UTF8TEXT("SetSwitchContainerLoading"), .Pointer = &UWwiseEventInfoLibrary::execSetSwitchContainerLoading },
		{ .NameUTF8 = UTF8TEXT("SetWwiseGuid"), .Pointer = &UWwiseEventInfoLibrary::execSetWwiseGuid },
		{ .NameUTF8 = UTF8TEXT("SetWwiseName"), .Pointer = &UWwiseEventInfoLibrary::execSetWwiseName },
		{ .NameUTF8 = UTF8TEXT("SetWwiseShortId"), .Pointer = &UWwiseEventInfoLibrary::execSetWwiseShortId },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_BreakStruct, "BreakStruct" }, // db081a04d0ca66119ca6593b01cf3ab2cf3975bc
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetDestroyOptions, "GetDestroyOptions" }, // 2562966e96fc368f8942d9ca7c08efbf6ce09249
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId, "GetHardCodedSoundBankShortId" }, // 18eb27a9043b97171de8500d2e04e9f0dc6282f4
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetSwitchContainerLoading, "GetSwitchContainerLoading" }, // 8c7e0617cdbd49c745af830a3023274ffd4c41d5
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseGuid, "GetWwiseGuid" }, // bfdb1d06d6484ff4a64ccad57d3fa82ef8a03b2e
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseName, "GetWwiseName" }, // 8bad16119bc1fb5e1f5c4b2bd92b1cb23ffebd10
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_GetWwiseShortId, "GetWwiseShortId" }, // 231bd204501d4d780d622b71596a193624749ef1
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_MakeStruct, "MakeStruct" }, // 33b3d2b84fdec7abb8de5d53c8b7ed443bfebae1
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetDestroyOptions, "SetDestroyOptions" }, // 9aadfb688ebcca46c8300d675908678426b7cccc
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId, "SetHardCodedSoundBankShortId" }, // 94590c78df7ef88452a3d7ae2e1842a87c3dfeaa
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetSwitchContainerLoading, "SetSwitchContainerLoading" }, // bbfe5036cef1c326a412ede86ada8b9ec393393a
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseGuid, "SetWwiseGuid" }, // 4d0540f0b3c6a15fa191d581b421a4b65926edaf
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseName, "SetWwiseName" }, // ba0efb768c22243ba7efc6d886b3b9744f346c8b
		{ &Z_Construct_UFunction_UWwiseEventInfoLibrary_SetWwiseShortId, "SetWwiseShortId" }, // ed2d09b520dba92dee009614c00159160039f303
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseEventInfoLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWwiseEventInfoLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UWwiseEventInfoLibrary_StaticRegisterNativesUWwiseEventInfoLibrary()
{
	UClass* Class = UWwiseEventInfoLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseEventInfoLibrary;
UClass* Z_Construct_UClass_UWwiseEventInfoLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWwiseEventInfoLibrary;
		if (!Z_Registration_Info_UClass_UWwiseEventInfoLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WwiseEventInfoLibrary"),
				Z_Registration_Info_UClass_UWwiseEventInfoLibrary.InnerSingleton,
				UWwiseEventInfoLibrary_StaticRegisterNativesUWwiseEventInfoLibrary,
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
		return Z_Registration_Info_UClass_UWwiseEventInfoLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWwiseEventInfoLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseEventInfoLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseEventInfoLibrary.OuterSingleton;
}
#undef UHT_STATICS
UWwiseEventInfoLibrary::UWwiseEventInfoLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseEventInfoLibrary);
UWwiseEventInfoLibrary::~UWwiseEventInfoLibrary() {}
// ********** End Class UWwiseEventInfoLibrary *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseEventInfoLibrary, TEXT("UWwiseEventInfoLibrary"), &Z_Registration_Info_UClass_UWwiseEventInfoLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseEventInfoLibrary), 3529376299U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseEventInfoLibrary_h__Script_WwiseResourceLoader_85c68ded125a88bfb3a1f6006f9d096eb8165068{
	TEXT("/Script/WwiseResourceLoader"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
