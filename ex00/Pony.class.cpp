/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:03:00 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 06:45:51 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"

Pony::Pony(std::string setcolor, int setage) : _color(setcolor), _age(setage) {
  std::cout << "Pony created with color: " << _color << " and age: " << _age
            << std::endl;
}

Pony::~Pony() {
  std::cout << "Pony with color: " << _color << " and age: " << _age
            << " was destroyed" << std::endl;
}

std::string Pony::getColor(void) { return _color; }
int Pony::getAge(void) { return _age; }
