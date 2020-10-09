// License: The Unlicense (https://unlicense.org)
#pragma once
#ifndef TYBL_VODKA_TYPETRAITS_REMOVEVOLATILE_HPP
#define TYBL_VODKA_TYPETRAITS_REMOVEVOLATILE_HPP

namespace tybl::vodka {

template <class T>
struct remove_volatile {
  using type = T;
};

template <class T>
struct remove_volatile<volatile T> {
  using type = T;
};

template <class T>
using remove_volatile_t = typename remove_volatile<T>::type;

} // namespace tybl::vodka

#endif // TYBL_VODKA_TYPETRAITS_REMOVEVOLATILE_HPP
