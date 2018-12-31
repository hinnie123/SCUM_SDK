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

// Class MIDIDevice.MIDIDeviceController
// 0x0038 (0x0060 - 0x0028)
class UMIDIDeviceController : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMidiEvent;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                DeviceID;                                                 // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     DeviceName;                                               // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceController");
		return ptr;
	}

};


// Class MIDIDevice.MIDIDeviceManager
// 0x0000 (0x0028 - 0x0028)
class UMIDIDeviceManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceManager");
		return ptr;
	}


	void STATIC_FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices);
	class UMIDIDeviceController* STATIC_CreateMIDIDeviceController(int DeviceID, int MIDIBufferSize);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
