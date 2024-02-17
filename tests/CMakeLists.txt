find_package(PkgConfig REQUIRED)
pkg_search_module(GTEST REQUIRED gtest_main)

add_executable(pokemon-tests)

file(GLOB TEST_FILES
    unit-tests/*.hpp
    unit-tests/*.cpp
    integration-tests/*.hpp
    integration-tests/*.cpp
)

target_sources(pokemon-tests PRIVATE ${TEST_FILES})

target_link_libraries(pokemon-tests PRIVATE ${GTEST_LDFLAGS})
target_compile_options(pokemon-tests PRIVATE ${GTEST_CFLAGS})

enable_testing()

target_link_libraries(pokemon-tests PRIVATE pokemon-lib)