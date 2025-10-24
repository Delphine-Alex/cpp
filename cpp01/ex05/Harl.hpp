/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:59:58 by dpaiva            #+#    #+#             */
/*   Updated: 2025/10/23 18:00:03 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

#include <string>

class Harl
{
private :
	void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public :
	Harl() {};
    ~Harl() {};

    void complain(std::string level);
};

#endif
