#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AS_Val_RemoveMagInsertBulletChamber.BP_AS_Val_RemoveMagInsertBulletChamber_C
// 0x0000 (0x0080 - 0x0080)
class UBP_AS_Val_RemoveMagInsertBulletChamber_C : public URemoveMagazineInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AS_Val_RemoveMagInsertBulletChamber.BP_AS_Val_RemoveMagInsertBulletChamber_C");
		return ptr;
	}


	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
