// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseUnrealObjectHelper.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseUnrealObjectHelper() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseObjectUtils(ETypeConstructPhase);
WWISEOBJECTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputDeviceID(ETypeConstructPhase);
WWISEOBJECTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAkUInt32Wrapper(ETypeConstructPhase);
WWISEOBJECTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAkUInt64Wrapper(ETypeConstructPhase);
WWISEOBJECTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAkUniqueID(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FAkUInt64Wrapper **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkUInt64Wrapper>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkUInt64Wrapper); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|Types" },
		{ "DisplayName", "AkUint64" },
		{ "ModuleRelativePath", "Public/WwiseUnrealObjectHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UInt64Value_MetaData[] = {
		{ "Category", "Value" },
		{ "DisplayName", "UInt64 Value" },
		{ "ModuleRelativePath", "Public/WwiseUnrealObjectHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkUInt64Wrapper constinit property declarations ******************
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_UInt64Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkUInt64Wrapper constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkUInt64Wrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkUInt64Wrapper Property Definitions *****************************
const UECodeGen_Private::FUInt64PropertyParams UHT_STATICS::NewProp_UInt64Value = { "UInt64Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, nullptr, nullptr, 1, STRUCT_OFFSET(FAkUInt64Wrapper, UInt64Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UInt64Value_MetaData), NewProp_UInt64Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UInt64Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkUInt64Wrapper Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseObjectUtils,
	nullptr,
	&NewStructOps,
	"AkUInt64Wrapper",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkUInt64Wrapper>(),
	alignof(FAkUInt64Wrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkUInt64Wrapper;
UScriptStruct* Z_Construct_UScriptStruct_FAkUInt64Wrapper(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkUInt64Wrapper.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkUInt64Wrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkUInt64Wrapper, (UObject*)Z_Construct_UPackage__Script_WwiseObjectUtils(ETypeConstructPhase::Outer), TEXT("AkUInt64Wrapper"));
		}
		return Z_Registration_Info_UScriptStruct_FAkUInt64Wrapper.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkUInt64Wrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkUInt64Wrapper.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkUInt64Wrapper.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkUInt64Wrapper ****************************************************

// ********** Begin ScriptStruct FAkUInt32Wrapper **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkUInt32Wrapper>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkUInt32Wrapper); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|Types" },
		{ "DisplayName", "AkUInt32" },
		{ "ModuleRelativePath", "Public/WwiseUnrealObjectHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UInt32Value_MetaData[] = {
		{ "Category", "Value" },
		{ "DisplayName", "UInt32 Value" },
		{ "ModuleRelativePath", "Public/WwiseUnrealObjectHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkUInt32Wrapper constinit property declarations ******************
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_UInt32Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAkUInt32Wrapper constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkUInt32Wrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAkUInt32Wrapper Property Definitions *****************************
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_UInt32Value = { "UInt32Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(FAkUInt32Wrapper, UInt32Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UInt32Value_MetaData), NewProp_UInt32Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UInt32Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAkUInt32Wrapper Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseObjectUtils,
	nullptr,
	&NewStructOps,
	"AkUInt32Wrapper",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAkUInt32Wrapper>(),
	alignof(FAkUInt32Wrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkUInt32Wrapper;
UScriptStruct* Z_Construct_UScriptStruct_FAkUInt32Wrapper(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkUInt32Wrapper.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkUInt32Wrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkUInt32Wrapper, (UObject*)Z_Construct_UPackage__Script_WwiseObjectUtils(ETypeConstructPhase::Outer), TEXT("AkUInt32Wrapper"));
		}
		return Z_Registration_Info_UScriptStruct_FAkUInt32Wrapper.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkUInt32Wrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkUInt32Wrapper.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkUInt32Wrapper.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkUInt32Wrapper ****************************************************

// ********** Begin ScriptStruct FAkOutputDeviceID *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkOutputDeviceID>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkOutputDeviceID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|Types" },
		{ "DisplayName", "AkOutputDeviceID" },
		{ "ModuleRelativePath", "Public/WwiseUnrealObjectHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkOutputDeviceID constinit property declarations *****************
// ********** End ScriptStruct FAkOutputDeviceID constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkOutputDeviceID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkOutputDeviceID>() == std::is_polymorphic<FAkUInt64Wrapper>(), "USTRUCT FAkOutputDeviceID cannot be polymorphic unless super FAkUInt64Wrapper is polymorphic");
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseObjectUtils,
	Z_Construct_UScriptStruct_FAkUInt64Wrapper,
	&NewStructOps,
	"AkOutputDeviceID",
	nullptr,
	0,
	DataSizeOf<FAkOutputDeviceID>(),
	alignof(FAkOutputDeviceID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkOutputDeviceID;
UScriptStruct* Z_Construct_UScriptStruct_FAkOutputDeviceID(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkOutputDeviceID.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkOutputDeviceID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkOutputDeviceID, (UObject*)Z_Construct_UPackage__Script_WwiseObjectUtils(ETypeConstructPhase::Outer), TEXT("AkOutputDeviceID"));
		}
		return Z_Registration_Info_UScriptStruct_FAkOutputDeviceID.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkOutputDeviceID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkOutputDeviceID.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkOutputDeviceID.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkOutputDeviceID ***************************************************

// ********** Begin ScriptStruct FAkUniqueID *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAkUniqueID_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAkUniqueID>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAkUniqueID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise|Types" },
		{ "DisplayName", "AkUniqueID" },
		{ "ModuleRelativePath", "Public/WwiseUnrealObjectHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAkUniqueID constinit property declarations ***********************
// ********** End ScriptStruct FAkUniqueID constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkUniqueID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAkUniqueID>() == std::is_polymorphic<FAkUInt32Wrapper>(), "USTRUCT FAkUniqueID cannot be polymorphic unless super FAkUInt32Wrapper is polymorphic");
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseObjectUtils,
	Z_Construct_UScriptStruct_FAkUInt32Wrapper,
	&NewStructOps,
	"AkUniqueID",
	nullptr,
	0,
	DataSizeOf<FAkUniqueID>(),
	alignof(FAkUniqueID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAkUniqueID;
UScriptStruct* Z_Construct_UScriptStruct_FAkUniqueID(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAkUniqueID.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAkUniqueID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkUniqueID, (UObject*)Z_Construct_UPackage__Script_WwiseObjectUtils(ETypeConstructPhase::Outer), TEXT("AkUniqueID"));
		}
		return Z_Registration_Info_UScriptStruct_FAkUniqueID.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAkUniqueID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAkUniqueID.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAkUniqueID.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAkUniqueID *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseObjectUtils_Public_WwiseUnrealObjectHelper_h__Script_WwiseObjectUtils_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAkUInt64Wrapper, Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewStructOps, TEXT("AkUInt64Wrapper"),&Z_Registration_Info_UScriptStruct_FAkUInt64Wrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkUInt64Wrapper), 2077104358U) },
		{ Z_Construct_UScriptStruct_FAkUInt32Wrapper, Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewStructOps, TEXT("AkUInt32Wrapper"),&Z_Registration_Info_UScriptStruct_FAkUInt32Wrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkUInt32Wrapper), 4039905374U) },
		{ Z_Construct_UScriptStruct_FAkOutputDeviceID, Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::NewStructOps, TEXT("AkOutputDeviceID"),&Z_Registration_Info_UScriptStruct_FAkOutputDeviceID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkOutputDeviceID), 912138494U) },
		{ Z_Construct_UScriptStruct_FAkUniqueID, Z_Construct_UScriptStruct_FAkUniqueID_Statics::NewStructOps, TEXT("AkUniqueID"),&Z_Registration_Info_UScriptStruct_FAkUniqueID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkUniqueID), 2170991194U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseObjectUtils_Public_WwiseUnrealObjectHelper_h__Script_WwiseObjectUtils_e2c84c77e1027f492646a7e804d138b8c0ecdc2d{
	TEXT("/Script/WwiseObjectUtils"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
