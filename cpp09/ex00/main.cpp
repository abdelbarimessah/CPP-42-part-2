#include "BitcoinExchange.hpp"


int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    if(argc != 2)
    {
        std::cout << "Error: not enough number of argument !" << std::endl;
        return (1);
    }
    else
    {
        BitcoinExchange btc;
        int i;
        i = btc.readData("data.csv");
        std::cout << i << std::endl;
        // for(std::map<std::string, float>::iterator it = btc._map.begin(); it != btc._map.end(); ++it)
        // {
        //     std::cout << it->first << "--" << it->second << std::endl;
        // }

    }

}