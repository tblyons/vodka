################################################################################
# License: The Unlicense (https://unlicense.org)
################################################################################
cmake_minimum_required(VERSION 3.14) # FetchContent_MakeAvailable

project(template
  VERSION 0.0.0
  DESCRIPTION "Template C++ Project using CMake"
  LANGUAGES CXX)

option(BUILD_PROJECT_TESTS "Build and run tests as a subproject" OFF)

set(IS_ROOT_PROJECT CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
if(IS_ROOT_PROJECT)
  include(CTest)
endif()
include(FetchContent)
include(util/cmake/compiler_settings.cmake)
#include(util/cmake/Linters.cmake)

# Use doctest as unit test framework
FetchContent_Declare(doctest
  GIT_REPOSITORY https://github.com/onqtam/doctest.git
  GIT_SHALLOW    TRUE
  GIT_TAG        "2.4.0")
FetchContent_MakeAvailable(doctest)

add_library(vodka)
target_include_directories(vodka PUBLIC include)
target_link_libraries(vodka PRIVATE compiler_settings)
target_sources(vodka
  PRIVATE
    src/vodka/math/stats/prob.cpp
  PUBLIC
    include/vodka/type_traits/remove_reference.hpp
    include/vodka/util/forward.hpp
    include/vodka/util/move.hpp
    src/vodka/math/stats/prob.hpp)

if(IS_ROOT_PROJECT OR BUILD_PROJECT_TESTS)
  add_subdirectory(test EXCLUDE_FROM_ALL)
endif()
