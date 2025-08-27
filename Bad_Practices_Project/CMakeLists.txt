cmake_minimum_required(VERSION 2.8)

project(BadPracticesProject)

# Bad Practice: Explicitly setting build type instead of letting user decide
set(CMAKE_BUILD_TYPE Debug)

# Bad Practice: Listing all source files directly, instead of using glob or target_sources
# Also, using relative paths instead of proper target_sources with PRIVATE/PUBLIC
add_executable(BadPracticesProject
    src/main.cpp
    src/utils.cpp
)

# Bad Practice: Not specifying a C++ standard, relying on default or compiler specific behavior
# set_property(TARGET BadPracticesProject PROPERTY CXX_STANDARD 11)
# set_property(TARGET BadPracticesProject PROPERTY CXX_STANDARD_REQUIRED ON)

# Bad Practice: Not organizing includes, potentially exposing internal headers
target_include_directories(BadPracticesProject PUBLIC src)

# Bad Practice: Overly broad compiler flags, not specific to target or configuration
add_compile_options(-Wall -Wextra -Wpedantic)
