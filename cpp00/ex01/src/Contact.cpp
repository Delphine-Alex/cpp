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

Contact::Contact()
{
	for (int i = 0; i < 5; i++)
	{
		informations[i] = std::string();
	}
}

Contact::~Contact()
{
}
std::string Contact::fild_name[5] =
{
	"first name",
	"last name",
	"nick name",
	"phone number",
	"darkest secret"
};


bool Contact::set_contact()
{
	for (int i = 0; i <= 4; i++)
	{
		std::cout << "Please enter a " << fild_name[i] << ":" << std::endl;

		while (true)
		{
			if (std::getline(std::cin, informations[i]) == false)
			{
				if (std::cin.eof())
				{
					std::cout << "End-of-file (EOF) detected (Ctrl-D).";
					std::cout << "Exiting the phonebook..." << std::endl;
					exit(0);
				}
				else
				{
					std::cerr << "An input error occurred. ";
					std::cerr << "Please try again." << std::endl;
					std::cin.clear();
					continue;
				}
			}
			else if (informations[i].empty())
			{
				std::cout << "This field cannot be empty." << std::endl;
				std::cout << "Again, please enter a " << fild_name[i];
				std::cout << ":" << std::endl;
				continue;
			}
			break;
		}
	}

	std::cout << "Contact added successfully!\n" << std::endl;

	return (true);
}


void Contact::get_contact(int index)
{
	std::cout << "|" << std::setw(10) << index;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (informations[i].length() > 10)
			std::cout << informations[i].substr(0, 9) << '.';
		else
			std::cout << std::setw(10) << informations[i];
	}

	std::cout << "|" << std::endl;
}