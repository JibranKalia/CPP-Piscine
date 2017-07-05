/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:55:49 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 11:34:47 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _limit(N) {
  std::cout << "Creating the Horde" << std::endl;

  _zombietype = "default";
  raw_memory = operator new[](_limit * sizeof(Zombie));
  horde = static_cast<Zombie *>(raw_memory);
  for (int i = 0; i < _limit; i++) {
    new (&horde[i]) Zombie(_randomname(std::rand() % 10 + 5), _zombietype);
    (&horde[i])->announce();
  }
  return;
}

ZombieHorde::~ZombieHorde() {
  std::cout << "Destroying the Horde" << std::endl;
  for (int i = _limit - 1; i >= 0; --i) {
    horde[i].~Zombie();
  }
  operator delete[](raw_memory);
  return;
}

std::string ZombieHorde::_randomname(int length) {
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
