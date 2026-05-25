#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:

public:
	void guardGate();
	void attack(const std::string& target) override;

	ScavTrap(std::string name);
	~ScavTrap();

};

#endif