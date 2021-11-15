#include <iostream>

#include "DiamondTrap.hpp"

int main( void ) {
	DiamondTrap abc("abc");
	DiamondTrap d1;
	
	abc.attack(d1.getName());
	abc.takeDamage(2);
	abc.beRepaired(1);
	abc.highFivesGuys();
	abc.guardGate();
	abc.whoAmI();
	d1.whoAmI();

	return 0;
}
