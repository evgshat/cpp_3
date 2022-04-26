#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap is created" << std::endl;
}

FragTrap::FragTrap(FragTrap &trap)
{
	std::cout << "Copy constructor" << std::endl;
	*this = trap;
}

FragTrap &FragTrap::operator=(const FragTrap &trap)
{
	std::cout << "Assignation operator" << std::endl;
	if (this != &trap)
	{
		this->name = trap.name;
		this->hit_points = trap.hit_points;
		this->energy_points = trap.energy_points;
		this->attack_damage = trap.attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap is destroyed" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap is created. Hit_points = " << this->hit_points << ", energy_points = " << this->energy_points << ", attack_damage = " << this->attack_damage << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High five" << std::endl;
}
