#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cp)
{
    _map = cp._map;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &cp)
{
    if(this != &cp)
    {
        _map = cp._map;
    }
    return *this;
}

// int readData(std::string fileName)
// {
//     std::ifstream file(fileName.c_str());
//     std::string line;

//     if(!file.is_open())
//     {
//         std::cerr << "Error: open the data file !" << std::endl; 
//         return (1);
//     }
//     while(std::getline(file, line))
//     {
//        size_t pos = line.find(",");
//        std::string key = line.substr(0, pos);
//        std::string strValue = line.substr(pos + 1);
//        float value = atof(strValue.c_str());
//        this->_map[key] = value;
//     }
//     return 0;
// }