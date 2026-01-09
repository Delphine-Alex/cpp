# include "ScavTrap.hpp"

/******************************************************************************/
/*                         CONSTRUCTORS & DESTRUCTORS                         */
/******************************************************************************/

ScavTrap::ScavTrap() : ClapTrap("Scavtrap", 100, 50, 20)
{
    std::cout << "[ScavTrap] - Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "[ScavTrap] - Parametric constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& ref) : ClapTrap(ref)
{
    std::cout << "[ScavTrap] - Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "[ScavTrap] - Destructor called" << std::endl;
}

/******************************************************************************/
/*                                  OPERATORS                                 */
/******************************************************************************/

ScavTrap& ScavTrap::operator=(ScavTrap const& ref)
{
    std::cout << "[ScavTrap] - Copy assignment operator called" << std::endl;
    if (this != &ref)
    {
        ClapTrap::operator=(ref);
    }
    return *this;
}

/******************************************************************************/
/*							     PUBLIC FUNCTIONS							  */
/******************************************************************************/

void ScavTrap::attack(const std::string& target)
{
    if (getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        std::cout << "ScavTrap " << getName() << " attacks " << target;
        std::cout << ", causing " << getAttackDamage() << " points of damage!";
        std::cout << std::endl;

        setEnergyPoints(getEnergyPoints() - 1);
    }
    else
    {
        std::cout << "ScavTrap " << getName() << " can't attack because it ";
        std::cout << "has no hit points or energy points left!" << std::endl;
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "ScavTrap " << getName() << " takes " << amount;
    std::cout << " points of damage!" << std::endl;

    setHitPoints(getHitPoints() - amount);
    if (getHitPoints() < 0)
        setHitPoints(0);
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        std::cout << "ScavTrap " << getName() << " repairs itself, regaining ";
        std::cout << amount << " hit points!" << std::endl;

        setEnergyPoints(getEnergyPoints() - 1);

        if (amount == 0)
            return;

        setHitPoints(getHitPoints() + amount);
        if (getHitPoints() > 100)
            setHitPoints(100);
    }
    else
    {
        std::cout << "ScavTrap " << getName() << " can't repair itself ";
        std::cout << "because it has no hit points or energy points ";
        std::cout << "left!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    if (getHitPoints() > 0)
    {
        std::cout << "ScavTrap " << getName();
        std::cout << " is now in Gate keeper mode!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << getName();
        std::cout << " can't enter Gate keeper mode (no hit points)!";
        std::cout << std::endl;
    }
}

void ScavTrap::displayStatus() const
{
    std::cout << "[" << getName() << "] HP: " << getHitPoints();
    std::cout << "/100 | Energy: " << getEnergyPoints() << "/50 | Damage: ";
    std::cout << getAttackDamage() << std::endl;
}
