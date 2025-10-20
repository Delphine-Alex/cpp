/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:14:28 by dpaiva            #+#    #+#             */
/*   Updated: 2025/09/21 19:33:00 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iomanip>
#include <iostream>

#include <string>

class Contact
{
private:
	static std::string	_fild_name[5];
	std::string			_informations[5];

public:
	Contact() {};
	~Contact() {};

	bool setContact();
	void getContact(int index);
};

#endif