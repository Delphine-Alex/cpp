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

bool operator>(Fixed const& a, Fixed const& b)
{
    return a.getRawBits() > b.getRawBits();
}

bool operator<(Fixed const& a, Fixed const& b)
{
    return a.getRawBits() < b.getRawBits();
}

bool operator>=(Fixed const& a, Fixed const& b)
{
    return a.getRawBits() >= b.getRawBits();
}

bool operator<=(Fixed const& a, Fixed const& b)
{
    return a.getRawBits() <= b.getRawBits();
}

bool operator==(Fixed const& a, Fixed const& b)
{
    return a.getRawBits() == b.getRawBits();
}

bool operator!=(Fixed const& a, Fixed const& b)
{
    return a.getRawBits() != b.getRawBits();
}

Fixed operator+(Fixed const& a, Fixed const& b)
{
    Fixed result;
    result.setRawBits(a.getRawBits() + b.getRawBits());

    return result;
}

Fixed operator-(Fixed const& a, Fixed const& b)
{
    Fixed result;
    result.setRawBits(a.getRawBits() - b.getRawBits());

    return result;
}

Fixed operator*(Fixed const& a, Fixed const& b)
{
    Fixed result(a.toFloat() * b.toFloat());

    return result;
}

Fixed operator/(Fixed const& a, Fixed const& b)
{
    Fixed result(a.toFloat() / b.toFloat());

    return result;
}

Fixed& Fixed::operator++()
{
    this->_rawBits++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_rawBits++;
    return tmp;
}

Fixed& Fixed::operator--()
{
    this->_rawBits--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_rawBits--;
    return tmp;
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

float	Fixed::toFloat(void) const
{
    return (float)this->_rawBits / (1 << this->_fracBits);
}

int		Fixed::toInt(void) const
{
    return this->_rawBits >> this->_fracBits;
}

/******************************************************************************/
/*                          STATIC MEMBER FUNCTIONS                           */
/******************************************************************************/

// Note: Returns reference to the smallest of two non-const Fixed numbers
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a.getRawBits() < b.getRawBits()) ? a : b;
}

// Returns const reference to the smallest of two const Fixed numbers
const Fixed& Fixed::min(Fixed const& a, Fixed const& b)
{
    return (a.getRawBits() < b.getRawBits()) ? a : b;
}

// Returns reference to the greatest of two non-const Fixed numbers
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a.getRawBits() > b.getRawBits()) ? a : b;
}

// Returns const reference to the greatest of two const Fixed numbers
const Fixed& Fixed::max(Fixed const& a, Fixed const& b)
{
    return (a.getRawBits() > b.getRawBits()) ? a : b;
}