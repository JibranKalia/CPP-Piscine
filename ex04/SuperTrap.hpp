/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 20:04:51 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 21:10:16 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap {
 public:
  SuperTrap();
  SuperTrap(std::string inname);
  ~SuperTrap();
  SuperTrap(const SuperTrap& src);
  SuperTrap& operator=(const SuperTrap& src);
  bool rangedAttack(std::string const& target);
  bool meleeAttack(std::string const& target);
};
#endif
