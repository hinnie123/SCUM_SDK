#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_MosinNagant.AnimBP_MosinNagant_C
// 0x0570 (0x08F0 - 0x0380)
class UAnimBP_MosinNagant_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F711EE7D41620EBC5A69279B141C18DC;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F9CCDB3C4E42D046CD9C59B7873BF148;      // 0x03D0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A6DB78C2413E2C703C909EBF916C3966;      // 0x0440(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A067519E4C8C1D725F94759400CF75A4;      // 0x04B0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_28B5EA03417B72131947A0AC4801D676;      // 0x0520(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_E5DD203F47FD728C7D983BAAD1752314;// 0x0590(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_234A7D4743F10CE88CFFFF90E4662709;// 0x0670(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D379C1E7480EC45D38330DB572CE487A;// 0x0750(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_487F04974685913458BA3E8AD6D63F3F;// 0x07A0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_94F3E5FF48B45DF1398D1A8CA7668CD0;// 0x07F0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AA9D341F40A9AD8F3ED4B49155492088;// 0x0840(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_MosinNagant.AnimBP_MosinNagant_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MosinNagant_AnimGraphNode_BlendListByEnum_E5DD203F47FD728C7D983BAAD1752314();
	void ExecuteUbergraph_AnimBP_MosinNagant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
