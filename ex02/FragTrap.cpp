#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap is created. Hit_points = " << this->hit_points << ", energy_points = " << this->energy_points << ", attack_damage = " << this->attack_damage << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap is destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High five" << std::endl;
}
