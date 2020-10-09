################################################################################
# License: The Unlicense (https://unlicense.org)
################################################################################

add_executable(comp_is_void)
if(CLANG_TIDY_EXE)
  set_target_properties(comp_is_void PROPERTIES CXX_CLANG_TIDY "${CLANG_TIDY_COMMAND_LINE}")
endif()
if(CPPCHECK_EXE)
  set_target_properties(comp_is_void PROPERTIES CXX_CPPCHECK "${CPPCHECK_COMMAND_LINE}")
endif()
target_link_libraries(comp_is_void PRIVATE compiler_settings vodka)
target_sources(comp_is_void PRIVATE vodka/type_traits/is_void.cpp)
add_test(NAME comp_is_void_t COMMAND comp_is_void)
