/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:48:43 by dpaiva            #+#    #+#             */
/*   Updated: 2025/10/23 15:48:45 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
    Zombie *horde = new Zombie[n];

    for (int i = 0; i < n; i++)
    {
        horde[i].setName(name);
        horde[i].announce();
    }

    return (horde);
}
