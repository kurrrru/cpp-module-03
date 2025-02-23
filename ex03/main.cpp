#include <iostream>
#include <iomanip>

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamondTrap("DiamondTrap");
    diamondTrap.attack("target");
    diamondTrap.takeDamage(3);
    diamondTrap.beRepaired(3);
    diamondTrap.highFivesGuys();
    diamondTrap.guardGate();
    diamondTrap.whoAmI();
    diamondTrap.ClapTrap::attack("target");
    diamondTrap.FragTrap::attack("target");
    diamondTrap.ScavTrap::attack("target");
    DiamondTrap diamondTrap2;
    diamondTrap2 = diamondTrap;
    diamondTrap2.attack("target");
    diamondTrap2.takeDamage(3);
    diamondTrap2.beRepaired(3);
    diamondTrap2.highFivesGuys();
    diamondTrap2.guardGate();
    diamondTrap2.whoAmI();
    diamondTrap2.ClapTrap::attack("target");
    diamondTrap2.FragTrap::attack("target");
    diamondTrap2.ScavTrap::attack("target");
    DiamondTrap diamondTrap3(diamondTrap2);
    diamondTrap3.attack("target");
    diamondTrap3.takeDamage(3);
    diamondTrap3.beRepaired(3);
    diamondTrap3.highFivesGuys();
    diamondTrap3.guardGate();
    diamondTrap3.whoAmI();
    diamondTrap3.ClapTrap::attack("target");
    diamondTrap3.FragTrap::attack("target");
    diamondTrap3.ScavTrap::attack("target");
    ClapTrap* claptrap = new DiamondTrap("DiamondTrap");
    claptrap->attack("target");
    delete claptrap;
    return 0;
}
