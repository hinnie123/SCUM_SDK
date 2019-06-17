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

// BlueprintGeneratedClass BP_Beretta_M9_InsertMagazineChamber.BP_Beretta_M9_InsertMagazineChamber_C
// 0x0004 (0x0084 - 0x0080)
class UBP_Beretta_M9_InsertMagazineChamber_C : public UInsertMagazine
{
public:
	int                                                MaxAmmoCount;                                             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Beretta_M9_InsertMagazineChamber.BP_Beretta_M9_InsertMagazineChamber_C");
		return ptr;
	}


	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
