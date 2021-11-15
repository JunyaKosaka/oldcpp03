#include <iostream>

#include "FragTrap.hpp"

int main( void ) {
	FragTrap abc("abc");
	FragTrap d1;
	FragTrap cp1 = abc;
	
	abc.attack(d1.getName());
	cp1.takeDamage(2);
	cp1.beRepaired(1);
	abc.highFivesGuys();

	return 0;
}
