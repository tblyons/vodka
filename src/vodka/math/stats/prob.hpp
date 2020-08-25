//
// Copyright (c) 2020, Timothy Lyons
// License: ISC (https://opensource.org/licenses/ISC)
//
#pragma once

namespace vodka::math::stats {

class prob_c {
  double mValue;
public:

  explicit prob_c(double value);

  explicit operator double() const;

  auto operator&&(prob_c const& o) const -> prob_c;

  auto operator||(prob_c const& o) const -> prob_c;

}; // class prob_c

} // namespace vodka::math stats
