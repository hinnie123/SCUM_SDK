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

// BlueprintGeneratedClass BPI_Movable.BPI_Movable_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Movable_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Movable.BPI_Movable_C");
		return ptr;
	}


	void OnStartDrag();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
