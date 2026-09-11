// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platforms/AkPlatform_LinuxArm64/AkLinuxArm64PlatformInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAkLinuxArm64PlatformInfo() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxArm64PlatformInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo(ETypeConstructPhase);
AKAUDIO_API UClass* Z_Construct_UClass_UAkLinuxArm64PlatformInfo(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAkLinuxArm64PlatformInfo ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAkLinuxArm64PlatformInfo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Platforms/AkPlatform_LinuxArm64/AkLinuxArm64PlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_LinuxArm64/AkLinuxArm64PlatformInfo.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAkLinuxArm64PlatformInfo constinit property declarations ****************
// ********** End Class UAkLinuxArm64PlatformInfo constinit property declarations ******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLinuxArm64PlatformInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAkPlatformInfo,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAkLinuxArm64PlatformInfo,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UAkLinuxArm64PlatformInfo;
UClass* Z_Construct_UClass_UAkLinuxArm64PlatformInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAkLinuxArm64PlatformInfo;
		if (!Z_Registration_Info_UClass_UAkLinuxArm64PlatformInfo.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AkLinuxArm64PlatformInfo"),
				Z_Registration_Info_UClass_UAkLinuxArm64PlatformInfo.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAkLinuxArm64PlatformInfo.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAkLinuxArm64PlatformInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLinuxArm64PlatformInfo.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkLinuxArm64PlatformInfo.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAkLinuxArm64PlatformInfo);
UAkLinuxArm64PlatformInfo::~UAkLinuxArm64PlatformInfo() {}
// ********** End Class UAkLinuxArm64PlatformInfo **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64PlatformInfo_h__Script_AkAudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkLinuxArm64PlatformInfo, TEXT("UAkLinuxArm64PlatformInfo"), &Z_Registration_Info_UClass_UAkLinuxArm64PlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLinuxArm64PlatformInfo), 2350631183U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_LinuxArm64_AkLinuxArm64PlatformInfo_h__Script_AkAudio_f9812c0e870cea387a0f61498ed0aafdb3276189{
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
