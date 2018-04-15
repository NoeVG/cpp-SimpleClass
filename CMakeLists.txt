cmake_minimum_required(VERSION 3.11)

set(TARGET_NAME demo)

file(GLOB SOURCES "src/*.cc")
add_executable (demo ${SOURCES})

project (${TARGET_NAME})

target_include_directories(${TARGET_NAME} PRIVATE include)
