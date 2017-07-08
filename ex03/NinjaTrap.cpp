/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 19:41:14 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 20:00:44 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ft_color.h"

NinjaTrap::NinjaTrap(std::string inname) {
  _hitPoints = 100;
  _maxHitPoints = 100;
  _energyPoints = 100;
  _maxEnergyPoints = 100;
  _level = 1;
  _name = inname;
  _meleeAttackDamage = 30;
  _rangedAttackDamage = 30;
  _armorDamageReduction = 5;
  std::cout << BOLD_WHITE << "NINJA TRAP " << EOC << RED + _name + EOC
            << " has been spawned" << std::endl;
}

NinjaTrap::NinjaTrap() {
  _hitPoints = 100;
  _maxHitPoints = 100;
  _energyPoints = 100;
  _maxEnergyPoints = 100;
  _level = 1;
  _meleeAttackDamage = 30;
  _rangedAttackDamage = 30;
  _armorDamageReduction = 5;
  std::cout << BOLD_WHITE << "NINJA TRAP " << EOC << RED << "nameless" << EOC
            << " has been spawned" << std::endl;
  srand(time(0));
}

NinjaTrap::~NinjaTrap() {
  std::cout << BOLD_WHITE << "NINJA TRAP " << EOC << RED + _name + EOC
            << " was destroyed" << std::endl;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap& src) {
  _hitPoints = src._hitPoints;
  _maxHitPoints = src._maxHitPoints;
  _energyPoints = src._energyPoints;
  _maxEnergyPoints = src._maxEnergyPoints;
  _level = src._level;
  _name = src._name;
  _meleeAttackDamage = src._meleeAttackDamage;
  _rangedAttackDamage = src._rangedAttackDamage;
  _armorDamageReduction = src._armorDamageReduction;
  return *this;
}

bool NinjaTrap::rangedAttack(std::string const& target) {
  std::cout << "FR4G-TP " << BLUE + _name + EOC << " attacks "
            << RED + target + EOC << " at range, causing " << GREEN
            << _rangedAttackDamage << EOC << " points of damage !" << std::endl;
  return true;
}

bool NinjaTrap::meleeAttack(std::string const& target) {
  std::cout << "FR4G-TP " << BLUE + _name + EOC << " attacks "
            << RED + target + EOC << " in close-combat, causing " << GREEN
            << _meleeAttackDamage << EOC << " points of damage !" << std::endl;
  return true;
}

NinjaTrap::NinjaTrap(const NinjaTrap& src) { *this = src; }

void NinjaTrap::ninjaShoebox(const ScavTrap& scav) const {
  std::cout << BOLD_RED << "Hey, Ninja: " << _name << " put this saber in "
            << scav.get_name()
            << " SCAV tiny body, causing infinite Damage points" << EOC
            << std::endl;
}

void NinjaTrap::ninjaShoebox(const ClapTrap& clap) const {
  std::cout << BOLD_RED << "Hey, Ninja: " << _name << " throw this javelen at "
            << clap.get_name()
            << " Clap tiny body, causing infinite Damage points" << EOC
            << std::endl;
}

void NinjaTrap::ninjaShoebox(const FragTrap& frag) const {
  std::cout << BOLD_RED << "Hey, Ninja: " << _name << " put this nail in "
            << frag.get_name()
            << " Frag tiny body, causing infinite Damage points" << EOC
            << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap& ninja) const {
  std::cout << BOLD_RED << "Hey, Ninja: " << _name << " put this ant in your brother "
            << ninja.get_name()
            << " body, causing infinite Damage points" << EOC
            << std::endl;
}
