/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:09:06 by dpaiva            #+#    #+#             */
/*   Updated: 2025/09/21 18:21:46 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::_fild_name[5] =
{
	"first name",
	"last name",
	"nick name",
	"phone number",
	"darkest secret"
};

bool Contact::setContact()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please enter a " << _fild_name[i] << ":" << std::endl;

		while (true)
		{
			if (std::getline(std::cin, _informations[i]) == false)
			{
				if (std::cin.eof())
				{
					std::cout << "End-of-file (EOF) detected (Ctrl-D). ";
					std::cout << "Exiting the phonebook..." << std::endl;
					exit(0);
				}
			}
			else if (_informations[i].empty())
			{
				std::cout << "This field cannot be empty.";
				std::cout << "Again, please enter a " << _fild_name[i];
				std::cout << ":" << std::endl;
				continue;
			}

			if (_fild_name[i] == "phone number")
			{
				bool isvalid = true;
				for (int j = 0; j <_informations[i].length(); j++)
				{
					if (std::isdigit(_informations[i][j]) == false)
					{
						isvalid = false;
						break;
					}
				}
				if (isvalid == false)
				{
					std::cout << "Phone number must contain only digits.";
					std::cout << "Again, please enter a " << _fild_name[i];
					std::cout << ":" << std::endl;
					continue;
				}
			}
			break;
		}
	}

	std::cout << "Contact added successfully!\n" << std::endl;

	return (true);
}

void Contact::getContact(int index)
{
	std::cout << "|" << std::setw(10) << index;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (_informations[i].length() > 10)
		{
			std::cout << _informations[i].substr(0, 9) << '.';
		}
		else
		{
			std::cout << std::setw(10) << _informations[i];
		}
	}

	std::cout << "|" << std::endl;
}