/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:42:21 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/06 15:19:39 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed {
 public:
  Fixed();
  Fixed(const Fixed& src);
  Fixed(const int n);
  Fixed(const float f);
  Fixed& operator=(const Fixed& rhs);
  ~Fixed();
  int getRawBits() const;
  void setRawBits(int const raw);
  float toFloat() const;
  int toInt() const;

 private:
  int _rawbits;
  static const int _nfracbits;
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);
#endif
