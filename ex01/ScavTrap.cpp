#include "ScavTrap.hpp"

void ScavTrap::guardGate() {
	std::cout << this->name_ << " has enterred " \
	<< "in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap() {
	this->setName("scavTrap");
	this->setHitPoints(ScavTrap::max_hitpoints_);
	this->setEnergyPoints(ScavTrap::max_energy_points_);
	this->setAttackDamage(ScavTrap::init_attack_damage_);
	std::cout << "ScavTrap " << this->name_ << " was born" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->setName(name);
	this->setHitPoints(ScavTrap::max_hitpoints_);
	this->setEnergyPoints(ScavTrap::max_energy_points_);
	this->setAttackDamage(ScavTrap::init_attack_damage_);
	std::cout << "ScavTrap " << this->name_ << " was born" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->name_ << " died" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other) {
		this->setName(other.getName());
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setAttackDamage(other.getAttackDamage());
		std::cout << "ScavTrap " << this->name_ << " was born" << std::endl;
	}
	return *this;
}