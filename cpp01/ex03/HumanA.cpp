/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:09:51 by dpaiva            #+#    #+#             */
/*   Updated: 2025/10/23 17:09:53 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), weapon(weapon) {}

void HumanA::attack() const
{
    std::cout << this->_name << " attacks with their ";
    std::cout << this->weapon.getType() << std::endl;
}
