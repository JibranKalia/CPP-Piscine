/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:32:59 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/06 21:10:43 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int main(void) {
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << Fixed::max(a, b) << std::endl;

  Fixed c(133.0f);
  Fixed d(-3.0f);
  Fixed const f (222);
  Fixed const g (2244);
  std::cout << Fixed::max(c, d) << std::endl;
  std::cout << Fixed::max(f, g) << std::endl;
  std::cout << (c < d) << std::endl;
  std::cout << (c >= d) << std::endl;
  std::cout << (c <= d) << std::endl;
  std::cout << (c * d) << std::endl;
  std::cout << (c / d) << std::endl;
  std::cout << (c - d) << std::endl;
  std::cout << (c + d) << std::endl;
  std::cout << (c == 3) << std::endl;
  std::cout << (c != d) << std::endl;
  std::cout << (c > d) << std::endl;
  std::cout << a-- << std::endl;
  std::cout << a << std::endl;
  std::cout << --a << std::endl;
  std::cout << a << std::endl;
  return 0;
  return 0;
}
