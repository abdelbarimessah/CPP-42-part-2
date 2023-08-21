#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>
#include <algorithm>
#include <map>


class BitcoinExchange
{
    private:
        std::map<std::string, std::string> _map;
        std::string fileName;
    public:
        BitcoinExchange();
        BitcoinExchange(std::string fileName);
        BitcoinExchange(const BitcoinExchange &cp);
        BitcoinExchange & operator=(const BitcoinExchange &cp);
        ~BitcoinExchange();
        void    startExchange(std::string inputFile);

        
};



#endif