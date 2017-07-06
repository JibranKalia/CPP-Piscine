/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:25:00 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 20:50:30 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
 public:
  HumanA(std::string setname, Weapon setweapon);
  ~HumanA();
  void attack() const;

 private:
  Weapon _weaponA;
  std::string _name;
};
#endif
