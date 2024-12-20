#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

	std::cout << "\033[1;34m\n--- Creating ScavTraps ---\033[0m" << std::endl;
	ScavTrap scav1("Scavvy");
	ScavTrap scav2(scav1);
	ScavTrap scavAssigned;
	scavAssigned = scav1;

	std::cout << "\033[1;34m\n--- Actions for Scavvy ---\033[0m" << std::endl;
	scav1.attack("targetA");
	scav1.takeDamage(20);
	scav1.beRepaired(15);
	scav1.guardGate();

	std::cout << "\033[1;34m\n--- Actions for Scav Assigned (copy of Scavvy) ---\033[0m" << std::endl;
	scavAssigned.attack("targetB");
	scavAssigned.takeDamage(50);
	scavAssigned.beRepaired(30);
	scavAssigned.guardGate();

	std::cout << "\033[1;34m\n--- Creating FragTraps ---\033[0m" << std::endl;
	FragTrap frag1("Fraggy");
	FragTrap frag2(frag1);
	FragTrap fragAssigned;
	fragAssigned = frag1;

	std::cout << "\033[1;34m\n--- Actions for Fraggy ---\033[0m" << std::endl;
	frag1.attack("targetC");
	frag1.takeDamage(30);
	frag1.beRepaired(25);
	frag1.highFivesGuys();

	std::cout << "\033[1;34m\n--- Actions for Frag Assigned (copy of Fraggy) ---\033[0m" << std::endl;
	fragAssigned.attack("targetD");
	fragAssigned.takeDamage(40);
	fragAssigned.beRepaired(20);
	fragAssigned.highFivesGuys();

	std::cout << "\033[1;34m\n--- Destroying all objects ---\033[0m" << std::endl;

	return 0;
}
