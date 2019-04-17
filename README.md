# SCUM_SDK
SDK for the game SCUM

UPDATED FOR LATEST VERSION: 0.1.32.12804

Useful game info:
```
Objects:
0x34A2850 (already in sdk)

TotalObjects: 
0x34A2864 (already in sdk)

GNames:
48 8B 05 ? ? ? ? 48 85 C0 75 5F
\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x75\x5F xxx????xxxxx

GWorld:
48 8B 1D ? ? ? ? 48 85 DB 74 3B 41 B0 01
\x48\x8B\x1D\x00\x00\x00\x00\x48\x85\xDB\x74\x3B\x41\xB0\x01 xxx????xxxxxxxx

ProcessEvent: 65
CreateDefaultObject: 102

void init_sdk()
{
	SDK::UObject::GObjects = 0; // not using this
	// we're using the Objects & TotalObjects listed above, however they're already implemented in the sdk
	// so you don't have to init them

	auto gname_addr = utils::find_pattern("48 8B 05 ? ? ? ? 48 85 C0 75 5F");
	auto offset = *(uint32_t*)(gname_addr + 3);
	SDK::FName::GNames = (SDK::FName::GNames)(*(uintptr_t*)(gname_addr + 7 + offset));
}
```

Useful files:
- SCUM_Basic.cpp
- SCUM_Basic.hpp
- SCUM_CoreUObject_classes.hpp
- SCUM_CoreUObject_functions.cpp
- SCUM_Engine_classes.hpp
- SCUM_Engine_functions.cpp
- SCUM_ConZ_classes.hpp
- SCUM_ConZ_Functions.cpp
