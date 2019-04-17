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

// BlueprintGeneratedClass BP_SVD_RemoveMagInsertBulletChamber.BP_SVD_RemoveMagInsertBulletChamber_C
// 0x0000 (0x0080 - 0x0080)
class UBP_SVD_RemoveMagInsertBulletChamber_C : public URemoveMagazineInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SVD_RemoveMagInsertBulletChamber.BP_SVD_RemoveMagInsertBulletChamber_C");
		return ptr;
	}


	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
