/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:57:47 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 13:00:13 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string inname)
    : _hitPoints(100),
      _maxHitPoints(100),
      _energyPoints(100),
      _maxEnergyPoints(100),
      _level(1),
      _name(inname),
      _meleeAttackDamage(30),
      _rangedAttackDamage(30),
      _armorDamageReduction(5) {
  std::cout << "FragTrap " << _name << " has been spawned" << std::endl;
}

FragTrap::~FragTrap() { std::cout << "FragTrap destroyed!" << std::endl; }

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

FragTrap::FragTrap(const FragTrap& src) { *this = src; }

unsigned int FragTrap::get_hitPoints() const { return _hitPoints; }
unsigned int FragTrap::get_maxHitPoints() const { return _maxHitPoints; }
unsigned int FragTrap::get_energyPoints() const { return _energyPoints; }
unsigned int FragTrap::get_maxEnergyPoints() const { return _maxEnergyPoints; }
unsigned int FragTrap::get_level() const { return _level; }
std::string FragTrap::get_name() const { return _name; }
void FragTrap::set_name(std::string inname) { _name = inname; }
unsigned int FragTrap::get_meleeAttackDamage() const {
  return _meleeAttackDamage;
}
unsigned int FragTrap::get_rangedAttackDamage() const {
  return _rangedAttackDamage;
}
unsigned int FragTrap::get_armorDamageReduction() const {
  return _armorDamageReduction;
}
