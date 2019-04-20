// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimBP_MosinNagant.AnimBP_MosinNagant_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MosinNagant_AnimGraphNode_BlendListByEnum_E5DD203F47FD728C7D983BAAD1752314
// (BlueprintEvent)

void UAnimBP_MosinNagant_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MosinNagant_AnimGraphNode_BlendListByEnum_E5DD203F47FD728C7D983BAAD1752314()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MosinNagant.AnimBP_MosinNagant_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MosinNagant_AnimGraphNode_BlendListByEnum_E5DD203F47FD728C7D983BAAD1752314");

	UAnimBP_MosinNagant_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MosinNagant_AnimGraphNode_BlendListByEnum_E5DD203F47FD728C7D983BAAD1752314_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_MosinNagant.AnimBP_MosinNagant_C.ExecuteUbergraph_AnimBP_MosinNagant
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_MosinNagant_C::ExecuteUbergraph_AnimBP_MosinNagant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MosinNagant.AnimBP_MosinNagant_C.ExecuteUbergraph_AnimBP_MosinNagant");

	UAnimBP_MosinNagant_C_ExecuteUbergraph_AnimBP_MosinNagant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
