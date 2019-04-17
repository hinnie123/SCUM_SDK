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

// Function UI_Inventory.UI_Inventory_C.RefreshMaxMassAndSlots
struct UUI_Inventory_C_RefreshMaxMassAndSlots_Params
{
};

// Function UI_Inventory.UI_Inventory_C.ToggleMinimizePartial
struct UUI_Inventory_C_ToggleMinimizePartial_Params
{
	bool                                               adjustPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Inventory.UI_Inventory_C.GetMinimizedPartial
struct UUI_Inventory_C_GetMinimizedPartial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Inventory.UI_Inventory_C.GetMinimizedFull
struct UUI_Inventory_C_GetMinimizedFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Inventory.UI_Inventory_C.ToggleMinimize
struct UUI_Inventory_C_ToggleMinimize_Params
{
	bool                                               adjustPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Inventory.UI_Inventory_C.SetSize
struct UUI_Inventory_C_SetSize_Params
{
	bool                                               adjustPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Inventory.UI_Inventory_C.OnMinimizePartialClicked
struct UUI_Inventory_C_OnMinimizePartialClicked_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Inventory.UI_Inventory_C.OnMinimizeAllClicked
struct UUI_Inventory_C_OnMinimizeAllClicked_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Inventory.UI_Inventory_C.Construct
struct UUI_Inventory_C_Construct_Params
{
};

// Function UI_Inventory.UI_Inventory_C.OnSynchronizeProperties
struct UUI_Inventory_C_OnSynchronizeProperties_Params
{
};

// Function UI_Inventory.UI_Inventory_C.UpdateDisplayValues
struct UUI_Inventory_C_UpdateDisplayValues_Params
{
	unsigned char*                                     occupiedSlots;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             occupiedMass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Inventory.UI_Inventory_C.UpdateImage
struct UUI_Inventory_C_UpdateImage_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Inventory.UI_Inventory_C.SetMinimizeAndAdjustSize
struct UUI_Inventory_C_SetMinimizeAndAdjustSize_Params
{
	bool*                                              isMinimizedFull;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isMinimizedPartial;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              adjustPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Inventory.UI_Inventory_C.SetTitle
struct UUI_Inventory_C_SetTitle_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_Inventory.UI_Inventory_C.OnHeaderDoubleClickEvent
struct UUI_Inventory_C_OnHeaderDoubleClickEvent_Params
{
	struct FGeometry                                   Geometry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_Inventory.UI_Inventory_C.RefreshSize
struct UUI_Inventory_C_RefreshSize_Params
{
};

// Function UI_Inventory.UI_Inventory_C.ExecuteUbergraph_UI_Inventory
struct UUI_Inventory_C_ExecuteUbergraph_UI_Inventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
