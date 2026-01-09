#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const& ref);
        ScavTrap& operator=(ScavTrap const& ref);
        virtual ~ScavTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void guardGate();
        void displayStatus() const;
};

#endif