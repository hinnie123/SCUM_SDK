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

// BlueprintGeneratedClass BPC_Weapon_AKM.BPC_Weapon_AKM_C
// 0x0000 (0x1068 - 0x1068)
class ABPC_Weapon_AKM_C : public ABP_Weapon_AK47_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Weapon_AKM.BPC_Weapon_AKM_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
