/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:19:34 by dpaiva            #+#    #+#             */
/*   Updated: 2025/10/23 17:19:38 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

#include <iostream>
#include <string>

class HumanA
{
private:
    std::string _name;
    Weapon      &weapon;

public:
	HumanA(std::string name, Weapon &weapon);
    ~HumanA() {};

    void attack() const;
};

#endif
