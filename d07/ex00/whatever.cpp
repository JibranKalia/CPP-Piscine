/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 08:31:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/13 13:23:55 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iomanip>
#include <iostream>

template <typename T>
void swap(T& x, T& y) {
  T temp;
  temp = x;
  x = y;
  y = temp;
}

template <typename T>
T& min(T& x, T& y) {
  return (x < y) ? x : y;
}

template <typename T>
T& max(T& x, T& y) {
  return (x > y) ? x : y;
}

int main(void) {
  int a = 2;
  int b = 3;
  ::swap(a, b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
  std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
  std::string c = "chaine1";
  std::string d = "chaine2";
  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
  std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
}
