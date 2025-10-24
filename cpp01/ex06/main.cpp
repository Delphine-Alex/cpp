
#include "Harl.hpp"

int main(int argv, char** argc)
{
    if (argv != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]";
        std::cout << std::endl;
        return (1);
    }
    
    Harl harl;

    harl.complain(argc[1]);

    return (0);
}