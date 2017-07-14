/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 18:30:22 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 19:24:59 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
class ClapTrap {
 public:
  ClapTrap();
  ClapTrap(std::string inname);
  ~ClapTrap();
  ClapTrap(const ClapTrap& src);
  ClapTrap& operator=(const ClapTrap& src);

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

 protected:
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
