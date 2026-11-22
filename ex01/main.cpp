#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "________TEST 1_________" << std::endl;
	ScavTrap s("Guard");

	std::cout << "________TEST 2:_________" << std::endl;
	s.attack("Vik");

	std::cout << "________TEST 3: _________" << std::endl;
	s.guardGate();

	std::cout << "________TEST 4:_________" << std::endl;
	s.takeDamage(30);
	s.beRepaired(10);

	std::cout << "________TEST 5:_________" << std::endl;
	for (int i = 0; i < 50; i++)
		s.attack("Vik");

	std::cout << "________TEST 6:_________" << std::endl;
	s.takeDamage(1000);
	s.attack("Vik");
	s.beRepaired(10);

	std::cout << "________TEST 7:_________" << std::endl;
	ScavTrap copy(s);
	ScavTrap other("Other");
	other = s;

	std::cout << "________TEST 8:_________" << std::endl;
	{
		ScavTrap tmp("Temp");
		tmp.guardGate();
	}

	return 0;
}
