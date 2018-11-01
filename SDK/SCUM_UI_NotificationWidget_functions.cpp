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

// Function UI_NotificationWidget.UI_NotificationWidget_C.CheckLifespan
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationWidget_C::CheckLifespan(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.CheckLifespan");

	UUI_NotificationWidget_C_CheckLifespan_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.SetLifeSpan
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationWidget_C::SetLifeSpan(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.SetLifeSpan");

	UUI_NotificationWidget_C_SetLifeSpan_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_NotificationWidget_C::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.SetText");

	UUI_NotificationWidget_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.UpdateScale
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_NotificationWidget_C::UpdateScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.UpdateScale");

	UUI_NotificationWidget_C_UpdateScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationWidget_C::Show(bool Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Show");

	UUI_NotificationWidget_C_Show_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.Dismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationWidget_C::Dismiss(bool Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Dismiss");

	UUI_NotificationWidget_C_Dismiss_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_NotificationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Construct");

	UUI_NotificationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Tick");

	UUI_NotificationWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.ExecuteUbergraph_UI_NotificationWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationWidget_C::ExecuteUbergraph_UI_NotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.ExecuteUbergraph_UI_NotificationWidget");

	UUI_NotificationWidget_C_ExecuteUbergraph_UI_NotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
