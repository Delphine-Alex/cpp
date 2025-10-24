/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:46:32 by dpaiva            #+#    #+#             */
/*   Updated: 2025/10/23 15:46:32 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

int main(void)
{
    Zombie *zombie = NULL;
    zombie = zombieHorde(42, "tsuki");

    delete[] zombie;
    zombie = NULL;

	return (0);
}
