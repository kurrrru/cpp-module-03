#include <iostream>
#include <string>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10),
    _energyPoints(10), _attackDamage(0) {
    std::cout << "constructor ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10),
    _energyPoints(10), _attackDamage(0) {
    std::cout << "name constructor ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << "copy constructor ClapTrap" << std::endl;
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

void ClapTrap::attack(const std::string& target) {
    if (_energyPoints == 0 || _hitPoints == 0) {
        std::cout << "ClapTrap " << CL_CYAN << _name
            << CL_RESET << " can't attack" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << CL_CYAN << _name
        << CL_RESET << " attacks " << target
        << ", causing " << CL_RED << _attackDamage
        << CL_RESET << " points of damage!" << std::endl;
    _energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints == 0) {
        std::cout << "ClapTrap " << CL_CYAN << _name
            << CL_RESET << " is already dead" << std::endl;
        return;
    }
    unsigned int damage = amount > _hitPoints ? _hitPoints : amount;
    _hitPoints -= damage;
    std::cout << "ClapTrap " << CL_CYAN << _name
        << CL_RESET << " takes " << CL_RED << damage
        << CL_RESET << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints == 0) {
        std::cout << "ClapTrap " << CL_CYAN << _name
            << CL_RESET << " is already dead" << std::endl;
        return;
    }
    _energyPoints -= 1;
    _hitPoints += amount;
    std::cout << "ClapTrap " << CL_CYAN << _name
        << CL_RESET << " is repaired for " << CL_RED << amount
        << CL_RESET << " points!" << std::endl;
}
