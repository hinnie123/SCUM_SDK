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

// Function BPI_Movable.BPI_Movable_C.OnStartDrag
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Movable_C::OnStartDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Movable.BPI_Movable_C.OnStartDrag");

	UBPI_Movable_C_OnStartDrag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
