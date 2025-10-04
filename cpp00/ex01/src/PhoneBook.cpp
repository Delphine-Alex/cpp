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

bool isNumber(const std::string &str);
bool handleInputError();

void printTableBorder();
void printTableHeader();

PhoneBook::PhoneBook() : index(0), full(false)
{  
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::set_informations()
{
    if (full == false)
    {
        if (contact[index].set_contact() == true)
        {
            if (index == 7)
                full = true;
            else
                index++;
        }
    }
    else
    {
        std::cout << "The softphone is full! ";
        std::cout << "The oldest contact will be replaced." << std::endl;
        std::cout << "Do you want to continue? (y/n):" << std::endl;
        
        std::string input;

        while (true)
        {
            if (std::getline(std::cin, input) == false)
	        {
                if (handleInputError() == true)
                    exit(0);
                continue;
	        }
            else if (input.empty())
			{
				std::cout << "Input cannot be empty. ";
                std::cout << "Please press 'y' or 'n'." << std::endl;
				continue;
			}
            else if (input == "y")
            {
                for (int i = 1; i < 8; i++)
                {
                    contact[i - 1] = contact[i];
                }
                contact[index].set_contact();
                break;
            }
            else if (input == "n")
            {
                std::cout << "Operation cancelled. ";
                std::cout << "No contact was replaced." << std::endl;
                break;
            }
            else
            {
                std::cout << "Invalid input. ";
                std::cout << "Please respond with 'y' or 'n'." << std::endl;
            }
        }
    }
}

void PhoneBook::get_informations()
{
    if (index == 0)
    {
        std::cout << "Your PhoneBook is empty! ";
        std::cout << "Please add one contact first." << std::endl;
    }
    else
    {
        std::cout << "Select a number between 1 and " << index << std::endl;

        std::string input;

        while (true)
        {
            if (std::getline(std::cin, input) == false)
	        {
                if (handleInputError() == true)
                    exit(0);
                continue;
	        }
            else if (input.empty())
			{
				std::cout << "Input cannot be empty." << std::endl;
                std::cout << "Select a number between 1 and ";
                std::cout << index << "." << std::endl;
				continue;
			}
            else if (isNumber(input) == false)
            {
                std::cout << "Invalid input. ";
                std::cout << "Please enter a valid number." << std::endl;
                continue;
            }

            int number = std::atoi(input.c_str());

            if (number > 0 && number <= index)
            {
                printTableBorder();
                printTableHeader();
                printTableBorder();
                this->contact[number - 1].get_contact(number);
                printTableBorder();
                break;
            }
            else
            {
                std::cout << "Invalid input. ";
                std::cout << "Please enter a valid number." << std::endl;
                continue;
            }
        }
    }
}

bool isNumber(const std::string &str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (std::isdigit(str[i]) == false)
        return (false);
    }
    return (true);
}

bool handleInputError()
{
    if (std::cin.eof())
    {
        std::cout << "End-of-file (EOF) detected (Ctrl-D).";
		std::cout << "Exiting the phonebook..." << std::endl;
        return (true);
    }
    else
    {
        std::cerr << "An input error occurred. ";
		std::cerr << "Please try again." << std::endl;
        std::cin.clear();
        return (false);
    }
}

void printTableBorder()
{
    std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void printTableHeader()
{
    std::cout << "|     Index|First Name| Last Name| Nick Name|" << std::endl;
}
