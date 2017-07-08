/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 18:08:23 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 19:31:13 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ft_color.h"

std::string ScavTrap::st_challenge[6] = {
    "Can you beat me in a fart contest.",
    "Whoes vomit is bluest.",
    "Who can eat 80 hotdogs while hanging upside down.",
    "Can you sing 'frozen' 1000 times in one day.",
    "Type with a keyboard that is backward for one whole day.",
    "Who can sneeze the longest."};

ScavTrap::ScavTrap(std::string inname) {
  _hitPoints = 100;
  _maxHitPoints = 100;
  _energyPoints = 50;
  _maxEnergyPoints = 100;
  _level = 1;
  _name = inname;
  _meleeAttackDamage = 20;
  _rangedAttackDamage = 15;
  _armorDamageReduction = 3;
  std::cout << "TERMINATOR " << BOLD_PURPLE + _name + EOC << " has been spawned"
            << std::endl;
}

ScavTrap::ScavTrap() {
  _hitPoints = 100;
  _maxHitPoints = 100;
  _energyPoints = 50;
  _maxEnergyPoints = 100;
  _level = 1;
  _name = "nameless";
  _meleeAttackDamage = 20;
  _rangedAttackDamage = 15;
  _armorDamageReduction = 3;
  std::cout << "TERMINATOR " << BOLD_PURPLE << "nameless" << EOC
            << " has been spawned" << std::endl;
  srand(time(0));
}

ScavTrap::~ScavTrap() {
  std::cout << "TERMINATOR " << BOLD_PURPLE + _name + EOC << " was destroyed"
            << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
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

bool ScavTrap::rangedAttack(std::string const& target) {
  std::cout << "TERMINATOR " << BOLD_PURPLE + _name + EOC << " attacks "
            << BOLD_PURPLE + target + EOC << " at range, causing " << GREEN
            << _rangedAttackDamage << EOC << " points of damage !" << std::endl;
  return true;
}

bool ScavTrap::meleeAttack(std::string const& target) {
  std::cout << "TERMINATOR " << BOLD_PURPLE + _name + EOC << " attacks "
            << BOLD_PURPLE + target + EOC << " in close-combat, causing "
            << GREEN << _meleeAttackDamage << EOC << " points of damage !"
            << std::endl;
  return true;
}

ScavTrap::ScavTrap(const ScavTrap& src) { *this = src; }

bool ScavTrap::challengeNewcomer(std::string const& target) {
  std::string attack;

  if (_energyPoints >= 25) {
    attack = st_challenge[rand() % 6];
    _energyPoints -= 25;
    std::cout << "FR4G-TP " << BLUE + _name + EOC << " attacks "
              << PURPLE + target + EOC << " with super attack "
              << RED + attack + EOC << std::endl;
    return true;
  } else {
    std::cout << PURPLE << "Not enought energy points. Sorry!" << EOC
              << std::endl;
    return false;
  }
}
