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

// Function ServerInfoWidget.ServerInfoWidget_C.SetValid
struct UServerInfoWidget_C_SetValid_Params
{
	bool                                               Valid;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerInfoWidget.ServerInfoWidget_C.Connect
struct UServerInfoWidget_C_Connect_Params
{
	struct FString                                     password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ServerInfoWidget.ServerInfoWidget_C.SetColor
struct UServerInfoWidget_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ServerInfoWidget.ServerInfoWidget_C.UpdateFromServerInfo
struct UServerInfoWidget_C_UpdateFromServerInfo_Params
{
	struct FServerInfo                                 ServerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerInfoWidget.ServerInfoWidget_C.OnSynchronizeProperties
struct UServerInfoWidget_C_OnSynchronizeProperties_Params
{
};

// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UServerInfoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
struct UServerInfoWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ServerInfoWidget.ServerInfoWidget_C.Construct
struct UServerInfoWidget_C_Construct_Params
{
};

// Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget
struct UServerInfoWidget_C_ExecuteUbergraph_ServerInfoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerInfoWidget.ServerInfoWidget_C.OnRemoved__DelegateSignature
struct UServerInfoWidget_C_OnRemoved__DelegateSignature_Params
{
	struct FServerInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerInfoWidget.ServerInfoWidget_C.OnDoubleClicked__DelegateSignature
struct UServerInfoWidget_C_OnDoubleClicked__DelegateSignature_Params
{
	class UServerInfoWidget_C*                         ServerInfoWidget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ServerInfoWidget.ServerInfoWidget_C.OnClicked__DelegateSignature
struct UServerInfoWidget_C_OnClicked__DelegateSignature_Params
{
	class UServerInfoWidget_C*                         ServerInfoWidget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
