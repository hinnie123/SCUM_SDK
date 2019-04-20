#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateSliderFromMouseEvent
struct UUI_CC_ProgressBar_C_UpdateSliderFromMouseEvent_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetSliderFromPercentage
struct UUI_CC_ProgressBar_C_SetSliderFromPercentage_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               onlyWholeNumbers;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetValue
struct UUI_CC_ProgressBar_C_SetValue_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              leftover;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetTitle
struct UUI_CC_ProgressBar_C_SetTitle_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ProcessIndexChange
struct UUI_CC_ProgressBar_C_ProcessIndexChange_Params
{
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonUp
struct UUI_CC_ProgressBar_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetEnabledState
struct UUI_CC_ProgressBar_C_SetEnabledState_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonDown
struct UUI_CC_ProgressBar_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseMove
struct UUI_CC_ProgressBar_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateBarFromIndex
struct UUI_CC_ProgressBar_C_UpdateBarFromIndex_Params
{
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.InitFromData
struct UUI_CC_ProgressBar_C_InitFromData_Params
{
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.CreateMarkers
struct UUI_CC_ProgressBar_C_CreateMarkers_Params
{
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnSynchronizeProperties
struct UUI_CC_ProgressBar_C_OnSynchronizeProperties_Params
{
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Construct
struct UUI_CC_ProgressBar_C_Construct_Params
{
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Tick
struct UUI_CC_ProgressBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ExecuteUbergraph_UI_CC_ProgressBar
struct UUI_CC_ProgressBar_C_ExecuteUbergraph_UI_CC_ProgressBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseDown__DelegateSignature
struct UUI_CC_ProgressBar_C_MouseDown__DelegateSignature_Params
{
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseUp__DelegateSignature
struct UUI_CC_ProgressBar_C_MouseUp__DelegateSignature_Params
{
};

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnIndexChanged__DelegateSignature
struct UUI_CC_ProgressBar_C_OnIndexChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeftoverPercentage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
