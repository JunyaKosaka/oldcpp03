#include "ClapTrap.hpp"

void ClapTrap::attack(std::string const &target) {
	std::cout << "ClapTrap " << this->name_ << " attack " \
	<< target << ", causing" << this->attack_damage_ \
	<< " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name_ << " takes " \
	<< amount << "points of damage" << std::endl;
	this->energy_points_ -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->name_ << " is repaired " \
	<< amount << "points of damage" << std::endl;
	this->hitpoints_ += amount;
}

ClapTrap::CrapTrap()
	: name_("ClapTrap"), hitpoints_(10), energy_points_(10), attack_damage_(0) {
	std::cout << "ClapTrap was born" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name_(name), hitpoints_(10), energy_points_(10), attack_damage_(0) {
	std::cout << "ClapTrap " << this->name_ << " was born" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->name_ << " died" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		this->name_ = other.name_;
		this->hitpoints_ = other.hitpoints;
		this->energy_points_ = other.energy_points;
		this->attack_damage_ = other.attack_damage_;
	}
	return *this;
}