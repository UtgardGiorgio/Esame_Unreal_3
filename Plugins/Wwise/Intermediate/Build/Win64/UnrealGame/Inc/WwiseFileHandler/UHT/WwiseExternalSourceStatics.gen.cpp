// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/WwiseExternalSourceStatics.h"
#include "WwiseUnrealObjectHelper.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseExternalSourceStatics() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
WWISEOBJECTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAkUniqueID(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwiseFileHandler(ETypeConstructPhase);
WWISEFILEHANDLER_API UClass* Z_Construct_UClass_UWwiseExternalSourceStatics(ETypeConstructPhase);
WWISEFILEHANDLER_API UClass* Z_Construct_UClass_UWwiseExternalSourceStatics(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UWwiseExternalSourceStatics Function SetExternalSourceMediaById **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById_Statics
struct UHT_STATICS
{
	struct WwiseExternalSourceStatics_eventSetExternalSourceMediaById_Parms
	{
		FString ExternalSourceName;
		int32 MediaId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WwiseExternalSources" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseExternalSourceStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExternalSourceMediaById constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalSourceName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MediaId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExternalSourceMediaById constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExternalSourceMediaById Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ExternalSourceName = { "ExternalSourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseExternalSourceStatics_eventSetExternalSourceMediaById_Parms, ExternalSourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSourceName_MetaData), NewProp_ExternalSourceName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MediaId = { "MediaId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseExternalSourceStatics_eventSetExternalSourceMediaById_Parms, MediaId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaId_MetaData), NewProp_MediaId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetExternalSourceMediaById Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseExternalSourceStatics, nullptr, "SetExternalSourceMediaById", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseExternalSourceStatics_eventSetExternalSourceMediaById_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseExternalSourceStatics_eventSetExternalSourceMediaById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseExternalSourceStatics::execSetExternalSourceMediaById)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExternalSourceName);
	P_GET_PROPERTY(FIntProperty,Z_Param_MediaId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWwiseExternalSourceStatics::SetExternalSourceMediaById(Z_Param_ExternalSourceName,Z_Param_MediaId);
	P_NATIVE_END;
}
// ********** End Class UWwiseExternalSourceStatics Function SetExternalSourceMediaById ************

// ********** Begin Class UWwiseExternalSourceStatics Function SetExternalSourceMediaByName ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Statics
struct UHT_STATICS
{
	struct WwiseExternalSourceStatics_eventSetExternalSourceMediaByName_Parms
	{
		FString ExternalSourceName;
		FString MediaName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WwiseExternalSources" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseExternalSourceStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExternalSourceMediaByName constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalSourceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MediaName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExternalSourceMediaByName constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExternalSourceMediaByName Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ExternalSourceName = { "ExternalSourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseExternalSourceStatics_eventSetExternalSourceMediaByName_Parms, ExternalSourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSourceName_MetaData), NewProp_ExternalSourceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_MediaName = { "MediaName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseExternalSourceStatics_eventSetExternalSourceMediaByName_Parms, MediaName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaName_MetaData), NewProp_MediaName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetExternalSourceMediaByName Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseExternalSourceStatics, nullptr, "SetExternalSourceMediaByName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseExternalSourceStatics_eventSetExternalSourceMediaByName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseExternalSourceStatics_eventSetExternalSourceMediaByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseExternalSourceStatics::execSetExternalSourceMediaByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExternalSourceName);
	P_GET_PROPERTY(FStrProperty,Z_Param_MediaName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWwiseExternalSourceStatics::SetExternalSourceMediaByName(Z_Param_ExternalSourceName,Z_Param_MediaName);
	P_NATIVE_END;
}
// ********** End Class UWwiseExternalSourceStatics Function SetExternalSourceMediaByName **********

// ********** Begin Class UWwiseExternalSourceStatics Function SetExternalSourceMediaWithIds *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Statics
struct UHT_STATICS
{
	struct WwiseExternalSourceStatics_eventSetExternalSourceMediaWithIds_Parms
	{
		FAkUniqueID ExternalSourceCookie;
		int32 MediaId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WwiseExternalSources" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseExternalSourceStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceCookie_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExternalSourceMediaWithIds constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSourceCookie;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MediaId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExternalSourceMediaWithIds constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExternalSourceMediaWithIds Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ExternalSourceCookie = { "ExternalSourceCookie", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseExternalSourceStatics_eventSetExternalSourceMediaWithIds_Parms, ExternalSourceCookie), Z_Construct_UScriptStruct_FAkUniqueID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalSourceCookie_MetaData), NewProp_ExternalSourceCookie_MetaData) }; // 8166b25a889aa61e66d22d2a13cea61039e305d6
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MediaId = { "MediaId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(WwiseExternalSourceStatics_eventSetExternalSourceMediaWithIds_Parms, MediaId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaId_MetaData), NewProp_MediaId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExternalSourceCookie,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MediaId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetExternalSourceMediaWithIds Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseExternalSourceStatics, nullptr, "SetExternalSourceMediaWithIds", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseExternalSourceStatics_eventSetExternalSourceMediaWithIds_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseExternalSourceStatics_eventSetExternalSourceMediaWithIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseExternalSourceStatics::execSetExternalSourceMediaWithIds)
{
	P_GET_STRUCT(FAkUniqueID,Z_Param_ExternalSourceCookie);
	P_GET_PROPERTY(FIntProperty,Z_Param_MediaId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWwiseExternalSourceStatics::SetExternalSourceMediaWithIds(Z_Param_ExternalSourceCookie,Z_Param_MediaId);
	P_NATIVE_END;
}
// ********** End Class UWwiseExternalSourceStatics Function SetExternalSourceMediaWithIds *********

// ********** Begin Class UWwiseExternalSourceStatics **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWwiseExternalSourceStatics_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Wwise/WwiseExternalSourceStatics.h" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseExternalSourceStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWwiseExternalSourceStatics constinit property declarations **************
// ********** End Class UWwiseExternalSourceStatics constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetExternalSourceMediaById"), .Pointer = &UWwiseExternalSourceStatics::execSetExternalSourceMediaById },
		{ .NameUTF8 = UTF8TEXT("SetExternalSourceMediaByName"), .Pointer = &UWwiseExternalSourceStatics::execSetExternalSourceMediaByName },
		{ .NameUTF8 = UTF8TEXT("SetExternalSourceMediaWithIds"), .Pointer = &UWwiseExternalSourceStatics::execSetExternalSourceMediaWithIds },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaById, "SetExternalSourceMediaById" }, // 71c7bbe8727ba72ca64765eee9c4611c9309a62d
		{ &Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaByName, "SetExternalSourceMediaByName" }, // 3330e504b99dcc471d669cc0ce4fa5dc8bc416af
		{ &Z_Construct_UFunction_UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds, "SetExternalSourceMediaWithIds" }, // b2525f8ed825e58cdb197a3d015671caafe1d1a2
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseExternalSourceStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwiseFileHandler,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWwiseExternalSourceStatics,
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
static void UWwiseExternalSourceStatics_StaticRegisterNativesUWwiseExternalSourceStatics()
{
	UClass* Class = UWwiseExternalSourceStatics::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseExternalSourceStatics;
UClass* Z_Construct_UClass_UWwiseExternalSourceStatics(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWwiseExternalSourceStatics;
		if (!Z_Registration_Info_UClass_UWwiseExternalSourceStatics.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WwiseExternalSourceStatics"),
				Z_Registration_Info_UClass_UWwiseExternalSourceStatics.InnerSingleton,
				UWwiseExternalSourceStatics_StaticRegisterNativesUWwiseExternalSourceStatics,
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
		return Z_Registration_Info_UClass_UWwiseExternalSourceStatics.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWwiseExternalSourceStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseExternalSourceStatics.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseExternalSourceStatics.OuterSingleton;
}
#undef UHT_STATICS
UWwiseExternalSourceStatics::UWwiseExternalSourceStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseExternalSourceStatics);
UWwiseExternalSourceStatics::~UWwiseExternalSourceStatics() {}
// ********** End Class UWwiseExternalSourceStatics ************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h__Script_WwiseFileHandler_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseExternalSourceStatics, TEXT("UWwiseExternalSourceStatics"), &Z_Registration_Info_UClass_UWwiseExternalSourceStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseExternalSourceStatics), 4048902073U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_WwiseExternalSourceStatics_h__Script_WwiseFileHandler_6174d5c9e7eb7512789e9c84bb2a8bc83cc5f294{
	TEXT("/Script/WwiseFileHandler"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
