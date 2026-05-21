// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Comportamientos/TargetPoint_Ej3.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTargetPoint_Ej3() {}

// ********** Begin Cross Module References ********************************************************
COMPORTAMIENTOS_API UClass* Z_Construct_UClass_ATargetPoint_Ej3();
COMPORTAMIENTOS_API UClass* Z_Construct_UClass_ATargetPoint_Ej3_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
UPackage* Z_Construct_UPackage__Script_Comportamientos();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATargetPoint_Ej3 *********************************************************
void ATargetPoint_Ej3::StaticRegisterNativesATargetPoint_Ej3()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATargetPoint_Ej3;
UClass* ATargetPoint_Ej3::GetPrivateStaticClass()
{
	using TClass = ATargetPoint_Ej3;
	if (!Z_Registration_Info_UClass_ATargetPoint_Ej3.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TargetPoint_Ej3"),
			Z_Registration_Info_UClass_ATargetPoint_Ej3.InnerSingleton,
			StaticRegisterNativesATargetPoint_Ej3,
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
	return Z_Registration_Info_UClass_ATargetPoint_Ej3.InnerSingleton;
}
UClass* Z_Construct_UClass_ATargetPoint_Ej3_NoRegister()
{
	return ATargetPoint_Ej3::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATargetPoint_Ej3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TargetPoint_Ej3.h" },
		{ "ModuleRelativePath", "TargetPoint_Ej3.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_iIndex_MetaData[] = {
		{ "Category", "Position" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Position\n" },
#endif
		{ "ModuleRelativePath", "TargetPoint_Ej3.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_m_iIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetPoint_Ej3>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATargetPoint_Ej3_Statics::NewProp_m_iIndex = { "m_iIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATargetPoint_Ej3, m_iIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_iIndex_MetaData), NewProp_m_iIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetPoint_Ej3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPoint_Ej3_Statics::NewProp_m_iIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPoint_Ej3_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATargetPoint_Ej3_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATargetPoint,
	(UObject* (*)())Z_Construct_UPackage__Script_Comportamientos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPoint_Ej3_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetPoint_Ej3_Statics::ClassParams = {
	&ATargetPoint_Ej3::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATargetPoint_Ej3_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPoint_Ej3_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPoint_Ej3_Statics::Class_MetaDataParams), Z_Construct_UClass_ATargetPoint_Ej3_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATargetPoint_Ej3()
{
	if (!Z_Registration_Info_UClass_ATargetPoint_Ej3.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetPoint_Ej3.OuterSingleton, Z_Construct_UClass_ATargetPoint_Ej3_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATargetPoint_Ej3.OuterSingleton;
}
ATargetPoint_Ej3::ATargetPoint_Ej3(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetPoint_Ej3);
ATargetPoint_Ej3::~ATargetPoint_Ej3() {}
// ********** End Class ATargetPoint_Ej3 ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_julio_gutierrez2_Documents_GitHub_MasterComportamientos_Comportamientos_Source_Comportamientos_TargetPoint_Ej3_h__Script_Comportamientos_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATargetPoint_Ej3, ATargetPoint_Ej3::StaticClass, TEXT("ATargetPoint_Ej3"), &Z_Registration_Info_UClass_ATargetPoint_Ej3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetPoint_Ej3), 3375046330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_julio_gutierrez2_Documents_GitHub_MasterComportamientos_Comportamientos_Source_Comportamientos_TargetPoint_Ej3_h__Script_Comportamientos_2191763344(TEXT("/Script/Comportamientos"),
	Z_CompiledInDeferFile_FID_Users_julio_gutierrez2_Documents_GitHub_MasterComportamientos_Comportamientos_Source_Comportamientos_TargetPoint_Ej3_h__Script_Comportamientos_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_julio_gutierrez2_Documents_GitHub_MasterComportamientos_Comportamientos_Source_Comportamientos_TargetPoint_Ej3_h__Script_Comportamientos_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
