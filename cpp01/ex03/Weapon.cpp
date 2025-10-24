/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:18:33 by dpaiva            #+#    #+#             */
/*   Updated: 2025/10/05 18:20:42 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {}

std::string Weapon::getType() const
{
    return (_type);
}

void Weapon::setType(std::string weapon)
{
    this->_type = weapon;
}

