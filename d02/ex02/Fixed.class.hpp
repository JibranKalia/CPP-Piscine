/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:42:21 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/06 17:59:35 by jkalia           ###   ########.fr       */
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
  Fixed operator*(const Fixed& rhs) const;
  Fixed operator+(const Fixed& rhs) const;
  Fixed operator-(const Fixed& rhs) const;
  Fixed operator/(const Fixed& rhs) const;
  Fixed operator++();     // pre
  Fixed operator++(int);  // post
  Fixed operator--();     // post
  Fixed operator--(int);  // post
  bool operator>(const Fixed& rhs) const;
  bool operator>=(const Fixed& rhs) const;
  bool operator<(const Fixed& rhs) const;
  bool operator<=(const Fixed& rhs) const;
  bool operator==(const Fixed& rhs) const;
  bool operator!=(const Fixed& rhs) const;
  ~Fixed();
  int getRawBits() const;
  void setRawBits(int const raw);
  float toFloat() const;
  int toInt() const;
  static Fixed& min(Fixed& a, Fixed& b);
  static const Fixed& min(const Fixed& a, const Fixed& b);
  static Fixed& max(Fixed& a, Fixed& b);
  static const Fixed& max(const Fixed& a, const Fixed& b);

 private:
  int _rawbits;
  static const int _nfracbits;
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);
#endif
