cmake_minimum_required (VERSION 2.6)
project (Pattern04b_FactoryMethod)

include_directories ("${PROJECT_SOURCE_DIR}")

# get all source files
file(GLOB_RECURSE src_files src/*.cpp src/*.h)

# add the executable
add_executable(Pattern04b_FactoryMethod ${src_files})
