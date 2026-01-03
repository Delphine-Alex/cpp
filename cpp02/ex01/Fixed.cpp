/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:15:40 by dpaiva            #+#    #+#             */
/*   Updated: 2026/01/02 17:15:44 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/******************************************************************************/
/*                         CONSTRUCTORS & DESTRUCTORS                         */
/******************************************************************************/

Fixed::Fixed() : _rawBits(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& copy)
{
    std::cout << "Copy constructor called" << std::endl;

    *this = copy;
}

Fixed::Fixed(float const f) : _rawBits(roundf(f *(1 << _fracBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _rawBits(n << _fracBits)
{
    std::cout << "Int constructor called" << std::endl;
}
    
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

/******************************************************************************/
/*                                  OPERATORS                                 */
/******************************************************************************/

Fixed& Fixed::operator=(Fixed const& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &copy)
        this->_rawBits = copy._rawBits;
    return *this;
}

std::ostream& operator<<(std::ostream& os, Fixed const& copy)
{
    os << copy.toFloat();
    return os;
}

/******************************************************************************/
/*                                   GETTERS                                  */
/******************************************************************************/

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;

    return this->_rawBits;
}

/******************************************************************************/
/*                                   SETTERS                                  */
/******************************************************************************/

void	Fixed::setRawBits(int const raw)
{
    this->_rawBits = raw;
}

/******************************************************************************/
/*							     PUBLIC FUNCTIONS							  */
/******************************************************************************/

// Convertir la valeur en float
float	Fixed::toFloat(void) const
{
    return (float)this->_rawBits / (1 << this->_fracBits);
}

int		Fixed::toInt(void) const
{
    return this->_rawBits >> this->_fracBits;
}
