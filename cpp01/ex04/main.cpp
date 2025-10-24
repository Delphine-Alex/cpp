/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:37:16 by dpaiva            #+#    #+#             */
/*   Updated: 2025/10/23 22:37:17 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Bad number of arguments" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return (1);
    }

    std::ifstream infile(filename.c_str());
    if (infile == false)
    {
        std::cerr << "Error: cannot open input file '";
        std::cerr << filename << "'" << std::endl;
        return (1);
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (outfile == false)
    {
        std::cerr << "Error: cannot create output file." << std::endl;
        return (1);
    }

    std::string line;
    while (std::getline(infile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }

        outfile << line;
        if (infile.eof() == false)
        {
            outfile << std::endl;
        }

        infile.close();
        outfile.close();
    }

    return (0);
}
