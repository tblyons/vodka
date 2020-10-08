// License: The Unlicense (https://unlicense.org)
#pragma once
#ifndef TYBL_VODKA_UTIL_MOVE_HPP
#define TYBL_VODKA_UTIL_MOVE_HPP

#include "vodka/type_traits/remove_reference.hpp" // remove_reference

namespace tybl::vodka::util {

template <typename T>
constexpr auto
move(T&& obj) noexcept -> type_traits::remove_reference_t<T>&& {
  return static_cast<type_traits::remove_reference_t<T>&&>(obj);
}

} // namespace tybl::vodka::util

#endif // TYBL_VODKA_UTIL_MOVE_HPP
