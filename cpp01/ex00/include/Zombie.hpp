/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:36:09 by dpaiva            #+#    #+#             */
/*   Updated: 2025/10/05 13:40:41 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#include <string>

class Zombie
{
	private :
		std::string _name;

	public :
        Zombie(std::string name);
        ~Zombie();

		void announce(void);

    };

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif
