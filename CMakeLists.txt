cmake_minimum_required(VERSION 3.0)
project(tree)

set(CMAKE_BUILD_TYPE "Debug")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/src/include)
link_directories(${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(src) 