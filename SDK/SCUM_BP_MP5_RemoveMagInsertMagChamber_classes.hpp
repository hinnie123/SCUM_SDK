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

// BlueprintGeneratedClass BP_MP5_RemoveMagInsertMagChamber.BP_MP5_RemoveMagInsertMagChamber_C
// 0x0000 (0x0080 - 0x0080)
class UBP_MP5_RemoveMagInsertMagChamber_C : public URemoveMagazineInsertMagazine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MP5_RemoveMagInsertMagChamber.BP_MP5_RemoveMagInsertMagChamber_C");
		return ptr;
	}


	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
