cmake_minimum_required(VERSION 3.20)
project(sysmon)

set(CMAKE_CXX_STANDARD 20)

add_executable(sysmon
        src/main.cpp
        src/system_info.cpp
)

target_include_directories(sysmon PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)