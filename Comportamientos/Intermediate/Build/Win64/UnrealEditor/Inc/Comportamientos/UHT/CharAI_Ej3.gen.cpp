// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Comportamientos/CharAI_Ej3.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharAI_Ej3() {}

// ********** Begin Cross Module References ********************************************************
COMPORTAMIENTOS_API UClass* Z_Construct_UClass_ACharAI_Ej3();
COMPORTAMIENTOS_API UClass* Z_Construct_UClass_ACharAI_Ej3_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Comportamientos();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACharAI_Ej3 **************************************************************
void ACharAI_Ej3::StaticRegisterNativesACharAI_Ej3()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACharAI_Ej3;
UClass* ACharAI_Ej3::GetPrivateStaticClass()
{
	using TClass = ACharAI_Ej3;
	if (!Z_Registration_Info_UClass_ACharAI_Ej3.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharAI_Ej3"),
			Z_Registration_Info_UClass_ACharAI_Ej3.InnerSingleton,
			StaticRegisterNativesACharAI_Ej3,
			sizeof(TClass),
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
	return Z_Registration_Info_UClass_ACharAI_Ej3.InnerSingleton;
}
UClass* Z_Construct_UClass_ACharAI_Ej3_NoRegister()
{
	return ACharAI_Ej3::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACharAI_Ej3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharAI_Ej3.h" },
		{ "ModuleRelativePath", "CharAI_Ej3.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharAI_Ej3>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACharAI_Ej3_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Comportamientos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharAI_Ej3_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharAI_Ej3_Statics::ClassParams = {
	&ACharAI_Ej3::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharAI_Ej3_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharAI_Ej3_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharAI_Ej3()
{
	if (!Z_Registration_Info_UClass_ACharAI_Ej3.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharAI_Ej3.OuterSingleton, Z_Construct_UClass_ACharAI_Ej3_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharAI_Ej3.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharAI_Ej3);
ACharAI_Ej3::~ACharAI_Ej3() {}
// ********** End Class ACharAI_Ej3 ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_julio_gutierrez2_Documents_GitHub_MasterComportamientos_Comportamientos_Source_Comportamientos_CharAI_Ej3_h__Script_Comportamientos_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharAI_Ej3, ACharAI_Ej3::StaticClass, TEXT("ACharAI_Ej3"), &Z_Registration_Info_UClass_ACharAI_Ej3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharAI_Ej3), 2731409830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_julio_gutierrez2_Documents_GitHub_MasterComportamientos_Comportamientos_Source_Comportamientos_CharAI_Ej3_h__Script_Comportamientos_1673566230(TEXT("/Script/Comportamientos"),
	Z_CompiledInDeferFile_FID_Users_julio_gutierrez2_Documents_GitHub_MasterComportamientos_Comportamientos_Source_Comportamientos_CharAI_Ej3_h__Script_Comportamientos_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_julio_gutierrez2_Documents_GitHub_MasterComportamientos_Comportamientos_Source_Comportamientos_CharAI_Ej3_h__Script_Comportamientos_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
