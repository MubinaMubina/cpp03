#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	// TODO: 100 / 50 / 20 + construction message
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	// TODO: 100 / 50 / 20 + construction message
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	// TODO: message
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	// TODO: ClapTrap::operator=(other) + message
	(void)other;
	return *this;
}

ScavTrap::~ScavTrap()
{
	// TODO: destruction message
}

void ScavTrap::attack(const std::string& target)
{
	// TODO: same rules as ClapTrap, different message
	(void)target;
}

void ScavTrap::guardGate()
{
	// TODO: print message
}
