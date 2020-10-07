// License: The Unlicense (https://unlicense.org)
#pragma once
#ifndef TYBL_VODKA_UTIL_MOVE_HPP
#define TYBL_VODKA_UTIL_MOVE_HPP

#include <type_traits>

namespace tybl::vodka::util {

template<typename T>
constexpr auto
move(T&& obj) noexcept -> typename std::remove_reference<T>::type&& {
  return static_cast<typename std::remove_reference<T>::type&&>(obj);
}

} // namespace tybl::vodka::util

#endif // TYBL_VODKA_UTIL_MOVE_HPP
