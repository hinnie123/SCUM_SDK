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

// BlueprintGeneratedClass BP_DesertEagle_Reload_Event_Opened.BP_DesertEagle_Reload_Event_Opened_C
// 0x000C (0x008C - 0x0080)
class UBP_DesertEagle_Reload_Event_Opened_C : public UEventInsertMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0080(0x0008) (Transient, DuplicateTransient)
	int                                                MaxAmmoCount;                                             // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DesertEagle_Reload_Event_Opened.BP_DesertEagle_Reload_Event_Opened_C");
		return ptr;
	}


	void OnActionAnimNotify(ECharacterActionNotifyType* notifyType);
	void ExecuteUbergraph_BP_DesertEagle_Reload_Event_Opened(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
