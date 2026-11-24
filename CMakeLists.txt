cmake_minimum_required(VERSION 3.16)
project(adopt-me-helper CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(adoptmehelper
    src/main.cpp
    src/care.cpp
    src/quests.cpp
    src/money.cpp
    src/cli.cpp
    src/helpers.cpp
)

target_include_directories(adoptmehelper PRIVATE include)

if(WIN32)
    target_link_libraries(adoptmehelper PRIVATE userenv)
endif()
