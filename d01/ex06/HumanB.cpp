/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:24:36 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 21:42:15 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weaponB(NULL) {}

HumanB::HumanB(std::string name, Weapon& weapon)
    : _name(name), _weaponB(&weapon) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon) { _weaponB = &weapon; }

void HumanB::attack() {
  std::cout << _name << " attacks with his " << _weaponB->getType()
            << std::endl;
}
