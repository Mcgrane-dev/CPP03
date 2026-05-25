#include "FragTrap.hpp"

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name
			  << " gave a positive high-fives request\n";
}

void FragTrap::attack(const std::string& target)
{
	if(_hitPoints <= 0)
	{
		std::cout << _name << " is dead!\n";
		return;
	}
	if(_energyPoints <= 0)
	{
		std::cout << _name << " is out of energy!\n";
		return;
	}
	std::cout << "FragTrap " << _name << " attacks " << target
			  << " for " << _attackDamage << " damage!\n";
	_energyPoints--;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Construtor Frag called\n";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Deconstrutor Frag called\n";
}