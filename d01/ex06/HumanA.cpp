/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:29:34 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 21:34:35 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string setname, Weapon& setweapon)
    : _name(setname), _weaponA(setweapon) {
  return;
}

HumanA::~HumanA() { return; }

void HumanA::attack() {
  std::cout << _name << " attacks with his " << _weaponA.getType() << std::endl;
}

void HumanA::setWeapon(Weapon& weapon) { _weaponA = weapon; };
