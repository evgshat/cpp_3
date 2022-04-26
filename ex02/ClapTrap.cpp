#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap is created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap is created. Hit_points = " << this->hit_points << ", energy_points = " << this->energy_points << ", attack_damage = " << this->attack_damage << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap is destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points < 1)
		std::cout << "ClapTrap can not to attack. Not have enought energy" << std::endl;
	else
	{
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points < 1)
		std::cout << "It`s already die" << std::endl;
	else
	{
		this->hit_points = this->hit_points - amount;
		std::cout << "It took damage. It`s hit = " << this->hit_points << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points < 1)
		std::cout << "ClapTrap can not to repair. Not have enought energy" << std::endl;
	else
	{
		this->energy_points--;
		this->hit_points = this->hit_points + amount;
		std::cout << "ClapTrap " << this->name << " repair itself. It`s hit = " << this->hit_points << std::endl;
	}
}
