#include "FragTrap.hpp"

int main(void)
{
    std::cout << "=== TEST 1: FragTrap Construction ===\n";
    FragTrap f("FragBot");

    std::cout << "\n=== TEST 2: FragTrap Attack ===\n";
    f.attack("Enemy");
    f.attack("Enemy");

    std::cout << "\n=== TEST 3: HighFives Ability ===\n";
    f.highFivesGuys();

    std::cout << "\n=== TEST 4: Inherited takeDamage ===\n";
    f.takeDamage(30);

    std::cout << "\n=== TEST 5: Inherited beRepaired ===\n";
    f.beRepaired(20);

    std::cout << "\n=== TEST 6: Run out of energy ===\n";
    FragTrap f2("FragBot2");
    for(int i = 0; i < 100; i++)
        f2.attack("Target");
    f2.attack("Target"); // Should fail - no energy

    std::cout << "\n=== TEST 7: Destruction ===\n";
    return 0;
}