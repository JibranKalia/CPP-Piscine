/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:49:28 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/06 14:17:26 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_nfracbits = 8;

Fixed::Fixed() : _rawbits(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed& src) { 
	std::cout << "Copy constructor called" << std::endl;
	
	_rawbits = src.getRawBits(); }

Fixed& Fixed::operator=(const Fixed& rhs) {
	std::cout << "Assignation operator called" << std::endl;
  _rawbits = rhs.getRawBits();
  return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _rawbits; }

void Fixed::setRawBits(int const raw) { _rawbits = raw; }
