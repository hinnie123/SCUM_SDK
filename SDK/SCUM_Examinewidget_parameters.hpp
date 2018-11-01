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

// Function Examinewidget.Examinewidget_C.On_IClose_MouseButtonDown_1
struct UExaminewidget_C_On_IClose_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Examinewidget.Examinewidget_C.Construct
struct UExaminewidget_C_Construct_Params
{
};

// Function Examinewidget.Examinewidget_C.OnActivate
struct UExaminewidget_C_OnActivate_Params
{
};

// Function Examinewidget.Examinewidget_C.OnClose
struct UExaminewidget_C_OnClose_Params
{
};

// Function Examinewidget.Examinewidget_C.SetWidgetTitle
struct UExaminewidget_C_SetWidgetTitle_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Examinewidget.Examinewidget_C.ExecuteUbergraph_Examinewidget
struct UExaminewidget_C_ExecuteUbergraph_Examinewidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
