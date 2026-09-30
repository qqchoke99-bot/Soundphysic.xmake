#include <pl/Mod.hpp>

// Runtime hook boundary.
//
// DO NOT put guessed absolute addresses here.
// For Minecraft 26.51.1, verify the exact installed libminecraftpe.so/libfmod.so
// and use a signature/symbol-based hook compatible with the Levi public SDK.
//
// Keeping this translation unit separate lets the project build and package safely
// while the binary-specific hook is being verified.
