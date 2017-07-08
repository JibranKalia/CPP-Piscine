/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 18:30:12 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 18:59:33 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ft_color.h"

ClapTrap::ClapTrap(std::string inname)
    : _hitPoints(100),
      _maxHitPoints(100),
      _energyPoints(100),
      _maxEnergyPoints(100),
      _level(1),
      _name(inname),
      _meleeAttackDamage(30),
      _rangedAttackDamage(30),
      _armorDamageReduction(5) {
  std::cout << PURPLE << "CLAPTAP STARTUP SEQUENCE: " << EOC << RED + _name + EOC << " has been spawned"
            << std::endl;
}

ClapTrap::ClapTrap()
    : _hitPoints(100),
      _maxHitPoints(100),
      _energyPoints(100),
      _maxEnergyPoints(100),
      _level(1),
      _meleeAttackDamage(30),
      _rangedAttackDamage(30),
      _armorDamageReduction(5) {
  std::cout << PURPLE << "CLAPTAP STARTUP SEQUENCE: " << EOC << RED << "nameless" << EOC << " has been spawned"
            << std::endl;
  srand(time(0));
}

ClapTrap::~ClapTrap() {
  std::cout << PURPLE <<  "CLAPTAP DESTRUCTION: "<< EOC << RED + _name + EOC << " The end." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
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

unsigned int ClapTrap::get_hitPoints() const { return _hitPoints; }
unsigned int ClapTrap::get_maxHitPoints() const { return _maxHitPoints; }
unsigned int ClapTrap::get_energyPoints() const { return _energyPoints; }
unsigned int ClapTrap::get_maxEnergyPoints() const { return _maxEnergyPoints; }
unsigned int ClapTrap::get_level() const { return _level; }
std::string ClapTrap::get_name() const { return _name; }
void ClapTrap::set_name(std::string inname) { _name = inname; }
void ClapTrap::set_level(unsigned int newlevel) { _level = newlevel; }
unsigned int ClapTrap::get_meleeAttackDamage() const {
  return _meleeAttackDamage;
}
unsigned int ClapTrap::get_rangedAttackDamage() const {
  return _rangedAttackDamage;
}
unsigned int ClapTrap::get_armorDamageReduction() const {
  return _armorDamageReduction;
}

bool ClapTrap::rangedAttack(std::string const& target) {
  std::cout << "FR4G-TP " << BLUE + _name + EOC << " attacks "
            << RED + target + EOC << " at range, causing " << GREEN
            << _rangedAttackDamage << EOC << " points of damage !" << std::endl;
  return true;
}

bool ClapTrap::meleeAttack(std::string const& target) {
  std::cout << "FR4G-TP " << BLUE + _name + EOC << " attacks "
            << RED + target + EOC << " in close-combat, causing " << GREEN
            << _meleeAttackDamage << EOC << " points of damage !" << std::endl;
  return true;
}

ClapTrap::ClapTrap(const ClapTrap& src) { *this = src; }

unsigned int calcArmorReduction(ClapTrap& src, unsigned int amount) {
  unsigned int level = src.get_level();
  if (level == 0) return (amount);
  if (amount <= (level * 2)) return (0);
  amount -= (level * 2);
  --level;
  src.set_level(level);
  std::cout << "FR4G-TP " << BLUE + src.get_name() + EOC
            << " uses armor protection. Its level is now " << RED
            << src.get_level() << EOC << std::endl;
  return (amount);
}

void ClapTrap::takeDamage(unsigned int amount) {
  int out;
  int newamount;

  newamount = calcArmorReduction(*this, amount);
  out = this->_hitPoints - newamount;
  if (out <= 0)
    _hitPoints = 0;
  else
    _hitPoints = out;
  std::cout << "FR4G-TP " << BLUE + _name + EOC << " takes " << RED << amount
            << EOC << " damage. Its Hit Point is now " << GREEN << _hitPoints
            << EOC << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (_hitPoints + amount >= _maxHitPoints) {
    _hitPoints = _maxHitPoints;
  } else {
    _hitPoints += amount;
  }

  std::cout << RED + _name + EOC << " was successfully repaired, now he got "
            << GREEN << _hitPoints << EOC << " HP." << std::endl;
}
