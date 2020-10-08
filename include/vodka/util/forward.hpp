// License: The Unlicense (https://unlicense.org)
#pragma once
#ifndef TYBL_VODKA_UTIL_FORWARD_HPP
#define TYBL_VODKA_UTIL_FORWARD_HPP

#include <type_traits> // std::remove_reference, std::is_lvalue_reference

namespace tybl::vodka::util {

template <typename T>
constexpr auto
forward(type_traits::remove_reference_t<T>& obj) noexcept -> T&& {
  return static_cast<T&&>(obj);
}

template <typename T>
constexpr auto
forward(type_traits::remove_reference_t<T>&& obj) noexcept -> T&& {
  static_assert(!std::is_lvalue_reference<T>::value, "Cannot forward an rvalue as an lvalue");
  return static_cast<T&&>(obj);
}

} // namespace tybl::vodka::util

#endif // TYBL_VODKA_UTIL_FORWARD_HPP
