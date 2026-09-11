// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Packaging/WwiseAssetLibrary.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWwiseAssetLibrary() {}

// ********** Begin Cross Module References ********************************************************
WWISEPACKAGINGRUNTIME_API UClass* Z_Construct_UClass_UWwiseFilterableAssetLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_WwisePackaging(ETypeConstructPhase);
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibrary(ETypeConstructPhase);
WWISEPACKAGING_API UClass* Z_Construct_UClass_UWwiseAssetLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UWwiseAssetLibrary Function LoadData *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseAssetLibrary_LoadData_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkAudioType" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadData constinit property declarations ******************************
// ********** End Function LoadData constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseAssetLibrary, nullptr, "LoadData", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UWwiseAssetLibrary_LoadData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseAssetLibrary::execLoadData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadData();
	P_NATIVE_END;
}
// ********** End Class UWwiseAssetLibrary Function LoadData ***************************************

// ********** Begin Class UWwiseAssetLibrary Function UnloadData ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData_Statics
struct UHT_STATICS
{
	struct WwiseAssetLibrary_eventUnloadData_Parms
	{
		bool bAsync;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audiokinetic|AkAudioType" },
		{ "CPP_Default_bAsync", "false" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnloadData constinit property declarations ****************************
	static void NewProp_bAsync_SetBit(void* Obj)
	{
		((WwiseAssetLibrary_eventUnloadData_Parms*)Obj)->bAsync = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnloadData constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnloadData Property Definitions ***************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAsync = { "bAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(WwiseAssetLibrary_eventUnloadData_Parms), &UHT_STATICS::NewProp_bAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAsync,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UnloadData Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWwiseAssetLibrary, nullptr, "UnloadData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WwiseAssetLibrary_eventUnloadData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WwiseAssetLibrary_eventUnloadData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWwiseAssetLibrary::execUnloadData)
{
	P_GET_UBOOL(Z_Param_bAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadData(Z_Param_bAsync);
	P_NATIVE_END;
}
// ********** End Class UWwiseAssetLibrary Function UnloadData *************************************

// ********** Begin Class UWwiseAssetLibrary *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWwiseAssetLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A group of Wwise Assets selected according to filter criteria.\n */" },
#endif
		{ "DisplayName", "Wwise Asset Library" },
		{ "IncludePath", "Wwise/Packaging/WwiseAssetLibrary.h" },
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A group of Wwise Assets selected according to filter criteria." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoad_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Automatically load SoundBanks and associated media associated when Unreal loads this asset.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically load SoundBanks and associated media associated when Unreal loads this asset." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFallthrough_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// When selected, assets in this library can be found by other asset libraries as well.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When selected, assets in this library can be found by other asset libraries as well." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPackageAssets_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Package the assets found according to the filter criteria. When this option is cleared, this library is only used for filtering.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/Packaging/WwiseAssetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Package the assets found according to the filter criteria. When this option is cleared, this library is only used for filtering." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UWwiseAssetLibrary constinit property declarations ***********************
	static void NewProp_bAutoLoad_SetBit(void* Obj)
	{
		((UWwiseAssetLibrary*)Obj)->bAutoLoad = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoad;
#if WITH_EDITORONLY_DATA
	static void NewProp_bFallthrough_SetBit(void* Obj)
	{
		((UWwiseAssetLibrary*)Obj)->bFallthrough = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFallthrough;
	static void NewProp_bPackageAssets_SetBit(void* Obj)
	{
		((UWwiseAssetLibrary*)Obj)->bPackageAssets = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackageAssets;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWwiseAssetLibrary constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("LoadData"), .Pointer = &UWwiseAssetLibrary::execLoadData },
		{ .NameUTF8 = UTF8TEXT("UnloadData"), .Pointer = &UWwiseAssetLibrary::execUnloadData },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseAssetLibrary_LoadData, "LoadData" }, // 3fdf976cd70d028c686a367d93f91b63459ccb7d
		{ &Z_Construct_UFunction_UWwiseAssetLibrary_UnloadData, "UnloadData" }, // 17596daf2e1b1161d73be38682973e803227a0a7
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAssetLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UWwiseAssetLibrary Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoLoad = { "bAutoLoad", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibrary), &UHT_STATICS::NewProp_bAutoLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLoad_MetaData), NewProp_bAutoLoad_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFallthrough = { "bFallthrough", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibrary), &UHT_STATICS::NewProp_bFallthrough_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFallthrough_MetaData), NewProp_bFallthrough_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPackageAssets = { "bPackageAssets", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAssetLibrary), &UHT_STATICS::NewProp_bPackageAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPackageAssets_MetaData), NewProp_bPackageAssets_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoLoad,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFallthrough,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPackageAssets,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UWwiseAssetLibrary Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWwiseFilterableAssetLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_WwisePackaging,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWwiseAssetLibrary,
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
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UWwiseAssetLibrary_StaticRegisterNativesUWwiseAssetLibrary()
{
	UClass* Class = UWwiseAssetLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWwiseAssetLibrary;
UClass* Z_Construct_UClass_UWwiseAssetLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWwiseAssetLibrary;
		if (!Z_Registration_Info_UClass_UWwiseAssetLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WwiseAssetLibrary"),
				Z_Registration_Info_UClass_UWwiseAssetLibrary.InnerSingleton,
				UWwiseAssetLibrary_StaticRegisterNativesUWwiseAssetLibrary,
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
		return Z_Registration_Info_UClass_UWwiseAssetLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWwiseAssetLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAssetLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWwiseAssetLibrary.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWwiseAssetLibrary);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWwiseAssetLibrary)
// ********** End Class UWwiseAssetLibrary *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h__Script_WwisePackaging_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAssetLibrary, TEXT("UWwiseAssetLibrary"), &Z_Registration_Info_UClass_UWwiseAssetLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAssetLibrary), 3107877406U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_WwisePackaging_Public_Wwise_Packaging_WwiseAssetLibrary_h__Script_WwisePackaging_107eb03e72dbb16ae1a69db8098efe0c952e01eb{
	TEXT("/Script/WwisePackaging"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
