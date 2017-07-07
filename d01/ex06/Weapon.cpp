/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:25:29 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 21:32:55 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::Weapon(std::string inittype) : _type(inittype) { return; }

Weapon::~Weapon() {}

void Weapon::setType(std::string type) { _type = type; }
const std::string& Weapon::getType() { return _type; }
