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

// AnimBlueprintGeneratedClass ABP_CompoundBow.ABP_CompoundBow_C
// 0x122C (0x15CC - 0x03A0)
class UABP_CompoundBow_C : public UWeaponBowAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_71D721D74BA153A2013365B089090953;      // 0x03A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4E71A3D149DBDF8D9AC6849922F8CCAA;      // 0x03F0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7A12393549784FBE803892BE59DA1A64;// 0x0460(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_785E03F14C4459AE0C7B14A256228B48;      // 0x0540(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29A9E96040DC5518929551864486DA9E;// 0x05B0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D3DBA08E4235B0FED716CCA6B60D8751;      // 0x0660(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4399B6BA4BE4A9F529C2A58A22909A93;// 0x06D0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_772EBDD84A0E5D80E0B1A3B91FB651C3;      // 0x0780(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_314637AC45260466F7D6F3A6B85EBBBA;// 0x07F0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_12B1375643AE4D1BB29E2B8CC40B7A36;// 0x08A0(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9387227E488B95E395CB19B9128E1AA2;      // 0x0980(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EFE0EB57410D443CC829A59952BE2FF8;// 0x09F0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B14703ED43E927735F21A9BBFD5DD6D5;      // 0x0AA0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9B60B51C4B896A3DF942199ED7088D3A;// 0x0B10(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B52AEA1749E18E7A5BF2329A6B42463A;      // 0x0BC0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9066184D4AAF8D31CD8FD996A528836A;// 0x0C30(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1440045C420A8F5D488D66A1EB179C93;// 0x0CE0(0x00D0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E0EC6B784820E57B1D2F6A8197AF52AB;// 0x0DB0(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5EE9D7BF4ACDEEBD1F4447BBD5A67537;// 0x0F10(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3D53F9B1467A0E00C21B7AB1CFC36485;// 0x0F58(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BE36D7194C92DDCD62FB9AB21B1699C7;// 0x0FA0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B1CF88E3423C169886F274B2D8AF5B99;// 0x1100(0x0160)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_217766F94DAB7D9E0FC3399106CCC539;// 0x1260(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2EC299A24881B527EA9D74A32D05E499;// 0x1330(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_255FE5414F2BBBD7D5FA37B1D84EF431;// 0x13E0(0x00B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_94CFEA9D444859AE4DBB22A1847D75E4;// 0x1490(0x0120)
	float                                              SightsHideAlpha;                                          // 0x15B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LSilencerSocketLocation;                                  // 0x15B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RSilencerSocketLocation;                                  // 0x15C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CompoundBow.ABP_CompoundBow_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CompoundBow_AnimGraphNode_TwoWayBlend_94CFEA9D444859AE4DBB22A1847D75E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CompoundBow_AnimGraphNode_SequencePlayer_2EC299A24881B527EA9D74A32D05E499();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CompoundBow_AnimGraphNode_BlendListByBool_217766F94DAB7D9E0FC3399106CCC539();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CompoundBow_AnimGraphNode_ModifyBone_B1CF88E3423C169886F274B2D8AF5B99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CompoundBow_AnimGraphNode_ModifyBone_BE36D7194C92DDCD62FB9AB21B1699C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CompoundBow_AnimGraphNode_ModifyBone_E0EC6B784820E57B1D2F6A8197AF52AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CompoundBow_AnimGraphNode_BlendListByBool_1440045C420A8F5D488D66A1EB179C93();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CompoundBow_AnimGraphNode_BlendListByEnum_12B1375643AE4D1BB29E2B8CC40B7A36();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CompoundBow_AnimGraphNode_BlendListByEnum_7A12393549784FBE803892BE59DA1A64();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CompoundBow_AnimGraphNode_SequencePlayer_255FE5414F2BBBD7D5FA37B1D84EF431();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_CompoundBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
