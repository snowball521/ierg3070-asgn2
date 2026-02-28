# Specify minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Define project name and supported languages
project(CMakeDemo VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# =============================================
# Create a static library
# =============================================
add_library(math_utils STATIC
    math_utils.cpp
    math_utils.h
)

# Set library output directory
set_target_properties(math_utils PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)

# =============================================
# Create executable and link math_utils library
# =============================================
add_executable(my_app
    main.cpp
)

# Link library to executable
target_link_libraries(my_app
    PRIVATE
        math_utils
)

# TODO: add -Wall and -Wextra compile options for the executabe


# Set executable output directory
set_target_properties(my_app PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

# =============================================
# Print configuration information
# =============================================
message(STATUS "Project name: ${PROJECT_NAME}")
message(STATUS "Project version: ${PROJECT_VERSION}")
message(STATUS "C++ standard: ${CMAKE_CXX_STANDARD}")
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "Compiler: ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")
