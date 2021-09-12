cmake_minimum_required(VERSION 3.10)

project(hello VERSION 0.0.1)
configure_file(hello_config.h.in hello_config.h)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

set(SOURCE main.c)

add_executable(${PROJECT_NAME} ${SOURCE})

target_include_directories(${PROJECT_NAME} PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          )
