//******************************************************************************
// Copyright (c) 2020, Timothy Lyons
// License: ISC (https://opensource.org/licenses/ISC)
//******************************************************************************
#include "prob.hpp"

namespace vodka::math::stats {

prob_c::prob_c(double value)
  : mValue(value) {}

prob_c::operator double() const { return mValue; }

auto prob_c::operator&&(prob_c const& o) const -> prob_c {
  return prob_c(mValue * o.mValue);
}

auto prob_c::operator||(prob_c const& o) const -> prob_c {
  return prob_c(mValue + o.mValue - mValue * o.mValue);
}

} // namespace vodka::math::stats
