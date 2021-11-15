#ifndef SCAV_TRAP_HPP_
#define SCAV_TRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	void		guardGate();

	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);


private:
	static const unsigned int	max_hitpoints_ = 10;
	static const unsigned int	max_energy_points_ = 10;
	static const unsigned int	init_attack_damage_ = 0; 

};

#endif // SCAV_TRAP_HPP_