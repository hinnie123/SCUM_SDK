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

// Function UI_MenuItem.UI_MenuItem_C.OnClickedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MenuItem_C*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_MenuItem_C::OnClickedDispatcher__DelegateSignature(class UUI_MenuItem_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuItem.UI_MenuItem_C.OnClickedDispatcher__DelegateSignature");

	UUI_MenuItem_C_OnClickedDispatcher__DelegateSignature_Params fn_params;
	fn_params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
