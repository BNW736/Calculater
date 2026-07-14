# Calculator - Educational GUI Project

A beginner-friendly calculator application built with **C++ and raylib**. This project is designed as a **learning resource** to understand GUI development, event handling, and basic computational logic. Perfect for students and anyone learning game development or graphical programming with raylib.

## 🎓 What You'll Learn

This project demonstrates:

- **GUI Rendering** - How to draw buttons and text on screen
- **Mouse Input Handling** - Detecting and responding to mouse clicks
- **String Manipulation** - Building and parsing mathematical expressions
- **Event-Driven Programming** - Responding to user interactions
- **Separation of Concerns** - Splitting UI rendering from business logic
- **CMake Build System** - Cross-platform project compilation

## 📋 Features

✨ **Graphical Calculator Interface**
- 5×4 button grid for intuitive number entry
- Real-time display of input and results
- Visual button outlines for clarity

🔢 **Supported Operations**
- Basic arithmetic: `+`, `-`, `*`, `/`
- Advanced: `^` (power), `%` (modulo)
- Decimal support: `.`
- Input controls: `C` (clear), `DEL` (delete)

## 📁 Project Structure

```
Calculater/
├── CMakeLists.txt       # Build configuration
├── calculater.cpp       # UI rendering and main loop
├── out.cpp              # Calculator logic
├── outputf.h            # Function declarations
└── README.md            # This file
```

## 🚀 Quick Start

### Prerequisites
- **C++ Compiler** (GCC, Clang, or MSVC with C++17 support)
- **CMake** 3.20+
- **Git**

### Setup & Run

```bash
# 1. Clone the repository
git clone https://github.com/BNW736/Calculater.git
cd Calculater

# 2. Create and enter build directory
mkdir build
cd build

# 3. Configure and build
cmake ..
cmake --build .

# 4. Run the calculator
./calculater
# (On Windows: calculater.exe or .\Debug\calculater.exe)
```

## 💻 How to Use

### Calculator Layout

```
┌──────┬──────┬──────┬──────┐
│  C   │  %   │  ^   │  /   │
├──────┼──────┼──────┼──────┤
│  7   │  8   │  9   │  ×   │
├──────┼──────┼──────┼──────┤
│  4   │  5   │  6   │  −   │
├──────┼──────┼──────┼──────┤
│  1   │  2   │  3   │  +   │
├──────┼──────┼──────┼──────┤
│  0   │  .   │ DEL  │  =   │
└──────┴──────┴──────┴──────┘
```

### Basic Usage

1. **Click number buttons** to enter values
2. **Click an operator** (+, −, ×, ÷) to select operation
3. **Click `=`** to calculate the result
4. **Click `DEL`** to delete the last digit
5. **Click `C`** to clear everything

### Example Calculations

| Operation | Input | Result |
|-----------|-------|--------|
| Addition | `7 + 3 =` | `10` |
| Subtraction | `10 - 4 =` | `6` |
| Multiplication | `5 * 6 =` | `30` |
| Division | `20 / 4 =` | `5` |
| Power | `2 ^ 3 =` | `8` |
| Modulo | `17 % 5 =` | `2` |

## ⚙️ Building on Different Platforms

### Linux/macOS
```bash
mkdir build && cd build
cmake ..
cmake --build .
./calculater
```

### Windows (Visual Studio)
```cmd
mkdir build
cd build
cmake .. -G "Visual Studio 17 2022"
cmake --build . --config Release
.\Release\calculater.exe
```

### Windows (MinGW)
```bash
mkdir build
cd build
cmake .. -G "MinGW Makefiles"
cmake --build .
calculater.exe
```

## 📦 Dependencies

**raylib 5.0** - Automatically downloaded during build
- Graphics and window management
- Input handling (mouse, keyboard)
- Text rendering

No manual installation needed! CMake handles it via `FetchContent`.

## ✅ Current Limitations

These are **intentional** to keep the project simple for learning:

- **Integer-only Math** - Uses `long`, not `double` (try converting to floats!)
- **Single Operations** - Can't chain operations like `2 + 3 + 4`
- **No Error Handling** - Division by zero will cause issues
- **Hardcoded Layout** - Button positions use magic numbers (try using variables!)
