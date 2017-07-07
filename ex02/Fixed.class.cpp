/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:49:28 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/06 18:02:04 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <cmath>

const int Fixed::_nfracbits = 8;

Fixed::Fixed() : _rawbits(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _rawbits((long)n << _nfracbits) {
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _rawbits(roundf((f * (1 << _nfracbits)))) {
  std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed& Fixed::operator=(const Fixed& rhs) {
  std::cout << "Assignation operator called" << std::endl;
  if (this != &rhs) _rawbits = rhs.getRawBits();
  return *this;
}

Fixed::Fixed(const Fixed& src) {
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

Fixed Fixed::operator++() {
  std::cout << "Pre-Incremetor constructor called" << std::endl;
  _rawbits++;
  return *this;
}

Fixed Fixed::operator++(int) {
  std::cout << "Post-Incremetor constructor called" << std::endl;
  Fixed tmp(*this);
  _rawbits++;
  return tmp;
}

Fixed Fixed::operator--() {
  std::cout << "Pre-Decremetor constructor called" << std::endl;
  _rawbits--;
  return *this;
}

Fixed Fixed::operator--(int) {
  std::cout << "Post-Decremetor constructor called" << std::endl;
  Fixed tmp(*this);
  _rawbits--;
  return tmp;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
  std::cout << "Multiplication operator called" << std::endl;
  return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator+(const Fixed& rhs) const {
  std::cout << "Addition operator called" << std::endl;
  return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const {
  std::cout << "Addition operator called" << std::endl;
  return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const {
  std::cout << "Addition operator called" << std::endl;
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
