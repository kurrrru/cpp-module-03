#include "FragTrap.hpp"

#include <iostream>
#include <string>

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "constructor FragTrap" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "name constructor FragTrap" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	std::cout << "copy constructor FragTrap" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		std::cout << "copy assignation operator FragTrap" << std::endl;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "destructor FragTrap" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << "FragTrap " << _name << " can't attack" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << _name << " requests a high five" << std::endl;
}
