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

// Function WindowsContent.WindowsContent_C.GetChildrenWindows
struct UWindowsContent_C_GetChildrenWindows_Params
{
	TArray<class UCustomGUIWindow_C*>                  childrenWidgets;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function WindowsContent.WindowsContent_C.AddChildWindow
struct UWindowsContent_C_AddChildWindow_Params
{
	class UCustomGUIWindow_C*                          childWindowRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmSwitchedOffOnContent
struct UWindowsContent_C_NotifyParentOnAlarmSwitchedOffOnContent_Params
{
};

// Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmRaisedOnContent
struct UWindowsContent_C_NotifyParentOnAlarmRaisedOnContent_Params
{
};

// Function WindowsContent.WindowsContent_C.NotifyParentOnWindowsContentSizeChanged
struct UWindowsContent_C_NotifyParentOnWindowsContentSizeChanged_Params
{
};

// Function WindowsContent.WindowsContent_C.SetParentWindow
struct UWindowsContent_C_SetParentWindow_Params
{
	class UCustomGUIWindow_C*                          parentWindowToSet;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WindowsContent.WindowsContent_C.GetParentWindow
struct UWindowsContent_C_GetParentWindow_Params
{
	class UCustomGUIWindow_C*                          parentWindow;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WindowsContent.WindowsContent_C.WindowContentSizeChanged
struct UWindowsContent_C_WindowContentSizeChanged_Params
{
};

// Function WindowsContent.WindowsContent_C.ExecuteUbergraph_WindowsContent
struct UWindowsContent_C_ExecuteUbergraph_WindowsContent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
