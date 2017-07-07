#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class FragTrap
{
	public:
		rangedAttack(std::string const& target);
		meleeAttack(std::string const& target);
		takeDamage(unsigned int amount);
		beRepaired(unsigned int amount);
		vaulthunter_dot_exe(std::string const& target);
		FragTrap();
		~FragTrap();

	private:
		int _hitPoints;
		int _maxHitPoints;
		int _energyPoints;
		int _maxEnergyPoints;
		int _level;
		std::string _name;
		int _meleeAttackDamage;
		int _rangedAttackDamage;
		int _armorDamageReduction;
}
#endif