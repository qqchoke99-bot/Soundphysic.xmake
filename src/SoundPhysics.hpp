#pragma once
#include <cmath>
#include <algorithm>

namespace spb {
struct Result {
    float volume = 1.0f;
    float occlusion = 0.0f;
    float reverb = 0.0f;
};

inline Result process(float distance, float obstruction, float roomSize) {
    Result r;
    r.volume = 1.0f / std::max(1.0f, distance);
    r.occlusion = std::clamp(obstruction, 0.0f, 1.0f);
    // Simple room-size model. This is an audio parameter, not a direct FMOD call.
    r.reverb = std::clamp(roomSize / 32.0f, 0.0f, 1.0f);
    r.volume *= (1.0f - 0.65f * r.occlusion);
    return r;
}
}
