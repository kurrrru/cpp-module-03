#include "FragTrap.hpp"

int main() {
	FragTrap fragTrap("FragTrap");
	fragTrap.attack("target");
	fragTrap.takeDamage(3);
	fragTrap.beRepaired(3);
	fragTrap.highFivesGuys();
	fragTrap.ClapTrap::attack("target");
	FragTrap fragTrap2;
	fragTrap2 = fragTrap;
	fragTrap2.attack("target");
	fragTrap2.takeDamage(3);
	fragTrap2.beRepaired(3);
	fragTrap2.highFivesGuys();
	fragTrap2.ClapTrap::attack("target");
	FragTrap fragTrap3(fragTrap2);
	fragTrap3.attack("target");
	fragTrap3.takeDamage(3);
	fragTrap3.beRepaired(3);
	fragTrap3.highFivesGuys();
	fragTrap3.ClapTrap::attack("target");
	return 0;
}
