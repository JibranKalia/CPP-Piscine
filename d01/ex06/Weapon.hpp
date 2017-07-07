/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:24:41 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 21:32:37 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
 public:
  Weapon(std::string inittype);
  Weapon();
  ~Weapon();
  void setType(std::string type);
  const std::string& getType();

 private:
  std::string _type;
};
#endif
