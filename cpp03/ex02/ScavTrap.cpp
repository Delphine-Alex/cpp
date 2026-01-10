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
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target;
        std::cout << ", causing " << _attackDamage << " points of damage!";
        std::cout << std::endl;

        _energyPoints -= 1;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " can't attack because it ";
        std::cout << "has no hit points or energy points left!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "[ScavTrap " << _name << "] is now in Gate keeper mode";
    std::cout << ": \"This gate is MINE!\"" << std::endl;
}

void ScavTrap::displayStatus() const
{
    std::cout << "[" << _name << "] HP: " << _hitPoints;
    std::cout << "/100 | Energy: " << _energyPoints << "/50 | Damage: ";
    std::cout << _attackDamage << std::endl;
}
