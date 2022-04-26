#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap is created. Hit_points = " << this->hit_points << ", energy_points = " << this->energy_points << ", attack_damage = " << this->attack_damage << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "ScavTrap is destroyed" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_points < 1)
		std::cout << "ScavTrap can not to attack. Not have enought energy" << std::endl;
	else
	{
		this->energy_points--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points < 1)
		std::cout << "ScavTrap`s already die" << std::endl;
	else
	{
		this->hit_points = this->hit_points - amount;
		std::cout << "ScavTrap took damage. It`s hit = " << this->hit_points << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points < 1)
		std::cout << "ScavTrap can not to repair. Not have enought energy" << std::endl;
	else
	{
		this->energy_points--;
		this->hit_points = this->hit_points + amount;
		std::cout << "ScavTrap " << this->name << " repair itself. It`s hit = " << this->hit_points << std::endl;
	}

}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap in Gate keeper mode" << std::endl;
}
