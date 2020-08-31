################################################################################
# Copyright (c) 2020, Timothy Lyons
# License: ISC (https://opensource.org/licenses/ISC)
################################################################################

add_library(compile_settings INTERFACE)
target_compile_features(compile_settings INTERFACE cxx_std_17)
target_compile_options(compile_settings INTERFACE -g)

# libfuzzer requires Clang
if(CMAKE_CXX_COMPILER_ID MATCHES ".*Clang")
  add_subdirectory(fuzz_test)
endif()
add_subdirectory(unit_test)
