/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:58:03 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 19:24:59 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
typedef struct FragAttack {
  std::string name;
  unsigned int damage;
} FragAttack;

class FragTrap : public ClapTrap {
 public:
  FragTrap();
  FragTrap(std::string inname);
  ~FragTrap();
  FragTrap(const FragTrap& src);
  FragTrap& operator=(const FragTrap& src);

  bool rangedAttack(std::string const& target);
  bool meleeAttack(std::string const& target);
  bool vaulthunter_dot_exe(std::string const& target);

 private:
  static FragAttack _randomAttack[6];
};
#endif
