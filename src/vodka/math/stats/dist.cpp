//
// Copyright (c) 2020, Timothy Lyons
// License: ISC (https://opensource.org/licenses/ISC)
//
#include "dist.hpp"

#include <cmath>

namespace vodka::math::stats {

void dist_c::update(double x) {
  double delta = x - mMean;
  mCount += 1;
  mMinimum = std::min(x, mMinimum);
  mMaximum = std::max(x, mMaximum);
  mMean += delta / static_cast<double>(mCount);
  mSumOfSquares += delta * (x - mMean);
}

auto dist_c::mean() const -> double { return mMean; }

auto dist_c::variance() const -> double { return mSumOfSquares / static_cast<double>(mCount); }

auto dist_c::std_dev() const -> double { return std::sqrt(variance()); }

auto dist_c::count() const -> uint64_t { return mCount; }

auto dist_c::maximum() const -> double { return mMaximum; }

auto dist_c::minimum() const -> double { return mMinimum; }

} // namespace vodka::math::stats
