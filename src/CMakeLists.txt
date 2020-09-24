################################################################################
# License: The Unlicense (https://unlicense.org)
################################################################################

add_library(vodka)
target_include_directories(vodka PUBLIC .)
target_link_libraries(vodka
  PRIVATE
    compiler_settings
    eigen
    units)
target_sources(vodka
  PRIVATE
    vodka/coord/ecef.cpp
    vodka/coord/enu.cpp
    vodka/coord/frd.cpp
    vodka/coord/lla.cpp
    vodka/coord/ned.cpp
    vodka/coord/rae.cpp
    vodka/math/stats/prob.cpp
  PUBLIC
    vodka/coord/ecef.hpp
    vodka/coord/enu.hpp
    vodka/coord/frd.hpp
    vodka/coord/lla.hpp
    vodka/coord/ned.hpp
    vodka/coord/rae.hpp
    vodka/math/stats/prob.hpp)
