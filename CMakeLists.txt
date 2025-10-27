cmake_minimum_required(VERSION 3.18)

add_library(
    aoc_toolbox SHARED
    src/dataparser.cpp
)

target_include_directories(
    aoc_toolbox
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(aoc_toolbox PUBLIC cxx_std_17)
