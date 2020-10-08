################################################################################
# License: The Unlicense (https://unlicense.org)
################################################################################

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
add_test(NAME unit_test_t COMMAND unit_test)
