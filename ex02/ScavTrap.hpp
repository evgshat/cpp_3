#ifndef	SCAV_TRAP_HPP
#define	SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(ScavTrap &ScavTrap);
		ScavTrap &operator=(const ScavTrap &trap);
		~ScavTrap();

		ScavTrap(std::string name);
		void guardGate();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
