/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 18:06:24 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 19:33:36 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap();
  ScavTrap(std::string inname);
  ~ScavTrap();
  ScavTrap(const ScavTrap& src);
  ScavTrap& operator=(const ScavTrap& src);

  bool rangedAttack(std::string const& target);
  bool meleeAttack(std::string const& target);
  bool challengeNewcomer(std::string const& target);

 private:
  static std::string st_challenge[6];
};
#endif
