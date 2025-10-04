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
        Contact contact[8];
        int     index;
        bool    full;

    public:
        PhoneBook();
        ~PhoneBook();

    void set_informations();
    void get_informations();
};

#endif
