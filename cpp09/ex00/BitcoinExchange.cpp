#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(std::string fileName): fileName(fileName)
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cp)
{
    _map = cp._map;
    fileName = cp.fileName;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &cp)
{
    if(this != &cp)
    {
        _map = cp._map;
        fileName = cp.fileName;
    }
    return *this;
}

