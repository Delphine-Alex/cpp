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
        ClapTrap(std::string name, unsigned int hitPoints,
            unsigned int energyPoints, unsigned int attackDamage);
        
        ClapTrap(ClapTrap const& ref);
        ClapTrap& operator=(ClapTrap const& ref);

        virtual ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void displayStatus() const;

        std::string getName() const;
        unsigned int getHitPoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttackDamage() const;

        void setName(std::string name);
        void setHitPoints(unsigned int hitPoints);
        void setEnergyPoints(unsigned int energyPoints);
        void setAttackDamage(unsigned int attackDamage);
};

#endif