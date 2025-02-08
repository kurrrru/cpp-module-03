#include "ClapTrap.hpp"

int main() {
	ClapTrap clapTrap("ClapTrap");
	ClapTrap clapTrap2(clapTrap);
	ClapTrap clapTrap3 = clapTrap;

	clapTrap.attack("target");
	clapTrap.takeDamage(5);
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(5);
	clapTrap.attack("target");
	clapTrap.takeDamage(5);

	clapTrap2.attack("target");
	clapTrap2.takeDamage(5);

	return 0;
}
