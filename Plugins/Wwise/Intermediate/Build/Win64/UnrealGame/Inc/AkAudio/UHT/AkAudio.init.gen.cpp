// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudio_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature(ETypeConstructPhase);
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature(ETypeConstructPhase);
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature(ETypeConstructPhase);
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature(ETypeConstructPhase);
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AkAudio;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AkAudio(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_AkAudio.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/AkAudio",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x02736979,
			0x15306D09,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AkAudio.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_AkAudio.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AkAudio(Z_Construct_UPackage__Script_AkAudio, TEXT("/Script/AkAudio"), Z_Registration_Info_UPackage__Script_AkAudio, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x02736979, 0x15306D09));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
