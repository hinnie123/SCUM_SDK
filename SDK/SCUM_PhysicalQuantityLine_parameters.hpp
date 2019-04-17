#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetValueColor
struct UPhysicalQuantityLine_C_SetValueColor_Params
{
	struct FLinearColor                                maxValueLinearColorToSet;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetValueColor
struct UPhysicalQuantityLine_C_GetValueColor_Params
{
	struct FLinearColor                                maxValueColor;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueColor
struct UPhysicalQuantityLine_C_SetMaxValueColor_Params
{
	struct FLinearColor                                maxValueLinearColorToSet;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueColor
struct UPhysicalQuantityLine_C_GetMaxValueColor_Params
{
	struct FLinearColor                                maxValueColor;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMeasurementUnit
struct UPhysicalQuantityLine_C_SetMeasurementUnit_Params
{
	struct FText                                       measurementUnitToSet;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMeasurementUnit
struct UPhysicalQuantityLine_C_GetMeasurementUnit_Params
{
	struct FText                                       measurementUnit;                                          // (Parm, OutParm)
};

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueText
struct UPhysicalQuantityLine_C_SetMaxValueText_Params
{
	struct FText                                       maxValueTextToSet;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueText
struct UPhysicalQuantityLine_C_GetMaxValueText_Params
{
	struct FText                                       maxValueTxt;                                              // (Parm, OutParm)
};

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetParameterValueText
struct UPhysicalQuantityLine_C_SetParameterValueText_Params
{
	struct FText                                       paramValueTextToSet;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetParameterValueText
struct UPhysicalQuantityLine_C_GetParameterValueText_Params
{
	struct FText                                       parameterValueTxt;                                        // (Parm, OutParm)
};

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.Construct
struct UPhysicalQuantityLine_C_Construct_Params
{
};

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.ExecuteUbergraph_PhysicalQuantityLine
struct UPhysicalQuantityLine_C_ExecuteUbergraph_PhysicalQuantityLine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
