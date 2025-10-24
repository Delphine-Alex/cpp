/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:33:57 by dpaiva            #+#    #+#             */
/*   Updated: 2025/10/05 13:35:14 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

int main(void)
{
    randomChump("First");

    Zombie *zombie = NULL;
    zombie = newZombie("Second");

    delete zombie;
    zombie = NULL;

	return (0);
}
