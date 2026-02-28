# CMake Demo Project

## Project Structure

```
part2-cmake/
├── CMakeLists.txt      # CMake configuration file
├── main.cpp            # Main program
├── math_utils.h        # Math utility header file
├── math_utils.cpp      # Math utility implementation
└── README.md           # This file
```

## Build Steps

### 1. Create build directory (out-of-source build is recommended)

```bash
mkdir build
cd build
```

### 2. Generate build system

```bash
cmake ..
```

### 3. Build the project

```bash
# Option 1:
cmake --build .

# Option 2:
make
```

### 4. Run the program

```bash
./bin/my_app
```

### 5. Clean build

```bash
cd ..
rm -rf build
```

## CMake Common Variables

| Variable | Description |
|----------|-------------|
| `PROJECT_NAME` | Project name |
| `PROJECT_VERSION` | Project version |
| `CMAKE_BUILD_TYPE` | Build type (Debug/Release/RelWithDebInfo) |
| `CMAKE_CXX_STANDARD` | C++ standard |
| `CMAKE_SOURCE_DIR` | Source code root directory |
| `CMAKE_BINARY_DIR` | Build directory |
| `CMAKE_CURRENT_SOURCE_DIR` | Current CMakeLists.txt directory |
| `CMAKE_CURRENT_BINARY_DIR` | Current CMakeLists.txt build directory |

## CMake Common Commands

| Command | Description |
|---------|-------------|
| `cmake_minimum_required()` | Specify minimum CMake version |
| `project()` | Define project |
| `add_executable()` | Create executable |
| `add_library()` | Create library (STATIC/SHARED) |
| `target_link_libraries()` | Link libraries |
| `target_include_directories()` | Add header search paths |
| `target_compile_definitions()` | Add compile definitions |
| `target_compile_options()` | Add compile options |
| `include_directories()` | Global header paths |
| `link_directories()` | Global library paths |
| `find_package()` | Find external packages |
