#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# include <iostream>
# include <string>

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const& ref);
        FragTrap& operator=(FragTrap const& ref);
        virtual ~FragTrap();

        void attack(const std::string& target);
        void highFivesGuys(void);
        void displayStatus() const;
};

#endif