// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneFloatChannelSerializationHelper.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatChannelSerializationHelper() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper(ETypeConstructPhase);
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FMovieSceneTangentDataSerializationHelper *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMovieSceneTangentDataSerializationHelper>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMovieSceneTangentDataSerializationHelper); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentWeightMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMovieSceneTangentDataSerializationHelper constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TangentWeightMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangentWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangentWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMovieSceneTangentDataSerializationHelper constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTangentDataSerializationHelper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMovieSceneTangentDataSerializationHelper Property Definitions ****
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ArriveTangent = { "ArriveTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, ArriveTangent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangent_MetaData), NewProp_ArriveTangent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LeaveTangent = { "LeaveTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, LeaveTangent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangent_MetaData), NewProp_LeaveTangent_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TangentWeightMode = { "TangentWeightMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, TangentWeightMode), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentWeightMode_MetaData), NewProp_TangentWeightMode_MetaData) }; // 5082508a8b180ac107799ad33313a2811be36d64
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ArriveTangentWeight = { "ArriveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, ArriveTangentWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangentWeight_MetaData), NewProp_ArriveTangentWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LeaveTangentWeight = { "LeaveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTangentDataSerializationHelper, LeaveTangentWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangentWeight_MetaData), NewProp_LeaveTangentWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArriveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeaveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TangentWeightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArriveTangentWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeaveTangentWeight,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMovieSceneTangentDataSerializationHelper Property Definitions ******
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"MovieSceneTangentDataSerializationHelper",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMovieSceneTangentDataSerializationHelper>(),
	alignof(FMovieSceneTangentDataSerializationHelper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper;
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("MovieSceneTangentDataSerializationHelper"));
		}
		return Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMovieSceneTangentDataSerializationHelper ***************************

// ********** Begin ScriptStruct FMovieSceneFloatValueSerializationHelper **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMovieSceneFloatValueSerializationHelper>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMovieSceneFloatValueSerializationHelper); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMovieSceneFloatValueSerializationHelper constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TangentMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMovieSceneFloatValueSerializationHelper constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatValueSerializationHelper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMovieSceneFloatValueSerializationHelper Property Definitions *****
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpMode_MetaData), NewProp_InterpMode_MetaData) }; // 032e704cbe3b9f0ade2e33137ac0e7c4cbcec5f7
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TangentMode = { "TangentMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentMode_MetaData), NewProp_TangentMode_MetaData) }; // 8fb5534c7dfce7e11933b3247b4e36ab04c3cb4f
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatValueSerializationHelper, Tangent), Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangent_MetaData), NewProp_Tangent_MetaData) }; // 38fd9c11c3a94343a4c4e78298633e8188b038e4
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InterpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TangentMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tangent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMovieSceneFloatValueSerializationHelper Property Definitions *******
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"MovieSceneFloatValueSerializationHelper",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMovieSceneFloatValueSerializationHelper>(),
	alignof(FMovieSceneFloatValueSerializationHelper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper;
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("MovieSceneFloatValueSerializationHelper"));
		}
		return Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMovieSceneFloatValueSerializationHelper ****************************

// ********** Begin ScriptStruct FMovieSceneFloatChannelSerializationHelper ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMovieSceneFloatChannelSerializationHelper>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMovieSceneFloatChannelSerializationHelper); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreInfinityExtrap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostInfinityExtrap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneFloatChannelSerializationHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMovieSceneFloatChannelSerializationHelper constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreInfinityExtrap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PostInfinityExtrap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Times_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static void NewProp_bHasDefaultValue_SetBit(void* Obj)
	{
		((FMovieSceneFloatChannelSerializationHelper*)Obj)->bHasDefaultValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMovieSceneFloatChannelSerializationHelper constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatChannelSerializationHelper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMovieSceneFloatChannelSerializationHelper Property Definitions ***
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PreInfinityExtrap = { "PreInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, PreInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreInfinityExtrap_MetaData), NewProp_PreInfinityExtrap_MetaData) }; // 2f220a582e50c79ece09b615ea6c4c3ed4ce3179
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PostInfinityExtrap = { "PostInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, PostInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostInfinityExtrap_MetaData), NewProp_PostInfinityExtrap_MetaData) }; // 2f220a582e50c79ece09b615ea6c4c3ed4ce3179
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, Times), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Times_MetaData), NewProp_Times_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper, METADATA_PARAMS(0, nullptr) }; // 52327e591746dcfafe5889f2b4f37444279966b2
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 52327e591746dcfafe5889f2b4f37444279966b2
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatChannelSerializationHelper, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasDefaultValue = { "bHasDefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneFloatChannelSerializationHelper), &UHT_STATICS::NewProp_bHasDefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasDefaultValue_MetaData), NewProp_bHasDefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreInfinityExtrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PostInfinityExtrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Times_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Times,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasDefaultValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMovieSceneFloatChannelSerializationHelper Property Definitions *****
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"MovieSceneFloatChannelSerializationHelper",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMovieSceneFloatChannelSerializationHelper>(),
	alignof(FMovieSceneFloatChannelSerializationHelper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper;
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, (UObject*)Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase::Outer), TEXT("MovieSceneFloatChannelSerializationHelper"));
		}
		return Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMovieSceneFloatChannelSerializationHelper **************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneFloatChannelSerializationHelper_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper, Z_Construct_UScriptStruct_FMovieSceneTangentDataSerializationHelper_Statics::NewStructOps, TEXT("MovieSceneTangentDataSerializationHelper"),&Z_Registration_Info_UScriptStruct_FMovieSceneTangentDataSerializationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTangentDataSerializationHelper), 956144657U) },
		{ Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper, Z_Construct_UScriptStruct_FMovieSceneFloatValueSerializationHelper_Statics::NewStructOps, TEXT("MovieSceneFloatValueSerializationHelper"),&Z_Registration_Info_UScriptStruct_FMovieSceneFloatValueSerializationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFloatValueSerializationHelper), 1379040857U) },
		{ Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper_Statics::NewStructOps, TEXT("MovieSceneFloatChannelSerializationHelper"),&Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFloatChannelSerializationHelper), 524855513U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneFloatChannelSerializationHelper_h__Script_AkAudio_12153f031f4e1df2de9f0be9024893a913f318bf{
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
