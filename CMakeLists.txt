cmake_minimum_required(VERSION 3.25.0)

project(photochop)

# ----------------------- Setup vcpkg  ----------------------- #

set(CMAKE_TOOLCHAIN_FILE vcpkg/scripts/buildsystems/vcpkg.cmake)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(
  ${PROJECT_NAME}
  PRIVATE
  glfw
)
