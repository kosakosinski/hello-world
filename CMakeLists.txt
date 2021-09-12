cmake_minimum_required(VERSION 3.10)

project(Hello VERSION 1.0)
configure_file(hello_config.h.in hello_config.h)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

set(SOURCE main.c)

add_executable(${PROJECT_NAME} ${SOURCE})

target_include_directories(Hello PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          )