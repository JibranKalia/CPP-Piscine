/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:24:36 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 21:04:00 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string setname, Weapon setweapon)
    : _weaponB(setweapon), _name(setname) {
  return;
}

HumanB::HumanB(std::string setname) : _weaponB(NULL), _name(setname) { return; }

HumanB::~HumanB() { return; }

void HumanB::setWeapon(Weapon& setweapon) { _weaponB = setweapon; }

void HumanB::attack() const {
  std::cout << _name << " attacks with his " << _weaponB.getType() << std::endl;
}
