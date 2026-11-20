#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Mateo");
	a.attack("Nikii");  
	a.takeDamage(3);      
	a.beRepaired(5);      

	std::cout << "______________________________________________" << std::endl;
	for (int i = 0; i < 8; i++)
		a.attack("Nikii");
	a.attack("Nikii");   
	a.beRepaired(1);      

	std::cout << "______________________________________________" << std::endl;
	a.takeDamage(1000);   
	a.takeDamage(1);      
	a.attack("Nikii");   

	std::cout << "______________________________________________" << std::endl;
	ClapTrap b(a);
	ClapTrap c;
	c = a;

	std::cout << "______________________________________________" << std::endl;
	{
		ClapTrap d("Marwane");
		d.attack("Romain");
	}

	return 0;
}
