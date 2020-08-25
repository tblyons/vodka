//
// Copyright (c) 2020, Timothy Lyons
// License: ISC (https://opensource.org/licenses/ISC)
//
#pragma once

#include <cstdint>
#include <limits>

namespace vodka::math::stats {

class dist_c {
  double mMean { 0.0 };
  double mSumOfSquares { 0.0 };
  double mMaximum { std::numeric_limits<double>::lowest() };
  double mMinimum { std::numeric_limits<double>::max() };
  uint64_t mCount { 0UL };
public:

  void update(double x);

  [[nodiscard]] auto mean() const -> double;

  [[nodiscard]] auto variance() const -> double;
  
  [[nodiscard]] auto std_dev() const -> double;

  [[nodiscard]] auto count() const -> uint64_t;

  [[nodiscard]] auto maximum() const -> double;

  [[nodiscard]] auto minimum() const -> double;

}; // class dist_c

} // namespace vodka::math::stats
