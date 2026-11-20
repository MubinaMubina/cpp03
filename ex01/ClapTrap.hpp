#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected: // protected (not private) so derived classes can set their own values
	std::string  _name;
	unsigned int _hitPoints;    // 10
	unsigned int _energyPoints; // 10
	unsigned int _attackDamage; // 0
};

#endif
