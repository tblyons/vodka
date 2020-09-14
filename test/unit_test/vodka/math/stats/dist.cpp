// Copyright (c) 2020, Timothy Lyons
// License: ISC (https://opensource.org/licenses/ISC)
#include "vodka/math/stats/dist.hpp"

#include "doctest/doctest.h"

#include <cstdlib>
#include <ctime>

TEST_CASE("vodka::math::stats::dist_c mean") {
  vodka::math::stats::dist_c dist;
  std::srand(std::time(nullptr));
  double sum = 0.0;
  for (int i = 0; i < 1000; ++i) {
    double x = std::rand();
    dist.update(x);
    sum += x;
  }
  CHECK(dist.mean() == doctest::Approx(sum / 1000));
}
