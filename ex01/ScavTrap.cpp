#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "constructor ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "name constructor ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "copy constructor ScavTrap" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		std::cout << "copy assignation operator ScavTrap" << std::endl;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "destructor ScavTrap" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << "ScavTrap " << CL_CYAN << _name
			<< CL_RESET << " can't attack" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << CL_CYAN << _name
		<< CL_RESET << " attacks " << target
		<< ", causing " << CL_RED << _attackDamage
		<< CL_RESET << " points of damage!" << std::endl;
	_energyPoints -= 1;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << CL_CYAN << _name
		<< CL_RESET << " is in Gate keeper mode" << std::endl;
}
