cmake_minimum_required(VERSION 4.3)
project(hackerrank_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.tar.gz
)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)

# One executable per test: several solutions define classes with the same name.
file(GLOB_RECURSE TEST_SOURCES CONFIGURE_DEPENDS tests/*_test.cpp)
foreach (test_source ${TEST_SOURCES})
    get_filename_component(test_name ${test_source} NAME_WE)
    add_executable(${test_name} ${test_source})
    target_include_directories(${test_name} PRIVATE solutions tests)
    target_link_libraries(${test_name} PRIVATE GTest::gtest_main)
    gtest_discover_tests(${test_name})
    list(APPEND TEST_TARGETS ${test_name})
endforeach ()

add_custom_target(check
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure
    DEPENDS ${TEST_TARGETS}
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    USES_TERMINAL)
