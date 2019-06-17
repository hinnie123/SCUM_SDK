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

// Function UI_ItemClass.UI_ItemClass_C.GetTexture
struct UUI_ItemClass_C_GetTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemClass.UI_ItemClass_C.OnMouseButtonDoubleClick
struct UUI_ItemClass_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_ItemClass.UI_ItemClass_C.Init
struct UUI_ItemClass_C_Init_Params
{
	class UClass**                                     ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemClass.UI_ItemClass_C.OnSynchronizeProperties
struct UUI_ItemClass_C_OnSynchronizeProperties_Params
{
};

// Function UI_ItemClass.UI_ItemClass_C.Construct
struct UUI_ItemClass_C_Construct_Params
{
};

// Function UI_ItemClass.UI_ItemClass_C.ExecuteUbergraph_UI_ItemClass
struct UUI_ItemClass_C_ExecuteUbergraph_UI_ItemClass_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
