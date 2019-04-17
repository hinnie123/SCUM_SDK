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

// BlueprintGeneratedClass Compound_Bow.Compound_Bow_C
// 0x000C (0x145C - 0x1450)
class ACompound_Bow_C : public AWeaponBow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1450(0x0008) (Transient, DuplicateTransient)
	float                                              SightHideAlpha;                                           // 0x1458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Compound_Bow.Compound_Bow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void OnAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void ExecuteUbergraph_Compound_Bow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
