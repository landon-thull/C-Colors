cmake_minimum_required(VERSION 3.28)

project(c-colors)

set (FullOutputDir "${CMAKE_SOURCE_DIR}/bin")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${FullOutputDir}/static libs")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${FullOutputDir}")

add_library(colors colors.c)

add_executable(${PROJECT_NAME} main.c)
target_link_libraries(${PROJECT_NAME} colors)