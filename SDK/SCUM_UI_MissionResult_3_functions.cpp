// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MissionResult_3.UI_MissionResult_2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MissionResult_2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionResult_3.UI_MissionResult_2_C.Construct");

	UUI_MissionResult_2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionResult_3.UI_MissionResult_2_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_MissionResult_2_C::BndEvt__OkButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionResult_3.UI_MissionResult_2_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UUI_MissionResult_2_C_BndEvt__OkButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionResult_3.UI_MissionResult_2_C.ExecuteUbergraph_UI_MissionResult_3
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionResult_2_C::ExecuteUbergraph_UI_MissionResult_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionResult_3.UI_MissionResult_2_C.ExecuteUbergraph_UI_MissionResult_3");

	UUI_MissionResult_2_C_ExecuteUbergraph_UI_MissionResult_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
