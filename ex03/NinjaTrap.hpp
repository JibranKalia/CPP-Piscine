/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 19:41:16 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 19:50:33 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
 public:
  NinjaTrap();
  NinjaTrap(std::string inname);
  ~NinjaTrap();
  NinjaTrap(const NinjaTrap& src);
  NinjaTrap& operator=(const NinjaTrap& src);

  bool rangedAttack(std::string const& target);
  bool meleeAttack(std::string const& target);
  bool vaulthunter_dot_exe(std::string const& target);
  void ninjaShoebox(const NinjaTrap& attack) const;
  void ninjaShoebox(const ClapTrap& attack) const;
  void ninjaShoebox(const FragTrap& attack) const;
  void ninjaShoebox(const ScavTrap& attack) const;

 private:
  static FragAttack _randomAttack[6];
};
#endif
