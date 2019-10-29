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

// BlueprintGeneratedClass STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C
// 0x0010 (0x00A0 - 0x0090)
class USTF12_Reload_Event_Chamber_C : public UInsertCartridge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)
	int                                                loadedAmmoCount;                                          // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C");
		return ptr;
	}


	float ExecuteUsingData(struct FWeaponReloadData* Data);
	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
	void OnActionAnimNotify(ECharacterActionNotifyType* notifyType);
	void ExecuteUbergraph_STF12_Reload_Event_Chamber(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
