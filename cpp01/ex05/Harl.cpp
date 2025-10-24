/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:59:49 by dpaiva            #+#    #+#             */
/*   Updated: 2025/10/23 17:59:51 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-";
    std::cout << "triple-pickle-specialketchup burger. I really do!";
    std::cout << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn’t put enough bacon in my burger! If you did, ";
    std::cout << "I wouldn’t be asking for more!";
    std::cout << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years, whereas you started working ";
    std::cout << "here just last month.";
    std::cout << std::endl; 
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the ";
    std::cout << "manager now.";
    std::cout << std::endl; 
}

void Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functionsPTR[])(void) =
    { 
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*functionsPTR[i])();
            return;
        }
    }

    std::cout << "Unknown level: " << level << std::endl;
}
