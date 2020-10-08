################################################################################
# License: The Unlicense (https://unlicense.org)
################################################################################

add_library(vodka)
target_include_directories(vodka PUBLIC . ../include)
target_link_libraries(vodka
  PRIVATE
    compiler_settings)
target_sources(vodka
  PRIVATE
    vodka/math/stats/prob.cpp
  PUBLIC
    vodka/math/stats/prob.hpp)
