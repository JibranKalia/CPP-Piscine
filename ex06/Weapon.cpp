/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:25:29 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 20:56:08 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string inittype) : _type(inittype) { return; }

Weapon::~Weapon() {}

void Weapon::setType(std::string initialtype) { _type = initialtype; }
std::string Weapon::getType() const { return _type; }
