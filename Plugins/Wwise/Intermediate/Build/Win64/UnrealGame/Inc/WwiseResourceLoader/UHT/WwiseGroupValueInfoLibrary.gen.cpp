// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Info/WwiseGroupValueInfoLibrary.h"
#include "Wwise/Info/WwiseGroupValueInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseGroupValueInfoLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader(ETypeConstructPhase);
WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueInfo(ETypeConstructPhase);
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseGroupValueInfoLibrary(ETypeConstructPhase);
WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseGroupValueInfoLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UWwiseGroupValueInfoLibrary Function BreakStruct *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics
struct UHT_STATICS
{
	struct WwiseGroupValueInfoLibrary_eventBreakStruct_Parms
	{
		FWwiseGroupValueInfo Ref;
		FGuid OutAssetGuid;
		int32 OutGroupShortId;
		int32 OutWwiseShortId;
		FString OutWwiseName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValueInfo" },
		{ "DisplayName", "Break GroupValueInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function BreakStruct constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAssetGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutGroupShortId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutWwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutWwiseName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BreakStruct constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BreakStruct Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutAssetGuid = { "OutAssetGuid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, OutAssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutGroupShortId = { "OutGroupShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, OutGroupShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutWwiseShortId = { "OutWwiseShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, OutWwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutWwiseName = { "OutWwiseName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, OutWwiseName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutAssetGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutGroupShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutWwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutWwiseName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BreakStruct Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "BreakStruct", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseGroupValueInfoLibrary_eventBreakStruct_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseGroupValueInfoLibrary_eventBreakStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execBreakStruct)
{
	P_GET_STRUCT(FWwiseGroupValueInfo,Z_Param_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutAssetGuid);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutGroupShortId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWwiseShortId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutWwiseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWwiseGroupValueInfoLibrary::BreakStruct(Z_Param_Ref,Z_Param_Out_OutAssetGuid,Z_Param_Out_OutGroupShortId,Z_Param_Out_OutWwiseShortId,Z_Param_Out_OutWwiseName);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function BreakStruct ***************************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function GetAssetGuid ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics
struct UHT_STATICS
{
	struct WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms
	{
		FWwiseGroupValueInfo Ref;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "GUID" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAssetGuid constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAssetGuid constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAssetGuid Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAssetGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "GetAssetGuid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execGetAssetGuid)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=UWwiseGroupValueInfoLibrary::GetAssetGuid(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function GetAssetGuid **************************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function GetGroupShortId *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics
struct UHT_STATICS
{
	struct WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms
	{
		FWwiseGroupValueInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Group Short Id" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGroupShortId constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGroupShortId constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGroupShortId Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGroupShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "GetGroupShortId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execGetGroupShortId)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseGroupValueInfoLibrary::GetGroupShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function GetGroupShortId ***********************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function GetWwiseName ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics
struct UHT_STATICS
{
	struct WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms
	{
		FWwiseGroupValueInfo Ref;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "GetWwiseName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execGetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWwiseGroupValueInfoLibrary::GetWwiseName(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function GetWwiseName **************************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function GetWwiseShortId *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId_Statics
struct UHT_STATICS
{
	struct WwiseGroupValueInfoLibrary_eventGetWwiseShortId_Parms
	{
		FWwiseGroupValueInfo Ref;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetWwiseShortId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "GetWwiseShortId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseGroupValueInfoLibrary_eventGetWwiseShortId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseGroupValueInfoLibrary_eventGetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execGetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UWwiseGroupValueInfoLibrary::GetWwiseShortId(Z_Param_Out_Ref);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function GetWwiseShortId ***********************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function MakeStruct **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics
struct UHT_STATICS
{
	struct WwiseGroupValueInfoLibrary_eventMakeStruct_Parms
	{
		FGuid AssetGuid;
		int32 GroupShortId;
		int32 WwiseShortId;
		FString WwiseName;
		FWwiseGroupValueInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValueInfo" },
		{ "DisplayName", "Make GroupValueInfo" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeStruct constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupShortId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeStruct constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeStruct Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetGuid_MetaData), NewProp_AssetGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GroupShortId = { "GroupShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, GroupShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroupShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MakeStruct Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "MakeStruct", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseGroupValueInfoLibrary_eventMakeStruct_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseGroupValueInfoLibrary_eventMakeStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execMakeStruct)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_AssetGuid);
	P_GET_PROPERTY(FIntProperty,Z_Param_GroupShortId);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::MakeStruct(Z_Param_Out_AssetGuid,Z_Param_GroupShortId,Z_Param_WwiseShortId,Z_Param_WwiseName);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function MakeStruct ****************************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function SetAssetGuid ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics
struct UHT_STATICS
{
	struct WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms
	{
		FWwiseGroupValueInfo Ref;
		FGuid AssetGuid;
		FWwiseGroupValueInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAssetGuid constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAssetGuid constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAssetGuid Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetGuid_MetaData), NewProp_AssetGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAssetGuid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "SetAssetGuid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execSetAssetGuid)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_AssetGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::SetAssetGuid(Z_Param_Out_Ref,Z_Param_Out_AssetGuid);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function SetAssetGuid **************************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function SetGroupShortId *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics
struct UHT_STATICS
{
	struct WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms
	{
		FWwiseGroupValueInfo Ref;
		int32 GroupShortId;
		FWwiseGroupValueInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Struct Out" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGroupShortId constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupShortId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGroupShortId constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGroupShortId Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GroupShortId = { "GroupShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms, GroupShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroupShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetGroupShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "SetGroupShortId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execSetGroupShortId)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_GroupShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::SetGroupShortId(Z_Param_Out_Ref,Z_Param_GroupShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function SetGroupShortId ***********************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function SetWwiseName ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics
struct UHT_STATICS
{
	struct WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms
	{
		FWwiseGroupValueInfo Ref;
		FString WwiseName;
		FWwiseGroupValueInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms, WwiseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseName_MetaData), NewProp_WwiseName_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWwiseName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "SetWwiseName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execSetWwiseName)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::SetWwiseName(Z_Param_Out_Ref,Z_Param_WwiseName);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function SetWwiseName **************************

// ********** Begin Class UWwiseGroupValueInfoLibrary Function SetWwiseShortId *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics
struct UHT_STATICS
{
	struct WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms
	{
		FWwiseGroupValueInfo Ref;
		int32 WwiseShortId;
		FWwiseGroupValueInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Wwise|GroupValue Info" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[] = {
		{ "DisplayName", "GroupValue Info" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ref_MetaData), NewProp_Ref_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms, WwiseShortId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // d54b3a5812e2efe131ae30243a03a49d65cc6070
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WwiseShortId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetWwiseShortId Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "SetWwiseShortId", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execSetWwiseShortId)
{
	P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
	P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::SetWwiseShortId(Z_Param_Out_Ref,Z_Param_WwiseShortId);
	P_NATIVE_END;
}
// ********** End Class UWwiseGroupValueInfoLibrary Function SetWwiseShortId ***********************

// ********** Begin Class UWwiseGroupValueInfoLibrary **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Wwise/Info/WwiseGroupValueInfoLibrary.h" },
		{ "ModuleRelativePath", "Private/Wwise/Info/WwiseGroupValueInfoLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseGroupValueInfoLibrary constinit property declarations **************
// ********** End Class UWwiseGroupValueInfoLibrary constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BreakStruct"), .Pointer = &UWwiseGroupValueInfoLibrary::execBreakStruct },
		{ .NameUTF8 = UTF8TEXT("GetAssetGuid"), .Pointer = &UWwiseGroupValueInfoLibrary::execGetAssetGuid },
		{ .NameUTF8 = UTF8TEXT("GetGroupShortId"), .Pointer = &UWwiseGroupValueInfoLibrary::execGetGroupShortId },
		{ .NameUTF8 = UTF8TEXT("GetWwiseName"), .Pointer = &UWwiseGroupValueInfoLibrary::execGetWwiseName },
		{ .NameUTF8 = UTF8TEXT("GetWwiseShortId"), .Pointer = &UWwiseGroupValueInfoLibrary::execGetWwiseShortId },
		{ .NameUTF8 = UTF8TEXT("MakeStruct"), .Pointer = &UWwiseGroupValueInfoLibrary::execMakeStruct },
		{ .NameUTF8 = UTF8TEXT("SetAssetGuid"), .Pointer = &UWwiseGroupValueInfoLibrary::execSetAssetGuid },
		{ .NameUTF8 = UTF8TEXT("SetGroupShortId"), .Pointer = &UWwiseGroupValueInfoLibrary::execSetGroupShortId },
		{ .NameUTF8 = UTF8TEXT("SetWwiseName"), .Pointer = &UWwiseGroupValueInfoLibrary::execSetWwiseName },
		{ .NameUTF8 = UTF8TEXT("SetWwiseShortId"), .Pointer = &UWwiseGroupValueInfoLibrary::execSetWwiseShortId },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct, "BreakStruct" }, // 13a4f1f8ba06aa18650290c1ba32a3dc179ac230
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid, "GetAssetGuid" }, // 9d08c4f3d4bb7df39f0183bbc4a64cbfcdce6011
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId, "GetGroupShortId" }, // 1296ab92f8136dc6992bfdc1de6f8b6e69c95274
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName, "GetWwiseName" }, // 837b581044daee694f4b9174698d1ea809ae63ba
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortId, "GetWwiseShortId" }, // e60d0debe58cd8ee5cdd9dc40054be157912e699
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct, "MakeStruct" }, // 004235951155c3d12436e12a8e0c9c752425b877
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid, "SetAssetGuid" }, // 89f513fb9d960b6bfc7333707a0171b6274ed07f
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId, "SetGroupShortId" }, // 73ed8ca427f2d7b7c090196060be5c2eddca75e9
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName, "SetWwiseName" }, // 47ae95ed6ca0a6e5b533a4935e625bbd013d785e
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId, "SetWwiseShortId" }, // 88fb484f2ca3513be69745c209d475610f5cab72
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseGroupValueInfoLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseResourceLoader,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWwiseGroupValueInfoLibrary,
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
static void UWwiseGroupValueInfoLibrary_StaticRegisterNativesUWwiseGroupValueInfoLibrary()
{
	UClass* Class = UWwiseGroupValueInfoLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary;
UClass* Z_Construct_UClass_UWwiseGroupValueInfoLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWwiseGroupValueInfoLibrary;
		if (!Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WwiseGroupValueInfoLibrary"),
				Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.InnerSingleton,
				UWwiseGroupValueInfoLibrary_StaticRegisterNativesUWwiseGroupValueInfoLibrary,
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
		return Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.OuterSingleton;
}
#undef UHT_STATICS
UWwiseGroupValueInfoLibrary::UWwiseGroupValueInfoLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseGroupValueInfoLibrary);
UWwiseGroupValueInfoLibrary::~UWwiseGroupValueInfoLibrary() {}
// ********** End Class UWwiseGroupValueInfoLibrary ************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h__Script_WwiseResourceLoader_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseGroupValueInfoLibrary, TEXT("UWwiseGroupValueInfoLibrary"), &Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseGroupValueInfoLibrary), 1502488178U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseResourceLoader_Private_Wwise_Info_WwiseGroupValueInfoLibrary_h__Script_WwiseResourceLoader_493e8351ac2000fa26dd77151697eecf128ad98b{
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
