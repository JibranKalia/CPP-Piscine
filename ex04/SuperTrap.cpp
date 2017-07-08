/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 20:04:41 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 20:20:01 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "ft_color.h"

SuperTrap::SuperTrap(std::string inname) {
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

SuperTrap::SuperTrap() {
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

SuperTrap::~SuperTrap() {
  std::cout << "TERMINATOR " << BOLD_PURPLE + _name + EOC << " was destroyed"
            << std::endl;
}

SuperTrap& SuperTrap::operator=(const SuperTrap& src) {
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

bool SuperTrap::rangedAttack(std::string const& target) {
  std::cout << "TERMINATOR " << BOLD_PURPLE + _name + EOC << " attacks "
            << BOLD_PURPLE + target + EOC << " at range, causing " << GREEN
            << _rangedAttackDamage << EOC << " points of damage !" << std::endl;
  return true;
}

bool SuperTrap::meleeAttack(std::string const& target) {
  std::cout << "TERMINATOR " << BOLD_PURPLE + _name + EOC << " attacks "
            << BOLD_PURPLE + target + EOC << " in close-combat, causing "
            << GREEN << _meleeAttackDamage << EOC << " points of damage !"
            << std::endl;
  return true;
}

SuperTrap::SuperTrap(const SuperTrap& src) { *this = src; }
