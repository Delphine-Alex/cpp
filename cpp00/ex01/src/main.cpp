/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:29:25 by dpaiva            #+#    #+#             */
/*   Updated: 2025/09/21 20:05:26 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	std::cout << "\nWelcome in my PhoneBook!\n" << std::endl;
	std::cout << "What do you wanna do? (ADD, SEARCH or EXIT)" << std::endl;

	while (true)
	{
		if (std::getline(std::cin, command) == false)
		{
			if (std::cin.eof())
			{
				std::cout << "End-of-file (EOF) detected (Ctrl-D).";
				std::cout << "Exiting the phonebook..." << std::endl;
				return (0);
			}
			else 
			{
				std::cerr << "An input error occurred. ";
				std::cerr << "Please try again." << std::endl;
				std::cin.clear();
				continue;
			}
		}
		else if (command.empty())
		{
			std::cout << "The field cannot be left empty." << std::endl;
			std::cout << "Again, please enter a command: ";
			std::cout << "(ADD, SEARCH or EXIT)" << std::endl;
			continue;
		}
		else if (command.compare("ADD") == 0)
			phonebook.set_informations();
		else if (command.compare("SEARCH") == 0)
			phonebook.get_informations();
		else if (command.compare("EXIT") == 0)
		{
			std::cout << "Thank you for using my PhoneBook." << std::endl; 
			break;
		}
		else
		{
			std::cout << "Invalid command!" << std::endl;
			std::cout << "Again, please enter a command: ";
			std::cout << "(ADD, SEARCH or EXIT)" << std::endl;
			continue;
		}

		std::cout << "What do you wanna do? (ADD, SEARCH or EXIT)" << std::endl;
	}

	return (0);
}
