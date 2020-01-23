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

// BlueprintGeneratedClass BP_M1_OpenInsertClip.BP_M1_OpenInsertClip_C
// 0x0008 (0x0088 - 0x0080)
class UBP_M1_OpenInsertClip_C : public UInsertMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0080(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_OpenInsertClip.BP_M1_OpenInsertClip_C");
		return ptr;
	}


	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
	void OnActionAnimNotify(ECharacterActionNotifyType* notifyType);
	void ExecuteUbergraph_BP_M1_OpenInsertClip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
