// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Menu_Snow.Menu_Snow_C.UpdateDroneVisual
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMenu_Snow_C::UpdateDroneVisual()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Snow.Menu_Snow_C.UpdateDroneVisual");

	AMenu_Snow_C_UpdateDroneVisual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Snow.Menu_Snow_C.InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMenu_Snow_C::InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Snow.Menu_Snow_C.InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1");

	AMenu_Snow_C_InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Snow.Menu_Snow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMenu_Snow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Snow.Menu_Snow_C.ReceiveBeginPlay");

	AMenu_Snow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Snow.Menu_Snow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenu_Snow_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Snow.Menu_Snow_C.ReceiveTick");

	AMenu_Snow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Snow.Menu_Snow_C.Recapture
// (BlueprintCallable, BlueprintEvent)

void AMenu_Snow_C::Recapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Snow.Menu_Snow_C.Recapture");

	AMenu_Snow_C_Recapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Snow.Menu_Snow_C.ExecuteUbergraph_Menu_Snow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenu_Snow_C::ExecuteUbergraph_Menu_Snow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Snow.Menu_Snow_C.ExecuteUbergraph_Menu_Snow");

	AMenu_Snow_C_ExecuteUbergraph_Menu_Snow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
