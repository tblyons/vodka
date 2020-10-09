// License: The Unlicense (https://unlicense.org)
#pragma once
#ifndef TYBL_VODKA_TYPETRAITS_INTEGRALCONSTANT_HPP
#define TYBL_VODKA_TYPETRAITS_INTEGRALCONSTANT_HPP

namespace tybl::vodka::type_traits {

template <class T, T V>
struct integral_constant {

  using value_type = T;
  using type = integral_constant;

  static constexpr value_type value = V;

  constexpr operator value_type() const noexcept {
    return value;
  }

  [[nodiscard]] constexpr value_type operator()() const noexcept {
    return value;
  }

};

} // namespace tybl::vodka::type_traits

#endif // TYBL_VODKA_TYPETRAITS_INTEGRALCONSTANT_HPP
