#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "\n=== ClapTrap basic attacks and repairs ===" << std::endl;
    ClapTrap claptrap1("CT-001");
    claptrap1.displayStatus();

    claptrap1.attack("Enemy");
    claptrap1.takeDamage(3);
    claptrap1.displayStatus();

    claptrap1.beRepaired(5);
    claptrap1.displayStatus();


    std::cout << "\n=== ScavTrap Basic attacks and repairs ===" << std::endl;
    ScavTrap scavtrap1("SV-001");
    scavtrap1.displayStatus();

    scavtrap1.attack("Ennemy");
    scavtrap1.takeDamage(20);
    scavtrap1.displayStatus();

    scavtrap1.beRepaired(15);
    scavtrap1.displayStatus();

    scavtrap1.guardGate();


    std::cout << "\n=== ScavTrap energy depletion ===" << std::endl;
    ScavTrap scavtrap2("SV-002");
    scavtrap2.displayStatus();

    for (int i = 0; i < 50; i++)
        scavtrap2.attack("Enemy");
    scavtrap2.displayStatus();

    scavtrap2.attack("Enemy");
    scavtrap2.beRepaired(10);
    scavtrap2.guardGate();


    std::cout << "\n=== ScavTrap no hit points ===" << std::endl;
    ScavTrap scavtrap3("SV-003");
    scavtrap3.displayStatus();

    scavtrap3.takeDamage(100);
    scavtrap3.displayStatus();

    scavtrap3.attack("Enemy");
    scavtrap3.beRepaired(50);
    scavtrap3.guardGate();


    std::cout << "\n=== ClapTrap copy constructor ===" << std::endl;
    ClapTrap claptrap2(claptrap1);
    claptrap2.displayStatus();

    claptrap2.attack("Robot");
    claptrap2.displayStatus();


    std::cout << "\n=== Comparison ClapTrap vs ScavTrap ===" << std::endl;
    ClapTrap claptrap3("CT-003");
    ScavTrap scavtrap4("SV-004");

    std::cout << "ClapTrap status:" << std::endl;
    claptrap3.displayStatus();
    std::cout << "ScavTrap status:" << std::endl;
    scavtrap4.displayStatus();

    claptrap3.attack("Target");
    scavtrap4.attack("Target");


    std::cout << "\n=== Destructors ===" << std::endl;

    
    return 0;
}