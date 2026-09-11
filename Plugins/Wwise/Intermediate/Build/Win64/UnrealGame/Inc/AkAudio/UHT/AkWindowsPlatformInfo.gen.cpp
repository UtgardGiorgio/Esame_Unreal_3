// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkWindowsPlatformInfo() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkWin32PlatformInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkWin64PlatformInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkWindowsPlatformInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkWin32PlatformInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkWin64PlatformInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkWindowsPlatformInfo(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkWin32PlatformInfo *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkWin32PlatformInfo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkWin32PlatformInfo constinit property declarations *********************
// ********** End Class UAkWin32PlatformInfo constinit property declarations ***********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWin32PlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkPlatformInfo,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkWin32PlatformInfo,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkWin32PlatformInfo;
UClass* Z_Construct_UClass_UAkWin32PlatformInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkWin32PlatformInfo;
		if (!Z_Registration_Info_UClass_UAkWin32PlatformInfo.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkWin32PlatformInfo"),
				Z_Registration_Info_UClass_UAkWin32PlatformInfo.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkWin32PlatformInfo.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkWin32PlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWin32PlatformInfo.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWin32PlatformInfo.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkWin32PlatformInfo);
UAkWin32PlatformInfo::~UAkWin32PlatformInfo() {}
// ********** End Class UAkWin32PlatformInfo *******************************************************

// ********** Begin Class UAkWin64PlatformInfo *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkWin64PlatformInfo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkWin64PlatformInfo constinit property declarations *********************
// ********** End Class UAkWin64PlatformInfo constinit property declarations ***********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWin64PlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkPlatformInfo,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkWin64PlatformInfo,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkWin64PlatformInfo;
UClass* Z_Construct_UClass_UAkWin64PlatformInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkWin64PlatformInfo;
		if (!Z_Registration_Info_UClass_UAkWin64PlatformInfo.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkWin64PlatformInfo"),
				Z_Registration_Info_UClass_UAkWin64PlatformInfo.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkWin64PlatformInfo.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkWin64PlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWin64PlatformInfo.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWin64PlatformInfo.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkWin64PlatformInfo);
UAkWin64PlatformInfo::~UAkWin64PlatformInfo() {}
// ********** End Class UAkWin64PlatformInfo *******************************************************

// ********** Begin Class UAkWindowsPlatformInfo ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkWindowsPlatformInfo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Windows/AkWindowsPlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkWindowsPlatformInfo constinit property declarations *******************
// ********** End Class UAkWindowsPlatformInfo constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWindowsPlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkWin64PlatformInfo,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkWindowsPlatformInfo,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAkWindowsPlatformInfo;
UClass* Z_Construct_UClass_UAkWindowsPlatformInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkWindowsPlatformInfo;
		if (!Z_Registration_Info_UClass_UAkWindowsPlatformInfo.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkWindowsPlatformInfo"),
				Z_Registration_Info_UClass_UAkWindowsPlatformInfo.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkWindowsPlatformInfo.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkWindowsPlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWindowsPlatformInfo.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWindowsPlatformInfo.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkWindowsPlatformInfo);
UAkWindowsPlatformInfo::~UAkWindowsPlatformInfo() {}
// ********** End Class UAkWindowsPlatformInfo *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsPlatformInfo_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkWin32PlatformInfo, TEXT("UAkWin32PlatformInfo"), &Z_Registration_Info_UClass_UAkWin32PlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWin32PlatformInfo), 53283962U) },
		{ Z_Construct_UClass_UAkWin64PlatformInfo, TEXT("UAkWin64PlatformInfo"), &Z_Registration_Info_UClass_UAkWin64PlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWin64PlatformInfo), 1164709089U) },
		{ Z_Construct_UClass_UAkWindowsPlatformInfo, TEXT("UAkWindowsPlatformInfo"), &Z_Registration_Info_UClass_UAkWindowsPlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWindowsPlatformInfo), 653138599U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsPlatformInfo_h__Script_AkAudio_413998ce6493c1bd0ac7b0598ba36c5bc4261da9{
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
