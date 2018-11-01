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

// Function AnimBP_98k.AnimBP_98k_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_98k_AnimGraphNode_BlendListByEnum_2BAD4FEA4B914AF61DC15A8DC18AEE30
// (BlueprintEvent)

void UAnimBP_98k_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_98k_AnimGraphNode_BlendListByEnum_2BAD4FEA4B914AF61DC15A8DC18AEE30()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_98k.AnimBP_98k_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_98k_AnimGraphNode_BlendListByEnum_2BAD4FEA4B914AF61DC15A8DC18AEE30");

	UAnimBP_98k_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_98k_AnimGraphNode_BlendListByEnum_2BAD4FEA4B914AF61DC15A8DC18AEE30_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_98k.AnimBP_98k_C.ExecuteUbergraph_AnimBP_98k
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_98k_C::ExecuteUbergraph_AnimBP_98k(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_98k.AnimBP_98k_C.ExecuteUbergraph_AnimBP_98k");

	UAnimBP_98k_C_ExecuteUbergraph_AnimBP_98k_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
