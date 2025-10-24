/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:22:25 by dpaiva            #+#    #+#             */
/*   Updated: 2025/10/23 17:22:27 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

#include <iostream>
#include <string>

class HumanB
{
private:
    std::string _name;
    Weapon*      weapon;

public:
	HumanB(std::string name);
	~HumanB() {};

    void attack() const;
    void setWeapon(Weapon &weapon);
};

#endif
