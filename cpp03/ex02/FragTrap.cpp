#include "FragTrap.hpp"

/******************************************************************************/
/*                         CONSTRUCTORS & DESTRUCTORS                         */
/******************************************************************************/

FragTrap::FragTrap() : ClapTrap("FragTrap", 100, 100, 30)
{
    std::cout << "[FragTrap] - Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "[FragTrap] - Parametric constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& ref) : ClapTrap(ref)
{
    std::cout << "[FragTrap] - Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "[FragTrap] - Destructor called" << std::endl;
}

/******************************************************************************/
/*                                  OPERATORS                                 */
/******************************************************************************/

FragTrap& FragTrap::operator=(FragTrap const& ref)
{
    std::cout << "[FragTrap] - Copy assignment operator called" << std::endl;
    if (this != &ref)
    {
        ClapTrap::operator=(ref);
    }
    return *this;
}

/******************************************************************************/
/*							     PUBLIC FUNCTIONS							  */
/******************************************************************************/

void FragTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "FragTrap " << _name << " attacks " << target;
        std::cout << ", causing " << _attackDamage << " points of damage!";
        std::cout << std::endl;

        _energyPoints -= 1;
    }
    else
    {
        std::cout << "FragTrap " << _name << " can't attack because it ";
        std::cout << "has no hit points or energy points left!" << std::endl;
    }
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "[FragTrap " << _name << "]: Come on guys, give me a high ";
    std::cout << "five!"<< std::endl;
}

void FragTrap::displayStatus() const
{
    std::cout << "[" << _name << "] HP: " << _hitPoints;
    std::cout << "/100 | Energy: " << _energyPoints << "/100 | Damage: ";
    std::cout << _attackDamage << std::endl;
}