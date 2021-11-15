#ifndef CLAP_TRAP_HPP_
#define CLAP_TRAP_HPP_

#include <iostream>
#include <string>

class ClapTrap {

public:
	void			attack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);

	std::string		getName() const;
	unsigned int	getHitPoints() const;
	unsigned int	getMaxHitPoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDamage() const;
	void			setName(std::string name);
	void			setHitPoints(unsigned int amount);
	void			setMaxHitPoints(unsigned int amount);
	void			setEnergyPoints(unsigned int amount);
	void			setAttackDamage(unsigned int amount);

protected:
	std::string		name_;
	unsigned int	hitpoints_;
	unsigned int	max_hitpoints_;
	unsigned int	energy_points_;
	unsigned int	attack_damage_;

private:
	static const unsigned int	init_max_hitpoints_ = 10;
	static const unsigned int	max_energy_points_ = 10;
	static const unsigned int	init_attack_damage_ = 0; 

};

#endif  // CLAP_TRAP_HPP_