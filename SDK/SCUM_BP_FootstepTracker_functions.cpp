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

// Function BP_FootstepTracker.BP_FootstepTracker_C.DrawToTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasRenderTarget2D*   RenderTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               DrawSize                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AccuracyDivider                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_FootstepTracker_C::DrawToTexture(class UCanvasRenderTarget2D* RenderTarget, const struct FVector2D& DrawSize, class UMaterialInstanceDynamic* Material, float Rotation, float AccuracyDivider, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.DrawToTexture");

	ABP_FootstepTracker_C_DrawToTexture_Params fn_params;
	fn_params.RenderTarget = RenderTarget;
	fn_params.DrawSize = DrawSize;
	fn_params.Material = Material;
	fn_params.Rotation = Rotation;
	fn_params.AccuracyDivider = AccuracyDivider;
	fn_params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.Blitzkrieg Boom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FootstepTracker_C::Blitzkrieg_Boom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.Blitzkrieg Boom");

	ABP_FootstepTracker_C_Blitzkrieg_Boom_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FootstepTracker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.UserConstructionScript");

	ABP_FootstepTracker_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FootstepTracker_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveTick");

	ABP_FootstepTracker_C_ReceiveTick_Params fn_params;
	fn_params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.DrawFootstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           flip                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          footstepNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FootstepTracker_C::DrawFootstep(const struct FVector& Location, bool flip, float Rotation, float footstepNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.DrawFootstep");

	ABP_FootstepTracker_C_DrawFootstep_Params fn_params;
	fn_params.Location = Location;
	fn_params.flip = flip;
	fn_params.Rotation = Rotation;
	fn_params.footstepNumber = footstepNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FootstepTracker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveBeginPlay");

	ABP_FootstepTracker_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.ExecuteUbergraph_BP_FootstepTracker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FootstepTracker_C::ExecuteUbergraph_BP_FootstepTracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.ExecuteUbergraph_BP_FootstepTracker");

	ABP_FootstepTracker_C_ExecuteUbergraph_BP_FootstepTracker_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
