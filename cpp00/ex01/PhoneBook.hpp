/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 13:45:39 by dpaiva            #+#    #+#             */
/*   Updated: 2025/09/28 15:29:34 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#include <iostream>

class PhoneBook
{
private:
    Contact	_contact[8];
    int		_index;
    bool	_full;

public:
    PhoneBook();
    ~PhoneBook() {};

    void setInformations();
    void getInformations();

	void printTableBorder() const;
	void printTableHeader() const;

};

#endif