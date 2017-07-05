/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:55:49 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 11:09:23 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _limit(N) {
  std::cout << "Creating the Horde" << std::endl;
  _zombietype = "default";
  for (int i = 0; i < _limit; i++) {
    randomChump();
  }
  return;
}

ZombieHorde::~ZombieHorde() {
  std::cout << "Destroying the Horde" << std::endl;
  return;
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

void ZombieHorde::randomChump() {
  Zombie ret = Zombie(_randomname(std::rand() % 10 + 5), _zombietype);
  ret.announce();
  return;
}
