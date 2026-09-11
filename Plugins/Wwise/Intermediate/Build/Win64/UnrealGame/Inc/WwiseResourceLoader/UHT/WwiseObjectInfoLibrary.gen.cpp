// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Info/WwiseObjectInfoLibrary.h"
#include "Wwise/Info/WwiseObjectInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseObjectInfoLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo(ETypeConstructPhase);
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseObjectInfoLibrary(ETypeConstructPhase);
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseObjectInfoLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UWwiseObjectInfoLibrary Function BreakStruct *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct_Statics
struct UHT_STATICS
{
	struct WwiseObjectInfoLibrary_eventBreakStruct_Parms
	{
		FWwiseObjectInfo Ref;
		FGuid OutWwiseGuid;
		int32 OutWwiseShortId;
		FString OutWwiseName;
		int32 OutHardCodedSoundBankShortId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "OutHardCodedSoundBankShortId" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|WwiseObjectInfo" },
		{ "DisplayName", "Break WwiseObjectInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakStruct constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutWwiseGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutWwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutWwiseName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutHardCodedSoundBankShortId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakStruct constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakStruct Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutWwiseGuid = { "OutWwiseGuid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, OutWwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutWwiseShortId = { "OutWwiseShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, OutWwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutWwiseName = { "OutWwiseName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, OutWwiseName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutHardCodedSoundBankShortId = { "OutHardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventBreakStruct_Parms, OutHardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutWwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutWwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutWwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutHardCodedSoundBankShortId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BreakStruct Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "BreakStruct", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseObjectInfoLibrary_eventBreakStruct_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseObjectInfoLibrary_eventBreakStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execBreakStruct)
{
	P_GET_STRUCT(FWwiseObjectInfo,Z_Param_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutWwiseGuid);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWwiseShortId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutWwiseName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutHardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWwiseObjectInfoLibrary::BreakStruct(Z_Param_Ref,Z_Param_Out_OutWwiseGuid,Z_Param_Out_OutWwiseShortId,Z_Param_Out_OutWwiseName,Z_Param_Out_OutHardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function BreakStruct *******************************

// ********** Begin Class UWwiseObjectInfoLibrary Function GetHardCodedSoundBankShortId ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Statics
struct UHT_STATICS
{
	struct WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms
	{
		FWwiseObjectInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetHardCodedSoundBankShortId Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "GetHardCodedSoundBankShortId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseObjectInfoLibrary_eventGetHardCodedSoundBankShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execGetHardCodedSoundBankShortId)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseObjectInfoLibrary::GetHardCodedSoundBankShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function GetHardCodedSoundBankShortId **************

// ********** Begin Class UWwiseObjectInfoLibrary Function GetWwiseGuid ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid_Statics
struct UHT_STATICS
{
	struct WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms
	{
		FWwiseObjectInfo Ref;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWwiseGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "GetWwiseGuid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseObjectInfoLibrary_eventGetWwiseGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execGetWwiseGuid)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=UWwiseObjectInfoLibrary::GetWwiseGuid(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function GetWwiseGuid ******************************

// ********** Begin Class UWwiseObjectInfoLibrary Function GetWwiseName ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName_Statics
struct UHT_STATICS
{
	struct WwiseObjectInfoLibrary_eventGetWwiseName_Parms
	{
		FWwiseObjectInfo Ref;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "GetWwiseName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseObjectInfoLibrary_eventGetWwiseName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseObjectInfoLibrary_eventGetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execGetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWwiseObjectInfoLibrary::GetWwiseName(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function GetWwiseName ******************************

// ********** Begin Class UWwiseObjectInfoLibrary Function GetWwiseShortId *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId_Statics
struct UHT_STATICS
{
	struct WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms
	{
		FWwiseObjectInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "GetWwiseShortId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseObjectInfoLibrary_eventGetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execGetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseObjectInfoLibrary::GetWwiseShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function GetWwiseShortId ***************************

// ********** Begin Class UWwiseObjectInfoLibrary Function MakeStruct ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct_Statics
struct UHT_STATICS
{
	struct WwiseObjectInfoLibrary_eventMakeStruct_Parms
	{
		FGuid WwiseGuid;
		int32 WwiseShortId;
		FString WwiseName;
		int32 HardCodedSoundBankShortId;
		FWwiseObjectInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "HardCodedSoundBankShortId" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|WwiseObjectInfo" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "DisplayName", "Make WwiseObjectInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeStruct constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HardCodedSoundBankShortId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeStruct constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeStruct Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseGuid_MetaData), NewProp_WwiseGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventMakeStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HardCodedSoundBankShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MakeStruct Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "MakeStruct", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseObjectInfoLibrary_eventMakeStruct_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseObjectInfoLibrary_eventMakeStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execMakeStruct)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::MakeStruct(Z_Param_Out_WwiseGuid,Z_Param_WwiseShortId,Z_Param_WwiseName,Z_Param_HardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function MakeStruct ********************************

// ********** Begin Class UWwiseObjectInfoLibrary Function SetHardCodedSoundBankShortId ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Statics
struct UHT_STATICS
{
	struct WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms
	{
		FWwiseObjectInfo Ref;
		int32 HardCodedSoundBankShortId;
		FWwiseObjectInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "CPP_Default_HardCodedSoundBankShortId", "0" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_HardCodedSoundBankShortId = { "HardCodedSoundBankShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, HardCodedSoundBankShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HardCodedSoundBankShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetHardCodedSoundBankShortId Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "SetHardCodedSoundBankShortId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseObjectInfoLibrary_eventSetHardCodedSoundBankShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execSetHardCodedSoundBankShortId)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_HardCodedSoundBankShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::SetHardCodedSoundBankShortId(Z_Param_Out_Ref,Z_Param_HardCodedSoundBankShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function SetHardCodedSoundBankShortId **************

// ********** Begin Class UWwiseObjectInfoLibrary Function SetWwiseGuid ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid_Statics
struct UHT_STATICS
{
	struct WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms
	{
		FWwiseObjectInfo Ref;
		FGuid WwiseGuid;
		FWwiseObjectInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WwiseGuid = { "WwiseGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms, WwiseGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseGuid_MetaData), NewProp_WwiseGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWwiseGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "SetWwiseGuid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseObjectInfoLibrary_eventSetWwiseGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execSetWwiseGuid)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_WwiseGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::SetWwiseGuid(Z_Param_Out_Ref,Z_Param_Out_WwiseGuid);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function SetWwiseGuid ******************************

// ********** Begin Class UWwiseObjectInfoLibrary Function SetWwiseName ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName_Statics
struct UHT_STATICS
{
	struct WwiseObjectInfoLibrary_eventSetWwiseName_Parms
	{
		FWwiseObjectInfo Ref;
		FString WwiseName;
		FWwiseObjectInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseName_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseName_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "SetWwiseName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseObjectInfoLibrary_eventSetWwiseName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseObjectInfoLibrary_eventSetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execSetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::SetWwiseName(Z_Param_Out_Ref,Z_Param_WwiseName);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function SetWwiseName ******************************

// ********** Begin Class UWwiseObjectInfoLibrary Function SetWwiseShortId *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId_Statics
struct UHT_STATICS
{
	struct WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms
	{
		FWwiseObjectInfo Ref;
		int32 WwiseShortId;
		FWwiseObjectInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|Wwise Object Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "Wwise Object Info" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 0ec0ea12fba207922e71ab1c5a7f7a7b93013e71
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseObjectInfoLibrary, nullptr, "SetWwiseShortId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseObjectInfoLibrary_eventSetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseObjectInfoLibrary::execSetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseObjectInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseObjectInfo*)Z_Param__Result=UWwiseObjectInfoLibrary::SetWwiseShortId(Z_Param_Out_Ref,Z_Param_WwiseShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseObjectInfoLibrary Function SetWwiseShortId ***************************

// ********** Begin Class UWwiseObjectInfoLibrary **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWwiseObjectInfoLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Wwise/Info/WwiseObjectInfoLibrary.h" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseObjectInfoLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseObjectInfoLibrary constinit property declarations ******************
// ********** End Class UWwiseObjectInfoLibrary constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BreakStruct"), .Pointer = &UWwiseObjectInfoLibrary::execBreakStruct },
		{ .NameUTF8 = UTF8TEXT("GetHardCodedSoundBankShortId"), .Pointer = &UWwiseObjectInfoLibrary::execGetHardCodedSoundBankShortId },
		{ .NameUTF8 = UTF8TEXT("GetWwiseGuid"), .Pointer = &UWwiseObjectInfoLibrary::execGetWwiseGuid },
		{ .NameUTF8 = UTF8TEXT("GetWwiseName"), .Pointer = &UWwiseObjectInfoLibrary::execGetWwiseName },
		{ .NameUTF8 = UTF8TEXT("GetWwiseShortId"), .Pointer = &UWwiseObjectInfoLibrary::execGetWwiseShortId },
		{ .NameUTF8 = UTF8TEXT("MakeStruct"), .Pointer = &UWwiseObjectInfoLibrary::execMakeStruct },
		{ .NameUTF8 = UTF8TEXT("SetHardCodedSoundBankShortId"), .Pointer = &UWwiseObjectInfoLibrary::execSetHardCodedSoundBankShortId },
		{ .NameUTF8 = UTF8TEXT("SetWwiseGuid"), .Pointer = &UWwiseObjectInfoLibrary::execSetWwiseGuid },
		{ .NameUTF8 = UTF8TEXT("SetWwiseName"), .Pointer = &UWwiseObjectInfoLibrary::execSetWwiseName },
		{ .NameUTF8 = UTF8TEXT("SetWwiseShortId"), .Pointer = &UWwiseObjectInfoLibrary::execSetWwiseShortId },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_BreakStruct, "BreakStruct" }, // 3a159838c263a52adbebc03406ce248b6d8b2ea2
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId, "GetHardCodedSoundBankShortId" }, // 73377a620b78526732381eff8bf0b7aad040efbd
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseGuid, "GetWwiseGuid" }, // 662e4fb64a927a3e9cd4f3dd28a9aefbbfb4f1b5
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseName, "GetWwiseName" }, // 5b85f8d87873ebcada1fc23e12bffb1c3b9e5c7b
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_GetWwiseShortId, "GetWwiseShortId" }, // cb43345a2de39956401dc1c8af654f9d463d1aac
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_MakeStruct, "MakeStruct" }, // 4288b78fe93ecdc83474d5bf99032dc439522dd6
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId, "SetHardCodedSoundBankShortId" }, // b8dd771f06a3fbbce0cff14e35e1a8e38ae02bde
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseGuid, "SetWwiseGuid" }, // 70730d3212eb5972efc49a27186f89cf7c274c35
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseName, "SetWwiseName" }, // 3196743c83c4a9be3241216676ebbfbd06b8e9da
		{ &Z_Construct_UFunction_UWwiseObjectInfoLibrary_SetWwiseShortId, "SetWwiseShortId" }, // 7d28eb14255c860981e12725a847e4acfc43b686
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseObjectInfoLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWwiseObjectInfoLibrary,
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
static void UWwiseObjectInfoLibrary_StaticRegisterNativesUWwiseObjectInfoLibrary()
{
	UClass* Class = UWwiseObjectInfoLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseObjectInfoLibrary;
UClass* Z_Construct_UClass_UWwiseObjectInfoLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWwiseObjectInfoLibrary;
		if (!Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WwiseObjectInfoLibrary"),
				Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.InnerSingleton,
				UWwiseObjectInfoLibrary_StaticRegisterNativesUWwiseObjectInfoLibrary,
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
		return Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseObjectInfoLibrary.OuterSingleton;
}
#undef UHT_STATICS
UWwiseObjectInfoLibrary::UWwiseObjectInfoLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseObjectInfoLibrary);
UWwiseObjectInfoLibrary::~UWwiseObjectInfoLibrary() {}
// ********** End Class UWwiseObjectInfoLibrary ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseObjectInfoLibrary_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseObjectInfoLibrary, TEXT("UWwiseObjectInfoLibrary"), &Z_Registration_Info_UClass_UWwiseObjectInfoLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseObjectInfoLibrary), 1685232855U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseObjectInfoLibrary_h__Script_WwiseResourceLoader_d20f1f5a249a4894c42a83b557f97832225537fa{
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
