#ifndef CLAP_TRAP_HPP_
#define CLAP_TRAP_HPP_

#include <iostream>

class ClapTrap {

public:
	void					attack(std::string const &target);
	void					takeDamage(unsigned int amount);
	void					beRepaired(unsigned int amount);

	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);

	std::string		getName() const;
	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDamage() const;
	void			setHitPoints(unsigned int amount);
	void			setEnergyPoints(unsigned int amount);
	void			setAttackDamage(unsigned int amount);

private:
	std::string				name_;
	unsigned int			hitpoints_;
	unsigned int			energy_points_;
	unsigned int			attack_damage_;

};

#endif  // CLAP_TRAP_HPP_