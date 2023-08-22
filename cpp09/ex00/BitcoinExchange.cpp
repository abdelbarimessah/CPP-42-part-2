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
int BitcoinExchange::readData(std::string fileName)
{
    std::ifstream file(fileName.c_str());
    std::string line;

    if(!file.is_open())
    {
        std::cerr << "Error: Open the data file !" << std::endl; 
        return (1);
    }
    std::getline(file, line);
    while(std::getline(file, line))
    {
        size_t pos = line.find(",");
        if(pos == std::string::npos)
        {
            std::cerr << "Error: In a line of the data file !" << std::endl; 
            return (1);
        }
        std::string key = line.substr(0, pos);
        std::string strValue = line.substr(pos + 1);
        float value = atof(strValue.c_str());
        this->_map[key] = value;
    }
    return 0;
};


void BitcoinExchange::printResult(std::string date, float value)
{
    double result;
    std::map<std::string, float>::iterator iter = this->_map.lower_bound(date);
    --iter;
    result = iter->second * value;
    std::cout << date << " => " << value << " = " << result << std::endl;
}