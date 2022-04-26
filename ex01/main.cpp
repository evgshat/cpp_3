#include "ScavTrap.hpp"

int main()
{
	ScavTrap ScavTrap1("Garry Potter");

	ScavTrap1.attack("Voldemort");
	ScavTrap1.guardGate();
	ScavTrap1.beRepaired(10);
	ScavTrap1.takeDamage(100);
	return (0);
}
