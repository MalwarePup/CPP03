#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "ClapTrap " << _name << " is created by default constructor!" << std::endl;
}
ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "ClapTrap " << _name << " is created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap " << _name << " is created by copy constructor!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap " << _name << " is assigned by copy assignment operator!" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit points or energy points left!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit points left!" << std::endl;
		return;
	}
	if (amount >= _hitPoints)
	{
		_hitPoints = 0;
	}
	else
	{
		_hitPoints -= amount;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit points or energy points left!" << std::endl;
		return;
	}
	if (_hitPoints + amount > 10)
	{
		_hitPoints = 10;
	}
	else
	{
		_hitPoints += amount;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
}
