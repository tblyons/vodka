################################################################################
# Copyright (c) 2020, Timothy Lyons
# License: ISC (https://opensource.org/licenses/ISC)
################################################################################

# libfuzzer requires Clang
if(CMAKE_CXX_COMPILER_ID MATCHES ".*Clang")
  add_subdirectory(fuzz_test)
endif()
add_subdirectory(unit_test)
