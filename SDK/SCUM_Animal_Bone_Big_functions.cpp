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

// Function Animal_Bone_Big.Animal_Bone_Big_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnimal_Bone_Big_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Animal_Bone_Big.Animal_Bone_Big_C.UserConstructionScript");

	AAnimal_Bone_Big_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
