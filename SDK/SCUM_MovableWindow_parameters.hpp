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

// Function MovableWindow.MovableWindow_C.AttachContentWidget
struct UMovableWindow_C_AttachContentWidget_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovableWindow.MovableWindow_C.OnMouseButtonUp
struct UMovableWindow_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovableWindow.MovableWindow_C.OnDragDetected
struct UMovableWindow_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MovableWindow.MovableWindow_C.Construct
struct UMovableWindow_C_Construct_Params
{
};

// Function MovableWindow.MovableWindow_C.Tick
struct UMovableWindow_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovableWindow.MovableWindow_C.StartDrag
struct UMovableWindow_C_StartDrag_Params
{
};

// Function MovableWindow.MovableWindow_C.Init
struct UMovableWindow_C_Init_Params
{
	struct FVector2D                                   Dimensions;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FString                                     Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MovableWindow.MovableWindow_C.OnStartDrag
struct UMovableWindow_C_OnStartDrag_Params
{
};

// Function MovableWindow.MovableWindow_C.ExecuteUbergraph_MovableWindow
struct UMovableWindow_C_ExecuteUbergraph_MovableWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
