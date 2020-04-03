#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_M1887.AnimBP_M1887_C
// 0x0570 (0x08F0 - 0x0380)
class UAnimBP_M1887_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E8DE8CEA4898D415F5D9E7BD8B8A12FE;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4717EFBC485B98277C22FD9B4024C89F;      // 0x03D0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CF08EEEF4193CA50727E40BDFDFF6D70;      // 0x0440(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_30341EDC4005FF78A60D79A00D11776B;      // 0x04B0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2EA3C1784A96EC13EED29D956A036F9C;      // 0x0520(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_0EEB33BE4F1351D6D0198887A0E69B31;// 0x0590(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C362131E46A8E51D332600ABF5E352D1;// 0x0670(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A3FA9BC34B6BA744E3528CB824C1D43D;// 0x0750(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1C8F9E2C4B973EC080F01BA2AA7FF79B;// 0x07A0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B12EFDF949A91607BCD4D790161DA04B;// 0x07F0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C73B9CB94F6DF84859BC4DBFA3953F8F;// 0x0840(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_M1887.AnimBP_M1887_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_M1887_AnimGraphNode_BlendListByEnum_0EEB33BE4F1351D6D0198887A0E69B31();
	void ExecuteUbergraph_AnimBP_M1887(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
