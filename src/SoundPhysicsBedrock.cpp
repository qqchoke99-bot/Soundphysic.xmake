#include <pl/Mod.hpp>
#include <pl/Config.hpp>
#include "SoundPhysics.hpp"

class SoundPhysicsBedrock {
public:
    static SoundPhysicsBedrock& instance() {
        static SoundPhysicsBedrock inst;
        return inst;
    }

    SoundPhysicsBedrock() : mSelf(*ll::mod::NativeMod::current()) {}

    bool load() {
        std::filesystem::create_directories(mSelf.getConfigDir());
        mSelf.getLogger().info("Sound Physics Bedrock loaded");
        return true;
    }

    bool enable() {
        mSelf.getLogger().info("MVP: attenuation/occlusion/reverb engine ready");
        return true;
    }

    bool disable() { return true; }
    bool unload() { return true; }

private:
    ll::mod::NativeMod& mSelf;
};

PL_REGISTER_MOD(SoundPhysicsBedrock, SoundPhysicsBedrock::instance())
