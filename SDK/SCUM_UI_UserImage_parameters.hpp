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

// Function UI_UserImage.UI_UserImage_C.SetImageBrush
struct UUI_UserImage_C_SetImageBrush_Params
{
	struct FSlateBrush                                 imageBrush;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_UserImage.UI_UserImage_C.SetSizeOverride
struct UUI_UserImage_C_SetSizeOverride_Params
{
	struct FVector2D                                   sizeOverride;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UI_UserImage.UI_UserImage_C.Construct
struct UUI_UserImage_C_Construct_Params
{
};

// Function UI_UserImage.UI_UserImage_C.ExecuteUbergraph_UI_UserImage
struct UUI_UserImage_C_ExecuteUbergraph_UI_UserImage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
