cmake_minimum_required(VERSION 3.25.0)

project(photochop)

# ----------------------- Setup vcpkg  ----------------------- #

include(vcpkg/scripts/buildsystems/vcpkg.cmake)

find_package(glfw3 REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(
  ${PROJECT_NAME}
  PRIVATE
  glfw
)
