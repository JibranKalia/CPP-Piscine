/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 20:04:41 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 20:56:12 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "ft_color.h"

SuperTrap::SuperTrap(std::string inname) {
  _hitPoints = FragTrap::_hitPoints;
  _maxHitPoints = NinjaTrap::_maxHitPoints;
  _energyPoints = 120;
  _maxEnergyPoints = 120;
  _level = 1;
  _name = inname;
  _meleeAttackDamage = 60;
  _rangedAttackDamage = 20;
  _armorDamageReduction = 5;
  std::cout << "SUPER TRAP " << BOLD_GREEN + _name + EOC << " has been spawned"
            << std::endl;
}

SuperTrap::SuperTrap() {
  _hitPoints = 100;
  _maxHitPoints = 100;
  _energyPoints = 120;
  _maxEnergyPoints = 120;
  _level = 1;
  _meleeAttackDamage = 60;
  _rangedAttackDamage = 20;
  _armorDamageReduction = 5;

  std::cout << "SUPER TRAP " << BOLD_GREEN << "nameless" << EOC
            << " has been spawned" << std::endl;
  srand(time(0));
}

SuperTrap::~SuperTrap() {
  std::cout << "SUPER TRAP " << BOLD_GREEN + _name + EOC << " was destroyed"
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
  return (FragTrap::rangedAttack(target));
}

bool SuperTrap::meleeAttack(std::string const& target) {
  return (NinjaTrap::meleeAttack(target));
}

SuperTrap::SuperTrap(const SuperTrap& src) { *this = src; }
