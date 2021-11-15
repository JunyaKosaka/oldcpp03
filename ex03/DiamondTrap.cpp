#include "DiamondTrap.hpp"

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this->name_ \
	<< " and clapTrap name is " << this->ClapTrap::getName() \
	<< std::endl;
}

void DiamondTrap::attack(std::string const &target) {
	this->ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap() : name_("diamondTrap") {
	ClapTrap::setName("diamondTrap_clap_name");
	this->FragTrap::setHitPoints(FragTrap::max_hitpoints_);
	this->ScavTrap::setEnergyPoints(ScavTrap::max_energy_points_);
	this->FragTrap::setAttackDamage(FragTrap::init_attack_damage_);
	std::cout << "DiamondTrap " << this->name_ << " was born" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : name_(name) {
	ClapTrap::setName(name + "_clap_name");
	this->FragTrap::setHitPoints(FragTrap::max_hitpoints_);
	this->ScavTrap::setEnergyPoints(ScavTrap::max_energy_points_);
	this->FragTrap::setAttackDamage(FragTrap::init_attack_damage_);
	std::cout << "DiamondTrap " << this->name_ << " was born" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->name_ << " died" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	if (this != &other) {
		this->name_ = other.getName();
		this->hitpoints_ = other.getHitPoints();
		this->energy_points_ = other.getEnergyPoints();
		this->attack_damage_ = other.getAttackDamage();
	}
	std::cout << "DiamondTrap " << this->name_ << " was born" << std::endl;
	return *this;
}
