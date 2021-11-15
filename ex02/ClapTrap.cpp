#include "ClapTrap.hpp"

void ClapTrap::attack(std::string const &target) {
	std::cout << this->name_ << " attack " \
	<< target << ", causing" << this->attack_damage_ \
	<< " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitpoints_ < amount) amount = this->hitpoints_;
	std::cout << this->name_ << " takes " \
	<< amount << " points of damage" << std::endl;
	this->hitpoints_ -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << this->name_ << " is repaired " \
	<< amount << " points of damage" << std::endl;
	this->hitpoints_ += amount;
}

ClapTrap::ClapTrap()
	: name_("ClapTrap"), hitpoints_(ClapTrap::max_hitpoints_), \
	energy_points_(ClapTrap::max_energy_points_), attack_damage_(ClapTrap::init_attack_damage_) {
	std::cout << "ClapTrap was born" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name_(name), hitpoints_(ClapTrap::max_hitpoints_), \
	energy_points_(ClapTrap::max_energy_points_), attack_damage_(ClapTrap::init_attack_damage_) {
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
		this->name_ = other.getName();
		this->hitpoints_ = other.getHitPoints();
		this->energy_points_ = other.getEnergyPoints();
		this->attack_damage_ = other.getAttackDamage();
	}
	std::cout << this->name_ << " was born" << std::endl;
	return *this;
}

std::string		ClapTrap::getName() const { return this->name_; }

unsigned int	ClapTrap::getHitPoints() const { return this->hitpoints_; }

unsigned int	ClapTrap::getEnergyPoints() const { return this->energy_points_; }

unsigned int	ClapTrap::getAttackDamage() const { return this->attack_damage_; }

void			ClapTrap::setName(std::string name) { this->name_ = name; }
void			ClapTrap::setHitPoints(unsigned int amount) { this->hitpoints_ = amount; }
void			ClapTrap::setEnergyPoints(unsigned int amount) { this->energy_points_ = amount; }
void			ClapTrap::setAttackDamage(unsigned int amount) { this->attack_damage_ = amount; }
