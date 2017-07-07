/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:25:00 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 21:42:39 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
 public:
  HumanA(std::string name, Weapon& weapon);
  ~HumanA();
  void attack();
  void setWeapon(Weapon& weapon);

 private:
  std::string _name;
  Weapon& _weaponA;
};
#endif
