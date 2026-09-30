# SoundPhysicsBedrock

Experimental native LeviLaunchroid/LeviLamina sound-physics MVP for Minecraft Bedrock 26.51.x.

Features scaffolded:
- distance attenuation
- raycast/block occlusion
- room-based reverb parameter calculation
- JSON configuration
- ARM64-v8a `.levipack` packaging

Important:
This repository is a buildable MVP scaffold. Runtime audio hooks are intentionally isolated in
`src/SoundHooks.cpp`. The exact hook/signature for the user's installed 26.51.1 client binary
must be verified against that binary before enabling a live hook.

Target: LeviLaunchroid native mod / Android arm64-v8a.
