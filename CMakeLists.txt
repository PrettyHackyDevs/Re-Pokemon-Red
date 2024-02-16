cmake_minimum_required(VERSION 3.27)
project(Pokemon_Project VERSION 999.0.0)
set(CMAKE_CXX_STANDARD 17)

find_package(PkgConfig REQUIRED)

pkg_check_modules(ALLEGRO REQUIRED allegro-5 allegro_font-5 allegro_ttf-5 allegro_image-5 allegro_primitives-5)
pkg_check_modules(JSONCPP REQUIRED jsoncpp)

add_library(
    pokemon-lib SHARED
    src/main.cpp
)

target_include_directories(pokemon-lib PUBLIC include)
target_include_directories(pokemon-lib PUBLIC ${JSONCPP_INCLUDE_DIRS})

add_executable(pokemon src/main.cpp)

target_link_libraries(pokemon PRIVATE ${JSONCPP_LIBRARIES})
target_link_libraries(pokemon PRIVATE ${ALLEGRO_LIBRARIES})
target_link_libraries(pokemon PRIVATE pokemon-lib)