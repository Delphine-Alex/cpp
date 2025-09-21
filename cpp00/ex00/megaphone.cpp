/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:45:03 by dpaiva            #+#    #+#             */
/*   Updated: 2025/09/21 16:08:35 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j] != '\0'; j++)
			{
				std::cout << (char)std::toupper(argv[i][j]);
			}
		}
	}
	std::cout << std::endl;

	return 0;
}
