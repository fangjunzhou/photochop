cmake_minimum_required(VERSION 3.25.0)

project(photochop)

# ----------------------- Setup vcpkg  ----------------------- #

include(vcpkg/scripts/buildsystems/vcpkg.cmake)

# ---------------------- Project Setup  ---------------------- #


# Enable compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# Project binary and library output directory.
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib CACHE STRING "Library Output" FORCE)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin CACHE STRING "Binary Output" FORCE)

# Optimization level.
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# ---------------------- Compiler Setup ---------------------- #

set(CMAKE_C_COMPILER /usr/bin/gcc)
set(CMAKE_CXX_COMPILER /usr/bin/g++)

# ------------------ Find Required Packages ------------------ #

find_package(glfw3 REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(
  ${PROJECT_NAME}
  PRIVATE
  glfw
)
