#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "=== TEST 1: Construction Chaining ===\n";
    ScavTrap s("ScavBot");
    // Watch the output: ClapTrap constructor, then ScavTrap constructor

    std::cout << "\n=== TEST 2: ScavTrap Attack ===\n";
    s.attack("Enemy");
    s.attack("Enemy");

    std::cout << "\n=== TEST 3: GuardGate Ability ===\n";
    s.guardGate();

    std::cout << "\n=== TEST 4: Inherited takeDamage ===\n";
    s.takeDamage(30);
    s.takeDamage(70);
    s.takeDamage(10); // Should fail - already dead

    std::cout << "\n=== TEST 5: Run out of energy ===\n";
    ScavTrap s2("ScavBot2");
    for(int i = 0; i < 50; i++)
        s2.attack("Target");
    s2.attack("Target"); // Should fail - no energy

    std::cout << "\n=== TEST 6: Inherited beRepaired ===\n";
    ScavTrap s3("ScavBot3");
    s3.takeDamage(50);
    s3.beRepaired(25);

    std::cout << "\n=== TEST 7: Destruction Chaining ===\n";
    // Program ends - watch order: ScavTrap destructor, then ClapTrap destructor
    return 0;
}