// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintNodes/PostEventAsync.h"

#ifdef AKAUDIO_PostEventAsync_generated_h
#error "PostEventAsync.generated.h already included, missing '#pragma once' in PostEventAsync.h"
#endif
#define AKAUDIO_PostEventAsync_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAkAudioEvent;
class UObject;
class UPostEventAsync;

// ********** Begin Class UPostEventAsync **********************************************************
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPollPostEventFuture); \
	DECLARE_FUNCTION(execPostEventAsync);


struct Z_Construct_UClass_UPostEventAsync_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAsync(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_30_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UPostEventAsync_Statics; \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UPostEventAsync(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UPostEventAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UPostEventAsync) \
	DECLARE_SERIALIZER(UPostEventAsync)


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostEventAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPostEventAsync(UPostEventAsync&&) = delete; \
	UPostEventAsync(const UPostEventAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostEventAsync) \
	NO_API virtual ~UPostEventAsync();


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_PROLOG
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPostEventAsync;

// ********** End Class UPostEventAsync ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
