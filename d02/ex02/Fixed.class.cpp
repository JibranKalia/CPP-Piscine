/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:49:28 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/06 18:06:04 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <cmath>

const int Fixed::_nfracbits = 8;

Fixed::Fixed() : _rawbits(0) {}

Fixed::Fixed(const int n) : _rawbits((long)n << _nfracbits) {}

Fixed::Fixed(const float f) : _rawbits(roundf((f * (1 << _nfracbits)))) {}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& rhs) {
  if (this != &rhs) _rawbits = rhs.getRawBits();
  return *this;
}

Fixed::Fixed(const Fixed& src) { *this = src; }

Fixed Fixed::operator++() {
  _rawbits++;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed tmp(*this);
  _rawbits++;
  return tmp;
}

Fixed Fixed::operator--() {
  _rawbits--;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed tmp(*this);
  _rawbits--;
  return tmp;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
  return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator+(const Fixed& rhs) const {
  return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const {
  return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const {
  return Fixed(this->toFloat() / rhs.toFloat());
}

bool Fixed::operator==(const Fixed& rhs) const {
  return _rawbits == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed& rhs) const {
  return _rawbits != rhs.getRawBits();
}

bool Fixed::operator>(const Fixed& rhs) const {
  return _rawbits > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed& rhs) const {
  return _rawbits < rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed& rhs) const {
  return _rawbits <= rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed& rhs) const {
  return _rawbits >= rhs.getRawBits();
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
  return a > b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) { return a > b ? a : b; }

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
  return a < b ? a : b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) { return a < b ? a : b; }

std::ostream& operator<<(std::ostream& out, const Fixed& f) {
  out << f.toFloat();
  return out;
}

int Fixed::getRawBits() const { return _rawbits; }

void Fixed::setRawBits(int const raw) { _rawbits = raw; }

float Fixed::toFloat() const {
  return (float)(_rawbits / (float)(1 << _nfracbits));
}

int Fixed::toInt() const { return (_rawbits >> _nfracbits); }
