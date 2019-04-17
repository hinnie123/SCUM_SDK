#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MIDIDevice.EMIDIEventType
enum class EMIDIEventType : uint8_t
{
	Unknown                        = 0,
	NoteOff                        = 1,
	NoteOn                         = 2,
	NoteAfterTouch                 = 3,
	ControlChange                  = 4,
	ProgramChange                  = 5,
	ChannelAfterTouch              = 6,
	PitchBend                      = 7,
	EMIDIEventType_MAX             = 8
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MIDIDevice.FoundMIDIDevice
// 0x0020
struct FFoundMIDIDevice
{
	int                                                DeviceID;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     DeviceName;                                               // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bCanReceiveFrom;                                          // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanSendTo;                                               // 0x0019(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAlreadyInUse;                                          // 0x001A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDefaultInputDevice;                                    // 0x001B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDefaultOutputDevice;                                   // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
