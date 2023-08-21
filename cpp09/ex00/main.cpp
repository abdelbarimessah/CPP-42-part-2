#include "BitcoinExchange.hpp"


int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Error: not enough number of argument !" << std::endl;
        return (1);
    }
    BitcoinExchange b("data.csv");

}