// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Examinewidget.Examinewidget_C.On_IClose_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UExaminewidget_C::On_IClose_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Examinewidget.Examinewidget_C.On_IClose_MouseButtonDown_1");

	UExaminewidget_C_On_IClose_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function Examinewidget.Examinewidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UExaminewidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Examinewidget.Examinewidget_C.Construct");

	UExaminewidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Examinewidget.Examinewidget_C.OnActivate
// (BlueprintCallable, BlueprintEvent)

void UExaminewidget_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Examinewidget.Examinewidget_C.OnActivate");

	UExaminewidget_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Examinewidget.Examinewidget_C.OnClose
// (BlueprintCallable, BlueprintEvent)

void UExaminewidget_C::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Examinewidget.Examinewidget_C.OnClose");

	UExaminewidget_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Examinewidget.Examinewidget_C.SetWidgetTitle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UExaminewidget_C::SetWidgetTitle(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function Examinewidget.Examinewidget_C.SetWidgetTitle");

	UExaminewidget_C_SetWidgetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Examinewidget.Examinewidget_C.ExecuteUbergraph_Examinewidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExaminewidget_C::ExecuteUbergraph_Examinewidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Examinewidget.Examinewidget_C.ExecuteUbergraph_Examinewidget");

	UExaminewidget_C_ExecuteUbergraph_Examinewidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
