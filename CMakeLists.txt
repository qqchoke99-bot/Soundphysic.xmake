cmake_minimum_required(VERSION 3.22)
project(sound_physics_bedrock LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  preloader_android
  GIT_REPOSITORY https://github.com/LiteLDev/preloader-android.git
  GIT_TAG 0.2.2
)
FetchContent_MakeAvailable(preloader_android)

add_library(sound_physics_bedrock SHARED
  src/SoundPhysicsBedrock.cpp
  src/SoundPhysics.cpp
  src/SoundHooks.cpp
)

target_include_directories(sound_physics_bedrock PRIVATE src)
target_link_libraries(sound_physics_bedrock PRIVATE preloader)
