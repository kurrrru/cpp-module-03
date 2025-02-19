#include "FragTrap.hpp"

#include <iostream>
#include <string>

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "constructor FragTrap" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    std::cout << "name constructor FragTrap" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "copy constructor FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        std::cout << "copy assignation operator FragTrap" << std::endl;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "destructor FragTrap" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (_energyPoints == 0 || _hitPoints == 0) {
        std::cout << "FragTrap " << CL_CYAN << _name
            << CL_RESET << " can't attack" << std::endl;
        return;
    }
    std::cout << "FragTrap " << CL_CYAN << _name
        << CL_RESET << " attacks " << target
        << ", causing " << CL_RED << _attackDamage
        << CL_RESET << " points of damage!" << std::endl;
    _energyPoints -= 1;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << CL_CYAN << _name
        << CL_RESET << " requests a high five" << std::endl;
}
