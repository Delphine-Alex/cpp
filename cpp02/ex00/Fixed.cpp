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

    // this->_rawBits = copy.getRawBits();
    *this = copy;
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
        this->_rawBits = copy.getRawBits();
    return *this;
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