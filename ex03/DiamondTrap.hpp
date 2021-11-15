#ifndef FRAG_TRAP_HPP_
#define FRAG_TRAP_HPP_

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:
	void		whoAmI();
	void		attack();

	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);


private:
	static const unsigned int	max_hitpoints_ = 10;
	static const unsigned int	max_energy_points_ = 10;
	static const unsigned int	init_attack_damage_ = 0; 

};

#endif // FRAG_TRAP_HPP_