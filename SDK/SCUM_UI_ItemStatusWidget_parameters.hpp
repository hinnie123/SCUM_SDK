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

// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.UpdateVisibility
struct UUI_ItemStatusWidget_C_UpdateVisibility_Params
{
};

// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.Construct
struct UUI_ItemStatusWidget_C_Construct_Params
{
};

// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.SetNameText
struct UUI_ItemStatusWidget_C_SetNameText_Params
{
	struct FString*                                    Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.ExecuteUbergraph_UI_ItemStatusWidget
struct UUI_ItemStatusWidget_C_ExecuteUbergraph_UI_ItemStatusWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
