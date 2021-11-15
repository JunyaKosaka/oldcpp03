#include <iostream>

#include "ScavTrap.hpp"

int main( void ) {
	ScavTrap abc("abc");
	ScavTrap d1;
	ScavTrap cp1 = abc;
	// ScavTrap cp2(d1);
	
	abc.attack(d1.getName());
	cp1.takeDamage(2);
	cp1.beRepaired(1);
	// cp2.takeDamage(20);
	abc.guardGate();

	return 0;
}
