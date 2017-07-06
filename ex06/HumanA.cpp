/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:29:34 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 20:53:47 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string setname, Weapon setweapon)
    : _weaponA(setweapon), _name(setname) {
  return;
}

HumanA::~HumanA() { return; }

void HumanA::attack() const {
  std::cout << _name << " attacks with his " << _weaponA.getType() << std::endl;
}
