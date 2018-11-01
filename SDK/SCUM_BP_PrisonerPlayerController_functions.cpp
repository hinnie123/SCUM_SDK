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

// Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.CreateGameMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PrisonerPlayerController_C::CreateGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.CreateGameMenu");

	ABP_PrisonerPlayerController_C_CreateGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ToggleGameMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PrisonerPlayerController_C::ToggleGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ToggleGameMenu");

	ABP_PrisonerPlayerController_C_ToggleGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PrisonerPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.UserConstructionScript");

	ABP_PrisonerPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ToggleGameMenuEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PrisonerPlayerController_C::ToggleGameMenuEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ToggleGameMenuEvent");

	ABP_PrisonerPlayerController_C_ToggleGameMenuEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PrisonerPlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ReceiveBeginPlay");

	ABP_PrisonerPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ExecuteUbergraph_BP_PrisonerPlayerController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrisonerPlayerController_C::ExecuteUbergraph_BP_PrisonerPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ExecuteUbergraph_BP_PrisonerPlayerController");

	ABP_PrisonerPlayerController_C_ExecuteUbergraph_BP_PrisonerPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
