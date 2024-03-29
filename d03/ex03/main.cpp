/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:58:39 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 20:02:15 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "ft_color.h"

int main(void) {
  NinjaTrap robot("Justin");
  NinjaTrap robot1;
  NinjaTrap robot2("John");
  NinjaTrap robot3 = robot2;
  ScavTrap test0("Mr. Robot");
  FragTrap test1("Sebastian");
  NinjaTrap test2("Lucifer");
  ClapTrap test3("Satan");

  robot1.set_name("Beth");

  robot1.meleeAttack("Brad");
  robot2.rangedAttack("Cooper");
  robot3.rangedAttack("William");
  robot3.takeDamage(44);

  robot3.ninjaShoebox(test0);
  robot3.ninjaShoebox(test1);
  robot3.ninjaShoebox(test2);
  robot3.ninjaShoebox(test3);

  robot3.takeDamage(101);
  robot3.takeDamage(4);
  robot3.takeDamage(101);
  robot3.beRepaired(25);
  robot3.beRepaired(55);
  robot3.beRepaired(55);
  return 0;
}
