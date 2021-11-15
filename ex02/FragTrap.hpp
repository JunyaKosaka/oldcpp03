#ifndef FRAG_TRAP_HPP_
#define FRAG_TRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	void		highFivesGuys();

	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);


private:
	static const unsigned int	max_hitpoints_ = 10;
	static const unsigned int	max_energy_points_ = 10;
	static const unsigned int	init_attack_damage_ = 0; 

};

#endif // FRAG_TRAP_HPP_