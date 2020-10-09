// License: The Unlicense (https://unlicense.org)
#pragma once
#ifndef TYBL_VODKA_TYPETRAITS_ISSAME_HPP
#define TYBL_VODKA_TYPETRAITS_ISSAME_HPP

#include "false_type.hpp"
#include "true_type.hpp"

namespace tybl::vodka::type_traits {

template <class T, class U>
struct is_same
  : false_type {};
 
template <class T>
struct is_same<T, T>
  : true_type {};

template< class T, class U >
inline constexpr bool is_same_v = is_same<T, U>::value;

} // namespace tybl::vodka::type_traits

#endif // TYBL_VODKA_TYPETRAITS_ISSAME_HPP
