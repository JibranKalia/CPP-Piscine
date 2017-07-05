/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 08:04:09 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 10:24:48 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string setname, std::string settype)
    : _name(setname), _type(settype) {
  std::cout << "Zombie name: " << _name << " of type " << _type << " created."
            << std::endl;
  return;
}

Zombie::~Zombie() {
  std::cout << "Zombie name: " << _name << " of type " << _type << " destroyed."
            << std::endl;
  return;
}

void Zombie::announce(void) {
  std::cout << "<" << _name << "(" << _type << ")"
            << "> Braiiiiiiinnnssss..." << std::endl;
}
