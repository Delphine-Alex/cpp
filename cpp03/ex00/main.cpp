#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "\n=== Basic attacks and repairs ===" << std::endl;
    ClapTrap claptrap1("CT-001");
    claptrap1.displayStatus();

    claptrap1.attack("Enemy");
    claptrap1.takeDamage(3);
    claptrap1.displayStatus();

    claptrap1.beRepaired(5);
    claptrap1.displayStatus();

    claptrap1.attack("Enemy");
    claptrap1.displayStatus();


    std::cout << "\n=== Copy constructor ===" << std::endl;
    ClapTrap claptrap2(claptrap1);
    claptrap2.displayStatus();

    claptrap2.attack("Target");
    claptrap2.beRepaired(2);
    claptrap2.displayStatus();


    std::cout << "\n=== Copy assignment operator ===" << std::endl;
    ClapTrap claptrap7("CT-007");
    claptrap7.displayStatus();

    claptrap7 = claptrap1;
    claptrap7.displayStatus();

    claptrap7.attack("Robot");
    claptrap7.displayStatus();


    std::cout << "\n=== Energy depletion ===" << std::endl;
    ClapTrap claptrap3("CT-003");
    claptrap3.displayStatus();

    for (int i = 0; i < 10; i++)
        claptrap3.attack("Enemy");
    claptrap3.displayStatus();

    claptrap3.attack("Enemy");
    claptrap3.beRepaired(5);


    std::cout << "\n=== No hit points ===" << std::endl;
    ClapTrap claptrap4("CT-004");
    claptrap4.displayStatus();

    claptrap4.takeDamage(10);
    claptrap4.displayStatus();

    claptrap4.attack("Enemy");
    claptrap4.beRepaired(5);


    std::cout << "\n=== Repair with amount 0 ===" << std::endl;
    ClapTrap claptrap5("CT-005");
    claptrap5.displayStatus();

    claptrap5.beRepaired(0);
    claptrap5.displayStatus();

    claptrap5.attack("Enemy");


    std::cout << "\n=== Max hit points ===" << std::endl;
    ClapTrap claptrap6("CT-006");
    claptrap6.displayStatus();

    claptrap6.takeDamage(3);
    claptrap6.displayStatus();

    claptrap6.beRepaired(8);
    claptrap6.displayStatus();

    claptrap6.beRepaired(5);
    claptrap6.displayStatus();

    std::cout << "\n=== Destructors ===" << std::endl;

    return 0;
}