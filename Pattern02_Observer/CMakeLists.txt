cmake_minimum_required (VERSION 2.6)
project (Pattern02_Observer)

include_directories ("${PROJECT_SOURCE_DIR}")

# get all source files
file(GLOB_RECURSE src_files src/*.cpp src/*.h)

# add the executable
add_executable(Pattern02_Observer ${src_files})
