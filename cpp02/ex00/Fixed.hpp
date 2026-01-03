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

#include <iostream>

class Fixed
{
    private:
        int					_rawBits;
        static const int	_fracBits = 8;

    public:
		Fixed();
		Fixed(Fixed const& copy);

		Fixed& operator=(Fixed const& copy);

    	~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif