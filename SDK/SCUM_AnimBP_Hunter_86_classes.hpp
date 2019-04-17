#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_Hunter_86.AnimBP_Hunter_85_C
// 0x0570 (0x08F0 - 0x0380)
class UAnimBP_Hunter_85_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_31F1701D46E0E3F3EE3D98933FB192E6;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A95CEACC47CD6D3C6CB3E597B76A7F4E;      // 0x03D0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_75771F4A4B4895BDB0877F96C8C79663;      // 0x0440(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B84B716644E68D824184D79AB0BD52E8;      // 0x04B0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_765B37434DF26C8E940B91BE4B56D650;      // 0x0520(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_031B78F348C8935BAB53B9B222DED3E2;// 0x0590(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_91AB8849488134DD83BB2C9FD1EF07D4;// 0x0670(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E9358E6042E0D8B7D13831ACFABD800D;// 0x0750(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_74CE8711436A32157E0904A523A66EE2;// 0x07A0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D920EFDD458F62EC592181AB2AB34FE3;// 0x07F0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FC7BB48E4BF0507D600784A9234ACCF2;// 0x0840(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_Hunter_86.AnimBP_Hunter_85_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Hunter_85_AnimGraphNode_BlendListByEnum_031B78F348C8935BAB53B9B222DED3E2();
	void ExecuteUbergraph_AnimBP_Hunter_86(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
