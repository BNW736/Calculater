Raylib C++ Calculator
A graphical desktop calculator built from scratch using C++ and Raylib.

  Features
Custom mouse-driven interface.

Supports basic arithmetic (+, -, *, /), percentages (%), and bitwise XOR (^).

Automatically fetches the Raylib library during the build process using CMake.

🛠️ Build and Run
Requires a C++17 compiler, CMake (3.20+), and Git.

Bash
# Clone and enter the repository
git clone <your-repository-url>
cd Calculater

# Configure and build
mkdir build && cd build
cmake ..
cmake --build .

# Run the app (Linux/macOS)
./calculater
(Note: On Windows, run calculater.exe instead of ./calculater)

  Files
calculater.cpp: Main window initialization and rendering loop.

out.cpp & outputf.h: Math logic and coordinate-based click detection.

CMakeLists.txt: Build configuration and dependency management.
