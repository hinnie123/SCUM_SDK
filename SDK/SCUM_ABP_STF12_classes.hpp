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

// AnimBlueprintGeneratedClass ABP_STF12.ABP_STF12_C
// 0x0764 (0x0AE4 - 0x0380)
class UABP_STF12_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2782851343856965C0680B98B95B1207;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7860443E4302679E27433193BFAE1BD2;      // 0x03D0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2469AB0E4AE79DF5951A048485098468;      // 0x0440(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C2C8CB5E4EA7E12D7A0E178E8243753B;      // 0x04B0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_336E19274DD24E2165E9AF90537958AA;// 0x0520(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1ED10CCF4839D46438708298301EED26;// 0x0600(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A2C2BA3D492966121236DDA7942A48AD;// 0x06E0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CF340B4F40306D3D4643CC9F5BCC4224;// 0x0730(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D5EAB5B347A54AB009D36397C834F27B;// 0x0780(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71BA2CFC430C51ED57387AA195B9370C;// 0x07D0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_569306FD4889AE01566BAB9CE0096E87;      // 0x0880(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4A68127C47EEBEDA55D28BBE33CE15A0;// 0x08F0(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0563C8B44C4C7E9EEB0BA6B41738EA58;// 0x0A50(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BE119F8A4B106791DC8677A786B0FFFC;// 0x0A98(0x0048)
	float                                              IronSightsHideAlpha;                                      // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_STF12.ABP_STF12_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_STF12_AnimGraphNode_ModifyBone_4A68127C47EEBEDA55D28BBE33CE15A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_STF12_AnimGraphNode_BlendListByEnum_336E19274DD24E2165E9AF90537958AA();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_STF12(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
