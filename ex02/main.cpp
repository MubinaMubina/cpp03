#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "________TEST 1:_________" << std::endl;
	FragTrap f("Frag");

	std::cout << "________TEST 2:_________" << std::endl;
	f.attack("Vik");

	std::cout << "________TEST 3:_________" << std::endl;
	f.highFivesGuys();

	std::cout << "________TEST 4:_________" << std::endl;
	f.takeDamage(40);
	f.beRepaired(10);

	std::cout << "________TEST 5:_________" << std::endl;
	for (int i = 0; i < 100; i++)
		f.attack("Vik");

	std::cout << "________TEST 6:_________" << std::endl;
	f.takeDamage(1000);
	f.attack("Vik");
	f.beRepaired(10);

	std::cout << "________TEST 7:_________" << std::endl;
	FragTrap copy(f);
	FragTrap other("Other");
	other = f;

	std::cout << "________TEST 8:________" << std::endl;
	{
		ClapTrap c("Clap");
		ScavTrap s("Scav");
		FragTrap g("Frag2");

		c.attack("X");
		s.attack("X");
		g.attack("X");

		s.guardGate();
		g.highFivesGuys();
	}

	std::cout << "________TEST 9:_________" << std::endl;
	{
		FragTrap tmp("Temp");
		tmp.highFivesGuys();
	}

	return 0;
}
