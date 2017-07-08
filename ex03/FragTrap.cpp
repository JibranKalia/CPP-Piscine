/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:57:47 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 19:20:31 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ft_color.h"

FragAttack FragTrap::_randomAttack[6] = {{"Killbot", 33},
                                         {"Repulsive", 11},
                                         {"Torgue Fiesta", 8},
                                         {"Hyperion Punch", 3},
                                         {"All the Things are Awesome!", 44},
                                         {"It's a Trap...Card", 26}};

FragTrap::FragTrap(std::string inname) {
  _hitPoints = 100;
  _maxHitPoints = 100;
  _energyPoints = 100;
  _maxEnergyPoints = 100;
  _level = 1;
  _name = inname;
  _meleeAttackDamage = 30;
  _rangedAttackDamage = 30;
  _armorDamageReduction = 5;
  std::cout << "FR4G-TP " << RED + _name + EOC << " has been spawned"
            << std::endl;
}

FragTrap::FragTrap() {
  _hitPoints = 100;
  _maxHitPoints = 100;
  _energyPoints = 100;
  _maxEnergyPoints = 100;
  _level = 1;
  _meleeAttackDamage = 30;
  _rangedAttackDamage = 30;
  _armorDamageReduction = 5;
  std::cout << "FR4G-TP " << RED << "nameless" << EOC << " has been spawned"
            << std::endl;
  srand(time(0));
}

FragTrap::~FragTrap() {
  std::cout << "FR4G-TP " << RED + _name + EOC << " was destroyed" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
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

bool FragTrap::rangedAttack(std::string const& target) {
  std::cout << "FR4G-TP " << BLUE + _name + EOC << " attacks "
            << RED + target + EOC << " at range, causing " << GREEN
            << _rangedAttackDamage << EOC << " points of damage !" << std::endl;
  return true;
}

bool FragTrap::meleeAttack(std::string const& target) {
  std::cout << "FR4G-TP " << BLUE + _name + EOC << " attacks "
            << RED + target + EOC << " in close-combat, causing " << GREEN
            << _meleeAttackDamage << EOC << " points of damage !" << std::endl;
  return true;
}

FragTrap::FragTrap(const FragTrap& src) { *this = src; }

bool FragTrap::vaulthunter_dot_exe(std::string const& target) {
  FragAttack attack;

  if (_energyPoints >= 25) {
    attack = _randomAttack[rand() % 6];
    _energyPoints -= 25;
    std::cout << "FR4G-TP " << BLUE + _name + EOC << " attacks "
              << RED + target + EOC << " with super attack "
              << PURPLE + attack.name + EOC << " causing " << GREEN
              << attack.damage << EOC << " points of damage !" << std::endl;
    return true;
  } else {
    std::cout << PURPLE << "Not enought energy points. Sorry!" << EOC
              << std::endl;
    return false;
  }
}
