/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:15:52 by dpaiva            #+#    #+#             */
/*   Updated: 2026/01/02 17:15:55 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>

#include <iostream>

class Fixed
{
    private:
        int					_rawBits;
        static const int	_fracBits = 8;

    public:
		Fixed();
		Fixed(Fixed const& copy);
		Fixed(float const f);
		Fixed(int const n);

		Fixed&	operator=(Fixed const& copy);

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

    	~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed&		min(Fixed& a, Fixed& b);
		static const Fixed&	min(Fixed const& a, Fixed const& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static const Fixed&	max(Fixed const& a, Fixed const& b);
};
	
std::ostream& operator<<(std::ostream& os, Fixed const& copy);

bool operator>(Fixed const& a, Fixed const& b);
bool operator<(Fixed const& a, Fixed const& b);
bool operator>=(Fixed const& a, Fixed const& b);
bool operator<=(Fixed const& a, Fixed const& b);
bool operator==(Fixed const& a, Fixed const& b);
bool operator!=(Fixed const& a, Fixed const& b);

Fixed operator+(Fixed const& a, Fixed const& b);
Fixed operator-(Fixed const& a, Fixed const& b);
Fixed operator*(Fixed const& a, Fixed const& b);
Fixed operator/(Fixed const& a, Fixed const& b);

#endif