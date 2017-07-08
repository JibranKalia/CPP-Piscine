/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:58:03 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 18:43:22 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

typedef struct FragAttack {
  std::string name;
  unsigned int damage;
} FragAttack;

class FragTrap {
 public:
  FragTrap();
  FragTrap(std::string inname);
  ~FragTrap();
  FragTrap(const FragTrap& src);

  FragTrap& operator=(const FragTrap& src);
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
  bool vaulthunter_dot_exe(std::string const& target);

 private:
  unsigned int _hitPoints;
  unsigned int _maxHitPoints;
  unsigned int _energyPoints;
  unsigned int _maxEnergyPoints;
  unsigned int _level;
  std::string _name;
  unsigned int _meleeAttackDamage;
  unsigned int _rangedAttackDamage;
  unsigned int _armorDamageReduction;
  static FragAttack _randomAttack[6];
};
#endif
