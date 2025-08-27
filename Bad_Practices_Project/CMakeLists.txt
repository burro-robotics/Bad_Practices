cmake_minimum_required(VERSION 2.8)

project(BadPracticesProject)

set(CMAKE_BUILD_TYPE Debug)

add_executable(BadPracticesProject
    src/main.cpp
    src/utils.cpp
)

target_include_directories(BadPracticesProject PUBLIC src)

add_compile_options(-Wall -Wextra -Wpedantic)
