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

// Function UI_KeyBinding.UI_KeyBinding_C.BindKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_KeyBinding_C::BindKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.BindKey");

	UUI_KeyBinding_C_BindKey_Params fn_params;
	fn_params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinding.UI_KeyBinding_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_KeyBinding_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnMouseButtonDown_1");

	UUI_KeyBinding_C_OnMouseButtonDown_1_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_KeyBinding.UI_KeyBinding_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_KeyBinding_C::Init(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.Init");

	UUI_KeyBinding_C_Init_Params fn_params;
	fn_params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinding.UI_KeyBinding_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_KeyBinding_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnSynchronizeProperties");

	UUI_KeyBinding_C_OnSynchronizeProperties_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinding.UI_KeyBinding_C.OnDeselected
// (BlueprintCallable, BlueprintEvent)

void UUI_KeyBinding_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnDeselected");

	UUI_KeyBinding_C_OnDeselected_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinding.UI_KeyBinding_C.ExecuteUbergraph_UI_KeyBinding
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KeyBinding_C::ExecuteUbergraph_UI_KeyBinding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.ExecuteUbergraph_UI_KeyBinding");

	UUI_KeyBinding_C_ExecuteUbergraph_UI_KeyBinding_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinding.UI_KeyBinding_C.OnRebindInitiated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_KeyBinding_C*        keyBindingWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_KeyBinding_C::OnRebindInitiated__DelegateSignature(class UUI_KeyBinding_C* keyBindingWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnRebindInitiated__DelegateSignature");

	UUI_KeyBinding_C_OnRebindInitiated__DelegateSignature_Params fn_params;
	fn_params.keyBindingWidget = keyBindingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinding.UI_KeyBinding_C.KeyPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    actionKey                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KeyBinding_C::KeyPressed__DelegateSignature(const struct FName& ActionName, const struct FKey& actionKey, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.KeyPressed__DelegateSignature");

	UUI_KeyBinding_C_KeyPressed__DelegateSignature_Params fn_params;
	fn_params.ActionName = ActionName;
	fn_params.actionKey = actionKey;
	fn_params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
