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

// Function Fireplace1.Fireplace1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFireplace1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fireplace1.Fireplace1_C.UserConstructionScript");

	AFireplace1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
