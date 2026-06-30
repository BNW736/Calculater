cmake_minimum_required(VERSION 3.20)
project(MyGame VERSION 1.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)

FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG        5.0
)
FetchContent_MakeAvailable(raylib)

add_executable(calculater 
                calculater.cpp 
                out.cpp)

target_link_libraries(calculater PRIVATE raylib)