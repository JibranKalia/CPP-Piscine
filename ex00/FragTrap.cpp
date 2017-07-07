/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:57:47 by jkalia            #+#    #+#             */
/*   Updated: 2017/07/07 11:57:49 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() : _hitPoints(100), 
		_maxHitPoints(100), 
		_energyPoints(100),
		_maxEnergyPoints(100),
		_level(1), 
		_meleeAttackDamage(30),
		_rangedAttackDamage(30),
		_armorDamageReduction(5)
{
	std::cout << "FragTrap has been spawned" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroyed!" << std::endl;
}
