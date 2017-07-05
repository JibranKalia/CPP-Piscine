/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 08:12:08 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 10:30:05 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void) {
  Zombie test("Batman", "simple");
  test.announce();

  ZombieEvent lab;
  lab.setZombieType("lab");
  lab.randomChump();
  lab.randomChump();
  lab.randomChump();

  Zombie *last = lab.newZombie("Joker");
  last->announce();
  delete last;
}
