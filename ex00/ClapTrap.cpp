#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	_name = "";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if(this == &other)
		return(*this);
	else
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "assignment called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(_hitPoints == 0)
	{
		std::cout << _name << " can't attack: no hit points" << std::endl;
		return;
	}
	if(_energyPoints == 0)
	{
		std::cout << _name << " can't attack: no energy" << std::endl;
		return;
	}
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " 
		<< _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << _name << " is already down" << std::endl;
		return;
	}
	if(amount >= _hitPoints)
		_hitPoints = 0;
	else 
		_hitPoints -= amount;

	std::cout << "ClapTrap " << _name << " takes " << amount << " damage, " 
		<< _hitPoints << " hit points left" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(_hitPoints == 0)
	{
		std::cout << _name << " can't repair: no hit points" << std::endl;
		return;
	}
	if(_energyPoints == 0)
	{
		std::cout << _name << " can't repair: no energy" << std::endl;
		return;
	}
	_energyPoints -= 1;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount 
		<< ", now has " << _hitPoints << " hit points" << std:: endl;
}
