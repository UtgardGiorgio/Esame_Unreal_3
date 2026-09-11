// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkGeometryComponent.h"

#ifdef AKAUDIO_AkGeometryComponent_generated_h
#error "AkGeometryComponent.generated.h already included, missing '#pragma once' in AkGeometryComponent.h"
#endif
#define AKAUDIO_AkGeometryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAcousticTexture;
class UMaterialInterface;
struct FAkGeometrySurfaceOverride;

// ********** Begin ScriptStruct FAkGeometrySurfaceOverride ****************************************
struct Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics;
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride(ETypeConstructPhase::Inner); }


struct FAkGeometrySurfaceOverride;
// ********** End ScriptStruct FAkGeometrySurfaceOverride ******************************************

// ********** Begin Class UAkGeometryComponent *****************************************************
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEnableDiffraction); \
	DECLARE_FUNCTION(execSetEnableTransmissionLossOverride); \
	DECLARE_FUNCTION(execSetTransmissionLossOverride); \
	DECLARE_FUNCTION(execSetAcousticTextureOverride); \
	DECLARE_FUNCTION(execSetAcousticPropertiesOverride); \
	DECLARE_FUNCTION(execGetAcousticPropertiesOverride); \
	DECLARE_FUNCTION(execRemoveGeometry); \
	DECLARE_FUNCTION(execUpdateGeometry); \
	DECLARE_FUNCTION(execSendGeometry); \
	DECLARE_FUNCTION(execConvertMesh);


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkGeometryComponent, NO_API)


struct Z_Construct_UClass_UAkGeometryComponent_Statics;
AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent(ETypeConstructPhase);

#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAkGeometryComponent_Statics; \
	friend AKAUDIO_API UClass* ::Z_Construct_UClass_UAkGeometryComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAkGeometryComponent, UAkAcousticTextureSetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), Z_Construct_UClass_UAkGeometryComponent) \
	DECLARE_SERIALIZER(UAkGeometryComponent) \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_ARCHIVESERIALIZER


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAkGeometryComponent(UAkGeometryComponent&&) = delete; \
	UAkGeometryComponent(const UAkGeometryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGeometryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGeometryComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGeometryComponent) \
	NO_API virtual ~UAkGeometryComponent();


#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_77_PROLOG
#define FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_INCLASS_NO_PURE_DECLS \
	FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAkGeometryComponent;

// ********** End Class UAkGeometryComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_studente_Documents_GitHub_Esame_Unreal_3_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h

// ********** Begin Enum AkMeshType ****************************************************************
#define FOREACH_ENUM_AKMESHTYPE(op) \
	op(AkMeshType::StaticMesh) \
	op(AkMeshType::CollisionMesh) 

enum class AkMeshType : uint8;
template<> struct TIsUEnumClass<AkMeshType> { enum { Value = true }; };
template<> UE_NODEBUG AKAUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<AkMeshType>();
// ********** End Enum AkMeshType ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
