#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
private:

public:
	void highFivesGuys();
	void attack(const std::string& target) override;

	FragTrap(std::string name);
	~FragTrap();

};

#endif