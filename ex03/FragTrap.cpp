#include "FragTrap.hpp"

void FragTrap::highFivesGuys() {
	std::cout << "Let's give a high five" << std::endl;
}

FragTrap::FragTrap() {
	this->setName("fragTrap");
	this->setHitPoints(FragTrap::max_hitpoints_);
	this->setEnergyPoints(FragTrap::max_energy_points_);
	this->setAttackDamage(FragTrap::init_attack_damage_);
	std::cout << "FragTrap " << this->name_ << " was born" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->setName(name);
	this->setHitPoints(FragTrap::max_hitpoints_);
	this->setEnergyPoints(FragTrap::max_energy_points_);
	this->setAttackDamage(FragTrap::init_attack_damage_);
	std::cout << "FragTrap " << this->name_ << " was born" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->name_ << " died" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (this != &other) {
		this->name_ = other.getName();
		this->hitpoints_ = other.getHitPoints();
		this->energy_points_ = other.getEnergyPoints();
		this->attack_damage_ = other.getAttackDamage();
	}
	std::cout << "FragTrap " << this->name_ << " was born" << std::endl;
	return *this;
}