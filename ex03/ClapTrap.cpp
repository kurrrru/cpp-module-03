#include <iostream>
#include <string>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10),
	_energyPoints(10), _attackDamage(0) {
	std::cout << "constructor ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0) {
	std::cout << "constructor ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "copy constructor ClapTrap" << std::endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		std::cout << "copy assignation operator ClapTrap" << std::endl;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "destructor ClapTrap" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << "ClapTrap " << _name << " can't attack" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints == 0) {
		std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
		return;
	}
	unsigned int damage = amount > _hitPoints ? _hitPoints : amount;
	std::cout << "ClapTrap " << _name << " takes " << damage
		<< " points of damage!" << std::endl;
	_hitPoints -= damage;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints == 0) {
		std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " is repaired for " << amount
		<< " points!" << std::endl;
	_energyPoints -= 1;
	_hitPoints += amount;
}
