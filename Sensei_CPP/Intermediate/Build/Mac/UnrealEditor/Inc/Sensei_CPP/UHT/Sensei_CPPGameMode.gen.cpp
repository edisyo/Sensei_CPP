// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sensei_CPP/Sensei_CPPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSensei_CPPGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SENSEI_CPP_API UClass* Z_Construct_UClass_ASensei_CPPGameMode();
	SENSEI_CPP_API UClass* Z_Construct_UClass_ASensei_CPPGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sensei_CPP();
// End Cross Module References
	void ASensei_CPPGameMode::StaticRegisterNativesASensei_CPPGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASensei_CPPGameMode);
	UClass* Z_Construct_UClass_ASensei_CPPGameMode_NoRegister()
	{
		return ASensei_CPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASensei_CPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASensei_CPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Sensei_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASensei_CPPGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASensei_CPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Sensei_CPPGameMode.h" },
		{ "ModuleRelativePath", "Sensei_CPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASensei_CPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASensei_CPPGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASensei_CPPGameMode_Statics::ClassParams = {
		&ASensei_CPPGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASensei_CPPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASensei_CPPGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASensei_CPPGameMode()
	{
		if (!Z_Registration_Info_UClass_ASensei_CPPGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASensei_CPPGameMode.OuterSingleton, Z_Construct_UClass_ASensei_CPPGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASensei_CPPGameMode.OuterSingleton;
	}
	template<> SENSEI_CPP_API UClass* StaticClass<ASensei_CPPGameMode>()
	{
		return ASensei_CPPGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASensei_CPPGameMode);
	ASensei_CPPGameMode::~ASensei_CPPGameMode() {}
	struct Z_CompiledInDeferFile_FID_GitProjects_Sensei_CPP_Sensei_CPP_Source_Sensei_CPP_Sensei_CPPGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProjects_Sensei_CPP_Sensei_CPP_Source_Sensei_CPP_Sensei_CPPGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASensei_CPPGameMode, ASensei_CPPGameMode::StaticClass, TEXT("ASensei_CPPGameMode"), &Z_Registration_Info_UClass_ASensei_CPPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASensei_CPPGameMode), 2586935510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProjects_Sensei_CPP_Sensei_CPP_Source_Sensei_CPP_Sensei_CPPGameMode_h_3959628705(TEXT("/Script/Sensei_CPP"),
		Z_CompiledInDeferFile_FID_GitProjects_Sensei_CPP_Sensei_CPP_Source_Sensei_CPP_Sensei_CPPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProjects_Sensei_CPP_Sensei_CPP_Source_Sensei_CPP_Sensei_CPPGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
