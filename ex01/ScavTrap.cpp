/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 18:08:23 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 18:27:50 by jkalia           ###   ########.fr       */
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

ScavTrap::ScavTrap(std::string inname)
    : _hitPoints(100),
      _maxHitPoints(100),
      _energyPoints(100),
      _maxEnergyPoints(100),
      _level(1),
      _name(inname),
      _meleeAttackDamage(30),
      _rangedAttackDamage(30),
      _armorDamageReduction(5) {
  std::cout << "TERMINATOR " << BOLD_PURPLE + _name + EOC << " has been spawned"
            << std::endl;
}

ScavTrap::ScavTrap()
    : _hitPoints(100),
      _maxHitPoints(100),
      _energyPoints(100),
      _maxEnergyPoints(100),
      _level(1),
      _meleeAttackDamage(30),
      _rangedAttackDamage(30),
      _armorDamageReduction(5) {
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

unsigned int ScavTrap::get_hitPoints() const { return _hitPoints; }
unsigned int ScavTrap::get_maxHitPoints() const { return _maxHitPoints; }
unsigned int ScavTrap::get_energyPoints() const { return _energyPoints; }
unsigned int ScavTrap::get_maxEnergyPoints() const { return _maxEnergyPoints; }
unsigned int ScavTrap::get_level() const { return _level; }
std::string ScavTrap::get_name() const { return _name; }
void ScavTrap::set_name(std::string inname) { _name = inname; }
void ScavTrap::set_level(unsigned int newlevel) { _level = newlevel; }
unsigned int ScavTrap::get_meleeAttackDamage() const {
  return _meleeAttackDamage;
}
unsigned int ScavTrap::get_rangedAttackDamage() const {
  return _rangedAttackDamage;
}
unsigned int ScavTrap::get_armorDamageReduction() const {
  return _armorDamageReduction;
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

unsigned int calcArmorReduction(ScavTrap& src, unsigned int amount) {
  unsigned int level = src.get_level();
  if (level == 0) return (amount);
  if (amount <= (level * 2)) return (0);
  amount -= (level * 2);
  --level;
  src.set_level(level);
  std::cout << "TERMINATOR " << BOLD_PURPLE + src.get_name() + EOC
            << " uses armor protection. Its level is now " << BOLD_PURPLE
            << src.get_level() << EOC << std::endl;
  return (amount);
}

void ScavTrap::takeDamage(unsigned int amount) {
  int out;
  int newamount;

  newamount = calcArmorReduction(*this, amount);
  out = this->_hitPoints - newamount;
  if (out <= 0)
    _hitPoints = 0;
  else
    _hitPoints = out;
  std::cout << "TERMINATOR " << BOLD_PURPLE + _name + EOC << " takes "
            << BOLD_PURPLE << amount << EOC << " damage. Its Hit Point is now "
            << GREEN << _hitPoints << EOC << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
  if (_hitPoints + amount >= _maxHitPoints) {
    _hitPoints = _maxHitPoints;
  } else {
    _hitPoints += amount;
  }

  std::cout << BOLD_PURPLE + _name + EOC
            << " was successfully repaired, now he got " << GREEN << _hitPoints
            << EOC << " HP." << std::endl;
}

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
