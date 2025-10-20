/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 14:29:11 by dpaiva            #+#    #+#             */
/*   Updated: 2025/09/28 14:29:52 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0), _full(false) {}

void PhoneBook::setInformations()
{
    if (_full == false)
    {
        if (_contact[_index].setContact() == true)
        {
            _index++;
            if (_index == 8)
            {
                _full = true;
            }
        }
    }
    else
    {
        std::cout << "The softphone is full! The oldest contact ";
        std::cout << "will be replaced." << std::endl;

        for (int i = 0; i < 7; i++)
        {
            _contact[i] = _contact[i + 1];
        }
        _contact[7].setContact();
    }
}

void PhoneBook::getInformations()
{
    if (_index == 0)
    {
        std::cout << "Your PhoneBook is empty. Please add one contact ";
        std::cout << "first." << std::endl;
    }
    else
    {
        std::cout << "Select a number between 1 and " << _index << std::endl;

        std::string input;

        while (true)
        {
            if (std::getline(std::cin, input) == false)
	        {
                if (std::cin.eof())
                {
                    std::cout << "End-of-file (EOF) detected (Ctrl-D). ";
                    std::cout << "Exiting the phonebook..." << std::endl;
                    exit(0);
                }
	        }
            else if (input.empty())
			{
				std::cout << "Input cannot be empty. Select a number between "; 
                std::cout << "1 and " << _index << "." << std::endl;
				continue;
			}
            else if (input.length() > 1 || isdigit(input[0]) == false)
            {
                std::cout << "Invalid input. Please enter a ";
                std::cout << "valid number." << std::endl;
                continue;
            }

            int number = std::atoi(input.c_str());

            if (number > 0 && number <= _index)
            {
                printTableBorder();
                printTableHeader();
                printTableBorder();
                _contact[number - 1].getContact(number);
                printTableBorder();
                break;
            }
            else
            {
                std::cout << "Invalid input. Please enter a ";
                std::cout << "valid number." << std::endl;
                continue;
            }
        }
    }
}

void PhoneBook::printTableBorder() const
{
    std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void PhoneBook::printTableHeader() const
{
    std::cout << "|     Index|First Name| Last Name| Nick Name|" << std::endl;
}