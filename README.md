# SCUM_SDK
SDK for the game SCUM

Useful game info:
```
Objects:
0x33EF0A0 (already in sdk)

TotalObjects: 
0x33EF0B4 (already in sdk)

GNames:
48 89 05 ? ? ? ? 48 83 C4 28 C3
\x48\x89\x05\x00\x00\x00\x00\x48\x83\xC4\x28\xC3 xxx????xxxxx

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

	auto gname_addr = FindPattern("48 89 05 ? ? ? ? 48 83 C4 28 C3");
	auto offset = *reinterpret_cast<uint32_t*>(gname_addr + 3);
	SDK::FName::GNames = reinterpret_cast<decltype(SDK::FName::GNames)>(*reinterpret_cast<uintptr_t*>(gname_addr + 7 + offset));
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
