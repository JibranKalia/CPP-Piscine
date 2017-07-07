/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:49:28 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/06 15:44:10 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <cmath>

const int Fixed::_nfracbits = 8;

Fixed::Fixed() : _rawbits(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _rawbits((long) n << _nfracbits) {
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _rawbits(
	roundf((f * (1 << _nfracbits)))
){
  std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed& src) {
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
  std::cout << "Assignation operator called" << std::endl;
  if (this != &rhs)
	  _rawbits = rhs.getRawBits();
  return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return out;
}

int Fixed::getRawBits() const {
  return _rawbits;
}

void Fixed::setRawBits(int const raw) { _rawbits = raw; }

float	Fixed::toFloat() const
{
	return (float)(_rawbits / (float)(1 << _nfracbits));
}

int Fixed::toInt() const
{
	return (_rawbits >> _nfracbits);
}
