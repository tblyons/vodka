################################################################################
# Copyright (c) 2020, Timothy Lyons
# License: ISC (https://opensource.org/licenses/ISC)
################################################################################

add_library(vodka)
target_link_libraries(vodka PRIVATE compiler_settings)
target_sources(vodka
  PRIVATE
    vodka/math/stats/prob.cpp
  PUBLIC
    vodka/math/stats/prob.hpp)
