################################################################################
# License: The Unlicense (https://unlicense.org)
################################################################################
cmake_minimum_required(VERSION 3.14) # FetchContent_MakeAvailable

# Define unittests executable target
add_executable(unit_test)
target_link_libraries(unit_test
  PRIVATE
    compiler_settings
    doctest::doctest
    vodka)
target_sources(unit_test
  PRIVATE
    main.cpp
    vodka/utility/forward.cpp
)

add_test(NAME build_unit_test_t
  COMMAND ${CMAKE_COMMAND} --build ${CMAKE_BINARY_DIR} --target unit_test)
set_tests_properties(build_unit_test_t
  PROPERTIES FIXTURES_SETUP unit_test_tf)

add_test(NAME run_unit_test_t COMMAND unit_test)
set_tests_properties(run_unit_test_t
  PROPERTIES FIXTURES_REQUIRED unit_test_tf)
