#include <iostream>

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap abc("abc");
	ClapTrap d1;
	ClapTrap cp1 = abc;
	ClapTrap cp2(d1);
	
	abc.attack(d1.getName());
	cp1.takeDamage(2);
	cp1.beRepaired(1);
	cp2.takeDamage(20);

	return 0;
}
