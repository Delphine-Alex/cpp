#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-";
    std::cout << "triple-pickle-specialketchup burger. I really do!\n";
    std::cout << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn’t put enough bacon in my burger! If you did, ";
    std::cout << "I wouldn’t be asking for more!\n";
    std::cout << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years, whereas you started working ";
    std::cout << "here just last month.\n";
    std::cout << std::endl; 
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the ";
    std::cout << "manager now.\n";
    std::cout << std::endl; 
}

void Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int levelIndex = -1;

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i]) 
        {
            levelIndex = i;
            break;
        }
    }

    switch (levelIndex)
    {
        case (0):
            std::cout << "[ DEBUG ]" << std::endl;
            this->debug();
        case (1):
            std::cout << "[ INFO ]" << std::endl;
            this->info();
        case (2):
            std::cout << "[ WARNING ]" << std::endl;
            this->warning();
        case (3):
            std::cout << "[ ERROR ]" << std::endl;
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant";
            std::cout << " problems ]" << std::endl;
    }
}
