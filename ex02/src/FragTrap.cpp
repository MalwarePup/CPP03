#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default")
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " is created by default constructor!" << std::endl;
}

FragTrap::FragTrap(const std::string & name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " is created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap & other) : ClapTrap(other)
{
	std::cout << "FragTrap " << _name << " is created by copy constructor!" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap " << _name << " is assigned by copy assignment operator!" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " is destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " is requesting a high five!" << std::endl;
}
