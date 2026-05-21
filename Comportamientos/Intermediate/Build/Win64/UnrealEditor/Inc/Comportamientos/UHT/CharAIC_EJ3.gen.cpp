// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Comportamientos/CharAIC_EJ3.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharAIC_EJ3() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
COMPORTAMIENTOS_API UClass* Z_Construct_UClass_ACharAIC_Ej3();
COMPORTAMIENTOS_API UClass* Z_Construct_UClass_ACharAIC_Ej3_NoRegister();
UPackage* Z_Construct_UPackage__Script_Comportamientos();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACharAIC_Ej3 Function UpdateNextTargetPoint ******************************
struct Z_Construct_UFunction_ACharAIC_Ej3_UpdateNextTargetPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "CharAIC_EJ3.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharAIC_Ej3_UpdateNextTargetPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACharAIC_Ej3, nullptr, "UpdateNextTargetPoint", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharAIC_Ej3_UpdateNextTargetPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharAIC_Ej3_UpdateNextTargetPoint_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACharAIC_Ej3_UpdateNextTargetPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharAIC_Ej3_UpdateNextTargetPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharAIC_Ej3::execUpdateNextTargetPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateNextTargetPoint();
	P_NATIVE_END;
}
// ********** End Class ACharAIC_Ej3 Function UpdateNextTargetPoint ********************************

// ********** Begin Class ACharAIC_Ej3 *************************************************************
void ACharAIC_Ej3::StaticRegisterNativesACharAIC_Ej3()
{
	UClass* Class = ACharAIC_Ej3::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateNextTargetPoint", &ACharAIC_Ej3::execUpdateNextTargetPoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACharAIC_Ej3;
UClass* ACharAIC_Ej3::GetPrivateStaticClass()
{
	using TClass = ACharAIC_Ej3;
	if (!Z_Registration_Info_UClass_ACharAIC_Ej3.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharAIC_Ej3"),
			Z_Registration_Info_UClass_ACharAIC_Ej3.InnerSingleton,
			StaticRegisterNativesACharAIC_Ej3,
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
	return Z_Registration_Info_UClass_ACharAIC_Ej3.InnerSingleton;
}
UClass* Z_Construct_UClass_ACharAIC_Ej3_NoRegister()
{
	return ACharAIC_Ej3::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACharAIC_Ej3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CharAIC_EJ3.h" },
		{ "ModuleRelativePath", "CharAIC_EJ3.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharAIC_Ej3_UpdateNextTargetPoint, "UpdateNextTargetPoint" }, // 322394164
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharAIC_Ej3>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACharAIC_Ej3_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Comportamientos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharAIC_Ej3_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharAIC_Ej3_Statics::ClassParams = {
	&ACharAIC_Ej3::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharAIC_Ej3_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharAIC_Ej3_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharAIC_Ej3()
{
	if (!Z_Registration_Info_UClass_ACharAIC_Ej3.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharAIC_Ej3.OuterSingleton, Z_Construct_UClass_ACharAIC_Ej3_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharAIC_Ej3.OuterSingleton;
}
ACharAIC_Ej3::ACharAIC_Ej3(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharAIC_Ej3);
ACharAIC_Ej3::~ACharAIC_Ej3() {}
// ********** End Class ACharAIC_Ej3 ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_julio_gutierrez2_Documents_GitHub_MasterComportamientos_Comportamientos_Source_Comportamientos_CharAIC_EJ3_h__Script_Comportamientos_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharAIC_Ej3, ACharAIC_Ej3::StaticClass, TEXT("ACharAIC_Ej3"), &Z_Registration_Info_UClass_ACharAIC_Ej3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharAIC_Ej3), 628749685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_julio_gutierrez2_Documents_GitHub_MasterComportamientos_Comportamientos_Source_Comportamientos_CharAIC_EJ3_h__Script_Comportamientos_483074546(TEXT("/Script/Comportamientos"),
	Z_CompiledInDeferFile_FID_Users_julio_gutierrez2_Documents_GitHub_MasterComportamientos_Comportamientos_Source_Comportamientos_CharAIC_EJ3_h__Script_Comportamientos_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_julio_gutierrez2_Documents_GitHub_MasterComportamientos_Comportamientos_Source_Comportamientos_CharAIC_EJ3_h__Script_Comportamientos_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
