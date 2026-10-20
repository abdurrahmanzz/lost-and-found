cmake_minimum_required(VERSION 3.10)
project(lostfound)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lostfound src/main.cpp)
target_compile_options(lostfound PRIVATE -Wall -Wextra)
