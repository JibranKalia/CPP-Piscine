/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:30:55 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 21:42:29 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(std::string name);
  HumanB(std::string name, Weapon& weapon);
  ~HumanB();
  void setWeapon(Weapon& club);
  void attack();

 private:
  std::string _name;
  Weapon* _weaponB;
};
#endif
