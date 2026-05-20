#include "ScavTrap.hpp"

void ScavTrap::guardGate()
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
	std::cout << "ScavTrap " << _name << " is in Gatekeeper mode!\n";
	_energyPoints--;
}

void ScavTrap::attack(const std::string& target)
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
	std::cout << "ScavTrap " << _name << " attacks " << target
			  << " for " << _attackDamage << " damage!\n";
	_energyPoints--;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor Scav called\n";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_maxHitPoints = 100;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Deconstructor Scav called\n";
}
