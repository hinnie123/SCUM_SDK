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

// Function HoveredEventWidget.HoveredEventWidget_C.OnMouseEnter
struct UHoveredEventWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HoveredEventWidget.HoveredEventWidget_C.OnMouseLeave
struct UHoveredEventWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HoveredEventWidget.HoveredEventWidget_C.ExecuteUbergraph_HoveredEventWidget
struct UHoveredEventWidget_C_ExecuteUbergraph_HoveredEventWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoveredEventWidget.HoveredEventWidget_C.MouseLeft__DelegateSignature
struct UHoveredEventWidget_C_MouseLeft__DelegateSignature_Params
{
};

// Function HoveredEventWidget.HoveredEventWidget_C.MouseEntered__DelegateSignature
struct UHoveredEventWidget_C_MouseEntered__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
