#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
	if(_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead!\n";
		return;
	}
	if(_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy!\n";
		return;
	}
	if(_energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name 
				  << " attacks " << target << " causing " 
				  << _attackDamage << " points of damage!\n";
		_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead!\n";
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage!\n";
	_hitPoints -= amount;
	if(_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " died!\n";
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead!\n";
		return;
	}
	if(_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy!\n";
		return;
	}
	std::cout << "ClapTrap " << _name << " repaired "
			  << amount << " hitpoints\n";
	_hitPoints += amount;
	if(_hitPoints >= _maxHitPoints)
		_hitPoints = _maxHitPoints;
	_energyPoints--;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "Assignment operator called\n";
	if(this != &obj)
	{
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _energyPoints = obj._energyPoints;
        _attackDamage = obj._attackDamage;
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "Copy constructor called\n";
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor Clap called\n";
	_name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor Clap called\n";
}

