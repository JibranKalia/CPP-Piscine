/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 18:06:24 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 18:22:26 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
 public:
  ScavTrap();
  ScavTrap(std::string inname);
  ~ScavTrap();
  ScavTrap(const ScavTrap& src);

  ScavTrap& operator=(const ScavTrap& src);
  unsigned int get_hitPoints() const;
  unsigned int get_maxHitPoints() const;
  unsigned int get_energyPoints() const;
  unsigned int get_maxEnergyPoints() const;
  unsigned int get_level() const;
  std::string get_name() const;
  void set_name(std::string);
  void set_level(unsigned int amount);
  unsigned int get_meleeAttackDamage() const;
  unsigned int get_rangedAttackDamage() const;
  unsigned int get_armorDamageReduction() const;

  bool rangedAttack(std::string const& target);
  bool meleeAttack(std::string const& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  bool challengeNewcomer(std::string const& target);

 private:
  static std::string st_challenge[6];
  unsigned int _hitPoints;
  unsigned int _maxHitPoints;
  unsigned int _energyPoints;
  unsigned int _maxEnergyPoints;
  unsigned int _level;
  std::string _name;
  unsigned int _meleeAttackDamage;
  unsigned int _rangedAttackDamage;
  unsigned int _armorDamageReduction;
};
#endif
