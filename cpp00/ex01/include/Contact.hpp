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
		std::string informations[5];
		static std::string fild_name[5];

	public:
		Contact();
		~Contact();

		bool set_contact();
		void get_contact(int index);
};

#endif
