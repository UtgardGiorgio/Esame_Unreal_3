// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwisePackagingRuntime_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WwisePackagingRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WwisePackagingRuntime(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_WwisePackagingRuntime.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/WwisePackagingRuntime",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0x3041B435,
			0x0C58AAA3,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WwisePackagingRuntime.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_WwisePackagingRuntime.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WwisePackagingRuntime(Z_Construct_UPackage__Script_WwisePackagingRuntime, TEXT("/Script/WwisePackagingRuntime"), Z_Registration_Info_UPackage__Script_WwisePackagingRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3041B435, 0x0C58AAA3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
