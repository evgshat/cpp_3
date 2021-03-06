#ifndef	CLAP_TRAP_HPP
#define	CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
	public:
		ClapTrap();
		ClapTrap(ClapTrap &trap);
		ClapTrap &operator=(const ClapTrap &trap);
		~ClapTrap();

		ClapTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
