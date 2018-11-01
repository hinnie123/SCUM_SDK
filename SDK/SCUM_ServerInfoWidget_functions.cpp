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

// Function ServerInfoWidget.ServerInfoWidget_C.SetValid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Valid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerInfoWidget_C::SetValid(bool Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.SetValid");

	UServerInfoWidget_C_SetValid_Params params;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.Connect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UServerInfoWidget_C::Connect(const struct FString& password)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.Connect");

	UServerInfoWidget_C_Connect_Params params;
	params.password = password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.SetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UServerInfoWidget_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.SetColor");

	UServerInfoWidget_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.UpdateFromServerInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerInfo             ServerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UServerInfoWidget_C::UpdateFromServerInfo(const struct FServerInfo& ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.UpdateFromServerInfo");

	UServerInfoWidget_C_UpdateFromServerInfo_Params params;
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UServerInfoWidget_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnSynchronizeProperties");

	UServerInfoWidget_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UServerInfoWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UServerInfoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UServerInfoWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature");

	UServerInfoWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UServerInfoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.Construct");

	UServerInfoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerInfoWidget_C::ExecuteUbergraph_ServerInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget");

	UServerInfoWidget_C_ExecuteUbergraph_ServerInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnRemoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UServerInfoWidget_C::OnRemoved__DelegateSignature(const struct FServerInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnRemoved__DelegateSignature");

	UServerInfoWidget_C_OnRemoved__DelegateSignature_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnDoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerInfoWidget_C*     ServerInfoWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UServerInfoWidget_C::OnDoubleClicked__DelegateSignature(class UServerInfoWidget_C* ServerInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnDoubleClicked__DelegateSignature");

	UServerInfoWidget_C_OnDoubleClicked__DelegateSignature_Params params;
	params.ServerInfoWidget = ServerInfoWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerInfoWidget_C*     ServerInfoWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UServerInfoWidget_C::OnClicked__DelegateSignature(class UServerInfoWidget_C* ServerInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnClicked__DelegateSignature");

	UServerInfoWidget_C_OnClicked__DelegateSignature_Params params;
	params.ServerInfoWidget = ServerInfoWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
