#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "=== TEST 1: Basic Construction ===\n";
	ClapTrap a("Alpha");
	ClapTrap b("Bravo");

	std::cout << "\n=== TEST 2: Normal Attack ===\n";
	a.attack("Bob");
	b.takeDamage(0); // ClapTrap a's attack damage is 0

	std::cout << "\n=== TEST 3: Attack and Repair ===\n";
	a.attack("Bob");
	a.beRepaired(5);

	std::cout << "\n=== TEST 4: Run out of Energy ===\n";
	for(int i = 0; i < 10; i++)
	{
		a.attack("Bob");
	}
	a.attack("Bob"); // Should fail - no energy

	std::cout << "\n=== TEST 5: Try to repair with no energy ===\n";
	a.beRepaired(3); // Should fail - no energy

	std::cout << "\n=== TEST 6: Damage until dead ===\n";
	ClapTrap c("Charlie");
	c.takeDamage(5);
	c.takeDamage(5);
	c.takeDamage(1); // Should die
	c.takeDamage(1); // Should fail - already dead

	std::cout << "\n=== TEST 7: Try to attack/repair when dead ===\n";
	c.attack("Anyone");
	c.beRepaired(10);

	std::cout << "\n=== TEST 8: Copy Constructor ===\n";
	ClapTrap d = b;

	std::cout << "\n=== TEST 9: Assignment Operator ===\n";
	ClapTrap e("Eve");
	e = a;

	std::cout << "\n=== TEST 10: Destruction ===\n";
	return 0;
}