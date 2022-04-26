#include "ClapTrap.hpp"

int main()
{
	ClapTrap ClapTrap1("Garry Potter");

	ClapTrap1.attack("Voldemort");
	ClapTrap1.attack("Voldemort");
	ClapTrap1.attack("Voldemort");
	ClapTrap1.attack("Voldemort");
	ClapTrap1.attack("Voldemort");

	ClapTrap1.takeDamage(5);
	ClapTrap1.takeDamage(5);
	ClapTrap1.takeDamage(5);

	ClapTrap1.beRepaired(1);
	ClapTrap1.beRepaired(1);
	ClapTrap1.beRepaired(1);
	ClapTrap1.beRepaired(1);
	ClapTrap1.beRepaired(1);
	ClapTrap1.beRepaired(1);
	ClapTrap1.attack("Voldemort");
}
