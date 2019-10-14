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

// Function E_1H_Small_Axe.E_1H_Small_Axe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AE_1H_Small_Axe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function E_1H_Small_Axe.E_1H_Small_Axe_C.UserConstructionScript");

	AE_1H_Small_Axe_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
