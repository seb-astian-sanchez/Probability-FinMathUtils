cmake_minimum_required(VERSION 3.20)

project(FinMathUtils LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(
    FinMathUtils
    src/main.cpp
    src/interest.cpp
)
target_include_directories(
    FinMathUtils
    PRIVATE include
)

cmake_minimum_required(VERSION 3.20)

project(FinMathUtils LANGUAGES CXX)

