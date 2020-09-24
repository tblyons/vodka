// License: The Unlicense (https://unlicense.org)
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
