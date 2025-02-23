#include <iostream>

#include "ScavTrap.hpp"

int main() {
    ScavTrap scavTrap("ScavTrap");
    scavTrap.attack("target");
    scavTrap.guardGate();
    scavTrap.takeDamage(3);
    scavTrap.beRepaired(3);
    scavTrap.ClapTrap::attack("target");
    ScavTrap scavTrap2;
    scavTrap2 = scavTrap;
    scavTrap2.attack("target");
    scavTrap2.guardGate();
    scavTrap2.takeDamage(3);
    scavTrap2.beRepaired(3);
    scavTrap2.ClapTrap::attack("target");
    ScavTrap scavTrap3(scavTrap2);
    scavTrap3.attack("target");
    scavTrap3.guardGate();
    scavTrap3.takeDamage(3);
    scavTrap3.beRepaired(3);
    scavTrap3.ClapTrap::attack("target");
    ClapTrap* claptrap = new ScavTrap("ScavTrap");
    claptrap->attack("target");
    delete claptrap;
    return 0;
}
