#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	// TODO: 100 / 100 / 30 + construction message
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	// TODO: 100 / 100 / 30 + construction message
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	// TODO: message
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	// TODO: ClapTrap::operator=(other) + message
	(void)other;
	return *this;
}

FragTrap::~FragTrap()
{
	// TODO: destruction message
}

void FragTrap::attack(const std::string& target)
{
	// TODO: same rules as ClapTrap, different message
	(void)target;
}

void FragTrap::highFivesGuys(void)
{
	// TODO: print message
}
