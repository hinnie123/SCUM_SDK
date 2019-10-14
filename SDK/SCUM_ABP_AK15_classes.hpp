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

// AnimBlueprintGeneratedClass ABP_AK15.ABP_AK15_C
// 0x0AE0 (0x0E60 - 0x0380)
class UABP_AK15_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9B16AAF6419A0CB42459098D54B56EC9;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7ECB4744458079C8F863948DA7784861;      // 0x03D0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BD3E08A04056F07D8A17C4B5EE11C3FB;      // 0x0440(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F518F109499E2B77D7AFE0A8C5326710;      // 0x04B0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6BB777E14489B8F45B1365A6706077A0;// 0x0520(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_02B311104FC5477CF3CCE8838B4F8EAC;      // 0x0600(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_761296224A5563B0169FCDAD8551B299;// 0x0670(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_52B96A304ABBB1372F26879C4E76BDC6;// 0x0750(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_46CD99F944AA80DC056D7EBEE6E36750;// 0x07A0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_499C436E4E686F07A9B9AD80985133DA;// 0x07F0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_69699CD6404E10D7AA3C53A79F6FA3D7;// 0x0840(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F7E9522245ADE7B09E83288B4834D92B;// 0x08F0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C249A25F45EBDD135AF37EAE77B4DEBE;// 0x09C0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_1BB3DA69488323266356479934B22837;// 0x0A70(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4A86D94043A71FA76AC640B65F5DF746;      // 0x0B50(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_33731712451407AC15BB3481AEC478B4;      // 0x0BC0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9EA4DF8C419072C9762AFDAC18CA42D8;      // 0x0C30(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A3F9AE024CABB8CF57AFAF919ADD04C8;// 0x0CA0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_55DF5E7E44B7806475EF3ABAB27906D3;// 0x0CF0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8200E7EB4D6D21D2143D379069ABDF1F;// 0x0D40(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3CA39C8E4562A7969BEE7AB969E627E0;// 0x0D90(0x00D0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AK15.ABP_AK15_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AK15_AnimGraphNode_BlendListByBool_3CA39C8E4562A7969BEE7AB969E627E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AK15_AnimGraphNode_BlendListByEnum_1BB3DA69488323266356479934B22837();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AK15_AnimGraphNode_BlendListByBool_F7E9522245ADE7B09E83288B4834D92B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AK15_AnimGraphNode_BlendListByEnum_6BB777E14489B8F45B1365A6706077A0();
	void ExecuteUbergraph_ABP_AK15(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
