/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:11:49 by dpaiva            #+#    #+#             */
/*   Updated: 2025/10/05 18:18:19 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon() {};
	Weapon(std::string type);

	~Weapon() {};

	std::string	getType(void) const;
	void		setType(std::string weapon);
};

#endif
