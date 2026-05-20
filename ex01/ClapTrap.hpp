#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
protected: // for child access
	std::string	_name;
	int			_hitPoints = 10;
	int			_energyPoints = 10;
	int			_attackDamage = 0;
	int			_maxHitPoints = 10;

public:
	virtual void attack(const std::string& target); // virtual allows override
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap& operator=(const ClapTrap& obj);
	ClapTrap(const ClapTrap& obj);
	ClapTrap(std::string name);
	~ClapTrap();

};

#endif