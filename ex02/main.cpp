/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:58:39 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 18:46:10 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void) {
  ClapTrap robot("Justin");
  ClapTrap robot1;
  ClapTrap robot2("John");
  ClapTrap robot3 = robot2;

  robot1.set_name("Beth");

  robot1.meleeAttack("Brad");
  robot2.rangedAttack("Cooper");
  robot3.rangedAttack("William");
  robot3.takeDamage(44);

  robot3.takeDamage(101);
  robot3.takeDamage(4);
  robot3.takeDamage(101);
  robot3.beRepaired(25);
  robot3.beRepaired(55);
  robot3.beRepaired(55);

  return 0;
}
