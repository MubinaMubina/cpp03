#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	// TODO: default values + construction message
}

ClapTrap::ClapTrap(const std::string& name)
{
	// TODO: name, 10 / 10 / 0 + construction message
	(void)name;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	// TODO: copy + message
	(void)other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	// TODO: copy assignment + message
	(void)other;
	return *this;
}

ClapTrap::~ClapTrap()
{
	// TODO: destruction message
}

void ClapTrap::attack(const std::string& target)
{
	// TODO: needs hit points + energy; costs 1 energy; print message
	(void)target;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	// TODO: lose hit points (don't underflow); print message
	(void)amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	// TODO: needs hit points + energy; costs 1 energy; regain hit points; print message
	(void)amount;
}
