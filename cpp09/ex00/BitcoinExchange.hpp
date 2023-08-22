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
        int readData(std::string fileName);
        void    printResult(std::string date, float value);
};

bool check_y_m_d(std::string year, std::string month, std::string day);
bool checkDate(std::string date);
bool checkValue(std::string value);

#endif