cmake_minimum_required(VERSION 3.20)

project(Probability-FinMathUtils LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Probability-FinMathUtils
    src/main.cpp
    src/interest.cpp
    src/taylor.cpp
    src/annuities.cpp
    src/prob_event.cpp
    src/prob_space.cpp
)
target_include_directories(Probability-FinMathUtils PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

cmake_minimum_required(VERSION 3.20)

project(Probability-FinMathUtils LANGUAGES CXX)

