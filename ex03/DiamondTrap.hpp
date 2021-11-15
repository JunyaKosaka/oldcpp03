#ifndef DIAMOND_TRAP_HPP_
#define DIAMOND_TRAP_HPP_

// #include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:
	void		whoAmI();
	void		attack(std::string const &target);

	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);

private:
	std::string	name_;

};

#endif // DIAMOND_TRAP_HPP_