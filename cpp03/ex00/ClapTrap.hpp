#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap
{
    private:
        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int	_energyPoints;
        unsigned int    _attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
		ClapTrap(ClapTrap const& ref);
        ClapTrap& operator=(ClapTrap const& ref);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void displayStatus() const;
};

#endif