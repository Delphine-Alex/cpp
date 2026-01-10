#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout << "\n=== FragTrap Basic operations ===" << std::endl;
    FragTrap fragtrap1("FG-001");
    fragtrap1.displayStatus();

    fragtrap1.attack("Enemy");
    fragtrap1.takeDamage(30);
    fragtrap1.displayStatus();

    fragtrap1.beRepaired(20);
    fragtrap1.displayStatus();

    fragtrap1.highFivesGuys();


    std::cout << "\n=== Comparison of all three classes ===" << std::endl;
    ClapTrap claptrap("CT-003");
    ScavTrap scavtrap("SV-003");
    FragTrap fragtrap3("FG-003");

    std::cout << "\nStatus comparison:" << std::endl;
    claptrap.displayStatus();
    scavtrap.displayStatus();
    fragtrap3.displayStatus();

    std::cout << "\nAttacks comparison:" << std::endl;
    claptrap.attack("Target");
    scavtrap.attack("Target");
    fragtrap3.attack("Target");

    std::cout << "\nSpecial abilities:" << std::endl;
    scavtrap.guardGate();
    fragtrap3.highFivesGuys();


    std::cout << "\n=== Destructors ===" << std::endl;
    return 0;
}
