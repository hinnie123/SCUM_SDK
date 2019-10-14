#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.Get_ItemName_ColorAndOpacity
struct UUI_ItemSelectionWidget_C_Get_ItemName_ColorAndOpacity_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.SetSelected
struct UUI_ItemSelectionWidget_C_SetSelected_Params
{
	bool                                               selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.On_Selection_MouseButtonDown
struct UUI_ItemSelectionWidget_C_On_Selection_MouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.UpdateButton
struct UUI_ItemSelectionWidget_C_UpdateButton_Params
{
};

// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.GetData
struct UUI_ItemSelectionWidget_C_GetData_Params
{
	class UItemSelection*                              Data;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.SetData
struct UUI_ItemSelectionWidget_C_SetData_Params
{
	class UItemSelection*                              Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.OnClicked__DelegateSignature
struct UUI_ItemSelectionWidget_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
