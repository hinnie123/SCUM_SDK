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

// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_ContinueOrNewCharacterDialog_C::BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	UUI_ContinueOrNewCharacterDialog_C_BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_ContinueOrNewCharacterDialog_C::BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature");

	UUI_ContinueOrNewCharacterDialog_C_BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Init
// (BlueprintCallable, BlueprintEvent)

void UUI_ContinueOrNewCharacterDialog_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Init");

	UUI_ContinueOrNewCharacterDialog_C_Init_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.ExecuteUbergraph_UI_ContinueOrNewCharacterDialog
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ContinueOrNewCharacterDialog_C::ExecuteUbergraph_UI_ContinueOrNewCharacterDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.ExecuteUbergraph_UI_ContinueOrNewCharacterDialog");

	UUI_ContinueOrNewCharacterDialog_C_ExecuteUbergraph_UI_ContinueOrNewCharacterDialog_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.New__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Ip                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            GameplayPort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ResponsePort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AuthToken                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_ContinueOrNewCharacterDialog_C::New__DelegateSignature(const struct FString& Ip, int GameplayPort, int ResponsePort, const struct FString& AuthToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.New__DelegateSignature");

	UUI_ContinueOrNewCharacterDialog_C_New__DelegateSignature_Params fn_params;
	fn_params.Ip = Ip;
	fn_params.GameplayPort = GameplayPort;
	fn_params.ResponsePort = ResponsePort;
	fn_params.AuthToken = AuthToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Continue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Ip                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            GameplayPort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ResponsePort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AuthToken                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_ContinueOrNewCharacterDialog_C::Continue__DelegateSignature(const struct FString& Ip, int GameplayPort, int ResponsePort, const struct FString& AuthToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Continue__DelegateSignature");

	UUI_ContinueOrNewCharacterDialog_C_Continue__DelegateSignature_Params fn_params;
	fn_params.Ip = Ip;
	fn_params.GameplayPort = GameplayPort;
	fn_params.ResponsePort = ResponsePort;
	fn_params.AuthToken = AuthToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
