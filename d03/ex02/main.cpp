/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:58:39 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 19:37:38 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ft_color.h"

int main(void) {
  std::cout << BLUE
            << "---------------------------------------------------------------"
               "-----------------------------"
            << EOC << std::endl
            << std::endl;
  std::cout << BLUE
            << "---------------------------------------------------------------"
               "-----------------------------"
            << EOC << std::endl
            << std::endl;
  std::cout << BLUE
            << "---------------------------------------------------------------"
               "-----------------------------"
            << EOC << std::endl
            << std::endl;
  // Clap Trap
  ClapTrap Robot("tracy");
  ClapTrap Robot1;
  ClapTrap Robot2("Bean");
  ClapTrap Robot3 = Robot2;

  Robot1.set_name("Boston");

  Robot1.meleeAttack("Brad");
  Robot2.rangedAttack("Cooper");
  Robot3.rangedAttack("William");
  Robot3.takeDamage(44);

  Robot3.takeDamage(101);
  Robot3.takeDamage(4);
  Robot3.takeDamage(101);
  Robot3.beRepaired(25);
  Robot3.beRepaired(55);
  Robot3.beRepaired(55);

  std::cout << RED
            << "---------------------------------------------------------------"
               "-----------------------------"
            << EOC << std::endl
            << std::endl;
  std::cout << RED
            << "---------------------------------------------------------------"
               "-----------------------------"
            << EOC << std::endl
            << std::endl;
  std::cout << RED
            << "---------------------------------------------------------------"
               "-----------------------------"
            << EOC << std::endl
            << std::endl;

  // Frag Trap
  FragTrap ROBOT("Justin");
  FragTrap ROBOT1;
  FragTrap ROBOT2("John");
  FragTrap ROBOT3 = ROBOT2;

  ROBOT1.set_name("Beth");

  ROBOT1.meleeAttack("Brad");
  ROBOT2.rangedAttack("Cooper");
  ROBOT3.rangedAttack("William");
  ROBOT3.takeDamage(44);
  ROBOT.vaulthunter_dot_exe("Crush");
  ROBOT.vaulthunter_dot_exe("Disney");
  ROBOT.vaulthunter_dot_exe("Disney");
  ROBOT.vaulthunter_dot_exe("Disney");
  ROBOT.vaulthunter_dot_exe("Disney");
  ROBOT.vaulthunter_dot_exe("Disney");
  ROBOT.vaulthunter_dot_exe("Disney");

  ROBOT3.takeDamage(101);
  ROBOT3.takeDamage(4);
  ROBOT3.takeDamage(101);
  ROBOT3.beRepaired(25);
  ROBOT3.beRepaired(55);
  ROBOT3.beRepaired(55);

  std::cout << RED
            << "---------------------------------------------------------------"
               "-----------------------------"
            << EOC << std::endl
            << std::endl;
  std::cout << RED
            << "---------------------------------------------------------------"
               "-----------------------------"
            << EOC << std::endl
            << std::endl;
  std::cout << RED
            << "---------------------------------------------------------------"
               "-----------------------------"
            << EOC << std::endl
            << std::endl;
  // Scav Trap

  ScavTrap robot("Justin");
  ScavTrap robot1;
  ScavTrap robot2("John");
  ScavTrap robot3 = robot2;

  robot1.set_name("Beth");

  robot1.meleeAttack("Brad");
  robot2.rangedAttack("Cooper");
  robot3.rangedAttack("William");
  robot3.takeDamage(44);

  robot.challengeNewcomer("Crush");
  robot.challengeNewcomer("Disney");
  robot.challengeNewcomer("Disney");
  robot.challengeNewcomer("Disney");
  robot.challengeNewcomer("Disney");
  robot.challengeNewcomer("Disney");

  robot3.takeDamage(101);
  robot3.takeDamage(4);
  robot3.takeDamage(101);
  robot3.beRepaired(25);
  robot3.beRepaired(55);
  robot3.beRepaired(55);

  std::cout << BLUE
            << "---------------------------------------------------------------"
               "-----------------------------"
            << EOC << std::endl
            << std::endl;
  std::cout << BLUE
            << "---------------------------------------------------------------"
               "-----------------------------"
            << EOC << std::endl
            << std::endl;
  std::cout << BLUE
            << "---------------------------------------------------------------"
               "-----------------------------"
            << EOC << std::endl
            << std::endl;
  return 0;
}
