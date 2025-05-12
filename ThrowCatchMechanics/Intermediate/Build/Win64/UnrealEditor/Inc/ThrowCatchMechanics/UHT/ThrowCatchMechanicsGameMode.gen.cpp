// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThrowCatchMechanics/ThrowCatchMechanicsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowCatchMechanicsGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THROWCATCHMECHANICS_API UClass* Z_Construct_UClass_AThrowCatchMechanicsGameMode();
THROWCATCHMECHANICS_API UClass* Z_Construct_UClass_AThrowCatchMechanicsGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThrowCatchMechanics();
// End Cross Module References

// Begin Class AThrowCatchMechanicsGameMode
void AThrowCatchMechanicsGameMode::StaticRegisterNativesAThrowCatchMechanicsGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrowCatchMechanicsGameMode);
UClass* Z_Construct_UClass_AThrowCatchMechanicsGameMode_NoRegister()
{
	return AThrowCatchMechanicsGameMode::StaticClass();
}
struct Z_Construct_UClass_AThrowCatchMechanicsGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ThrowCatchMechanicsGameMode.h" },
		{ "ModuleRelativePath", "ThrowCatchMechanicsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowCatchMechanicsGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AThrowCatchMechanicsGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ThrowCatchMechanics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowCatchMechanicsGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowCatchMechanicsGameMode_Statics::ClassParams = {
	&AThrowCatchMechanicsGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowCatchMechanicsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AThrowCatchMechanicsGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThrowCatchMechanicsGameMode()
{
	if (!Z_Registration_Info_UClass_AThrowCatchMechanicsGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowCatchMechanicsGameMode.OuterSingleton, Z_Construct_UClass_AThrowCatchMechanicsGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThrowCatchMechanicsGameMode.OuterSingleton;
}
template<> THROWCATCHMECHANICS_API UClass* StaticClass<AThrowCatchMechanicsGameMode>()
{
	return AThrowCatchMechanicsGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowCatchMechanicsGameMode);
AThrowCatchMechanicsGameMode::~AThrowCatchMechanicsGameMode() {}
// End Class AThrowCatchMechanicsGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThrowCatchMechanics_Source_ThrowCatchMechanics_ThrowCatchMechanicsGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThrowCatchMechanicsGameMode, AThrowCatchMechanicsGameMode::StaticClass, TEXT("AThrowCatchMechanicsGameMode"), &Z_Registration_Info_UClass_AThrowCatchMechanicsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowCatchMechanicsGameMode), 567260389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThrowCatchMechanics_Source_ThrowCatchMechanics_ThrowCatchMechanicsGameMode_h_2329088242(TEXT("/Script/ThrowCatchMechanics"),
	Z_CompiledInDeferFile_FID_ThrowCatchMechanics_Source_ThrowCatchMechanics_ThrowCatchMechanicsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThrowCatchMechanics_Source_ThrowCatchMechanics_ThrowCatchMechanicsGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
