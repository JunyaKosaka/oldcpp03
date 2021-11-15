#include "DiamondTrap.hpp"

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this->name_ \
	<< " and clapTrap name is " << this->ClapTrap::getName() \
	<< std::endl;
}

void DiamondTrap::attack() {
	ScavTrap::attack();
}

DiamondTrap::DiamondTrap() : name_("DiamondTrap") {
	ClapTrap::setName("DiamondTrap_clap_name");
	this->setHitPoints(FragTrap::max_hitpoints_)
}