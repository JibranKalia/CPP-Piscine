/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:42:20 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/13 18:34:20 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include "Array.hpp"

template <typename T>
std::ostream& operator<<(std::ostream& out, T& src) {
  for (size_t i = 0; i < src.size(); ++i) {
    out << src[i] << std::endl;
  }
  return out;
}

int main(void) {
  Array<int> a(4);
  std::cout << a << std::endl;
  //	a[3] = 42;
  Array<int> b(a);
  std::cout << b << std::endl;
  try {
    std::cout << b[11] << std::endl;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  Array<double> c(3);
  std::cout << c << std::endl;
  Array<float> d;
  delete new Array<char>;
  return 0;
}
