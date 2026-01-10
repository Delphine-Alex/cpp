#include "ClapTrap.hpp"

/******************************************************************************/
/*                         CONSTRUCTORS & DESTRUCTORS                         */
/******************************************************************************/

ClapTrap::ClapTrap()
    : _name("Claptrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "[ClapTrap] - Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "[ClapTrap] - String constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints,
    unsigned int energyPoints, unsigned int attackDamage)
    : _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints),
      _attackDamage(attackDamage)
{
    std::cout << "[ClapTrap] - Parametric constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& ref)
    : _name(ref._name), _hitPoints(ref._hitPoints),
      _energyPoints(ref._energyPoints), _attackDamage(ref._attackDamage)
{
    std::cout << "[ClapTrap] - Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "[ClapTrap] - destructor Claptrap called" << std::endl;
}

/******************************************************************************/
/*                                  OPERATORS                                 */
/******************************************************************************/

ClapTrap& ClapTrap::operator=(ClapTrap const& ref)
{
    std::cout << "[ClapTrap] - Copy assignment operator called" << std::endl;

    if (this != &ref)
    {
        _name = ref._name;
        _hitPoints = ref._hitPoints;
        _energyPoints = ref._energyPoints;
        _attackDamage = ref._attackDamage;
    }
    return *this;
}

/******************************************************************************/
/*							     PUBLIC FUNCTIONS							  */
/******************************************************************************/

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target;
        std::cout << ", causing " << _attackDamage << " points of damage!";
        std::cout << std::endl;

        _energyPoints -= 1;

    }
    else
    {
        std::cout << "ClapTrap " << _name << " can't attack because it has ";
        std::cout << "no hit points or energy points left!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " takes " << amount;
    std::cout << " points of damage!" << std::endl;

    _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " repairs itself, regaining ";
        std::cout << amount << " hit points!" << std::endl;

        _energyPoints -= 1;

        if (amount == 0)
            return;

        _hitPoints += amount;
        if (_hitPoints > 10)
            _hitPoints = 10;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " can't repair itself because it ";
        std::cout << "has no hit points or energy points left!" << std::endl;
    }
}

void ClapTrap::displayStatus() const
{
    std::cout << "[" << _name << "] HP: " << _hitPoints << "/10 | Energy: ";
    std::cout << _energyPoints << "/10 | Damage: " << _attackDamage;
    std::cout << std::endl;
}
