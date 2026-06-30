# 1. Set the minimum CMake version and Project Name
cmake_minimum_required(VERSION 3.20)
project(MyGame VERSION 1.0)

# 2. Specify the C++ standard (C++17 is standard for modern development)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 3. Include the FetchContent module
include(FetchContent)

# 4. Declare and download Raylib
FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG        5.0
)
FetchContent_MakeAvailable(raylib)

# 5. Tell CMake to compile your executable from your source file
add_executable(calculater 
                calculater.cpp 
                out.cpp)

# 6. Link Raylib to your executable
target_link_libraries(calculater PRIVATE raylib)