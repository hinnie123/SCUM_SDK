// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MovableWindow.MovableWindow_C.AttachContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovableWindow_C::AttachContentWidget(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.AttachContentWidget");

	UMovableWindow_C_AttachContentWidget_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovableWindow.MovableWindow_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMovableWindow_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.OnMouseButtonUp");

	UMovableWindow_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovableWindow.MovableWindow_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMovableWindow_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.OnDragDetected");

	UMovableWindow_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function MovableWindow.MovableWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMovableWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.Construct");

	UMovableWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovableWindow.MovableWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovableWindow_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.Tick");

	UMovableWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovableWindow.MovableWindow_C.StartDrag
// (BlueprintCallable, BlueprintEvent)

void UMovableWindow_C::StartDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.StartDrag");

	UMovableWindow_C_StartDrag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovableWindow.MovableWindow_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Dimensions                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FString                 Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMovableWindow_C::Init(const struct FVector2D& Dimensions, const struct FString& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.Init");

	UMovableWindow_C_Init_Params params;
	params.Dimensions = Dimensions;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovableWindow.MovableWindow_C.OnStartDrag
// (Public, BlueprintCallable, BlueprintEvent)

void UMovableWindow_C::OnStartDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.OnStartDrag");

	UMovableWindow_C_OnStartDrag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovableWindow.MovableWindow_C.ExecuteUbergraph_MovableWindow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovableWindow_C::ExecuteUbergraph_MovableWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.ExecuteUbergraph_MovableWindow");

	UMovableWindow_C_ExecuteUbergraph_MovableWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
