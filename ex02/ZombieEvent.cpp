/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 08:20:11 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 10:14:54 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type) { _zombietype = type; }

Zombie *ZombieEvent::newZombie(std::string name) {
  std::srand(std::time(0));
  return new Zombie(name, _zombietype);
}

std::string _randomname(int length) {
  std::string ret;
  int output;
  char c;

  if (length == 0) return ret;
  static char charset[] =
      "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

  while (length > 0) {
    output = std::rand() % sizeof(charset);
    c = charset[output];
    ret += c;
    length--;
  }
  return ret;
}

Zombie ZombieEvent::randomChump() {
  Zombie ret = Zombie(_randomname(std::rand() % 10 + 5), _zombietype);
  ret.announce();
  return ret;
}
