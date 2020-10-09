// License: The Unlicense (https://unlicense.org)
#pragma once
#ifndef TYBL_VODKA_TYPETRAITS_ISVOID_HPP
#define TYBL_VODKA_TYPETRAITS_ISVOID_HPP

#include "is_same.hpp"
#include "remove_cv.hpp"

namespace tybl::vodka::type_traits {

template <class T>
struct is_void
  : is_same<void, remove_cv_t<T>> {};

template <class T>
inline constexpr bool is_void_v = is_void<T>::value;

} // namespace tybl::vodka::type_traits

#endif // TYBL_VODKA_TYPETRAITS_ISVOID_HPP
