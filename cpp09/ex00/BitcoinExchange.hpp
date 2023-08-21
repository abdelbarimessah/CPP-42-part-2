#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>
#include <algorithm>
#include <fstream>
#include <map>


class BitcoinExchange
{
    private:
        std::map<std::string, float> _map;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &cp);
        BitcoinExchange & operator=(const BitcoinExchange &cp);
        ~BitcoinExchange();
        int readData(std::string fileName)
        {
            std::ifstream file(fileName.c_str());
            std::string line;

            if(!file.is_open())
            {
                std::cerr << "Error: open the data file !" << std::endl; 
                return (1);
            }
            std::getline(file, line);
            while(std::getline(file, line))
            {
            size_t pos = line.find(",");
            std::string key = line.substr(0, pos);
            std::string strValue = line.substr(pos + 1);
            float value = atof(strValue.c_str());
            this->_map[key] = value;
            }
            for(std::map<std::string, float>::iterator it = this->_map.begin(); it != this->_map.end() ; ++it)
            {
                std::cout << it->first << ": " << it->second << std::endl;
            }
            return 0;
        };
        
};



#endif