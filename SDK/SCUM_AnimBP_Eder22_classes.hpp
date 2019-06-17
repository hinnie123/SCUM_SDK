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

// AnimBlueprintGeneratedClass AnimBP_Eder22.AnimBP_Eder22_C
// 0x06F0 (0x0A70 - 0x0380)
class UAnimBP_Eder22_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F3571DAB4054C92A4B0CA8BB9E8D7056;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F43879D044AE5D2FD792B7BFFDBC4E77;      // 0x03D0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_21A377D848AAD72968425C9C3EFCA292;      // 0x0440(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C1335ADC474ED9B32671EB966E4092B6;      // 0x04B0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_61761F4D454B7DA4FCC3D98A7E563E61;// 0x0520(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BE9C99254E1234F4B5D956B4F1C6F179;      // 0x0600(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F94D674E4A587272526A2FAA161E73C6;// 0x0670(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7F1BCFC94FED634451EEFDB88EDD39F9;// 0x0740(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_647959324986465DA25284BF34F2C853;// 0x0820(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6C9CDC32459170EB976846A20D8FA243;// 0x0870(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BC9C69CC4887CCE973C720A3E3A81E60;// 0x08C0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_443DB2B5470F74859E09D1928CAC9B98;// 0x0910(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_570CE346464C0FD60E46A3B13071FD70;// 0x09C0(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_Eder22.AnimBP_Eder22_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Eder22_AnimGraphNode_BlendListByBool_F94D674E4A587272526A2FAA161E73C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Eder22_AnimGraphNode_BlendListByEnum_61761F4D454B7DA4FCC3D98A7E563E61();
	void ExecuteUbergraph_AnimBP_Eder22(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
