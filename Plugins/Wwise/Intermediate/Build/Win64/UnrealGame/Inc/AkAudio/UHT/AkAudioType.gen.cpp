// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudioType.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkAudioType() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkAudioType Function GetWwiseShortID ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics
struct UHT_STATICS
{
	struct AkAudioType_eventGetWwiseShortID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkAudioType" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWwiseShortID constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWwiseShortID constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWwiseShortID Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AkAudioType_eventGetWwiseShortID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWwiseShortID Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkAudioType, nullptr, "GetWwiseShortID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkAudioType_eventGetWwiseShortID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkAudioType_eventGetWwiseShortID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioType_GetWwiseShortID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkAudioType::execGetWwiseShortID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetWwiseShortID();
	P_NATIVE_END;
}
// ********** End Class UAkAudioType Function GetWwiseShortID **************************************

// ********** Begin Class UAkAudioType Function LoadData *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkAudioType_LoadData_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkAudioType" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadData constinit property declarations ******************************
// ********** End Function LoadData constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkAudioType, nullptr, "LoadData", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAkAudioType_LoadData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkAudioType::execLoadData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadData();
	P_NATIVE_END;
}
// ********** End Class UAkAudioType Function LoadData *********************************************

// ********** Begin Class UAkAudioType Function UnloadData *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAkAudioType_UnloadData_Statics
struct UHT_STATICS
{
	struct AkAudioType_eventUnloadData_Parms
	{
		bool bAsync;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkAudioType" },
		{ "CPP_Default_bAsync", "false" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnloadData constinit property declarations ****************************
	static void NewProp_bAsync_SetBit(void* Obj)
	{
		((AkAudioType_eventUnloadData_Parms*)Obj)->bAsync = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnloadData constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnloadData Property Definitions ***************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAsync = { "bAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AkAudioType_eventUnloadData_Parms), &UHT_STATICS::NewProp_bAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAsync,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UnloadData Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAkAudioType, nullptr, "UnloadData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AkAudioType_eventUnloadData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AkAudioType_eventUnloadData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkAudioType_UnloadData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAkAudioType::execUnloadData)
{
	P_GET_UBOOL(Z_Param_bAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadData(Z_Param_bAsync);
	P_NATIVE_END;
}
// ********** End Class UAkAudioType Function UnloadData *******************************************

// ********** Begin Class UAkAudioType *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkAudioType_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wwise Audio Type abstract Unreal base class.\n *\n * All Unreal assets derive from this type.\n */" },
#endif
		{ "IncludePath", "AkAudioType.h" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wwise Audio Type abstract Unreal base class.\n\nAll Unreal assets derive from this type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoad_MetaData[] = {
		{ "Category", "AkAudioType|Behaviour" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Automatically load SoundBanks and associated media associated when Unreal loads this asset.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically load SoundBanks and associated media associated when Unreal loads this asset." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Deprecated", "" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortID_MetaData[] = {
		{ "Deprecated", "" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[] = {
		{ "Category", "AkAudioType" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkAudioType constinit property declarations *****************************
	static void NewProp_bAutoLoad_SetBit(void* Obj)
	{
		((UAkAudioType*)Obj)->bAutoLoad = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoad;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShortID;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAkAudioType constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetWwiseShortID"), .Pointer = &UAkAudioType::execGetWwiseShortID },
		{ .NameUTF8 = UTF8TEXT("LoadData"), .Pointer = &UAkAudioType::execLoadData },
		{ .NameUTF8 = UTF8TEXT("UnloadData"), .Pointer = &UAkAudioType::execUnloadData },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAudioType_GetWwiseShortID, "GetWwiseShortID" }, // ccdb3f2d5ba4d5b62620fff53d9c8d0bcea30206
		{ &Z_Construct_UFunction_UAkAudioType_LoadData, "LoadData" }, // aabf9e2e6c3ab53a78d9ce990cf72e9eb7f0b4ee
		{ &Z_Construct_UFunction_UAkAudioType_UnloadData, "UnloadData" }, // 239f3d229712c995d58b0bed5f6e3e42910d6004
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAkAudioType Property Definitions ****************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoLoad = { "bAutoLoad", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkAudioType), &UHT_STATICS::NewProp_bAutoLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLoad_MetaData), NewProp_bAutoLoad_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioType, ID_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_ShortID = { "ShortID", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioType, ShortID_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortID_MetaData), NewProp_ShortID_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_UserData_Inner = { "UserData", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioType, UserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserData_MetaData), NewProp_UserData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoLoad,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShortID,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserData,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAkAudioType Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkAudioType,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAkAudioType_StaticRegisterNativesUAkAudioType()
{
	UClass* Class = UAkAudioType::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAkAudioType;
UClass* Z_Construct_UClass_UAkAudioType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkAudioType;
		if (!Z_Registration_Info_UClass_UAkAudioType.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkAudioType"),
				Z_Registration_Info_UClass_UAkAudioType.InnerSingleton,
				UAkAudioType_StaticRegisterNativesUAkAudioType,
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
		return Z_Registration_Info_UClass_UAkAudioType.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkAudioType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioType.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkAudioType.OuterSingleton;
}
#undef UHT_STATICS
UAkAudioType::UAkAudioType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkAudioType);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAudioType)
// ********** End Class UAkAudioType ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioType_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioType, TEXT("UAkAudioType"), &Z_Registration_Info_UClass_UAkAudioType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioType), 2940838196U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkAudioType_h__Script_AkAudio_1898d942653852a6032d953da847b0f34c6fc07a{
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
