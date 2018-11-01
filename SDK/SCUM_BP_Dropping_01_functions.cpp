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

// Function BP_Dropping_01.BP_Dropping_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Dropping_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.UserConstructionScript");

	ABP_Dropping_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_Dropping_01_C::OffsetTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__FinishedFunc");

	ABP_Dropping_01_C_OffsetTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_Dropping_01_C::OffsetTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__UpdateFunc");

	ABP_Dropping_01_C_OffsetTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dropping_01.BP_Dropping_01_C.BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Dropping_01_C::BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_Dropping_01_C_BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dropping_01.BP_Dropping_01_C.AutoDestroy
// (BlueprintCallable, BlueprintEvent)

void ABP_Dropping_01_C::AutoDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.AutoDestroy");

	ABP_Dropping_01_C_AutoDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dropping_01.BP_Dropping_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Dropping_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.ReceiveBeginPlay");

	ABP_Dropping_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dropping_01.BP_Dropping_01_C.ExecuteUbergraph_BP_Dropping_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dropping_01_C::ExecuteUbergraph_BP_Dropping_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.ExecuteUbergraph_BP_Dropping_01");

	ABP_Dropping_01_C_ExecuteUbergraph_BP_Dropping_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
