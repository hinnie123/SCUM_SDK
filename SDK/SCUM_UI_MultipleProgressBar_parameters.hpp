#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetDisplayValues
struct UUI_MultipleProgressBar_C_SetDisplayValues_Params
{
	float                                              value1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              value2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              value3;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              value4;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              value5;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetMaxValue
struct UUI_MultipleProgressBar_C_SetMaxValue_Params
{
	float                                              MaxValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              limitMaxValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayMaxValue;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnMouseMove
struct UUI_MultipleProgressBar_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetPercentages
struct UUI_MultipleProgressBar_C_SetPercentages_Params
{
	float                                              Percentage1;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percentage2;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percentage3;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percentage4;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percentage5;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnSynchronizeProperties
struct UUI_MultipleProgressBar_C_OnSynchronizeProperties_Params
{
};

// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.Construct
struct UUI_MultipleProgressBar_C_Construct_Params
{
};

// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.ExecuteUbergraph_UI_MultipleProgressBar
struct UUI_MultipleProgressBar_C_ExecuteUbergraph_UI_MultipleProgressBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
