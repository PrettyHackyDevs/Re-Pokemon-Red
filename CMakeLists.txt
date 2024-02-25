cmake_minimum_required(VERSION 3.27)
project("Pokemon_Project" VERSION 999.0.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_COMPILE_WARNING_AS_ERROR ON)

add_subdirectory(game)
add_subdirectory(tests)

add_executable(pokemon game/src/main.cpp)
target_link_libraries(pokemon PRIVATE pokemon-lib)
