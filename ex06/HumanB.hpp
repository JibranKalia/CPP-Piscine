/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:30:55 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 21:03:37 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(std::string setname, Weapon setweapon);
  HumanB(std::string setname);
  ~HumanB();
  void setWeapon(Weapon& club);
  void attack() const;

 private:
  Weapon _weaponB;
  std::string _name;
};
#endif
