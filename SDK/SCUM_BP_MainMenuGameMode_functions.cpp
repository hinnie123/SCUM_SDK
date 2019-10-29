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

// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.UpdatePreviewPrisoners
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserProfile*            UserProfile                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuGameMode_C::UpdatePreviewPrisoners(class UUserProfile* UserProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.UpdatePreviewPrisoners");

	ABP_MainMenuGameMode_C_UpdatePreviewPrisoners_Params fn_params;
	fn_params.UserProfile = UserProfile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MainMenuGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.UserConstructionScript");

	ABP_MainMenuGameMode_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MainMenuGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveBeginPlay");

	ABP_MainMenuGameMode_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuGameMode_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveTick");

	ABP_MainMenuGameMode_C_ReceiveTick_Params fn_params;
	fn_params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ExecuteUbergraph_BP_MainMenuGameMode
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuGameMode_C::ExecuteUbergraph_BP_MainMenuGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ExecuteUbergraph_BP_MainMenuGameMode");

	ABP_MainMenuGameMode_C_ExecuteUbergraph_BP_MainMenuGameMode_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
