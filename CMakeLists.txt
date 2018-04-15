cmake_minimum_required(VERSION 3.11)

set(TARGET_NAME demo)

project (${TARGET_NAME})

include_directories(${TARGET_NAME} include)

file(GLOB SOURCES "src/*.cc")
add_executable (demo ${SOURCES})
