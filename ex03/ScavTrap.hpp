#ifndef SCAV_TRAP_HPP_
#define SCAV_TRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
	void		guardGate();

	ScavTrap();
	ScavTrap(std::string name);
	virtual ~ScavTrap();
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);

protected:
	static const unsigned int	init_max_hitpoints_ = 100;
	static const unsigned int	max_energy_points_ = 50;
	static const unsigned int	init_attack_damage_ = 20; 

};

#endif // SCAV_TRAP_HPP_