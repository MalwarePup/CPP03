#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap defaultClap;
	ClapTrap clappy("Clappy");
	ClapTrap copyClap(clappy);
	ClapTrap assignedClap;
	assignedClap = clappy;

	std::cout << "\033[1;34m\n--- Actions for Clappy ---\033[0m" << std::endl;
	clappy.attack("target1");
	clappy.takeDamage(4);
	clappy.beRepaired(3);
	clappy.attack("target2");
	clappy.takeDamage(12);
	clappy.beRepaired(5);

	std::cout << "\033[1;34m\n--- Actions for Default Clap ---\033[0m" << std::endl;
	defaultClap.attack("target3");
	defaultClap.takeDamage(6);
	defaultClap.beRepaired(7);
	defaultClap.attack("target4");
	defaultClap.takeDamage(15);

	std::cout << "\033[1;34m\n--- Actions for CopyClap (copy of Clappy) ---\033[0m" << std::endl;
	copyClap.attack("target5");
	copyClap.takeDamage(3);
	copyClap.beRepaired(2);

	std::cout << "\033[1;34m\n--- Actions for AssignedClap (assigned from Clappy) ---\033[0m" << std::endl;
	assignedClap.attack("target6");
	assignedClap.takeDamage(2);
	assignedClap.beRepaired(5);
	assignedClap.attack("target7");

	std::cout << "\033[1;34m\n--- Destroying all objects ---\033[0m" << std::endl;

	return 0;
}
