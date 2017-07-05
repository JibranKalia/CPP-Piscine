/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 08:12:08 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 09:56:47 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
  Zombie test("blah", "adddd");
  test.announce();

  ZombieEvent lab;
  lab.setZombieType("Factory");
  lab.randomChump();
  lab.randomChump();
  lab.randomChump();
}
