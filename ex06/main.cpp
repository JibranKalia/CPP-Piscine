/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:26:02 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/05 21:04:38 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
  {
    Weapon club = Weapon("crude spiked club");

    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }

  {
    Weapon club = Weapon("crude spiked club");

    // std::cout << "Seg Here 1" << std::endl;
    HumanB jim("Jim", club);
    std::cout << "Seg Here 2" << std::endl;
    // jim.setWeapon(club);
    // std::cout << "Seg Here 3" << std::endl;
    jim.attack();
    // std::cout << "Seg Here 4" << std::endl;
    club.setType("some other type of club");
    jim.attack();
  }
}
