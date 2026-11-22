#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// Test 1: construction / destruction chaining
	//   create ScavTrap s("Guard")
	//   -> expect: ClapTrap ctor, then ScavTrap ctor ... then ScavTrap dtor, ClapTrap dtor at the end

	// Test 2: ScavTrap::attack override
	//   s.attack("Target")   -> must print the "ScavTrap ..." message, damage 20

	// Test 3: guardGate
	//   s.guardGate()

	// Test 4: takeDamage / beRepaired inherited from ClapTrap
	//   s.takeDamage(30); s.beRepaired(10);

	// Test 5: energy exhaustion (50 energy)
	//   loop 50 times s.attack("Target"), then once more -> "no energy"

	// Test 6: hit points exhaustion
	//   s.takeDamage(1000); then s.attack(...) and s.beRepaired(...) -> refused

	// Test 7: copy constructor + assignment
	//   ScavTrap copy(s);
	//   ScavTrap other("Other"); other = s;

	// Test 8: scoped object to see destruction order
	//   { ScavTrap tmp("Temp"); tmp.guardGate(); }

	return 0;
}
